// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/Input/ArenaInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaInputConfig() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UArenaInputConfig();
ARENA_API UClass* Z_Construct_UClass_UArenaInputConfig_NoRegister();
ARENA_API UScriptStruct* Z_Construct_UScriptStruct_FArenaInputAction();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin ScriptStruct FArenaInputAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArenaInputAction;
class UScriptStruct* FArenaInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArenaInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArenaInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArenaInputAction, (UObject*)Z_Construct_UPackage__Script_Arena(), TEXT("ArenaInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_ArenaInputAction.OuterSingleton;
}
template<> ARENA_API UScriptStruct* StaticStruct<FArenaInputAction>()
{
	return FArenaInputAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArenaInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/ArenaInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "ArenaInputAction" },
		{ "ModuleRelativePath", "Public/Input/ArenaInputConfig.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "ArenaInputAction" },
		{ "ModuleRelativePath", "Public/Input/ArenaInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArenaInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArenaInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArenaInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArenaInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArenaInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArenaInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaInputAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArenaInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
	nullptr,
	&NewStructOps,
	"ArenaInputAction",
	Z_Construct_UScriptStruct_FArenaInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaInputAction_Statics::PropPointers),
	sizeof(FArenaInputAction),
	alignof(FArenaInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArenaInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArenaInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_ArenaInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArenaInputAction.InnerSingleton, Z_Construct_UScriptStruct_FArenaInputAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArenaInputAction.InnerSingleton;
}
// End ScriptStruct FArenaInputAction

// Begin Class UArenaInputConfig
void UArenaInputConfig::StaticRegisterNativesUArenaInputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArenaInputConfig);
UClass* Z_Construct_UClass_UArenaInputConfig_NoRegister()
{
	return UArenaInputConfig::StaticClass();
}
struct Z_Construct_UClass_UArenaInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Input/ArenaInputConfig.h" },
		{ "ModuleRelativePath", "Public/Input/ArenaInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "ArenaInputConfig" },
		{ "ModuleRelativePath", "Public/Input/ArenaInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArenaInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArenaInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArenaInputAction, METADATA_PARAMS(0, nullptr) }; // 3980441165
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArenaInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArenaInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 3980441165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArenaInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArenaInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArenaInputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArenaInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArenaInputConfig_Statics::ClassParams = {
	&UArenaInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArenaInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArenaInputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UArenaInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArenaInputConfig()
{
	if (!Z_Registration_Info_UClass_UArenaInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArenaInputConfig.OuterSingleton, Z_Construct_UClass_UArenaInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArenaInputConfig.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UArenaInputConfig>()
{
	return UArenaInputConfig::StaticClass();
}
UArenaInputConfig::UArenaInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArenaInputConfig);
UArenaInputConfig::~UArenaInputConfig() {}
// End Class UArenaInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Input_ArenaInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArenaInputAction::StaticStruct, Z_Construct_UScriptStruct_FArenaInputAction_Statics::NewStructOps, TEXT("ArenaInputAction"), &Z_Registration_Info_UScriptStruct_ArenaInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArenaInputAction), 3980441165U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArenaInputConfig, UArenaInputConfig::StaticClass, TEXT("UArenaInputConfig"), &Z_Registration_Info_UClass_UArenaInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArenaInputConfig), 3112301975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Input_ArenaInputConfig_h_749284115(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Input_ArenaInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Input_ArenaInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Input_ArenaInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Input_ArenaInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
