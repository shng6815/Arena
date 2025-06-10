// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Player/BasePlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerState() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_ABasePlayerState();
ARENA_API UClass* Z_Construct_UClass_ABasePlayerState_NoRegister();
ARENA_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
ARENA_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class ABasePlayerState Function OnRep_Level
struct Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics
{
	struct BasePlayerState_eventOnRep_Level_Parms
	{
		int32 OldLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BasePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayerState_eventOnRep_Level_Parms, OldLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::NewProp_OldLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerState, nullptr, "OnRep_Level", nullptr, nullptr, Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::BasePlayerState_eventOnRep_Level_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::BasePlayerState_eventOnRep_Level_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerState_OnRep_Level()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerState_OnRep_Level_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerState::execOnRep_Level)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Level(Z_Param_OldLevel);
	P_NATIVE_END;
}
// End Class ABasePlayerState Function OnRep_Level

// Begin Class ABasePlayerState Function OnRep_XP
struct Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics
{
	struct BasePlayerState_eventOnRep_XP_Parms
	{
		int32 OldXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BasePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::NewProp_OldXP = { "OldXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayerState_eventOnRep_XP_Parms, OldXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::NewProp_OldXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerState, nullptr, "OnRep_XP", nullptr, nullptr, Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::BasePlayerState_eventOnRep_XP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::BasePlayerState_eventOnRep_XP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerState_OnRep_XP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerState_OnRep_XP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerState::execOnRep_XP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_XP(Z_Param_OldXP);
	P_NATIVE_END;
}
// End Class ABasePlayerState Function OnRep_XP

// Begin Class ABasePlayerState
void ABasePlayerState::StaticRegisterNativesABasePlayerState()
{
	UClass* Class = ABasePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Level", &ABasePlayerState::execOnRep_Level },
		{ "OnRep_XP", &ABasePlayerState::execOnRep_XP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePlayerState);
UClass* Z_Construct_UClass_ABasePlayerState_NoRegister()
{
	return ABasePlayerState::StaticClass();
}
struct Z_Construct_UClass_ABasePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/BasePlayerState.h" },
		{ "ModuleRelativePath", "Player/BasePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BasePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BasePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Progression" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic progression system for future\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic progression system for future" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Player/BasePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayerState_OnRep_Level, "OnRep_Level" }, // 1944260295
		{ &Z_Construct_UFunction_ABasePlayerState_OnRep_XP, "OnRep_XP" }, // 2093251832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerState, AbilitySystemComponent), Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerState, AttributeSet), Z_Construct_UClass_UBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePlayerState_Statics::NewProp_Level = { "Level", "OnRep_Level", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerState, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePlayerState_Statics::NewProp_XP = { "XP", "OnRep_XP", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerState, XP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerState_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerState_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerState_Statics::NewProp_XP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABasePlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABasePlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerState_Statics::ClassParams = {
	&ABasePlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasePlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayerState()
{
	if (!Z_Registration_Info_UClass_ABasePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayerState.OuterSingleton, Z_Construct_UClass_ABasePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayerState.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<ABasePlayerState>()
{
	return ABasePlayerState::StaticClass();
}
void ABasePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Level(TEXT("Level"));
	static const FName Name_XP(TEXT("XP"));
	const bool bIsValid = true
		&& Name_Level == ClassReps[(int32)ENetFields_Private::Level].Property->GetFName()
		&& Name_XP == ClassReps[(int32)ENetFields_Private::XP].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABasePlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerState);
ABasePlayerState::~ABasePlayerState() {}
// End Class ABasePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Player_BasePlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerState, ABasePlayerState::StaticClass, TEXT("ABasePlayerState"), &Z_Registration_Info_UClass_ABasePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerState), 1589144383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Player_BasePlayerState_h_3018522782(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Player_BasePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Player_BasePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
