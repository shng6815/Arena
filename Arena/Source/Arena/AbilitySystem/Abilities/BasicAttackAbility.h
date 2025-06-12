// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Arena/AbilitySystem/Abilities/BaseGameplayAbility.h"
#include "BasicAttackAbility.generated.h"

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

	// 공격 실행
	UFUNCTION()
	void PerformAttack();

	// 공격 설정
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	float AttackRate = 1.5f; // 초당 공격 횟수

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack") 
	float AttackRange = 200.0f; // 공격 사거리

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	float AttackRadius = 80.0f; // 공격 반지름

private:
	FTimerHandle AttackTimerHandle;
	bool bIsAttacking = false;

	FVector GetAttackDirection(ACharacter* Character);
};