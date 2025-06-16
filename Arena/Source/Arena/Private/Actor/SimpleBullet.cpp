#include "Public/Actor/SimpleBullet.h"

#include <AbilitySystemBlueprintLibrary.h>
#include <AbilitySystemComponent.h>

#include "ArenaGameplayTags.h"
#include "AbilitySystem/ArenaAbilitySystemLibrary.h"
#include "Components/StaticMeshComponent.h"

ASimpleBullet::ASimpleBullet()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetReplicateMovement(true);

	// 충돌 컴포넌트
	CollisionSphere = CreateDefaultSubobject<USphereComponent>("CollisionSphere");
	SetRootComponent(CollisionSphere);
	CollisionSphere->SetSphereRadius(2.5f);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	CollisionSphere->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);

	// 총알 모양 메시
	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>("BulletMesh");
	BulletMesh->SetupAttachment(CollisionSphere);
	BulletMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 기본 구체 메시 사용
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere"));
	if (SphereMesh.Succeeded())
	{
		BulletMesh->SetStaticMesh(SphereMesh.Object);
		BulletMesh->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.5f));
	}

	// 프로젝타일 이동
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->InitialSpeed = BulletSpeed;
	ProjectileMovement->MaxSpeed = BulletSpeed;
	ProjectileMovement->ProjectileGravityScale = 0.0f;
	ProjectileMovement->bShouldBounce = false;
}

void ASimpleBullet::BeginPlay()
{
	Super::BeginPlay();

	SetLifeSpan(LifeSpan);
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ASimpleBullet::OnSphereOverlap);
}

void ASimpleBullet::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent,
                                    AActor* OtherActor,
                                    UPrimitiveComponent* OtherComp,
                                    int32 OtherBodyIndex,
                                    bool bFromSweep,
                                    const FHitResult& SweepResult)
{
	if (bHit || !OtherActor)
	{
		return;
	}

	// 자기 자신을 쏜 주인과 충돌하지 않게
	AActor* SourceActor = DamageEffectParams.SourceAbilitySystemComponent
		                      ? DamageEffectParams.SourceAbilitySystemComponent->GetAvatarActor()
		                      : nullptr;

	if (OtherActor == SourceActor)
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
	if (!Target || !DamageEffectParams.DamageGameplayEffectClass)
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid target or damage effect class!"));
		return;
	}

	// 타겟의 ASC 찾기
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Target);

	if (!TargetASC)
	{
		UE_LOG(LogTemp, Error, TEXT("Target has no ASC: %s"), *Target->GetName());
		return;
	}

	// DamageEffectParams에 타겟 ASC 설정
	UArenaAbilitySystemLibrary::SetTargetEffectParamsASC(DamageEffectParams, TargetASC);

	UE_LOG(LogTemp, Warning, TEXT("Applying damage: %f to %s"),
	       DamageEffectParams.BaseDamage, *Target->GetName());

	// AURA 방식으로 데미지 적용!
	UArenaAbilitySystemLibrary::ApplyDamageEffect(DamageEffectParams);
}
