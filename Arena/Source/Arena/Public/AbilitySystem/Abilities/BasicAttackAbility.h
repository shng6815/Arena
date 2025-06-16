#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/BaseGameplayAbility.h"
#include "BasicAttackAbility.generated.h"

class UTargetDataUnderMouse;
class ASimpleBullet;

UCLASS()
class ARENA_API UBasicAttackAbility : public UBaseGameplayAbility
{
	GENERATED_BODY()

public:
	UBasicAttackAbility();

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	                            const FGameplayAbilityActorInfo* ActorInfo,
	                            const FGameplayAbilityActivationInfo ActivationInfo,
	                            const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle,
	                       const FGameplayAbilityActorInfo* ActorInfo,
	                       const FGameplayAbilityActivationInfo ActivationInfo,
	                       bool bReplicateEndAbility,
	                       bool bWasCancelled) override;

	// TargetData 관련 함수들
	void RequestTargetData();
	
	UFUNCTION()
	void OnTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetDataHandle);

	// 공격 시퀀스 함수들
	UFUNCTION(BlueprintImplementableEvent, Category = "Attack")
	void StartAttackSequence(const FVector& TargetLocation);

	UFUNCTION(BlueprintCallable, Category = "Attack")
	void SpawnProjectile(const FVector& TargetLocation = FVector::ZeroVector);

	UFUNCTION(BlueprintCallable, Category = "Attack")
	void FinishAttack();

private:
	// 총알 생성 관련
	void FireBulletAtTarget(const FVector& TargetLocation);
	FVector GetMuzzleLocation(ACharacter* Character);

	// 설정 변수들
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<ASimpleBullet> BulletClass;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	TSubclassOf<UGameplayEffect> DamageGameplayEffectClass;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FGameplayTag DamageType;

	// 상태 변수들
	UPROPERTY()
	TObjectPtr<UTargetDataUnderMouse> CurrentTargetDataTask;

	UPROPERTY()
	FVector CachedTargetLocation;

	UPROPERTY()
	bool bHasProcessedTargetData = false;
};