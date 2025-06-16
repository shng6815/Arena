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

	GameplayTags.Attributes_Meta_IncomingDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.IncomingDamage"),
		FString("메타 속성 - 들어오는 데미지에 대한 메타 정보")
	);

	/*
	 * Omega System Tags
	 */
	// Omega State Tags
	GameplayTags.State_Omega_Active = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("State.Omega.Active"),
		FString("오메가 활성 상태 - 변신하여 강화된 상태")
	);

	GameplayTags.State_Omega_Stealable = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("State.Omega.Stealable"),
		FString("오메가 스틸 가능 상태 - 다른 플레이어가 뺏을 수 있음")
	);

	GameplayTags.State_Omega_Immune = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("State.Omega.Immune"),
		FString("오메가 스틸 면역 상태 - 변신 직후 일정 시간 뺏기지 않음")
	);

	// Omega Abilities
	GameplayTags.Abilities_Omega_Transform = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Omega.Transform"),
		FString("오메가 변신/스틸 어빌리티 - 변신하거나 다른 플레이어에게서 뺏기")
	);

	// Omega Input Tags
	GameplayTags.InputTag_Omega_Transform = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Omega.Transform"),
		FString("오메가 변신/스틸 입력 태그 - E키 등으로 변신하거나 스틸")
	);

	// Cooldown Tags
	GameplayTags.Cooldown_Omega_Steal = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Cooldown.Omega.Steal"),
		FString("오메가 스틸 쿨다운 - 스틸 시전 후 재사용 대기시간")
	);
}
