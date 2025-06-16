#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ArenaAbilityTypes.h"  // <- 핵심 추가!
#include "SimpleBullet.generated.h"

UCLASS()
class ARENA_API ASimpleBullet : public AActor
{
	GENERATED_BODY()

public:
	ASimpleBullet();

	// AURA 방식으로 변경! - 이미 완성된 DamageEffectParams를 받아옴
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn = true))
	FDamageEffectParams DamageEffectParams;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent,
	                     AActor* OtherActor,
	                     UPrimitiveComponent* OtherComp,
	                     int32 OtherBodyIndex,
	                     bool bFromSweep,
	                     const FHitResult& SweepResult);

	// 컴포넌트들
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USphereComponent> CollisionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> BulletMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	// 설정값들
	UPROPERTY(EditDefaultsOnly, Category = "Bullet")
	float LifeSpan = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Bullet")
	float BulletSpeed = 3000.0f;

private:
	bool bHit = false;

	void ApplyDamageToTarget(AActor* Target);
};
