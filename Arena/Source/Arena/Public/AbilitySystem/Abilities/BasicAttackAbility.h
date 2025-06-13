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

	// Target Data 콜백 - 매번 새로운 위치로 발사!
	UFUNCTION()
	void OnTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetDataHandle);

	// 총알 발사
	void FireBulletAtTarget(const FVector& TargetLocation);

	// 연속 공격용 - 새로운 TargetData 요청
	void RequestNextAttack();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<ASimpleBullet> BulletClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	float AttackRate = 1.5f;

private:
	FTimerHandle AttackTimerHandle;
	bool bIsAttacking = false;
	
	// 현재 활성화된 TargetDataTask (정리용)
	UPROPERTY()
	TObjectPtr<UTargetDataUnderMouse> CurrentTargetDataTask;

	FVector GetMuzzleLocation(ACharacter* Character);
};