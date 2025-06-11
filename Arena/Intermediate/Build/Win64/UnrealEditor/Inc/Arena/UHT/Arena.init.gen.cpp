// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArena_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Arena;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Arena()
	{
		if (!Z_Registration_Info_UPackage__Script_Arena.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Arena",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD4926221,
				0x678D2C1E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Arena.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Arena.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Arena(Z_Construct_UPackage__Script_Arena, TEXT("/Script/Arena"), Z_Registration_Info_UPackage__Script_Arena, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD4926221, 0x678D2C1E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
