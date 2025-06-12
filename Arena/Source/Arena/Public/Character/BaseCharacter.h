// BaseCharacter.h
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "BaseCharacter.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
class UBaseAttributeSet;
class UGameplayEffect;
class UGameplayAbility;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnASCRegistered, UAbilitySystemComponent*)

UCLASS(Abstract)
class ARENA_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	// AbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	UBaseAttributeSet* GetBaseAttributeSet() const;

	// Delegates
	FOnASCRegistered OnASCRegistered;

	// 새로운 스탯 시스템 기반 함수들
	UFUNCTION(BlueprintPure, Category = "Attributes")
	float GetDurability() const;

	UFUNCTION(BlueprintPure, Category = "Attributes")
	float GetMaxDurability() const;

	UFUNCTION(BlueprintPure, Category = "Attributes")
	float GetSpeed() const;

	UFUNCTION(BlueprintPure, Category = "Attributes")
	float GetShield() const;

	UFUNCTION(BlueprintPure, Category = "Attributes")
	float GetOutput() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void SetSpeed(float NewSpeed);

protected:
	virtual void BeginPlay() override;

	// Core Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UAttributeSet> AttributeSet;

	// Ability System Setup
	virtual void InitAbilityActorInfo();
	virtual void InitializeDefaultAttributes() const;
	virtual void AddCharacterAbilities();

	// Default Effects
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attributes")
	TSubclassOf<UGameplayEffect> DefaultPrimaryAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attributes")
	TSubclassOf<UGameplayEffect> DefaultSecondaryAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attributes")
	TSubclassOf<UGameplayEffect> DefaultVitalAttributes;

	// Default Abilities
	UPROPERTY(EditAnywhere, Category = "Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartupAbilities;

private:
	void ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const;
};