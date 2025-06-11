// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Player/BasePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerController() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_ABasePlayerController();
ARENA_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();
ARENA_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class ABasePlayerController Function GetCursorHitResult
struct Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics
{
	struct BasePlayerController_eventGetCursorHitResult_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasePlayerController_eventGetCursorHitResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasePlayerController_eventGetCursorHitResult_Parms), &Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "GetCursorHitResult", nullptr, nullptr, Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::BasePlayerController_eventGetCursorHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::BasePlayerController_eventGetCursorHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerController::execGetCursorHitResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCursorHitResult();
	P_NATIVE_END;
}
// End Class ABasePlayerController Function GetCursorHitResult

// Begin Class ABasePlayerController Function GetCursorWorldLocation
struct Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics
{
	struct BasePlayerController_eventGetCursorWorldLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xec\xbb\xa4\xec\x84\x9c \xec\x9b\x94\xeb\x93\x9c \xec\x9c\x84\xec\xb9\x98 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xec\xbb\xa4\xec\x84\x9c \xec\x9b\x94\xeb\x93\x9c \xec\x9c\x84\xec\xb9\x98 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayerController_eventGetCursorWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "GetCursorWorldLocation", nullptr, nullptr, Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::BasePlayerController_eventGetCursorWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::BasePlayerController_eventGetCursorWorldLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerController::execGetCursorWorldLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCursorWorldLocation();
	P_NATIVE_END;
}
// End Class ABasePlayerController Function GetCursorWorldLocation

// Begin Class ABasePlayerController
void ABasePlayerController::StaticRegisterNativesABasePlayerController()
{
	UClass* Class = ABasePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCursorHitResult", &ABasePlayerController::execGetCursorHitResult },
		{ "GetCursorWorldLocation", &ABasePlayerController::execGetCursorWorldLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePlayerController);
UClass* Z_Construct_UClass_ABasePlayerController_NoRegister()
{
	return ABasePlayerController::StaticClass();
}
struct Z_Construct_UClass_ABasePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BasePlayerController.h" },
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Mapping Context\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Actions\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCursorRotation_MetaData[] = {
		{ "Category", "Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x9a\x8c\xec\xa0\x84 \xea\xb4\x80\xeb\xa0\xa8 \xec\x84\xa4\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9a\x8c\xec\xa0\x84 \xea\xb4\x80\xeb\xa0\xa8 \xec\x84\xa4\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationDistance_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability System\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static void NewProp_bEnableCursorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCursorRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotationDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayerController_GetCursorHitResult, "GetCursorHitResult" }, // 522694306
		{ &Z_Construct_UFunction_ABasePlayerController_GetCursorWorldLocation, "GetCursorWorldLocation" }, // 1140023824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
void Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableCursorRotation_SetBit(void* Obj)
{
	((ABasePlayerController*)Obj)->bEnableCursorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableCursorRotation = { "bEnableCursorRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasePlayerController), &Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableCursorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCursorRotation_MetaData), NewProp_bEnableCursorRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MinRotationDistance = { "MinRotationDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, MinRotationDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRotationDistance_MetaData), NewProp_MinRotationDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_BaseAbilitySystemComponent = { "BaseAbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, BaseAbilitySystemComponent), Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAbilitySystemComponent_MetaData), NewProp_BaseAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableCursorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MinRotationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_BaseAbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerController_Statics::ClassParams = {
	&ABasePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayerController()
{
	if (!Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton, Z_Construct_UClass_ABasePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<ABasePlayerController>()
{
	return ABasePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerController);
ABasePlayerController::~ABasePlayerController() {}
// End Class ABasePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerController, ABasePlayerController::StaticClass, TEXT("ABasePlayerController"), &Z_Registration_Info_UClass_ABasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerController), 1863118453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_1178485921(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
