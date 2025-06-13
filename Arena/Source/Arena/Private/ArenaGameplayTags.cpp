#include "ArenaGameplayTags.h"
#include "GameplayTagsManager.h"

FArenaGameplayTags FArenaGameplayTags::GameplayTags;

void FArenaGameplayTags::InitializeNativeGameplayTags()
{
	/*
	 * Input Tags
	 */
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.LMB"),
		FString("Left Mouse Button Attack")
	);

	/*
	 * Ability Tags
	 */
	GameplayTags.Abilities_Attack_Basic = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Attack.Basic"),
		FString("Basic Attack Ability")
	);

	/*
	 * Damage Tags
	 */
	GameplayTags.Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage"),
		FString("Damage")
	);

	GameplayTags.Damage_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Physical"),
		FString("Physical Damage Type")
	);

	/*
	 * Core Attribute Tags (새로 추가!)
	 */
	GameplayTags.Attributes_Core_Durability = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Core.Durability"),
		FString("내구도 - 생존력을 나타내는 핵심 스탯")
	);

	GameplayTags.Attributes_Core_MaxDurability = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Core.MaxDurability"),
		FString("최대 내구도")
	);

	GameplayTags.Attributes_Core_Speed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Core.Speed"),
		FString("속도 - 이동속도와 반응성을 결정")
	);

	GameplayTags.Attributes_Core_Shield = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Core.Shield"),
		FString("실드 - 데미지 감소와 방어력")
	);

	GameplayTags.Attributes_Core_MaxShield = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Core.MaxShield"),
		FString("최대 실드")
	);

	GameplayTags.Attributes_Core_Output = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Core.Output"),
		FString("출력 - 공격력과 기능 효율성을 결정")
	);
}
