// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/Character/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_ABaseCharacter();
ARENA_API UClass* Z_Construct_UClass_APlayerCharacter();
ARENA_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class APlayerCharacter Function GetMovementDirection
struct Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics
{
	struct PlayerCharacter_eventGetMovementDirection_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetMovementDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetMovementDirection", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::PlayerCharacter_eventGetMovementDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::PlayerCharacter_eventGetMovementDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetMovementDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetMovementDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execGetMovementDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementDirection();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function GetMovementDirection

// Begin Class APlayerCharacter Function GetMovementSpeed
struct Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics
{
	struct PlayerCharacter_eventGetMovementSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation Interface - \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\xa7\x81\xec\xa0\x91 \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation Interface - \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\xa7\x81\xec\xa0\x91 \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::PlayerCharacter_eventGetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::PlayerCharacter_eventGetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execGetMovementSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function GetMovementSpeed

// Begin Class APlayerCharacter Function GetSpineRotation
struct Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics
{
	struct PlayerCharacter_eventGetSpineRotation_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Look System" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetSpineRotation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetSpineRotation", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::PlayerCharacter_eventGetSpineRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::PlayerCharacter_eventGetSpineRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetSpineRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetSpineRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execGetSpineRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpineRotation();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function GetSpineRotation

// Begin Class APlayerCharacter Function IsMoving
struct Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics
{
	struct PlayerCharacter_eventIsMoving_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerCharacter_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventIsMoving_Parms), &Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "IsMoving", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::PlayerCharacter_eventIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::PlayerCharacter_eventIsMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_IsMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_IsMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execIsMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMoving();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function IsMoving

// Begin Class APlayerCharacter Function ServerSetSpineRotation
struct PlayerCharacter_eventServerSetSpineRotation_Parms
{
	float Rotation;
};
static const FName NAME_APlayerCharacter_ServerSetSpineRotation = FName(TEXT("ServerSetSpineRotation"));
void APlayerCharacter::ServerSetSpineRotation(float Rotation)
{
	PlayerCharacter_eventServerSetSpineRotation_Parms Parms;
	Parms.Rotation=Rotation;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_ServerSetSpineRotation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServerSetSpineRotation_Parms, Rotation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ServerSetSpineRotation", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::PropPointers), sizeof(PlayerCharacter_eventServerSetSpineRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerCharacter_eventServerSetSpineRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServerSetSpineRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetSpineRotation_Implementation(Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function ServerSetSpineRotation

// Begin Class APlayerCharacter Function SetSpineRotation
struct Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics
{
	struct PlayerCharacter_eventSetSpineRotation_Parms
	{
		float Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Look System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Look System Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look System Interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetSpineRotation_Parms, Rotation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetSpineRotation", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::PlayerCharacter_eventSetSpineRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::PlayerCharacter_eventSetSpineRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_SetSpineRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetSpineRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execSetSpineRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpineRotation(Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function SetSpineRotation

// Begin Class APlayerCharacter
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
	UClass* Class = APlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementDirection", &APlayerCharacter::execGetMovementDirection },
		{ "GetMovementSpeed", &APlayerCharacter::execGetMovementSpeed },
		{ "GetSpineRotation", &APlayerCharacter::execGetSpineRotation },
		{ "IsMoving", &APlayerCharacter::execIsMoving },
		{ "ServerSetSpineRotation", &APlayerCharacter::execServerSetSpineRotation },
		{ "SetSpineRotation", &APlayerCharacter::execSetSpineRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpineRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Look System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Look System \xec\x83\x81\xed\x83\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look System \xec\x83\x81\xed\x83\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpineRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_GetMovementDirection, "GetMovementDirection" }, // 3973784308
		{ &Z_Construct_UFunction_APlayerCharacter_GetMovementSpeed, "GetMovementSpeed" }, // 4254904995
		{ &Z_Construct_UFunction_APlayerCharacter_GetSpineRotation, "GetSpineRotation" }, // 2041836336
		{ &Z_Construct_UFunction_APlayerCharacter_IsMoving, "IsMoving" }, // 790048553
		{ &Z_Construct_UFunction_APlayerCharacter_ServerSetSpineRotation, "ServerSetSpineRotation" }, // 945556918
		{ &Z_Construct_UFunction_APlayerCharacter_SetSpineRotation, "SetSpineRotation" }, // 2544937317
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentSpineRotation = { "CurrentSpineRotation", nullptr, (EPropertyFlags)0x0040000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CurrentSpineRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpineRotation_MetaData), NewProp_CurrentSpineRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentSpineRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<APlayerCharacter>()
{
	return APlayerCharacter::StaticClass();
}
void APlayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentSpineRotation(TEXT("CurrentSpineRotation"));
	const bool bIsValid = true
		&& Name_CurrentSpineRotation == ClassReps[(int32)ENetFields_Private::CurrentSpineRotation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// End Class APlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Character_PlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 2798177552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Character_PlayerCharacter_h_3516087002(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Character_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Character_PlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
