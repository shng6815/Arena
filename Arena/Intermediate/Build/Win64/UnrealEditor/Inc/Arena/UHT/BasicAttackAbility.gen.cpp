// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/AbilitySystem/Abilities/BasicAttackAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicAttackAbility() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_ASimpleBullet_NoRegister();
ARENA_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
ARENA_API UClass* Z_Construct_UClass_UBasicAttackAbility();
ARENA_API UClass* Z_Construct_UClass_UBasicAttackAbility_NoRegister();
ARENA_API UClass* Z_Construct_UClass_UTargetDataUnderMouse_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UBasicAttackAbility Function OnTargetDataReady
struct Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady_Statics
{
	struct BasicAttackAbility_eventOnTargetDataReady_Parms
	{
		FGameplayAbilityTargetDataHandle TargetDataHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target Data \xec\xbd\x9c\xeb\xb0\xb1 - \xeb\xa7\xa4\xeb\xb2\x88 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xec\x9c\x84\xec\xb9\x98\xeb\xa1\x9c \xeb\xb0\x9c\xec\x82\xac!\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target Data \xec\xbd\x9c\xeb\xb0\xb1 - \xeb\xa7\xa4\xeb\xb2\x88 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xec\x9c\x84\xec\xb9\x98\xeb\xa1\x9c \xeb\xb0\x9c\xec\x82\xac!" },
#endif
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

// Begin Class UBasicAttackAbility
void UBasicAttackAbility::StaticRegisterNativesUBasicAttackAbility()
{
	UClass* Class = UBasicAttackAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetDataReady", &UBasicAttackAbility::execOnTargetDataReady },
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
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRate_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetDataTask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xed\x99\x9c\xec\x84\xb1\xed\x99\x94\xeb\x90\x9c TargetDataTask (\xec\xa0\x95\xeb\xa6\xac\xec\x9a\xa9)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xed\x99\x9c\xec\x84\xb1\xed\x99\x94\xeb\x90\x9c TargetDataTask (\xec\xa0\x95\xeb\xa6\xac\xec\x9a\xa9)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetDataTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicAttackAbility_OnTargetDataReady, "OnTargetDataReady" }, // 2823275774
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicAttackAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASimpleBullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletClass_MetaData), NewProp_BulletClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRate = { "AttackRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, AttackRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRate_MetaData), NewProp_AttackRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_CurrentTargetDataTask = { "CurrentTargetDataTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, CurrentTargetDataTask), Z_Construct_UClass_UTargetDataUnderMouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetDataTask_MetaData), NewProp_CurrentTargetDataTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicAttackAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_CurrentTargetDataTask,
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
		{ Z_Construct_UClass_UBasicAttackAbility, UBasicAttackAbility::StaticClass, TEXT("UBasicAttackAbility"), &Z_Registration_Info_UClass_UBasicAttackAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicAttackAbility), 1508838423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_BasicAttackAbility_h_1142765805(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_BasicAttackAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_BasicAttackAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
