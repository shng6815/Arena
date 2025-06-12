// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/AbilitySystem/BaseAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttributeSet() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UBaseAttributeSet();
ARENA_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
ARENA_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin ScriptStruct FEffectProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_Arena(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton;
}
template<> ARENA_API UScriptStruct* StaticStruct<FEffectProperties>()
{
	return FEffectProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffectProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAvatarActor_MetaData), NewProp_SourceAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceController_MetaData), NewProp_SourceController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCharacter_MetaData), NewProp_SourceCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetASC_MetaData), NewProp_TargetASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAvatarActor_MetaData), NewProp_TargetAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetController_MetaData), NewProp_TargetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
	nullptr,
	&NewStructOps,
	"EffectProperties",
	Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
	sizeof(FEffectProperties),
	alignof(FEffectProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton;
}
// End ScriptStruct FEffectProperties

// Begin Class UBaseAttributeSet Function OnRep_Durability
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics
{
	struct BaseAttributeSet_eventOnRep_Durability_Parms
	{
		FGameplayAttributeData OldDurability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RepNotify functions\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RepNotify functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDurability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::NewProp_OldDurability = { "OldDurability", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Durability_Parms, OldDurability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDurability_MetaData), NewProp_OldDurability_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::NewProp_OldDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Durability", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::BaseAttributeSet_eventOnRep_Durability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::BaseAttributeSet_eventOnRep_Durability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Durability)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDurability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Durability(Z_Param_Out_OldDurability);
	P_NATIVE_END;
}
// End Class UBaseAttributeSet Function OnRep_Durability

// Begin Class UBaseAttributeSet Function OnRep_MaxDurability
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxDurability_Parms
	{
		FGameplayAttributeData OldMaxDurability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxDurability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::NewProp_OldMaxDurability = { "OldMaxDurability", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxDurability_Parms, OldMaxDurability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxDurability_MetaData), NewProp_OldMaxDurability_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::NewProp_OldMaxDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxDurability", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::BaseAttributeSet_eventOnRep_MaxDurability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::BaseAttributeSet_eventOnRep_MaxDurability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxDurability)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxDurability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxDurability(Z_Param_Out_OldMaxDurability);
	P_NATIVE_END;
}
// End Class UBaseAttributeSet Function OnRep_MaxDurability

// Begin Class UBaseAttributeSet Function OnRep_MaxShield
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxShield_Parms
	{
		FGameplayAttributeData OldMaxShield;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxShield_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::NewProp_OldMaxShield = { "OldMaxShield", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxShield_Parms, OldMaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxShield_MetaData), NewProp_OldMaxShield_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::NewProp_OldMaxShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxShield", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::BaseAttributeSet_eventOnRep_MaxShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::BaseAttributeSet_eventOnRep_MaxShield_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxShield)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxShield);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxShield(Z_Param_Out_OldMaxShield);
	P_NATIVE_END;
}
// End Class UBaseAttributeSet Function OnRep_MaxShield

// Begin Class UBaseAttributeSet Function OnRep_Output
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics
{
	struct BaseAttributeSet_eventOnRep_Output_Parms
	{
		FGameplayAttributeData OldOutput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldOutput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::NewProp_OldOutput = { "OldOutput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Output_Parms, OldOutput), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldOutput_MetaData), NewProp_OldOutput_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::NewProp_OldOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Output", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::BaseAttributeSet_eventOnRep_Output_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::BaseAttributeSet_eventOnRep_Output_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Output)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldOutput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Output(Z_Param_Out_OldOutput);
	P_NATIVE_END;
}
// End Class UBaseAttributeSet Function OnRep_Output

// Begin Class UBaseAttributeSet Function OnRep_Shield
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics
{
	struct BaseAttributeSet_eventOnRep_Shield_Parms
	{
		FGameplayAttributeData OldShield;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldShield_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::NewProp_OldShield = { "OldShield", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Shield_Parms, OldShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldShield_MetaData), NewProp_OldShield_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::NewProp_OldShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Shield", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::BaseAttributeSet_eventOnRep_Shield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::BaseAttributeSet_eventOnRep_Shield_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Shield)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldShield);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Shield(Z_Param_Out_OldShield);
	P_NATIVE_END;
}
// End Class UBaseAttributeSet Function OnRep_Shield

// Begin Class UBaseAttributeSet Function OnRep_Speed
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics
{
	struct BaseAttributeSet_eventOnRep_Speed_Parms
	{
		FGameplayAttributeData OldSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed = { "OldSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Speed_Parms, OldSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpeed_MetaData), NewProp_OldSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Speed", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::BaseAttributeSet_eventOnRep_Speed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::BaseAttributeSet_eventOnRep_Speed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Speed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Speed(Z_Param_Out_OldSpeed);
	P_NATIVE_END;
}
// End Class UBaseAttributeSet Function OnRep_Speed

// Begin Class UBaseAttributeSet
void UBaseAttributeSet::StaticRegisterNativesUBaseAttributeSet()
{
	UClass* Class = UBaseAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Durability", &UBaseAttributeSet::execOnRep_Durability },
		{ "OnRep_MaxDurability", &UBaseAttributeSet::execOnRep_MaxDurability },
		{ "OnRep_MaxShield", &UBaseAttributeSet::execOnRep_MaxShield },
		{ "OnRep_Output", &UBaseAttributeSet::execOnRep_Output },
		{ "OnRep_Shield", &UBaseAttributeSet::execOnRep_Shield },
		{ "OnRep_Speed", &UBaseAttributeSet::execOnRep_Speed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAttributeSet);
UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister()
{
	return UBaseAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UBaseAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/BaseAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[] = {
		{ "Category", "Core Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xea\xb2\x8c\xec\x9e\x84 \xed\x95\xb5\xec\x8b\xac \xec\x8a\xa4\xed\x83\xaf 4\xea\xb0\x9c\n\x09 */// \xeb\x82\xb4\xea\xb5\xac\xeb\x8f\x84 (\xec\xb2\xb4\xeb\xa0\xa5)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xea\xb2\x8c\xec\x9e\x84 \xed\x95\xb5\xec\x8b\xac \xec\x8a\xa4\xed\x83\xaf 4\xea\xb0\x9c\n// \xeb\x82\xb4\xea\xb5\xac\xeb\x8f\x84 (\xec\xb2\xb4\xeb\xa0\xa5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurability_MetaData[] = {
		{ "Category", "Core Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Core Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[] = {
		{ "Category", "Core Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\xa4\xeb\x93\x9c (\xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\xa4\xeb\x93\x9c (\xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[] = {
		{ "Category", "Core Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "Category", "Core Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb6\x9c\xeb\xa0\xa5 (\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\x9c\xeb\xa0\xa5 (\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxDurability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxShield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Durability, "OnRep_Durability" }, // 3268023788
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxDurability, "OnRep_MaxDurability" }, // 4045893744
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxShield, "OnRep_MaxShield" }, // 2480623965
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Output, "OnRep_Output" }, // 1740550504
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Shield, "OnRep_Shield" }, // 3795907086
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Speed, "OnRep_Speed" }, // 3810375833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Durability = { "Durability", "OnRep_Durability", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Durability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Durability_MetaData), NewProp_Durability_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxDurability = { "MaxDurability", "OnRep_MaxDurability", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxDurability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDurability_MetaData), NewProp_MaxDurability_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Speed = { "Speed", "OnRep_Speed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Shield = { "Shield", "OnRep_Shield", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Shield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shield_MetaData), NewProp_Shield_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxShield = { "MaxShield", "OnRep_MaxShield", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShield_MetaData), NewProp_MaxShield_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Output = { "Output", "OnRep_Output", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Output), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Durability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxDurability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Shield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams = {
	&UBaseAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAttributeSet()
{
	if (!Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UBaseAttributeSet>()
{
	return UBaseAttributeSet::StaticClass();
}
void UBaseAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Durability(TEXT("Durability"));
	static const FName Name_MaxDurability(TEXT("MaxDurability"));
	static const FName Name_Speed(TEXT("Speed"));
	static const FName Name_Shield(TEXT("Shield"));
	static const FName Name_MaxShield(TEXT("MaxShield"));
	static const FName Name_Output(TEXT("Output"));
	const bool bIsValid = true
		&& Name_Durability == ClassReps[(int32)ENetFields_Private::Durability].Property->GetFName()
		&& Name_MaxDurability == ClassReps[(int32)ENetFields_Private::MaxDurability].Property->GetFName()
		&& Name_Speed == ClassReps[(int32)ENetFields_Private::Speed].Property->GetFName()
		&& Name_Shield == ClassReps[(int32)ENetFields_Private::Shield].Property->GetFName()
		&& Name_MaxShield == ClassReps[(int32)ENetFields_Private::MaxShield].Property->GetFName()
		&& Name_Output == ClassReps[(int32)ENetFields_Private::Output].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttributeSet);
UBaseAttributeSet::~UBaseAttributeSet() {}
// End Class UBaseAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_BaseAttributeSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"), &Z_Registration_Info_UScriptStruct_EffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 657981824U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeSet, UBaseAttributeSet::StaticClass, TEXT("UBaseAttributeSet"), &Z_Registration_Info_UClass_UBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeSet), 133692836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_BaseAttributeSet_h_2019365062(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_BaseAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_BaseAttributeSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_BaseAttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_BaseAttributeSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
