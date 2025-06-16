// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/AbilitySystem/Abilities/OmegaAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOmegaAbility() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
ARENA_API UClass* Z_Construct_UClass_UOmegaAbility();
ARENA_API UClass* Z_Construct_UClass_UOmegaAbility_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UOmegaAbility Function ApplySimpleVisualChanges
struct Z_Construct_UFunction_UOmegaAbility_ApplySimpleVisualChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xec\x99\xb8\xed\x98\x95 \xeb\xb3\x80\xea\xb2\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xec\x99\xb8\xed\x98\x95 \xeb\xb3\x80\xea\xb2\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_ApplySimpleVisualChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "ApplySimpleVisualChanges", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_ApplySimpleVisualChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_ApplySimpleVisualChanges_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOmegaAbility_ApplySimpleVisualChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_ApplySimpleVisualChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execApplySimpleVisualChanges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySimpleVisualChanges();
	P_NATIVE_END;
}
// End Class UOmegaAbility Function ApplySimpleVisualChanges

// Begin Class UOmegaAbility Function ApplyStatBoosts
struct Z_Construct_UFunction_UOmegaAbility_ApplyStatBoosts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x83\xaf \xea\xb0\x95\xed\x99\x94 \xec\xa0\x81\xec\x9a\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\xaf \xea\xb0\x95\xed\x99\x94 \xec\xa0\x81\xec\x9a\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_ApplyStatBoosts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "ApplyStatBoosts", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_ApplyStatBoosts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_ApplyStatBoosts_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOmegaAbility_ApplyStatBoosts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_ApplyStatBoosts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execApplyStatBoosts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyStatBoosts();
	P_NATIVE_END;
}
// End Class UOmegaAbility Function ApplyStatBoosts

// Begin Class UOmegaAbility Function CanStealFromPlayer
struct Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics
{
	struct OmegaAbility_eventCanStealFromPlayer_Parms
	{
		AActor* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8b\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8b\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmegaAbility_eventCanStealFromPlayer_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OmegaAbility_eventCanStealFromPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OmegaAbility_eventCanStealFromPlayer_Parms), &Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "CanStealFromPlayer", nullptr, nullptr, Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::OmegaAbility_eventCanStealFromPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::OmegaAbility_eventCanStealFromPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execCanStealFromPlayer)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStealFromPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// End Class UOmegaAbility Function CanStealFromPlayer

// Begin Class UOmegaAbility Function DetermineAndExecuteAction
struct Z_Construct_UFunction_UOmegaAbility_DetermineAndExecuteAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 \xec\x8b\xa4\xed\x96\x89 \xed\x83\x80\xec\x9e\x85 \xea\xb2\xb0\xec\xa0\x95 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 \xec\x8b\xa4\xed\x96\x89 \xed\x83\x80\xec\x9e\x85 \xea\xb2\xb0\xec\xa0\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_DetermineAndExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "DetermineAndExecuteAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_DetermineAndExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_DetermineAndExecuteAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOmegaAbility_DetermineAndExecuteAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_DetermineAndExecuteAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execDetermineAndExecuteAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetermineAndExecuteAction();
	P_NATIVE_END;
}
// End Class UOmegaAbility Function DetermineAndExecuteAction

