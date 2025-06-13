#include "ArenaGameplayTags.h"
#include "GameplayTagsManager.h"

FArenaGameplayTags FArenaGameplayTags::GameplayTags;

void FArenaGameplayTags::InitializeNativeGameplayTags()
{
	// 좌클릭 공격 태그
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.LMB"),
		FString("Left Mouse Button Attack")
	);

	// 기본 공격 어빌리티 태그
	GameplayTags.Abilities_Attack_Basic = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Attack.Basic"),
		FString("Basic Attack Ability")
	);

	// 데미지 태그 (AURA 방식 - 부모-자식 구조)
	GameplayTags.Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage"),
		FString("Damage")
	);

	GameplayTags.Damage_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Physical"),
		FString("Physical Damage Type")
	);
}
