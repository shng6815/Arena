﻿#pragma once

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

private:
	static FArenaGameplayTags GameplayTags;
};
