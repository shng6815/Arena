// ArenaAbilitySystemLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArenaAbilityTypes.h"
#include "ArenaAbilitySystemLibrary.generated.h"

class UAbilitySystemComponent;

/**
 * Arena 프로젝트의 AbilitySystem 관련 헬퍼 함수들
 * AURA의 AbilitySystemLibrary를 간소화한 버전
 */
UCLASS()
class ARENA_API UArenaAbilitySystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	/*
	 * 데미지 적용 함수 - 핵심 함수!
	 */
	UFUNCTION(BlueprintCallable, Category = "ArenaAbilitySystemLibrary|DamageEffect")
	static FGameplayEffectContextHandle ApplyDamageEffect(const FDamageEffectParams& DamageEffectParams);

	/*
	 * 데미지 파라미터 헬퍼 함수들
	 */
	UFUNCTION(BlueprintCallable, Category = "ArenaAbilitySystemLibrary|DamageEffect")
	static void SetTargetEffectParamsASC(UPARAM(ref) FDamageEffectParams& DamageEffectParams, 
										UAbilitySystemComponent* InASC);

	UFUNCTION(BlueprintCallable, Category = "ArenaAbilitySystemLibrary|DamageEffect")
	static void SetSourceEffectParamsASC(UPARAM(ref) FDamageEffectParams& DamageEffectParams, 
										UAbilitySystemComponent* InASC);

	// 적인지 아군인지 판별하는 함수
	UFUNCTION(BlueprintPure, Category = "ArenaAbilitySystemLibrary|GameplayMechanics")
	static bool IsNotFriend(AActor* FirstActor, AActor* SecondActor);
};