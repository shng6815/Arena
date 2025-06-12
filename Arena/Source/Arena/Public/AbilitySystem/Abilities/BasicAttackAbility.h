// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/BaseGameplayAbility.h"
#include "BasicAttackAbility.generated.h"

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

	virtual void InputReleased(const FGameplayAbilitySpecHandle Handle, 
							  const FGameplayAbilityActorInfo* ActorInfo, 
							  const FGameplayAbilityActivationInfo ActivationInfo) override;

	// 파일 재배치 및 기본 공격 프로젝타일 추가
	// 공격 실행
	UFUNCTION()
	void FireBullet();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<ASimpleBullet> BulletClass; // 변경됨

	// 공격 설정
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	float AttackRate = 1.5f; // 초당 공격 횟수

private:
	FTimerHandle AttackTimerHandle;
	bool bIsAttacking = false;

	FVector GetMuzzleLocation(ACharacter* Character);
	FVector GetFireDirection(ACharacter* Character);
};