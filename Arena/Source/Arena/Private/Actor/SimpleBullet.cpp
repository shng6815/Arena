#include "Public/Actor/SimpleBullet.h"
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
	if (SphereMesh.Succeeded()) {
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

	UE_LOG(LogTemp, Log, TEXT("Simple Bullet spawned with speed: %f"), BulletSpeed);
}

void ASimpleBullet::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent,
                                    AActor* OtherActor,
                                    UPrimitiveComponent* OtherComp,
                                    int32 OtherBodyIndex,
                                    bool bFromSweep,
                                    const FHitResult& SweepResult)
{
	// 이미 히트했거나 발사자와 충돌하면 무시
	if (bHit || OtherActor == ShooterActor || !OtherActor) {
		return;
	}

	bHit = true;

	// 간단한 로그 출력
	UE_LOG(LogTemp, Warning, TEXT("Bullet hit: %s"), *OtherActor->GetName());

	// 화면에 메시지 표시 (디버그용)
	if (GEngine) {
		FString HitMessage = FString::Printf(TEXT("Bullet hit: %s"), *OtherActor->GetName());
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, HitMessage);
	}

	// 총알 파괴 (서버에서만)
	if (HasAuthority()) {
		Destroy();
	}
}
