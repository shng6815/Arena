// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/ArenaAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaAbilityTypes() {}

// Begin Cross Module References
ARENA_API UScriptStruct* Z_Construct_UScriptStruct_FArenaGameplayEffectContext();
ARENA_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin ScriptStruct FDamageEffectParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageEffectParams;
class UScriptStruct* FDamageEffectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageEffectParams, (UObject*)Z_Construct_UPackage__Script_Arena(), TEXT("DamageEffectParams"));
	}
	return Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton;
}
template<> ARENA_API UScriptStruct* StaticStruct<FDamageEffectParams>()
{
	return FDamageEffectParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageEffectParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAbilitySystemComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageEffectParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGameplayEffectClass_MetaData), NewProp_DamageGameplayEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent = { "SourceAbilitySystemComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, SourceAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAbilitySystemComponent_MetaData), NewProp_SourceAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent = { "TargetAbilitySystemComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, TargetAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAbilitySystemComponent_MetaData), NewProp_TargetAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
	nullptr,
	&NewStructOps,
	"DamageEffectParams",
	Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers),
	sizeof(FDamageEffectParams),
	alignof(FDamageEffectParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton;
}
// End ScriptStruct FDamageEffectParams

// Begin ScriptStruct FArenaGameplayEffectContext
static_assert(std::is_polymorphic<FArenaGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FArenaGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext;
class UScriptStruct* FArenaGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArenaGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_Arena(), TEXT("ArenaGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext.OuterSingleton;
}
template<> ARENA_API UScriptStruct* StaticStruct<FArenaGameplayEffectContext>()
{
	return FArenaGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArenaGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArenaAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArenaGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArenaGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"ArenaGameplayEffectContext",
	nullptr,
	0,
	sizeof(FArenaGameplayEffectContext),
	alignof(FArenaGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArenaGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArenaGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FArenaGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FArenaGameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAbilityTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageEffectParams::StaticStruct, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewStructOps, TEXT("DamageEffectParams"), &Z_Registration_Info_UScriptStruct_DamageEffectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageEffectParams), 3512891259U) },
		{ FArenaGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FArenaGameplayEffectContext_Statics::NewStructOps, TEXT("ArenaGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_ArenaGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArenaGameplayEffectContext), 3984432602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAbilityTypes_h_1181302451(TEXT("/Script/Arena"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_ArenaAbilityTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
