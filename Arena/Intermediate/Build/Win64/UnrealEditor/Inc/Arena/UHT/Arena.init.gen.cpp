// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArena_init() {}
	ARENA_API UFunction* Z_Construct_UDelegateFunction_Arena_MouseTargetDataSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Arena;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Arena()
	{
		if (!Z_Registration_Info_UPackage__Script_Arena.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Arena_MouseTargetDataSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Arena",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9D97BF89,
				0x215C013B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Arena.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Arena.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Arena(Z_Construct_UPackage__Script_Arena, TEXT("/Script/Arena"), Z_Registration_Info_UPackage__Script_Arena, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9D97BF89, 0x215C013B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
