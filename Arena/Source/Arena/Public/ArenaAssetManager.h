#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "ArenaAssetManager.generated.h"

UCLASS()
class ARENA_API UArenaAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	static UArenaAssetManager& Get();

protected:
	virtual void StartInitialLoading() override;
};
