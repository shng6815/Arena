// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/AbilitySystem/Abilities/BasicAttackAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicAttackAbility() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
ARENA_API UClass* Z_Construct_UClass_UBasicAttackAbility();
ARENA_API UClass* Z_Construct_UClass_UBasicAttackAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UBasicAttackAbility Function PerformAttack
struct Z_Construct_UFunction_UBasicAttackAbility_PerformAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9 \xec\x8b\xa4\xed\x96\x89\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9 \xec\x8b\xa4\xed\x96\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttackAbility_PerformAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicAttackAbility, nullptr, "PerformAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttackAbility_PerformAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttackAbility_PerformAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBasicAttackAbility_PerformAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttackAbility_PerformAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttackAbility::execPerformAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformAttack();
	P_NATIVE_END;
}
// End Class UBasicAttackAbility Function PerformAttack

// Begin Class UBasicAttackAbility
void UBasicAttackAbility::StaticRegisterNativesUBasicAttackAbility()
{
	UClass* Class = UBasicAttackAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PerformAttack", &UBasicAttackAbility::execPerformAttack },
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
		{ "ModuleRelativePath", "AbilitySystem/Abilities/BasicAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRate_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9 \xec\x84\xa4\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9 \xec\x84\xa4\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb4\x88\xeb\x8b\xb9 \xea\xb3\xb5\xea\xb2\xa9 \xed\x9a\x9f\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x88\xeb\x8b\xb9 \xea\xb3\xb5\xea\xb2\xa9 \xed\x9a\x9f\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9 \xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/BasicAttackAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9 \xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicAttackAbility_PerformAttack, "PerformAttack" }, // 4281158055
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicAttackAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRate = { "AttackRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, AttackRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRate_MetaData), NewProp_AttackRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttackAbility, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicAttackAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttackAbility_Statics::NewProp_AttackRadius,
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
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasicAttackAbility, UBasicAttackAbility::StaticClass, TEXT("UBasicAttackAbility"), &Z_Registration_Info_UClass_UBasicAttackAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicAttackAbility), 1949202048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_3512910529(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
