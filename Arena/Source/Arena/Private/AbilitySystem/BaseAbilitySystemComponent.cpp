// BaseAbilitySystemComponent.cpp
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/BaseGameplayAbility.h"

void UBaseAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UBaseAbilitySystemComponent::ClientEffectApplied);
}

void UBaseAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartupAbilities)
{
	for (const TSubclassOf<UGameplayAbility> AbilityClass : StartupAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1);
        
		if (const UBaseGameplayAbility* BaseAbility = Cast<UBaseGameplayAbility>(AbilitySpec.Ability))
		{
			UE_LOG(LogTemp, Warning, TEXT("StartupInputTag: %s"), *BaseAbility->StartupInputTag.ToString());
            
			if (BaseAbility->StartupInputTag.IsValid())
			{
				AbilitySpec.DynamicAbilityTags.AddTag(BaseAbility->StartupInputTag);
				UE_LOG(LogTemp, Warning, TEXT("Added InputTag to DynamicAbilityTags"));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("StartupInputTag is INVALID!"));
			}
		}
        
		GiveAbility(AbilitySpec);
	}
}

void UBaseAbilitySystemComponent::AbilityInputTagPressed(const FGameplayTag& InputTag)
{
	UE_LOG(LogTemp, Warning, TEXT("BaseASC::AbilityInputTagPressed called with tag: %s"), *InputTag.ToString());
    
	if (!InputTag.IsValid()) {
		UE_LOG(LogTemp, Error, TEXT("InputTag is not valid!"));
		return;
	}
    
	FScopedAbilityListLock ActiveScopeLoc(*this);
    
	// 모든 어빌리티 목록 출력
	UE_LOG(LogTemp, Warning, TEXT("Total activatable abilities: %d"), GetActivatableAbilities().Num());
    
	int32 FoundCount = 0;
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		UE_LOG(LogTemp, Log, TEXT("Checking ability: %s"), 
			   AbilitySpec.Ability ? *AbilitySpec.Ability->GetClass()->GetName() : TEXT("NULL"));
        
		// DynamicAbilityTags 출력
		FString TagString;
		for (const FGameplayTag& Tag : AbilitySpec.DynamicAbilityTags)
		{
			TagString += Tag.ToString() + TEXT(", ");
		}
		UE_LOG(LogTemp, Log, TEXT("  DynamicAbilityTags: %s"), *TagString);
        
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			UE_LOG(LogTemp, Warning, TEXT("FOUND MATCHING ABILITY: %s"), 
				   *AbilitySpec.Ability->GetClass()->GetName());
			FoundCount++;
            
			AbilitySpecInputPressed(AbilitySpec);
			if (AbilitySpec.IsActive())
			{
				InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, 
									AbilitySpec.Handle, 
									AbilitySpec.ActivationInfo.GetActivationPredictionKey());
			}
		}
	}
    
	if (FoundCount == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("NO ABILITY FOUND for InputTag: %s"), *InputTag.ToString());
	}
}

void UBaseAbilitySystemComponent::AbilityInputTagHeld(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;

	FScopedAbilityListLock ActiveScopeLoc(*this);
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			AbilitySpecInputPressed(AbilitySpec);
			if (!AbilitySpec.IsActive())
			{
				TryActivateAbility(AbilitySpec.Handle);
			}
		}
	}
}

void UBaseAbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;

	FScopedAbilityListLock ActiveScopeLoc(*this);
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag) && AbilitySpec.IsActive())
		{
			AbilitySpecInputReleased(AbilitySpec);
			InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, 
								AbilitySpec.Handle, 
								AbilitySpec.ActivationInfo.GetActivationPredictionKey());
		}
	}
}

FGameplayTag UBaseAbilitySystemComponent::GetAbilityTagFromSpec(const FGameplayAbilitySpec& AbilitySpec)
{
	if (AbilitySpec.Ability)
	{
		for (FGameplayTag Tag : AbilitySpec.Ability.Get()->AbilityTags)
		{
			if (Tag.MatchesTag(FGameplayTag::RequestGameplayTag(FName("Abilities"))))
			{
				return Tag;
			}
		}
	}
	return FGameplayTag();
}

FGameplayTag UBaseAbilitySystemComponent::GetInputTagFromSpec(const FGameplayAbilitySpec& AbilitySpec)
{
	for (FGameplayTag Tag : AbilitySpec.DynamicAbilityTags)
	{
		if (Tag.MatchesTag(FGameplayTag::RequestGameplayTag(FName("InputTag"))))
		{
			return Tag;
		}
	}
	return FGameplayTag();
}

void UBaseAbilitySystemComponent::OnRep_ActivateAbilities()
{
	Super::OnRep_ActivateAbilities();

	if (!bStartupAbilitiesGiven)
	{
		bStartupAbilitiesGiven = true;
		AbilitiesGivenDelegate.Broadcast();
	}
}

void UBaseAbilitySystemComponent::ClientEffectApplied_Implementation(UAbilitySystemComponent* AbilitySystemComponent, 
																	const FGameplayEffectSpec& EffectSpec, 
																	FActiveGameplayEffectHandle ActiveEffectHandle)
{
	FGameplayTagContainer TagContainer;
	EffectSpec.GetAllAssetTags(TagContainer);
	EffectAssetTags.Broadcast(TagContainer);
}