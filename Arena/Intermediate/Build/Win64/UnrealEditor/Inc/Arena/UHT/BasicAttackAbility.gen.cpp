// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/AbilitySystem/Abilities/BasicAttackAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicAttackAbility() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_ASimpleBullet_NoRegister();
ARENA_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
ARENA_API UClass* Z_Construct_UClass_UBasicAttackAbility();
ARENA_API UClass* Z_Construct_UClass_UBasicAttackAbility_NoRegister();
ARENA_API UClass* Z_Construct_UClass_UTargetDataUnderMouse_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UBasicAttackAbility Function FinishAttack
struct Z_Construct_UFunction_UBasicAttackAbility_FinishAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttackAbility_FinishAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicAttackAbility, nullptr, "FinishAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_FinishAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttackAbility_FinishAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBasicAttackAbility_FinishAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttackAbility_FinishAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttackAbility::execFinishAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishAttack();
	P_NATIVE_END;
}
// End Class UBasicAttackAbility Function FinishAttack

// Begin Class UBasicAttackAbility Function OnTargetDataReady
struct Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics
{
	struct BasicAttackAbility_eventOnTargetDataReady_Parms
	{
		FGameplayAbilityTargetDataHandle TargetDataHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDataHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::NewProp_TargetDataHandle = { "TargetDataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttackAbility_eventOnTargetDataReady_Parms, TargetDataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDataHandle_MetaData), NewProp_TargetDataHandle_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::NewProp_TargetDataHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicAttackAbility, nullptr, "OnTargetDataReady", nullptr, nullptr, Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::BasicAttackAbility_eventOnTargetDataReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::BasicAttackAbility_eventOnTargetDataReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttackAbility::execOnTargetDataReady)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetDataHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDataReady(Z_Param_Out_TargetDataHandle);
	P_NATIVE_END;
}
// End Class UBasicAttackAbility Function OnTargetDataReady

// Begin Class UBasicAttackAbility Function SpawnProjectile
struct Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics
{
	struct BasicAttackAbility_eventSpawnProjectile_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "CPP_Default_TargetLocation", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttackAbility_eventSpawnProjectile_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicAttackAbility, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::BasicAttackAbility_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::BasicAttackAbility_eventSpawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttackAbility::execSpawnProjectile)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile(Z_Param_Out_TargetLocation);
	P_NATIVE_END;
}
// End Class UBasicAttackAbility Function SpawnProjectile

// Begin Class UBasicAttackAbility Function StartAttackSequence
struct BasicAttackAbility_eventStartAttackSequence_Parms
{
	FVector TargetLocation;
};
static const FName NAME_UBasicAttackAbility_StartAttackSequence = FName(TEXT("StartAttackSequence"));
void UBasicAttackAbility::StartAttackSequence(FVector const& TargetLocation)
{
	BasicAttackAbility_eventStartAttackSequence_Parms Parms;
	Parms.TargetLocation=TargetLocation;
	UFunction* Func = FindFunctionChecked(NAME_UBasicAttackAbility_StartAttackSequence);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9 \xec\x8b\x9c\xed\x80\x80\xec\x8a\xa4 \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9 \xec\x8b\x9c\xed\x80\x80\xec\x8a\xa4 \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttackAbility_eventStartAttackSequence_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicAttackAbility, nullptr, "StartAttackSequence", nullptr, nullptr, Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::PropPointers), sizeof(BasicAttackAbility_eventStartAttackSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(BasicAttackAbility_eventStartAttackSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBasicAttackAbility Function StartAttackSequence

// Begin Class UBasicAttackAbility
void UBasicAttackAbility::StaticRegisterNativesUBasicAttackAbility()
{
	UClass* Class = UBasicAttackAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishAttack", &UBasicAttackAbility::execFinishAttack },
		{ "OnTargetDataReady", &UBasicAttackAbility::execOnTargetDataReady },
		{ "SpawnProjectile", &UBasicAttackAbility::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicAttackAbility);
UClass* Z_Construct_UClass_UBasicAttackAbility_NoRegister()
{
	return UBasicAttackAbility::StaticClass();
}
struct Z_Construct_UClass_UBasicAttackAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/BasicAttackAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa4\xec\xa0\x95 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa4\xec\xa0\x95 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetDataTask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x81\xed\x83\x9c \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x81\xed\x83\x9c \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasProcessedTargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetDataTask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTargetLocation;
	static void NewProp_bHasProcessedTargetData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasProcessedTargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicAttackAbility_FinishAttack, "FinishAttack" }, // 641486676
		{ &Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady, "OnTargetDataReady" }, // 3057191598
		{ &Z_Construct_UFunction_UBasicAttackAbility_SpawnProjectile, "SpawnProjectile" }, // 4092614192
		{ &Z_Construct_UFunction_UBasicAttackAbility_StartAttackSequence, "StartAttackSequence" }, // 2939608072
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicAttackAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASimpleBullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletClass_MetaData), NewProp_BulletClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, DamageGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGameplayEffectClass_MetaData), NewProp_DamageGameplayEffectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_CurrentTargetDataTask = { "CurrentTargetDataTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, CurrentTargetDataTask), Z_Construct_UClass_UTargetDataUnderMouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetDataTask_MetaData), NewProp_CurrentTargetDataTask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_CachedTargetLocation = { "CachedTargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, CachedTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTargetLocation_MetaData), NewProp_CachedTargetLocation_MetaData) };
void Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_bHasProcessedTargetData_SetBit(void* Obj)
{
	((UBasicAttackAbility*)Obj)->bHasProcessedTargetData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_bHasProcessedTargetData = { "bHasProcessedTargetData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBasicAttackAbility), &Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_bHasProcessedTargetData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasProcessedTargetData_MetaData), NewProp_bHasProcessedTargetData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicAttackAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_DamageGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_CurrentTargetDataTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_CachedTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_bHasProcessedTargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttackAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBasicAttackAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttackAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicAttackAbility_Statics::ClassParams = {
	&UBasicAttackAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasicAttackAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttackAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttackAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicAttackAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasicAttackAbility()
{
	if (!Z_Registration_Info_UClass_UBasicAttackAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicAttackAbility.OuterSingleton, Z_Construct_UClass_UBasicAttackAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasicAttackAbility.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UBasicAttackAbility>()
{
	return UBasicAttackAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicAttackAbility);
UBasicAttackAbility::~UBasicAttackAbility() {}
// End Class UBasicAttackAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_BasicAttackAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasicAttackAbility, UBasicAttackAbility::StaticClass, TEXT("UBasicAttackAbility"), &Z_Registration_Info_UClass_UBasicAttackAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicAttackAbility), 175624031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_BasicAttackAbility_h_890825144(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_BasicAttackAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_BasicAttackAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
