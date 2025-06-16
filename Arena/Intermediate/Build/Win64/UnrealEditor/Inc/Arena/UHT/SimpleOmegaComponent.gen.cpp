// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/Omega/SimpleOmegaComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleOmegaComponent() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_USimpleOmegaComponent();
ARENA_API UClass* Z_Construct_UClass_USimpleOmegaComponent_NoRegister();
ARENA_API UFunction* Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Delegate FOnOmegaStateChanged
struct Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics
{
	struct _Script_Arena_eventOnOmegaStateChanged_Parms
	{
		bool bIsOmega;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsOmega_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOmega;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::NewProp_bIsOmega_SetBit(void* Obj)
{
	((_Script_Arena_eventOnOmegaStateChanged_Parms*)Obj)->bIsOmega = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::NewProp_bIsOmega = { "bIsOmega", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Arena_eventOnOmegaStateChanged_Parms), &Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::NewProp_bIsOmega_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::NewProp_bIsOmega,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arena, nullptr, "OnOmegaStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::_Script_Arena_eventOnOmegaStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::_Script_Arena_eventOnOmegaStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOmegaStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOmegaStateChanged, bool bIsOmega)
{
	struct _Script_Arena_eventOnOmegaStateChanged_Parms
	{
		bool bIsOmega;
	};
	_Script_Arena_eventOnOmegaStateChanged_Parms Parms;
	Parms.bIsOmega=bIsOmega ? true : false;
	OnOmegaStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnOmegaStateChanged

// Begin Class USimpleOmegaComponent Function ActivateOmega
struct Z_Construct_UFunction_USimpleOmegaComponent_ActivateOmega_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98 (GAS \xed\x83\x9c\xea\xb7\xb8 \xec\xb6\x94\xea\xb0\x80) */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98 (GAS \xed\x83\x9c\xea\xb7\xb8 \xec\xb6\x94\xea\xb0\x80)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_ActivateOmega_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "ActivateOmega", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_ActivateOmega_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_ActivateOmega_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_ActivateOmega()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_ActivateOmega_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execActivateOmega)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateOmega();
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function ActivateOmega

// Begin Class USimpleOmegaComponent Function CanBeStolen
struct Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics
{
	struct SimpleOmegaComponent_eventCanBeStolen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80\xeb\xa5\xbc \xeb\xba\x8f\xec\x9d\x84 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80\xeb\xa5\xbc \xeb\xba\x8f\xec\x9d\x84 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleOmegaComponent_eventCanBeStolen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOmegaComponent_eventCanBeStolen_Parms), &Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "CanBeStolen", nullptr, nullptr, Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::SimpleOmegaComponent_eventCanBeStolen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::SimpleOmegaComponent_eventCanBeStolen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execCanBeStolen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeStolen();
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function CanBeStolen

// Begin Class USimpleOmegaComponent Function DeactivateOmega
struct Z_Construct_UFunction_USimpleOmegaComponent_DeactivateOmega_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xed\x95\xb4\xec\xa0\x9c (GAS \xed\x83\x9c\xea\xb7\xb8 \xec\xa0\x9c\xea\xb1\xb0) */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xed\x95\xb4\xec\xa0\x9c (GAS \xed\x83\x9c\xea\xb7\xb8 \xec\xa0\x9c\xea\xb1\xb0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_DeactivateOmega_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "DeactivateOmega", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_DeactivateOmega_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_DeactivateOmega_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_DeactivateOmega()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_DeactivateOmega_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execDeactivateOmega)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateOmega();
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function DeactivateOmega

// Begin Class USimpleOmegaComponent Function GetCurrentOmegaPlayer
struct Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics
{
	struct SimpleOmegaComponent_eventGetCurrentOmegaPlayer_Parms
	{
		const UObject* WorldContext;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x98\x84\xec\x9e\xac \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb0\xbe\xea\xb8\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb0\xbe\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOmegaComponent_eventGetCurrentOmegaPlayer_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOmegaComponent_eventGetCurrentOmegaPlayer_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "GetCurrentOmegaPlayer", nullptr, nullptr, Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::SimpleOmegaComponent_eventGetCurrentOmegaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::SimpleOmegaComponent_eventGetCurrentOmegaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execGetCurrentOmegaPlayer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=USimpleOmegaComponent::GetCurrentOmegaPlayer(Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function GetCurrentOmegaPlayer

// Begin Class USimpleOmegaComponent Function IsOmega
struct Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics
{
	struct SimpleOmegaComponent_eventIsOmega_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x98\x84\xec\x9e\xac \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 (\xed\x83\x9c\xea\xb7\xb8 \xea\xb8\xb0\xeb\xb0\x98) */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 (\xed\x83\x9c\xea\xb7\xb8 \xea\xb8\xb0\xeb\xb0\x98)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleOmegaComponent_eventIsOmega_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOmegaComponent_eventIsOmega_Parms), &Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "IsOmega", nullptr, nullptr, Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::SimpleOmegaComponent_eventIsOmega_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::SimpleOmegaComponent_eventIsOmega_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_IsOmega()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_IsOmega_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execIsOmega)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOmega();
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function IsOmega

// Begin Class USimpleOmegaComponent Function IsStealOnCooldown
struct Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics
{
	struct SimpleOmegaComponent_eventIsStealOnCooldown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8b\xb8 \xec\xbf\xa8\xeb\x8b\xa4\xec\x9a\xb4 \xec\xa4\x91\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8b\xb8 \xec\xbf\xa8\xeb\x8b\xa4\xec\x9a\xb4 \xec\xa4\x91\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleOmegaComponent_eventIsStealOnCooldown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOmegaComponent_eventIsStealOnCooldown_Parms), &Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "IsStealOnCooldown", nullptr, nullptr, Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::SimpleOmegaComponent_eventIsStealOnCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::SimpleOmegaComponent_eventIsStealOnCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execIsStealOnCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStealOnCooldown();
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function IsStealOnCooldown

// Begin Class USimpleOmegaComponent Function OnOmegaTagChanged
struct Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics
{
	struct SimpleOmegaComponent_eventOnOmegaTagChanged_Parms
	{
		FGameplayTag CallbackTag;
		int32 NewCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xed\x83\x9c\xea\xb7\xb8 \xeb\xb3\x80\xed\x99\x94 \xec\xbd\x9c\xeb\xb0\xb1 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xed\x83\x9c\xea\xb7\xb8 \xeb\xb3\x80\xed\x99\x94 \xec\xbd\x9c\xeb\xb0\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CallbackTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::NewProp_CallbackTag = { "CallbackTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOmegaComponent_eventOnOmegaTagChanged_Parms, CallbackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackTag_MetaData), NewProp_CallbackTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOmegaComponent_eventOnOmegaTagChanged_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::NewProp_CallbackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "OnOmegaTagChanged", nullptr, nullptr, Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::SimpleOmegaComponent_eventOnOmegaTagChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::SimpleOmegaComponent_eventOnOmegaTagChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execOnOmegaTagChanged)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CallbackTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOmegaTagChanged(Z_Param_CallbackTag,Z_Param_NewCount);
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function OnOmegaTagChanged

// Begin Class USimpleOmegaComponent Function StartStealCooldown
struct Z_Construct_UFunction_USimpleOmegaComponent_StartStealCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8b\xb8 \xec\xbf\xa8\xeb\x8b\xa4\xec\x9a\xb4 \xec\x8b\x9c\xec\x9e\x91 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8b\xb8 \xec\xbf\xa8\xeb\x8b\xa4\xec\x9a\xb4 \xec\x8b\x9c\xec\x9e\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_StartStealCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "StartStealCooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_StartStealCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_StartStealCooldown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_StartStealCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_StartStealCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execStartStealCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartStealCooldown();
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function StartStealCooldown

// Begin Class USimpleOmegaComponent Function TransferOmegaTo
struct Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics
{
	struct SimpleOmegaComponent_eventTransferOmegaTo_Parms
	{
		AActor* FromActor;
		AActor* ToActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80\xeb\xa5\xbc \xeb\x8b\xa4\xeb\xa5\xb8 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x97\x90\xea\xb2\x8c \xec\x9d\xb4\xec\xa0\x84 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80\xeb\xa5\xbc \xeb\x8b\xa4\xeb\xa5\xb8 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x97\x90\xea\xb2\x8c \xec\x9d\xb4\xec\xa0\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_FromActor = { "FromActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOmegaComponent_eventTransferOmegaTo_Parms, FromActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_ToActor = { "ToActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOmegaComponent_eventTransferOmegaTo_Parms, ToActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleOmegaComponent_eventTransferOmegaTo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOmegaComponent_eventTransferOmegaTo_Parms), &Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_FromActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_ToActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOmegaComponent, nullptr, "TransferOmegaTo", nullptr, nullptr, Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::SimpleOmegaComponent_eventTransferOmegaTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::SimpleOmegaComponent_eventTransferOmegaTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleOmegaComponent::execTransferOmegaTo)
{
	P_GET_OBJECT(AActor,Z_Param_FromActor);
	P_GET_OBJECT(AActor,Z_Param_ToActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleOmegaComponent::TransferOmegaTo(Z_Param_FromActor,Z_Param_ToActor);
	P_NATIVE_END;
}
// End Class USimpleOmegaComponent Function TransferOmegaTo

// Begin Class USimpleOmegaComponent
void USimpleOmegaComponent::StaticRegisterNativesUSimpleOmegaComponent()
{
	UClass* Class = USimpleOmegaComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateOmega", &USimpleOmegaComponent::execActivateOmega },
		{ "CanBeStolen", &USimpleOmegaComponent::execCanBeStolen },
		{ "DeactivateOmega", &USimpleOmegaComponent::execDeactivateOmega },
		{ "GetCurrentOmegaPlayer", &USimpleOmegaComponent::execGetCurrentOmegaPlayer },
		{ "IsOmega", &USimpleOmegaComponent::execIsOmega },
		{ "IsStealOnCooldown", &USimpleOmegaComponent::execIsStealOnCooldown },
		{ "OnOmegaTagChanged", &USimpleOmegaComponent::execOnOmegaTagChanged },
		{ "StartStealCooldown", &USimpleOmegaComponent::execStartStealCooldown },
		{ "TransferOmegaTo", &USimpleOmegaComponent::execTransferOmegaTo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleOmegaComponent);
UClass* Z_Construct_UClass_USimpleOmegaComponent_NoRegister()
{
	return USimpleOmegaComponent::StaticClass();
}
struct Z_Construct_UClass_USimpleOmegaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xed\x94\x84\xeb\xa1\x9c\xed\x86\xa0\xed\x83\x80\xec\x9e\x85\xec\x9a\xa9 \xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xea\xb4\x80\xeb\xa6\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n * GAS \xed\x83\x9c\xea\xb7\xb8 \xea\xb8\xb0\xeb\xb0\x98\xec\x9c\xbc\xeb\xa1\x9c \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xeb\xa7\x8c \xea\xb4\x80\xeb\xa6\xac\n */" },
#endif
		{ "IncludePath", "Omega/SimpleOmegaComponent.h" },
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x84\xeb\xa1\x9c\xed\x86\xa0\xed\x83\x80\xec\x9e\x85\xec\x9a\xa9 \xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xea\xb4\x80\xeb\xa6\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\nGAS \xed\x83\x9c\xea\xb7\xb8 \xea\xb8\xb0\xeb\xb0\x98\xec\x9c\xbc\xeb\xa1\x9c \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xeb\xa7\x8c \xea\xb4\x80\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOmegaStateChanged_MetaData[] = {
		{ "Category", "Omega" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ======================\n// \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\n// ======================\n" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealCooldownDuration_MetaData[] = {
		{ "Category", "Omega Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8b\xb8 \xec\xbf\xa8\xeb\x8b\xa4\xec\x9a\xb4 \xec\x8b\x9c\xea\xb0\x84 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8b\xb8 \xec\xbf\xa8\xeb\x8b\xa4\xec\x9a\xb4 \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialStealImmunityTime_MetaData[] = {
		{ "Category", "Omega Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xb4\x88\xea\xb8\xb0 \xec\x8a\xa4\xed\x8b\xb8 \xeb\xa9\xb4\xec\x97\xad \xec\x8b\x9c\xea\xb0\x84 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/SimpleOmegaComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x88\xea\xb8\xb0 \xec\x8a\xa4\xed\x8b\xb8 \xeb\xa9\xb4\xec\x97\xad \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOmegaStateChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StealCooldownDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialStealImmunityTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleOmegaComponent_ActivateOmega, "ActivateOmega" }, // 2157598134
		{ &Z_Construct_UFunction_USimpleOmegaComponent_CanBeStolen, "CanBeStolen" }, // 2338839313
		{ &Z_Construct_UFunction_USimpleOmegaComponent_DeactivateOmega, "DeactivateOmega" }, // 257520916
		{ &Z_Construct_UFunction_USimpleOmegaComponent_GetCurrentOmegaPlayer, "GetCurrentOmegaPlayer" }, // 3630139380
		{ &Z_Construct_UFunction_USimpleOmegaComponent_IsOmega, "IsOmega" }, // 1084960564
		{ &Z_Construct_UFunction_USimpleOmegaComponent_IsStealOnCooldown, "IsStealOnCooldown" }, // 362317172
		{ &Z_Construct_UFunction_USimpleOmegaComponent_OnOmegaTagChanged, "OnOmegaTagChanged" }, // 3935824869
		{ &Z_Construct_UFunction_USimpleOmegaComponent_StartStealCooldown, "StartStealCooldown" }, // 2637162304
		{ &Z_Construct_UFunction_USimpleOmegaComponent_TransferOmegaTo, "TransferOmegaTo" }, // 2028952801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleOmegaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleOmegaComponent_Statics::NewProp_OnOmegaStateChanged = { "OnOmegaStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleOmegaComponent, OnOmegaStateChanged), Z_Construct_UDelegateFunction_Arena_OnOmegaStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOmegaStateChanged_MetaData), NewProp_OnOmegaStateChanged_MetaData) }; // 2462299802
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleOmegaComponent_Statics::NewProp_StealCooldownDuration = { "StealCooldownDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleOmegaComponent, StealCooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealCooldownDuration_MetaData), NewProp_StealCooldownDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleOmegaComponent_Statics::NewProp_InitialStealImmunityTime = { "InitialStealImmunityTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleOmegaComponent, InitialStealImmunityTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialStealImmunityTime_MetaData), NewProp_InitialStealImmunityTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleOmegaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOmegaComponent_Statics::NewProp_OnOmegaStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOmegaComponent_Statics::NewProp_StealCooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleOmegaComponent_Statics::NewProp_InitialStealImmunityTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOmegaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleOmegaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOmegaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleOmegaComponent_Statics::ClassParams = {
	&USimpleOmegaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USimpleOmegaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOmegaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOmegaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleOmegaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleOmegaComponent()
{
	if (!Z_Registration_Info_UClass_USimpleOmegaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleOmegaComponent.OuterSingleton, Z_Construct_UClass_USimpleOmegaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleOmegaComponent.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<USimpleOmegaComponent>()
{
	return USimpleOmegaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleOmegaComponent);
USimpleOmegaComponent::~USimpleOmegaComponent() {}
// End Class USimpleOmegaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleOmegaComponent, USimpleOmegaComponent::StaticClass, TEXT("USimpleOmegaComponent"), &Z_Registration_Info_UClass_USimpleOmegaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleOmegaComponent), 2427032120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_3619801862(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
