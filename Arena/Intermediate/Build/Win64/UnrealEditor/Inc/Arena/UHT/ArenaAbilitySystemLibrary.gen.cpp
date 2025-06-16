// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/AbilitySystem/ArenaAbilitySystemLibrary.h"
#include "Arena/Public/ArenaAbilityTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaAbilitySystemLibrary() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UArenaAbilitySystemLibrary();
ARENA_API UClass* Z_Construct_UClass_UArenaAbilitySystemLibrary_NoRegister();
ARENA_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UArenaAbilitySystemLibrary Function ApplyDamageEffect
struct Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics
{
	struct ArenaAbilitySystemLibrary_eventApplyDamageEffect_Parms
	{
		FDamageEffectParams DamageEffectParams;
		FGameplayEffectContextHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArenaAbilitySystemLibrary|DamageEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xec\xa0\x81\xec\x9a\xa9 \xed\x95\xa8\xec\x88\x98 - \xed\x95\xb5\xec\x8b\xac \xed\x95\xa8\xec\x88\x98!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/ArenaAbilitySystemLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xec\xa0\x81\xec\x9a\xa9 \xed\x95\xa8\xec\x88\x98 - \xed\x95\xb5\xec\x8b\xac \xed\x95\xa8\xec\x88\x98!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventApplyDamageEffect_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectParams_MetaData), NewProp_DamageEffectParams_MetaData) }; // 3512891259
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventApplyDamageEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArenaAbilitySystemLibrary, nullptr, "ApplyDamageEffect", nullptr, nullptr, Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::ArenaAbilitySystemLibrary_eventApplyDamageEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::ArenaAbilitySystemLibrary_eventApplyDamageEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArenaAbilitySystemLibrary::execApplyDamageEffect)
{
	P_GET_STRUCT_REF(FDamageEffectParams,Z_Param_Out_DamageEffectParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectContextHandle*)Z_Param__Result=UArenaAbilitySystemLibrary::ApplyDamageEffect(Z_Param_Out_DamageEffectParams);
	P_NATIVE_END;
}
// End Class UArenaAbilitySystemLibrary Function ApplyDamageEffect

// Begin Class UArenaAbilitySystemLibrary Function IsNotFriend
struct Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics
{
	struct ArenaAbilitySystemLibrary_eventIsNotFriend_Parms
	{
		AActor* FirstActor;
		AActor* SecondActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArenaAbilitySystemLibrary|GameplayMechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x81\xec\x9d\xb8\xec\xa7\x80 \xec\x95\x84\xea\xb5\xb0\xec\x9d\xb8\xec\xa7\x80 \xed\x8c\x90\xeb\xb3\x84\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/ArenaAbilitySystemLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x81\xec\x9d\xb8\xec\xa7\x80 \xec\x95\x84\xea\xb5\xb0\xec\x9d\xb8\xec\xa7\x80 \xed\x8c\x90\xeb\xb3\x84\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_FirstActor = { "FirstActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventIsNotFriend_Parms, FirstActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_SecondActor = { "SecondActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventIsNotFriend_Parms, SecondActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArenaAbilitySystemLibrary_eventIsNotFriend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArenaAbilitySystemLibrary_eventIsNotFriend_Parms), &Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_FirstActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_SecondActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArenaAbilitySystemLibrary, nullptr, "IsNotFriend", nullptr, nullptr, Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::ArenaAbilitySystemLibrary_eventIsNotFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::ArenaAbilitySystemLibrary_eventIsNotFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArenaAbilitySystemLibrary::execIsNotFriend)
{
	P_GET_OBJECT(AActor,Z_Param_FirstActor);
	P_GET_OBJECT(AActor,Z_Param_SecondActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArenaAbilitySystemLibrary::IsNotFriend(Z_Param_FirstActor,Z_Param_SecondActor);
	P_NATIVE_END;
}
// End Class UArenaAbilitySystemLibrary Function IsNotFriend

// Begin Class UArenaAbilitySystemLibrary Function SetSourceEffectParamsASC
struct Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics
{
	struct ArenaAbilitySystemLibrary_eventSetSourceEffectParamsASC_Parms
	{
		FDamageEffectParams DamageEffectParams;
		UAbilitySystemComponent* InASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArenaAbilitySystemLibrary|DamageEffect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArenaAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventSetSourceEffectParamsASC_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(0, nullptr) }; // 3512891259
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventSetSourceEffectParamsASC_Parms, InASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InASC_MetaData), NewProp_InASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::NewProp_InASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArenaAbilitySystemLibrary, nullptr, "SetSourceEffectParamsASC", nullptr, nullptr, Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::ArenaAbilitySystemLibrary_eventSetSourceEffectParamsASC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::ArenaAbilitySystemLibrary_eventSetSourceEffectParamsASC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArenaAbilitySystemLibrary::execSetSourceEffectParamsASC)
{
	P_GET_STRUCT_REF(FDamageEffectParams,Z_Param_Out_DamageEffectParams);
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_InASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArenaAbilitySystemLibrary::SetSourceEffectParamsASC(Z_Param_Out_DamageEffectParams,Z_Param_InASC);
	P_NATIVE_END;
}
// End Class UArenaAbilitySystemLibrary Function SetSourceEffectParamsASC

// Begin Class UArenaAbilitySystemLibrary Function SetTargetEffectParamsASC
struct Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics
{
	struct ArenaAbilitySystemLibrary_eventSetTargetEffectParamsASC_Parms
	{
		FDamageEffectParams DamageEffectParams;
		UAbilitySystemComponent* InASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ArenaAbilitySystemLibrary|DamageEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xed\x8c\x8c\xeb\x9d\xbc\xeb\xaf\xb8\xed\x84\xb0 \xed\x97\xac\xed\x8d\xbc \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/ArenaAbilitySystemLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xed\x8c\x8c\xeb\x9d\xbc\xeb\xaf\xb8\xed\x84\xb0 \xed\x97\xac\xed\x8d\xbc \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventSetTargetEffectParamsASC_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(0, nullptr) }; // 3512891259
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaAbilitySystemLibrary_eventSetTargetEffectParamsASC_Parms, InASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InASC_MetaData), NewProp_InASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::NewProp_InASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArenaAbilitySystemLibrary, nullptr, "SetTargetEffectParamsASC", nullptr, nullptr, Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::ArenaAbilitySystemLibrary_eventSetTargetEffectParamsASC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::ArenaAbilitySystemLibrary_eventSetTargetEffectParamsASC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArenaAbilitySystemLibrary::execSetTargetEffectParamsASC)
{
	P_GET_STRUCT_REF(FDamageEffectParams,Z_Param_Out_DamageEffectParams);
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_InASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArenaAbilitySystemLibrary::SetTargetEffectParamsASC(Z_Param_Out_DamageEffectParams,Z_Param_InASC);
	P_NATIVE_END;
}
// End Class UArenaAbilitySystemLibrary Function SetTargetEffectParamsASC

