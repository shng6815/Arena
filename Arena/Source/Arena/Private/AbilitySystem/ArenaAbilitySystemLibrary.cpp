// ArenaAbilitySystemLibrary.cpp
#include "AbilitySystem/ArenaAbilitySystemLibrary.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "ArenaGameplayTags.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Interaction/CombatInterface.h"

FGameplayEffectContextHandle UArenaAbilitySystemLibrary::ApplyDamageEffect(
	const FDamageEffectParams& DamageEffectParams)
{
	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	const AActor* SourceAvatarActor = DamageEffectParams.SourceAbilitySystemComponent->GetAvatarActor();

	// 검증 로그 추가
	UE_LOG(LogTemp, Warning, TEXT("ApplyDamageEffect - BaseDamage: %f, DamageType: %s"),
	       DamageEffectParams.BaseDamage,
	       *DamageEffectParams.DamageType.ToString());

	if (!DamageEffectParams.DamageGameplayEffectClass)
	{
		UE_LOG(LogTemp, Error, TEXT("DamageGameplayEffectClass is NULL!"));
		return FGameplayEffectContextHandle();
	}

	if (!DamageEffectParams.TargetAbilitySystemComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("TargetAbilitySystemComponent is NULL!"));
		return FGameplayEffectContextHandle();
	}

	// GameplayEffectContext 생성
	FGameplayEffectContextHandle EffectContextHandle = DamageEffectParams.SourceAbilitySystemComponent->
	                                                                      MakeEffectContext();
	EffectContextHandle.AddSourceObject(SourceAvatarActor);

	// GameplayEffectSpec 생성
	const FGameplayEffectSpecHandle SpecHandle = DamageEffectParams.SourceAbilitySystemComponent->MakeOutgoingSpec(
		DamageEffectParams.DamageGameplayEffectClass,
		DamageEffectParams.AbilityLevel,
		EffectContextHandle);

	if (!SpecHandle.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create GameplayEffectSpec!"));
		return EffectContextHandle;
	}

	// SetByCaller로 데미지 값 설정 - 이 부분이 핵심!
	UE_LOG(LogTemp, Warning, TEXT("Setting SetByCaller - Tag: %s, Magnitude: %f"),
	       *DamageEffectParams.DamageType.ToString(),
	       DamageEffectParams.BaseDamage);

	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, DamageEffectParams.DamageType,
	                                                              DamageEffectParams.BaseDamage);

	// 검증: 설정된 값 확인
	if (SpecHandle.Data.IsValid())
	{
		float SetValue = SpecHandle.Data->GetSetByCallerMagnitude(DamageEffectParams.DamageType);
		UE_LOG(LogTemp, Warning, TEXT("Verified SetByCaller value: %f"), SetValue);
	}

	// 타겟에게 이펙트 적용
	DamageEffectParams.TargetAbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data);

	UE_LOG(LogTemp, Warning, TEXT("Damage effect applied successfully!"));

	return EffectContextHandle;
}

void UArenaAbilitySystemLibrary::SetTargetEffectParamsASC(FDamageEffectParams& DamageEffectParams,
                                                          UAbilitySystemComponent* InASC)
{
	DamageEffectParams.TargetAbilitySystemComponent = InASC;
}

void UArenaAbilitySystemLibrary::SetSourceEffectParamsASC(FDamageEffectParams& DamageEffectParams,
                                                          UAbilitySystemComponent* InASC)
{
	DamageEffectParams.SourceAbilitySystemComponent = InASC;
}

bool UArenaAbilitySystemLibrary::IsNotFriend(AActor* FirstActor, AActor* SecondActor)
{
	// 간단한 팀 구분 로직 (Tag 기반)
	const bool bBothArePlayers = FirstActor->ActorHasTag(FName("Player")) && SecondActor->ActorHasTag(FName("Player"));
	const bool bBothAreEnemies = FirstActor->ActorHasTag(FName("Enemy")) && SecondActor->ActorHasTag(FName("Enemy"));
	const bool bFriends = bBothArePlayers || bBothAreEnemies;

	return !bFriends;
}
