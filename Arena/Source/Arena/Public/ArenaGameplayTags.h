#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct FArenaGameplayTags
{
	static const FArenaGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	// 현재 실제로 사용중인 태그들만!
	FGameplayTag InputTag_LMB; // 좌클릭 공격
	FGameplayTag Abilities_Attack_Basic; // 기본 공격 어빌리티
	FGameplayTag Damage; // 데미지 부모 태그
	FGameplayTag Damage_Physical; // 물리 데미지 타입

	// Core Attribute Tags (새로 추가!)
	FGameplayTag Attributes_Core_Durability;
	FGameplayTag Attributes_Core_MaxDurability;
	FGameplayTag Attributes_Core_Speed;
	FGameplayTag Attributes_Core_Shield;
	FGameplayTag Attributes_Core_MaxShield;
	FGameplayTag Attributes_Core_Output;

	// Meta Attribute Tags
	FGameplayTag Attributes_Meta_IncomingDamage;

	// Omega State Tags
	FGameplayTag State_Omega_Active; // 오메가 활성 상태
	FGameplayTag State_Omega_Stealable; // 스틸 가능 상태
	FGameplayTag State_Omega_Immune; // 스틸 면역 상태 (초기 10초)

	// Omega Abilities
	FGameplayTag Abilities_Omega_Transform; // 오메가 변신/스틸 어빌리티 (통합!)

	// Omega Input Tags  
	FGameplayTag InputTag_Omega_Transform; // 오메가 변신/스틸 입력 (E키 등)

	// Cooldown Tags
	FGameplayTag Cooldown_Omega_Steal; // 스틸 쿨다운

private:
	static FArenaGameplayTags GameplayTags;
};
