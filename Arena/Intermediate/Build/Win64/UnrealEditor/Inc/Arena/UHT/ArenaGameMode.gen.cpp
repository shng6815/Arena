// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/ArenaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaGameMode() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_AArenaGameMode();
ARENA_API UClass* Z_Construct_UClass_AArenaGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class AArenaGameMode
void AArenaGameMode::StaticRegisterNativesAArenaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaGameMode);
UClass* Z_Construct_UClass_AArenaGameMode_NoRegister()
{
	return AArenaGameMode::StaticClass();
}
struct Z_Construct_UClass_AArenaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArenaGameMode.h" },
		{ "ModuleRelativePath", "ArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArenaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaGameMode_Statics::ClassParams = {
	&AArenaGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AArenaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArenaGameMode()
{
	if (!Z_Registration_Info_UClass_AArenaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaGameMode.OuterSingleton, Z_Construct_UClass_AArenaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArenaGameMode.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<AArenaGameMode>()
{
	return AArenaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaGameMode);
AArenaGameMode::~AArenaGameMode() {}
// End Class AArenaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_ArenaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArenaGameMode, AArenaGameMode::StaticClass, TEXT("AArenaGameMode"), &Z_Registration_Info_UClass_AArenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaGameMode), 1078406613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_ArenaGameMode_h_1206601673(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_ArenaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_ArenaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
