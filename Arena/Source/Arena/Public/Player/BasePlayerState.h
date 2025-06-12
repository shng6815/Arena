// BasePlayerState.h
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
class UBaseAbilitySystemComponent;

UCLASS()
class ARENA_API ABasePlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ABasePlayerState();

	// IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	UBaseAttributeSet* GetBaseAttributeSet() const;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UBaseAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UBaseAttributeSet> AttributeSet;
};