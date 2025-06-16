// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/Omega/OmegaClassData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOmegaClassData() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UOmegaClassData();
ARENA_API UClass* Z_Construct_UClass_UOmegaClassData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UOmegaClassData Function HasMaterials
struct Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics
{
	struct OmegaClassData_eventHasMaterials_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xec\x9d\xb4 \xec\x84\xa4\xec\xa0\x95\xeb\x90\x98\xec\x96\xb4 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xec\x9d\xb4 \xec\x84\xa4\xec\xa0\x95\xeb\x90\x98\xec\x96\xb4 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OmegaClassData_eventHasMaterials_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OmegaClassData_eventHasMaterials_Parms), &Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaClassData, nullptr, "HasMaterials", nullptr, nullptr, Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::OmegaClassData_eventHasMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::OmegaClassData_eventHasMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaClassData_HasMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaClassData_HasMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaClassData::execHasMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMaterials();
	P_NATIVE_END;
}
// End Class UOmegaClassData Function HasMaterials

// Begin Class UOmegaClassData Function HasOmegaAbilities
struct Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics
{
	struct OmegaClassData_eventHasOmegaAbilities_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xea\xb0\x80 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OmegaClassData_eventHasOmegaAbilities_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OmegaClassData_eventHasOmegaAbilities_Parms), &Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaClassData, nullptr, "HasOmegaAbilities", nullptr, nullptr, Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::OmegaClassData_eventHasOmegaAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::OmegaClassData_eventHasOmegaAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaClassData::execHasOmegaAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasOmegaAbilities();
	P_NATIVE_END;
}
// End Class UOmegaClassData Function HasOmegaAbilities

// Begin Class UOmegaClassData Function HasValidMesh
struct Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics
{
	struct OmegaClassData_eventHasValidMesh_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Omega Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xa9\x94\xec\x8b\x9c\xea\xb0\x80 \xec\x9c\xa0\xed\x9a\xa8\xed\x95\x9c\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa9\x94\xec\x8b\x9c\xea\xb0\x80 \xec\x9c\xa0\xed\x9a\xa8\xed\x95\x9c\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OmegaClassData_eventHasValidMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OmegaClassData_eventHasValidMesh_Parms), &Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOmegaClassData, nullptr, "HasValidMesh", nullptr, nullptr, Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::OmegaClassData_eventHasValidMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::OmegaClassData_eventHasValidMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmegaClassData_HasValidMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmegaClassData_HasValidMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmegaClassData::execHasValidMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidMesh();
	P_NATIVE_END;
}
// End Class UOmegaClassData Function HasValidMesh

