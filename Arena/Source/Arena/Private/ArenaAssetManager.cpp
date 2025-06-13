#include "ArenaAssetManager.h"
#include "ArenaGameplayTags.h"
#include "AbilitySystemGlobals.h"

UArenaAssetManager& UArenaAssetManager::Get()
{
	check(GEngine);
	UArenaAssetManager* ArenaAssetManager = Cast<UArenaAssetManager>(GEngine->AssetManager);
	return *ArenaAssetManager;
}

void UArenaAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	// 필수 초기화
	FArenaGameplayTags::InitializeNativeGameplayTags();
	UAbilitySystemGlobals::Get().InitGlobalData();
}
