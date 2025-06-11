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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLookSystem_MetaData[] = {
		{ "Category", "Look System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Look System Settings\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look System Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLookDistance_MetaData[] = {
		{ "Category", "Look System" },
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpineRotation_MetaData[] = {
		{ "Category", "Look System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xec\x86\x8c Look \xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xec\x86\x8c Look \xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotationSpeed_MetaData[] = {
		{ "Category", "Look System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\x99\xec\xb6\x94 \xed\x9a\x8c\xec\xa0\x84\xea\xb0\x81\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\x99\xec\xb6\x94 \xed\x9a\x8c\xec\xa0\x84\xea\xb0\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyRotationSpeed_MetaData[] = {
		{ "Category", "Look System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\x99\xec\xb6\x94 \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Player/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\x99\xec\xb6\x94 \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84" },
#endif
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static void NewProp_bEnableLookSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLookSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLookDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpineRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineRotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyRotationSpeed;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
void Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableLookSystem_SetBit(void* Obj)
{
	((ABasePlayerController*)Obj)->bEnableLookSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableLookSystem = { "bEnableLookSystem", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABasePlayerController), &Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableLookSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLookSystem_MetaData), NewProp_bEnableLookSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MinLookDistance = { "MinLookDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, MinLookDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLookDistance_MetaData), NewProp_MinLookDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MaxSpineRotation = { "MaxSpineRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, MaxSpineRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpineRotation_MetaData), NewProp_MaxSpineRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_SpineRotationSpeed = { "SpineRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, SpineRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpineRotationSpeed_MetaData), NewProp_SpineRotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_BodyRotationSpeed = { "BodyRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, BodyRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyRotationSpeed_MetaData), NewProp_BodyRotationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_BaseAbilitySystemComponent = { "BaseAbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, BaseAbilitySystemComponent), Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAbilitySystemComponent_MetaData), NewProp_BaseAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_bEnableLookSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MinLookDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MaxSpineRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_SpineRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_BodyRotationSpeed,
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
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerController, ABasePlayerController::StaticClass, TEXT("ABasePlayerController"), &Z_Registration_Info_UClass_ABasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerController), 4001304807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerController_h_3261391069(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
