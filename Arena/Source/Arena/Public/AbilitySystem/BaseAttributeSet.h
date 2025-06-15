// BaseAttributeSet.h
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

USTRUCT()
struct FEffectProperties
{
	GENERATED_BODY()

	FEffectProperties(){}

	FGameplayEffectContextHandle EffectContextHandle;

	UPROPERTY()
	UAbilitySystemComponent* SourceASC = nullptr;

	UPROPERTY()
	AActor* SourceAvatarActor = nullptr;

	UPROPERTY()
	AController* SourceController = nullptr;

	UPROPERTY()
	ACharacter* SourceCharacter = nullptr;

	UPROPERTY()
	UAbilitySystemComponent* TargetASC = nullptr;

	UPROPERTY()
	AActor* TargetAvatarActor = nullptr;

	UPROPERTY()
	AController* TargetController = nullptr;

	UPROPERTY()
	ACharacter* TargetCharacter = nullptr;
};

// AURA처럼 함수 포인터 타입 정의
template<class T>
using TStaticFuncPtr = typename TBaseStaticDelegateInstance<T, FDefaultDelegateUserPolicy>::FFuncPtr;

UCLASS()
class ARENA_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UBaseAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	// AURA처럼 태그와 어트리뷰트 매핑! (새로 추가)
	TMap<FGameplayTag, TStaticFuncPtr<FGameplayAttribute()>> TagsToAttributes;

	/*
	 * 게임 핵심 스탯 4개
	 */
	
	// 내구도 (체력)
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Durability, Category = "Core Attributes")
	FGameplayAttributeData Durability;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Durability);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxDurability, Category = "Core Attributes")
	FGameplayAttributeData MaxDurability;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxDurability);

	// 속도
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Speed, Category = "Core Attributes")
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Speed);

	// 실드 (방어력)
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Shield, Category = "Core Attributes")
	FGameplayAttributeData Shield;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Shield);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxShield, Category = "Core Attributes")
	FGameplayAttributeData MaxShield;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxShield);

	// 출력 (공격력)
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Output, Category = "Core Attributes")
	FGameplayAttributeData Output;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Output);

	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData IncomingDamage;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, IncomingDamage);


	// RepNotify functions
	UFUNCTION()
	void OnRep_Durability(const FGameplayAttributeData& OldDurability) const;

	UFUNCTION()
	void OnRep_MaxDurability(const FGameplayAttributeData& OldMaxDurability) const;

	UFUNCTION()
	void OnRep_Speed(const FGameplayAttributeData& OldSpeed) const;

	UFUNCTION()
	void OnRep_Shield(const FGameplayAttributeData& OldShield) const;

	UFUNCTION()
	void OnRep_MaxShield(const FGameplayAttributeData& OldMaxShield) const;

	UFUNCTION()
	void OnRep_Output(const FGameplayAttributeData& OldOutput) const;

private:
	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const;
};