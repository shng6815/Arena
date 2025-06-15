// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/ArenaAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaAssetManager() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UArenaAssetManager();
ARENA_API UClass* Z_Construct_UClass_UArenaAssetManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UArenaAssetManager
void UArenaAssetManager::StaticRegisterNativesUArenaAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArenaAssetManager);
UClass* Z_Construct_UClass_UArenaAssetManager_NoRegister()
{
	return UArenaAssetManager::StaticClass();
}
struct Z_Construct_UClass_UArenaAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ArenaAssetManager.h" },
		{ "ModuleRelativePath", "Public/ArenaAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArenaAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArenaAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArenaAssetManager_Statics::ClassParams = {
	&UArenaAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UArenaAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArenaAssetManager()
{
	if (!Z_Registration_Info_UClass_UArenaAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArenaAssetManager.OuterSingleton, Z_Construct_UClass_UArenaAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArenaAssetManager.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UArenaAssetManager>()
{
	return UArenaAssetManager::StaticClass();
}
UArenaAssetManager::UArenaAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArenaAssetManager);
UArenaAssetManager::~UArenaAssetManager() {}
// End Class UArenaAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArenaAssetManager, UArenaAssetManager::StaticClass, TEXT("UArenaAssetManager"), &Z_Registration_Info_UClass_UArenaAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArenaAssetManager), 2470999116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAssetManager_h_3690397584(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
