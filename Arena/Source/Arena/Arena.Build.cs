// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Arena : ModuleRules
{
	public Arena(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput", 
			"GameplayAbilities",
			"GameplayTags", 
			"GameplayTasks", 
			"NavigationSystem", 
			"Niagara",
			"AIModule",
			"UMG",
			"Json",
			"JsonUtilities",
		});
		
		PublicIncludePaths.AddRange(new string[]{"Arena"});
	}
}