// Begin Class UArenaAbilitySystemLibrary
void UArenaAbilitySystemLibrary::StaticRegisterNativesUArenaAbilitySystemLibrary()
{
	UClass* Class = UArenaAbilitySystemLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamageEffect", &UArenaAbilitySystemLibrary::execApplyDamageEffect },
		{ "IsNotFriend", &UArenaAbilitySystemLibrary::execIsNotFriend },
		{ "SetSourceEffectParamsASC", &UArenaAbilitySystemLibrary::execSetSourceEffectParamsASC },
		{ "SetTargetEffectParamsASC", &UArenaAbilitySystemLibrary::execSetTargetEffectParamsASC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArenaAbilitySystemLibrary);
UClass* Z_Construct_UClass_UArenaAbilitySystemLibrary_NoRegister()
{
	return UArenaAbilitySystemLibrary::StaticClass();
}
struct Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Arena \xed\x94\x84\xeb\xa1\x9c\xec\xa0\x9d\xed\x8a\xb8\xec\x9d\x98 AbilitySystem \xea\xb4\x80\xeb\xa0\xa8 \xed\x97\xac\xed\x8d\xbc \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4\n * AURA\xec\x9d\x98 AbilitySystemLibrary\xeb\xa5\xbc \xea\xb0\x84\xec\x86\x8c\xed\x99\x94\xed\x95\x9c \xeb\xb2\x84\xec\xa0\x84\n */" },
#endif
		{ "IncludePath", "AbilitySystem/ArenaAbilitySystemLibrary.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArenaAbilitySystemLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arena \xed\x94\x84\xeb\xa1\x9c\xec\xa0\x9d\xed\x8a\xb8\xec\x9d\x98 AbilitySystem \xea\xb4\x80\xeb\xa0\xa8 \xed\x97\xac\xed\x8d\xbc \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4\nAURA\xec\x9d\x98 AbilitySystemLibrary\xeb\xa5\xbc \xea\xb0\x84\xec\x86\x8c\xed\x99\x94\xed\x95\x9c \xeb\xb2\x84\xec\xa0\x84" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArenaAbilitySystemLibrary_ApplyDamageEffect, "ApplyDamageEffect" }, // 4124382330
		{ &Z_Construct_UFunction_UArenaAbilitySystemLibrary_IsNotFriend, "IsNotFriend" }, // 2317089831
		{ &Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetSourceEffectParamsASC, "SetSourceEffectParamsASC" }, // 3662781411
		{ &Z_Construct_UFunction_UArenaAbilitySystemLibrary_SetTargetEffectParamsASC, "SetTargetEffectParamsASC" }, // 303126350
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArenaAbilitySystemLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics::ClassParams = {
	&UArenaAbilitySystemLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArenaAbilitySystemLibrary()
{
	if (!Z_Registration_Info_UClass_UArenaAbilitySystemLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArenaAbilitySystemLibrary.OuterSingleton, Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArenaAbilitySystemLibrary.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UArenaAbilitySystemLibrary>()
{
	return UArenaAbilitySystemLibrary::StaticClass();
}
UArenaAbilitySystemLibrary::UArenaAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArenaAbilitySystemLibrary);
UArenaAbilitySystemLibrary::~UArenaAbilitySystemLibrary() {}
// End Class UArenaAbilitySystemLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArenaAbilitySystemLibrary, UArenaAbilitySystemLibrary::StaticClass, TEXT("UArenaAbilitySystemLibrary"), &Z_Registration_Info_UClass_UArenaAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArenaAbilitySystemLibrary), 1318798004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_904529686(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
