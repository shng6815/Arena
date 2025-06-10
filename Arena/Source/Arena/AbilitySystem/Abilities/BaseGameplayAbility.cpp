// BaseGameplayAbility.cpp
#include "BaseGameplayAbility.h"
#include "Arena/AbilitySystem/BaseAttributeSet.h"

UBaseGameplayAbility::UBaseGameplayAbility()
{
	// Default values
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

FString UBaseGameplayAbility::GetDescription(int32 Level)
{
	return FString::Printf(TEXT("<Default>%s, </><Level>%d</>"), 
		L"Default Ability Name - This is a placeholder description for the ability.", Level);
}

FString UBaseGameplayAbility::GetNextLevelDescription(int32 Level)
{
	return FString::Printf(TEXT("<Default>Next Level: </><Level>%d</> \n<Default>Improved effects at higher level. </>"), Level);
}

FString UBaseGameplayAbility::GetLockedDescription(int32 Level)
{
	return FString::Printf(TEXT("<Default>Ability Locked Until Level: %d</>"), Level);
}

float UBaseGameplayAbility::GetResourceCost(float InLevel) const
{
	float ResourceCost = 0.f;
	if (const UGameplayEffect* CostEffect = GetCostGameplayEffect())
	{
		for (FGameplayModifierInfo Mod : CostEffect->Modifiers)
		{
			// 향후 확장: Durability를 비용으로 사용하거나, 새로운 자원 시스템 추가 가능
			// 지금은 비용 시스템이 없으므로 0 반환
			if (Mod.Attribute == UBaseAttributeSet::GetDurabilityAttribute())
			{
				Mod.ModifierMagnitude.GetStaticMagnitudeIfPossible(InLevel, ResourceCost);
				break;
			}
		}
	}
	return ResourceCost;
}

float UBaseGameplayAbility::GetCooldown(float InLevel) const
{
	float Cooldown = 0.f;
	if (const UGameplayEffect* CooldownEffect = GetCooldownGameplayEffect())
	{
		CooldownEffect->DurationMagnitude.GetStaticMagnitudeIfPossible(InLevel, Cooldown);
	}
	return Cooldown;
}