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
    
	UE_LOG(LogTemp, Warning, TEXT("ArenaAssetManager::StartInitialLoading() - Initializing GameplayTags..."));
    
	// GameplayTags 초기화 - 이 부분이 핵심!
	FArenaGameplayTags::InitializeNativeGameplayTags();
    
	UE_LOG(LogTemp, Warning, TEXT("ArenaAssetManager::StartInitialLoading() complete"));
	UAbilitySystemGlobals::Get().InitGlobalData();
}