// Begin Class UOmegaAbility Function ExecuteSteal
struct Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics
{
	struct OmegaAbility_eventExecuteSteal_Parms
	{
		AActor* TargetPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8b\xb8 \xec\x8b\xa4\xed\x96\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8b\xb8 \xec\x8b\xa4\xed\x96\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmegaAbility_eventExecuteSteal_Parms, TargetPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::NewProp_TargetPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "ExecuteSteal", nullptr, nullptr, Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::OmegaAbility_eventExecuteSteal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::OmegaAbility_eventExecuteSteal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaAbility_ExecuteSteal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_ExecuteSteal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execExecuteSteal)
{
	P_GET_OBJECT(AActor,Z_Param_TargetPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteSteal(Z_Param_TargetPlayer);
	P_NATIVE_END;
}
// End Class UOmegaAbility Function ExecuteSteal

// Begin Class UOmegaAbility Function ExecuteTransform
struct Z_Construct_UFunction_UOmegaAbility_ExecuteTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\xa4\xed\x96\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\xa4\xed\x96\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_ExecuteTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "ExecuteTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_ExecuteTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_ExecuteTransform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOmegaAbility_ExecuteTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_ExecuteTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execExecuteTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteTransform();
	P_NATIVE_END;
}
// End Class UOmegaAbility Function ExecuteTransform

// Begin Class UOmegaAbility Function FindStealableOmegaPlayer
struct Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics
{
	struct OmegaAbility_eventFindStealableOmegaPlayer_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb7\xbc\xec\xb2\x98 \xec\x8a\xa4\xed\x8b\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb0\xbe\xea\xb8\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb7\xbc\xec\xb2\x98 \xec\x8a\xa4\xed\x8b\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb0\xbe\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmegaAbility_eventFindStealableOmegaPlayer_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "FindStealableOmegaPlayer", nullptr, nullptr, Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::OmegaAbility_eventFindStealableOmegaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::OmegaAbility_eventFindStealableOmegaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execFindStealableOmegaPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->FindStealableOmegaPlayer();
	P_NATIVE_END;
}
// End Class UOmegaAbility Function FindStealableOmegaPlayer

// Begin Class UOmegaAbility Function IsInStealRange
struct Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics
{
	struct OmegaAbility_eventIsInStealRange_Parms
	{
		AActor* TargetPlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb1\xb0\xeb\xa6\xac \xec\xb2\xb4\xed\x81\xac */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb1\xb0\xeb\xa6\xac \xec\xb2\xb4\xed\x81\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmegaAbility_eventIsInStealRange_Parms, TargetPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OmegaAbility_eventIsInStealRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OmegaAbility_eventIsInStealRange_Parms), &Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::NewProp_TargetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "IsInStealRange", nullptr, nullptr, Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::OmegaAbility_eventIsInStealRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::OmegaAbility_eventIsInStealRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaAbility_IsInStealRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_IsInStealRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execIsInStealRange)
{
	P_GET_OBJECT(AActor,Z_Param_TargetPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInStealRange(Z_Param_TargetPlayer);
	P_NATIVE_END;
}
// End Class UOmegaAbility Function IsInStealRange

// Begin Class UOmegaAbility Function MulticastApplyVisualChanges
static const FName NAME_UOmegaAbility_MulticastApplyVisualChanges = FName(TEXT("MulticastApplyVisualChanges"));
void UOmegaAbility::MulticastApplyVisualChanges()
{
	UFunction* Func = FindFunctionChecked(NAME_UOmegaAbility_MulticastApplyVisualChanges);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UOmegaAbility_MulticastApplyVisualChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x99\xb8\xed\x98\x95 \xeb\xb3\x80\xea\xb2\xbd (Multicast) */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x99\xb8\xed\x98\x95 \xeb\xb3\x80\xea\xb2\xbd (Multicast)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_MulticastApplyVisualChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "MulticastApplyVisualChanges", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_MulticastApplyVisualChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_MulticastApplyVisualChanges_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOmegaAbility_MulticastApplyVisualChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_MulticastApplyVisualChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execMulticastApplyVisualChanges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastApplyVisualChanges_Implementation();
	P_NATIVE_END;
}
// End Class UOmegaAbility Function MulticastApplyVisualChanges

// Begin Class UOmegaAbility Function OnActionFailed
struct OmegaAbility_eventOnActionFailed_Parms
{
	FString Reason;
};
static const FName NAME_UOmegaAbility_OnActionFailed = FName(TEXT("OnActionFailed"));
void UOmegaAbility::OnActionFailed(const FString& Reason)
{
	OmegaAbility_eventOnActionFailed_Parms Parms;
	Parms.Reason=Reason;
	UFunction* Func = FindFunctionChecked(NAME_UOmegaAbility_OnActionFailed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8b\xa4\xed\x8c\xa8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\xa4\xed\x8c\xa8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmegaAbility_eventOnActionFailed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "OnActionFailed", nullptr, nullptr, Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::PropPointers), sizeof(OmegaAbility_eventOnActionFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(OmegaAbility_eventOnActionFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaAbility_OnActionFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_OnActionFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOmegaAbility Function OnActionFailed

// Begin Class UOmegaAbility Function OnStealSucceeded
struct OmegaAbility_eventOnStealSucceeded_Parms
{
	AActor* StolenFromPlayer;
	AActor* StolenToPlayer;
};
static const FName NAME_UOmegaAbility_OnStealSucceeded = FName(TEXT("OnStealSucceeded"));
void UOmegaAbility::OnStealSucceeded(AActor* StolenFromPlayer, AActor* StolenToPlayer)
{
	OmegaAbility_eventOnStealSucceeded_Parms Parms;
	Parms.StolenFromPlayer=StolenFromPlayer;
	Parms.StolenToPlayer=StolenToPlayer;
	UFunction* Func = FindFunctionChecked(NAME_UOmegaAbility_OnStealSucceeded);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8b\xb8 \xec\x84\xb1\xea\xb3\xb5 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8b\xb8 \xec\x84\xb1\xea\xb3\xb5 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StolenFromPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StolenToPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::NewProp_StolenFromPlayer = { "StolenFromPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmegaAbility_eventOnStealSucceeded_Parms, StolenFromPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::NewProp_StolenToPlayer = { "StolenToPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmegaAbility_eventOnStealSucceeded_Parms, StolenToPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::NewProp_StolenFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::NewProp_StolenToPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "OnStealSucceeded", nullptr, nullptr, Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::PropPointers), sizeof(OmegaAbility_eventOnStealSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::Function_MetaDataParams) };
static_assert(sizeof(OmegaAbility_eventOnStealSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOmegaAbility Function OnStealSucceeded

// Begin Class UOmegaAbility Function OnTransformSucceeded
static const FName NAME_UOmegaAbility_OnTransformSucceeded = FName(TEXT("OnTransformSucceeded"));
void UOmegaAbility::OnTransformSucceeded()
{
	UFunction* Func = FindFunctionChecked(NAME_UOmegaAbility_OnTransformSucceeded);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UOmegaAbility_OnTransformSucceeded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb3\x80\xec\x8b\xa0 \xec\x84\xb1\xea\xb3\xb5 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x8b\xa0 \xec\x84\xb1\xea\xb3\xb5 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_OnTransformSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "OnTransformSucceeded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_OnTransformSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_OnTransformSucceeded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOmegaAbility_OnTransformSucceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_OnTransformSucceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOmegaAbility Function OnTransformSucceeded

// Begin Class UOmegaAbility Function RestoreHealth
struct Z_Construct_UFunction_UOmegaAbility_RestoreHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaAbility_RestoreHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaAbility, nullptr, "RestoreHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaAbility_RestoreHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaAbility_RestoreHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOmegaAbility_RestoreHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaAbility_RestoreHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaAbility::execRestoreHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreHealth();
	P_NATIVE_END;
}
// End Class UOmegaAbility Function RestoreHealth

// Begin Class UOmegaAbility
void UOmegaAbility::StaticRegisterNativesUOmegaAbility()
{
	UClass* Class = UOmegaAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplySimpleVisualChanges", &UOmegaAbility::execApplySimpleVisualChanges },
		{ "ApplyStatBoosts", &UOmegaAbility::execApplyStatBoosts },
		{ "CanStealFromPlayer", &UOmegaAbility::execCanStealFromPlayer },
		{ "DetermineAndExecuteAction", &UOmegaAbility::execDetermineAndExecuteAction },
		{ "ExecuteSteal", &UOmegaAbility::execExecuteSteal },
		{ "ExecuteTransform", &UOmegaAbility::execExecuteTransform },
		{ "FindStealableOmegaPlayer", &UOmegaAbility::execFindStealableOmegaPlayer },
		{ "IsInStealRange", &UOmegaAbility::execIsInStealRange },
		{ "MulticastApplyVisualChanges", &UOmegaAbility::execMulticastApplyVisualChanges },
		{ "RestoreHealth", &UOmegaAbility::execRestoreHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOmegaAbility);
UClass* Z_Construct_UClass_UOmegaAbility_NoRegister()
{
	return UOmegaAbility::StaticClass();
}
struct Z_Construct_UClass_UOmegaAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xed\x86\xb5\xed\x95\xa9 \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 - \xec\x83\x81\xed\x99\xa9\xec\x97\x90 \xeb\x94\xb0\xeb\x9d\xbc \xeb\xb3\x80\xec\x8b\xa0 or \xec\x8a\xa4\xed\x8b\xb8\n * E\xed\x82\xa4 \xed\x95\x98\xeb\x82\x98\xeb\xa1\x9c \xeb\xaa\xa8\xeb\x93\xa0 \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xea\xb4\x80\xeb\xa0\xa8 \xec\x95\xa1\xec\x85\x98 \xec\xb2\x98\xeb\xa6\xac\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/OmegaAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x86\xb5\xed\x95\xa9 \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 - \xec\x83\x81\xed\x99\xa9\xec\x97\x90 \xeb\x94\xb0\xeb\x9d\xbc \xeb\xb3\x80\xec\x8b\xa0 or \xec\x8a\xa4\xed\x8b\xb8\nE\xed\x82\xa4 \xed\x95\x98\xeb\x82\x98\xeb\xa1\x9c \xeb\xaa\xa8\xeb\x93\xa0 \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xea\xb4\x80\xeb\xa0\xa8 \xec\x95\xa1\xec\x85\x98 \xec\xb2\x98\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealRange_MetaData[] = {
		{ "Category", "Omega Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8b\xb8 \xea\xb0\x80\xeb\x8a\xa5 \xea\xb1\xb0\xeb\xa6\xac */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8b\xb8 \xea\xb0\x80\xeb\x8a\xa5 \xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Omega Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\xb0\xec\x9c\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\xb0\xec\x9c\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Omega Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x8a\xa4\xed\x94\xbc\xeb\x93\x9c \xec\xa6\x9d\xea\xb0\x80 \xeb\xb0\xb0\xec\x9c\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x8a\xa4\xed\x94\xbc\xeb\x93\x9c \xec\xa6\x9d\xea\xb0\x80 \xeb\xb0\xb0\xec\x9c\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreHealthOnTransform_MetaData[] = {
		{ "Category", "Omega Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5 \xec\x97\xac\xeb\xb6\x80 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5 \xec\x97\xac\xeb\xb6\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRestorePercent_MetaData[] = {
		{ "Category", "Omega Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5 \xed\x8d\xbc\xec\x84\xbc\xed\x8a\xb8 */" },
#endif
		{ "EditCondition", "bRestoreHealthOnTransform" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/OmegaAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5 \xed\x8d\xbc\xec\x84\xbc\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StealRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static void NewProp_bRestoreHealthOnTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreHealthOnTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRestorePercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOmegaAbility_ApplySimpleVisualChanges, "ApplySimpleVisualChanges" }, // 1152426765
		{ &Z_Construct_UFunction_UOmegaAbility_ApplyStatBoosts, "ApplyStatBoosts" }, // 1701578576
		{ &Z_Construct_UFunction_UOmegaAbility_CanStealFromPlayer, "CanStealFromPlayer" }, // 3009953580
		{ &Z_Construct_UFunction_UOmegaAbility_DetermineAndExecuteAction, "DetermineAndExecuteAction" }, // 682946800
		{ &Z_Construct_UFunction_UOmegaAbility_ExecuteSteal, "ExecuteSteal" }, // 1305156324
		{ &Z_Construct_UFunction_UOmegaAbility_ExecuteTransform, "ExecuteTransform" }, // 3633181286
		{ &Z_Construct_UFunction_UOmegaAbility_FindStealableOmegaPlayer, "FindStealableOmegaPlayer" }, // 433151315
		{ &Z_Construct_UFunction_UOmegaAbility_IsInStealRange, "IsInStealRange" }, // 2737021842
		{ &Z_Construct_UFunction_UOmegaAbility_MulticastApplyVisualChanges, "MulticastApplyVisualChanges" }, // 1981832373
		{ &Z_Construct_UFunction_UOmegaAbility_OnActionFailed, "OnActionFailed" }, // 2604138471
		{ &Z_Construct_UFunction_UOmegaAbility_OnStealSucceeded, "OnStealSucceeded" }, // 638038087
		{ &Z_Construct_UFunction_UOmegaAbility_OnTransformSucceeded, "OnTransformSucceeded" }, // 2191945396
		{ &Z_Construct_UFunction_UOmegaAbility_RestoreHealth, "RestoreHealth" }, // 2501848061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmegaAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaAbility_Statics::NewProp_StealRange = { "StealRange", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaAbility, StealRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealRange_MetaData), NewProp_StealRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaAbility_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaAbility, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaAbility_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaAbility, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
void Z_Construct_UClass_UOmegaAbility_Statics::NewProp_bRestoreHealthOnTransform_SetBit(void* Obj)
{
	((UOmegaAbility*)Obj)->bRestoreHealthOnTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOmegaAbility_Statics::NewProp_bRestoreHealthOnTransform = { "bRestoreHealthOnTransform", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOmegaAbility), &Z_Construct_UClass_UOmegaAbility_Statics::NewProp_bRestoreHealthOnTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreHealthOnTransform_MetaData), NewProp_bRestoreHealthOnTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaAbility_Statics::NewProp_HealthRestorePercent = { "HealthRestorePercent", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaAbility, HealthRestorePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRestorePercent_MetaData), NewProp_HealthRestorePercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOmegaAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaAbility_Statics::NewProp_StealRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaAbility_Statics::NewProp_ScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaAbility_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaAbility_Statics::NewProp_bRestoreHealthOnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaAbility_Statics::NewProp_HealthRestorePercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOmegaAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmegaAbility_Statics::ClassParams = {
	&UOmegaAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOmegaAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmegaAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOmegaAbility()
{
	if (!Z_Registration_Info_UClass_UOmegaAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmegaAbility.OuterSingleton, Z_Construct_UClass_UOmegaAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmegaAbility.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UOmegaAbility>()
{
	return UOmegaAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOmegaAbility);
UOmegaAbility::~UOmegaAbility() {}
// End Class UOmegaAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmegaAbility, UOmegaAbility::StaticClass, TEXT("UOmegaAbility"), &Z_Registration_Info_UClass_UOmegaAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmegaAbility), 1281441727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_1108569580(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
