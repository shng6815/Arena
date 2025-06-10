// BasePlayerState.cpp
#include "BasePlayerState.h"
#include "Arena/AbilitySystem/BaseAbilitySystemComponent.h"
#include "Arena/AbilitySystem/BaseAttributeSet.h"

ABasePlayerState::ABasePlayerState()
{
	// Create the ability system component and attribute set
	AbilitySystemComponent = CreateDefaultSubobject<UBaseAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UBaseAttributeSet>(TEXT("AttributeSet"));
	
	// High network update frequency for responsive gameplay
	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* ABasePlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UBaseAttributeSet* ABasePlayerState::GetBaseAttributeSet() const
{
	return AttributeSet;
}