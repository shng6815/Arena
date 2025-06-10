// BasePlayerState.cpp
#include "BasePlayerState.h"
#include "Arena/AbilitySystem/BaseAbilitySystemComponent.h"
#include "Arena/AbilitySystem/BaseAttributeSet.h"
#include "Net/UnrealNetwork.h"

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

void ABasePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ABasePlayerState, Level);
	DOREPLIFETIME(ABasePlayerState, XP);
}

UAbilitySystemComponent* ABasePlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UBaseAttributeSet* ABasePlayerState::GetBaseAttributeSet() const
{
	return AttributeSet;
}

void ABasePlayerState::AddToXP(int32 InXP)
{
	XP += InXP;
	// Future: Add level up logic here
}

void ABasePlayerState::AddToLevel(int32 InLevel)
{
	Level += InLevel;
}

void ABasePlayerState::SetXP(int32 InXP)
{
	XP = InXP;
}

void ABasePlayerState::SetLevel(int32 InLevel)
{
	Level = InLevel;
}

void ABasePlayerState::OnRep_Level(int32 OldLevel)
{
	// Future: Broadcast level change events
}

void ABasePlayerState::OnRep_XP(int32 OldXP)
{
	// Future: Broadcast XP change events
}