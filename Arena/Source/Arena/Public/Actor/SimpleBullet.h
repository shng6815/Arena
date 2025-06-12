﻿#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SimpleBullet.generated.h"

UCLASS()
class ARENA_API ASimpleBullet : public AActor
{
	GENERATED_BODY()

public:
	ASimpleBullet();

protected:
	virtual void BeginPlay() override;

	// 간단한 히트 처리 (로그만)
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
	AActor* ShooterActor = nullptr;
};