// Begin Class UOmegaClassData
void UOmegaClassData::StaticRegisterNativesUOmegaClassData()
{
	UClass* Class = UOmegaClassData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasMaterials", &UOmegaClassData::execHasMaterials },
		{ "HasOmegaAbilities", &UOmegaClassData::execHasOmegaAbilities },
		{ "HasValidMesh", &UOmegaClassData::execHasValidMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOmegaClassData);
UClass* Z_Construct_UClass_UOmegaClassData_NoRegister()
{
	return UOmegaClassData::StaticClass();
}
struct Z_Construct_UClass_UOmegaClassData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xec\xa7\x81\xec\x97\x85\xeb\xb3\x84 \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 DataAsset\n * \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb0\x81 \xec\xa7\x81\xec\x97\x85\xeb\xa7\x88\xeb\x8b\xa4 \xeb\x8b\xa4\xeb\xa5\xb8 \xec\x84\xa4\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5\n */" },
#endif
		{ "IncludePath", "Omega/OmegaClassData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x81\xec\x97\x85\xeb\xb3\x84 \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 DataAsset\n\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb0\x81 \xec\xa7\x81\xec\x97\x85\xeb\xa7\x88\xeb\x8b\xa4 \xeb\x8b\xa4\xeb\xa5\xb8 \xec\x84\xa4\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaMesh_MetaData[] = {
		{ "Category", "Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xeb\xa9\x94\xec\x8b\x9c */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xeb\xa9\x94\xec\x8b\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaMaterials_MetaData[] = {
		{ "Category", "Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xeb\x93\xa4 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaScale_MetaData[] = {
		{ "Category", "Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\xb0\xec\x9c\xa8 (\xeb\xa7\xa4\xec\x89\xac\xea\xb0\x80 \xec\x9e\x91\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x82\xac\xec\x9a\xa9) */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\xb0\xec\x9c\xa8 (\xeb\xa7\xa4\xec\x89\xac\xea\xb0\x80 \xec\x9e\x91\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x82\xac\xec\x9a\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaCapsuleRadius_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\xba\xa1\xec\x8a\x90 \xeb\xb0\x98\xec\xa7\x80\xeb\xa6\x84 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\xba\xa1\xec\x8a\x90 \xeb\xb0\x98\xec\xa7\x80\xeb\xa6\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaCapsuleHeight_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\xba\xa1\xec\x8a\x90 \xeb\x86\x92\xec\x9d\xb4 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\xba\xa1\xec\x8a\x90 \xeb\x86\x92\xec\x9d\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x94\xbc\xeb\x93\x9c \xec\xa6\x9d\xea\xb0\x80 \xeb\xb0\xb0\xec\x9c\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x94\xbc\xeb\x93\x9c \xec\xa6\x9d\xea\xb0\x80 \xeb\xb0\xb0\xec\x9c\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xb6\x9c\xeb\xa0\xa5 \xec\xa6\x9d\xea\xb0\x80 \xeb\xb0\xb0\xec\x9c\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\x9c\xeb\xa0\xa5 \xec\xa6\x9d\xea\xb0\x80 \xeb\xb0\xb0\xec\x9c\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRestorePercent_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5 \xed\x8d\xbc\xec\x84\xbc\xed\x8a\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xed\x9a\x8c\xeb\xb3\xb5 \xed\x8d\xbc\xec\x84\xbc\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaAbilities_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xec\x97\x90\xec\x84\x9c \xec\xb6\x94\xea\xb0\x80\xeb\x90\xa0 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xeb\x93\xa4 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c\xec\x97\x90\xec\x84\x9c \xec\xb6\x94\xea\xb0\x80\xeb\x90\xa0 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesToRemove_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xa0\x9c\xea\xb1\xb0\xed\x95\xa0 \xea\xb8\xb0\xeb\xb3\xb8 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 \xed\x83\x9c\xea\xb7\xb8\xeb\x93\xa4 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x9c\xea\xb1\xb0\xed\x95\xa0 \xea\xb8\xb0\xeb\xb3\xb8 \xec\x96\xb4\xeb\xb9\x8c\xeb\xa6\xac\xed\x8b\xb0 \xed\x83\x9c\xea\xb7\xb8\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformationEffect_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4 \xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4 \xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformationSound_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x8b\xa0 \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaAuraEffect_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xec\xa7\x80\xec\x86\x8d \xec\xa4\x91 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4 \xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xec\x83\x81\xed\x83\x9c \xec\xa7\x80\xec\x86\x8d \xec\xa4\x91 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4 \xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassIdentifier_MetaData[] = {
		{ "Category", "Class Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9d\xb4 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xea\xb0\x80 \xec\x96\xb4\xeb\x96\xa4 \xec\xa7\x81\xec\x97\x85\xec\x9a\xa9\xec\x9d\xb8\xec\xa7\x80 \xec\x8b\x9d\xeb\xb3\x84\xed\x95\x98\xeb\x8a\x94 \xed\x83\x9c\xea\xb7\xb8 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xea\xb0\x80 \xec\x96\xb4\xeb\x96\xa4 \xec\xa7\x81\xec\x97\x85\xec\x9a\xa9\xec\x9d\xb8\xec\xa7\x80 \xec\x8b\x9d\xeb\xb3\x84\xed\x95\x98\xeb\x8a\x94 \xed\x83\x9c\xea\xb7\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Category", "Class Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xa7\x81\xec\x97\x85 \xec\x9d\xb4\xeb\xa6\x84 (UI \xed\x91\x9c\xec\x8b\x9c\xec\x9a\xa9) */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x81\xec\x97\x85 \xec\x9d\xb4\xeb\xa6\x84 (UI \xed\x91\x9c\xec\x8b\x9c\xec\x9a\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmegaDescription_MetaData[] = {
		{ "Category", "Class Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xed\x98\x95\xed\x83\x9c \xec\x84\xa4\xeb\xaa\x85 (UI \xed\x91\x9c\xec\x8b\x9c\xec\x9a\xa9) */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa9\x94\xea\xb0\x80 \xed\x98\x95\xed\x83\x9c \xec\x84\xa4\xeb\xaa\x85 (UI \xed\x91\x9c\xec\x8b\x9c\xec\x9a\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMesh_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9b\x90\xeb\xb3\xb8 \xeb\xa9\x94\xec\x8b\x9c (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x90\xeb\xb3\xb8 \xeb\xa9\x94\xec\x8b\x9c (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterials_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9b\x90\xeb\xb3\xb8 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xeb\x93\xa4 (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x90\xeb\xb3\xb8 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xeb\x93\xa4 (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalScale_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9b\x90\xeb\xb3\xb8 \xed\x81\xac\xea\xb8\xb0 (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x90\xeb\xb3\xb8 \xed\x81\xac\xea\xb8\xb0 (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCapsuleRadius_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9b\x90\xeb\xb3\xb8 \xec\xba\xa1\xec\x8a\x90 \xed\x81\xac\xea\xb8\xb0 (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x90\xeb\xb3\xb8 \xec\xba\xa1\xec\x8a\x90 \xed\x81\xac\xea\xb8\xb0 (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCapsuleHeight_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalSpeed_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9b\x90\xeb\xb3\xb8 \xec\x8a\xa4\xed\x83\xaf (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x90\xeb\xb3\xb8 \xec\x8a\xa4\xed\x83\xaf (\xeb\xb3\xb5\xec\x9b\x90\xec\x9a\xa9) - \xeb\x9f\xb0\xed\x83\x80\xec\x9e\x84\xec\x97\x90\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalOutput_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/Omega/OmegaClassData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OmegaMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OmegaMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OmegaMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OmegaScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OmegaCapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OmegaCapsuleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRestorePercent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OmegaAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OmegaAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesToRemove;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TransformationEffect;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TransformationSound;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OmegaAuraEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassIdentifier;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OmegaDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalCapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalCapsuleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOmegaClassData_HasMaterials, "HasMaterials" }, // 1644101547
		{ &Z_Construct_UFunction_UOmegaClassData_HasOmegaAbilities, "HasOmegaAbilities" }, // 848884
		{ &Z_Construct_UFunction_UOmegaClassData_HasValidMesh, "HasValidMesh" }, // 4003743207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmegaClassData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaMesh = { "OmegaMesh", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaMesh_MetaData), NewProp_OmegaMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaMaterials_Inner = { "OmegaMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaMaterials = { "OmegaMaterials", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaMaterials_MetaData), NewProp_OmegaMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaScale = { "OmegaScale", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaScale_MetaData), NewProp_OmegaScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaCapsuleRadius = { "OmegaCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaCapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaCapsuleRadius_MetaData), NewProp_OmegaCapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaCapsuleHeight = { "OmegaCapsuleHeight", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaCapsuleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaCapsuleHeight_MetaData), NewProp_OmegaCapsuleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OutputMultiplier = { "OutputMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OutputMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMultiplier_MetaData), NewProp_OutputMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_HealthRestorePercent = { "HealthRestorePercent", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, HealthRestorePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRestorePercent_MetaData), NewProp_HealthRestorePercent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaAbilities_Inner = { "OmegaAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaAbilities = { "OmegaAbilities", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaAbilities_MetaData), NewProp_OmegaAbilities_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_AbilitiesToRemove = { "AbilitiesToRemove", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, AbilitiesToRemove), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesToRemove_MetaData), NewProp_AbilitiesToRemove_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_TransformationEffect = { "TransformationEffect", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, TransformationEffect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformationEffect_MetaData), NewProp_TransformationEffect_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_TransformationSound = { "TransformationSound", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, TransformationSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformationSound_MetaData), NewProp_TransformationSound_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaAuraEffect = { "OmegaAuraEffect", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaAuraEffect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaAuraEffect_MetaData), NewProp_OmegaAuraEffect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_ClassIdentifier = { "ClassIdentifier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, ClassIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassIdentifier_MetaData), NewProp_ClassIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaDescription = { "OmegaDescription", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OmegaDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmegaDescription_MetaData), NewProp_OmegaDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalMesh = { "OriginalMesh", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OriginalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMesh_MetaData), NewProp_OriginalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalMaterials_Inner = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalMaterials = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OriginalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaterials_MetaData), NewProp_OriginalMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalScale = { "OriginalScale", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OriginalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalScale_MetaData), NewProp_OriginalScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalCapsuleRadius = { "OriginalCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OriginalCapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalCapsuleRadius_MetaData), NewProp_OriginalCapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalCapsuleHeight = { "OriginalCapsuleHeight", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OriginalCapsuleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalCapsuleHeight_MetaData), NewProp_OriginalCapsuleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalSpeed = { "OriginalSpeed", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OriginalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalSpeed_MetaData), NewProp_OriginalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalOutput = { "OriginalOutput", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmegaClassData, OriginalOutput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalOutput_MetaData), NewProp_OriginalOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOmegaClassData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaCapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaCapsuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OutputMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_HealthRestorePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_AbilitiesToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_TransformationEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_TransformationSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaAuraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_ClassIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OmegaDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalCapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalCapsuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmegaClassData_Statics::NewProp_OriginalOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaClassData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOmegaClassData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaClassData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmegaClassData_Statics::ClassParams = {
	&UOmegaClassData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOmegaClassData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaClassData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmegaClassData_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmegaClassData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOmegaClassData()
{
	if (!Z_Registration_Info_UClass_UOmegaClassData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmegaClassData.OuterSingleton, Z_Construct_UClass_UOmegaClassData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmegaClassData.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UOmegaClassData>()
{
	return UOmegaClassData::StaticClass();
}
UOmegaClassData::UOmegaClassData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOmegaClassData);
UOmegaClassData::~UOmegaClassData() {}
// End Class UOmegaClassData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_OmegaClassData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmegaClassData, UOmegaClassData::StaticClass, TEXT("UOmegaClassData"), &Z_Registration_Info_UClass_UOmegaClassData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmegaClassData), 1041179208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_OmegaClassData_h_1134972591(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_OmegaClassData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_OmegaClassData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
