#include "Public/Actor/SimpleBullet.h"

#include <AbilitySystemBlueprintLibrary.h>
#include <AbilitySystemComponent.h>
#include <AbilitySystemInterface.h>
#include <GameFramework/PlayerState.h>

#include "ArenaAbilityTypes.h"
#include "ArenaGameplayTags.h"
#include "AbilitySystem/ArenaAbilitySystemLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

ASimpleBullet::ASimpleBullet()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true; // 멀티플레이어용
	SetReplicateMovement(true);

	// 충돌 컴포넌트
	CollisionSphere = CreateDefaultSubobject<USphereComponent>("CollisionSphere");
	SetRootComponent(CollisionSphere);
	CollisionSphere->SetSphereRadius(2.5f); // 작은 총알
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	CollisionSphere->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);

	// 총알 모양 메시 (기본 구체)
	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>("BulletMesh");
	BulletMesh->SetupAttachment(CollisionSphere);
	BulletMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 기본 구체 메시 사용 (나중에 총알 메시로 교체)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere"));
	if (SphereMesh.Succeeded())
	{
		BulletMesh->SetStaticMesh(SphereMesh.Object);
		BulletMesh->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.5f)); // 총알 모양으로
	}

	// 프로젝타일 이동
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->InitialSpeed = BulletSpeed;
	ProjectileMovement->MaxSpeed = BulletSpeed;
	ProjectileMovement->ProjectileGravityScale = 0.0f; // SF 총알은 중력 무시
	ProjectileMovement->bShouldBounce = false;
}

void ASimpleBullet::BeginPlay()
{
	Super::BeginPlay();

	// 일정 시간 후 자동 소멸
	SetLifeSpan(LifeSpan);

	// 충돌 이벤트 바인딩
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ASimpleBullet::OnSphereOverlap);

	// 발사자 저장 (충돌 방지용)
	ShooterActor = GetOwner();
}

void ASimpleBullet::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent,
                                    AActor* OtherActor,
                                    UPrimitiveComponent* OtherComp,
                                    int32 OtherBodyIndex,
                                    bool bFromSweep,
                                    const FHitResult& SweepResult)
{
	if (bHit || OtherActor == ShooterActor || !OtherActor)
	{
		return;
	}

	bHit = true;

	// 데미지 적용 (서버에서만)
	if (HasAuthority())
	{
		ApplyDamageToTarget(OtherActor);
		Destroy();
	}
}

void ASimpleBullet::ApplyDamageToTarget(AActor* Target)
{
	if (!DamageGameplayEffectClass || !Target)
	{
		return;
	}

	// ASC 찾기 - AURA 방식으로 개선!
	UAbilitySystemComponent* TargetASC = GetASCFromActor(Target);
	UAbilitySystemComponent* SourceASC = GetASCFromActor(ShooterActor);

	UE_LOG(LogTemp, Warning, TEXT("Target: %s, TargetASC: %s"),
	       *Target->GetName(),
	       TargetASC ? TEXT("Found") : TEXT("NULL"));

	UE_LOG(LogTemp, Warning, TEXT("Shooter: %s, SourceASC: %s"),
	       ShooterActor ? *ShooterActor->GetName() : TEXT("NULL"),
	       SourceASC ? TEXT("Found") : TEXT("NULL"));

	if (!TargetASC || !SourceASC)
	{
		UE_LOG(LogTemp, Error, TEXT("ASC not found! Target ASC: %s, Source ASC: %s"),
		       TargetASC ? TEXT("OK") : TEXT("MISSING"),
		       SourceASC ? TEXT("OK") : TEXT("MISSING"));
		return;
	}

	// AURA 방식으로 데미지 파라미터 설정
	FDamageEffectParams DamageParams;
	DamageParams.WorldContextObject = this;
	DamageParams.DamageGameplayEffectClass = DamageGameplayEffectClass;
	DamageParams.SourceAbilitySystemComponent = SourceASC;
	DamageParams.TargetAbilitySystemComponent = TargetASC;
	DamageParams.BaseDamage = BaseDamage;
	DamageParams.AbilityLevel = 1.0f;
	DamageParams.DamageType = FArenaGameplayTags::Get().Damage_Physical;

	UE_LOG(LogTemp, Warning, TEXT("Applying damage: %s to %s with base damage: %f"),
	       *ShooterActor->GetName(), *Target->GetName(), BaseDamage);

	// 데미지 적용!
	UArenaAbilitySystemLibrary::ApplyDamageEffect(DamageParams);
}

UAbilitySystemComponent* ASimpleBullet::GetASCFromActor(AActor* Actor)
{
	if (!Actor)
	{
		return nullptr;
	}

	// 방법 1: IAbilitySystemInterface 체크 (가장 안전!)
	if (IAbilitySystemInterface* ASI = Cast<IAbilitySystemInterface>(Actor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Found ASC via IAbilitySystemInterface: %s"), *Actor->GetName());
		return ASI->GetAbilitySystemComponent();
	}

	// 방법 2: PlayerState에서 찾기 (PlayerCharacter용)
	if (APawn* Pawn = Cast<APawn>(Actor))
	{
		if (APlayerState* PS = Pawn->GetPlayerState())
		{
			if (IAbilitySystemInterface* PSInterface = Cast<IAbilitySystemInterface>(PS))
			{
				UE_LOG(LogTemp, Warning, TEXT("Found ASC via PlayerState: %s"), *PS->GetName());
				return PSInterface->GetAbilitySystemComponent();
			}
		}
	}

	// 방법 3: 직접 컴포넌트 찾기 (마지막 수단)
	UE_LOG(LogTemp, Warning, TEXT("Finding ASC directly from Actor: %s"), *Actor->GetName());
	return Actor->FindComponentByClass<UAbilitySystemComponent>();
}
