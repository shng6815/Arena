#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/BaseGameplayAbility.h"
#include "BasicAttackAbility.generated.h"

class ASimpleBullet;
class UTargetDataUnderMouse;

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

	virtual void InputReleased(const FGameplayAbilitySpecHandle Handle, 
							  const FGameplayAbilityActorInfo* ActorInfo, 
							  const FGameplayAbilityActivationInfo ActivationInfo) override;

	// Target Data 콜백
	UFUNCTION()
	void OnTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetDataHandle);

	// 총알 발사
	void FireBulletAtTarget(const FVector& TargetLocation);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<ASimpleBullet> BulletClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	float AttackRate = 1.5f;

private:
	FTimerHandle AttackTimerHandle;
	bool bIsAttacking = false;
	FVector CachedTargetLocation; // 연속 공격용 타겟 위치 캐싱

	FVector GetMuzzleLocation(ACharacter* Character);
};