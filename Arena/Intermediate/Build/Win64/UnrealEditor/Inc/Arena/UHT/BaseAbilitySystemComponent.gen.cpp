// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/AbilitySystem/BaseAbilitySystemComponent.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbilitySystemComponent() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent();
ARENA_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UBaseAbilitySystemComponent Function ClientEffectApplied
struct BaseAbilitySystemComponent_eventClientEffectApplied_Parms
{
	UAbilitySystemComponent* AbilitySystemComponent;
	FGameplayEffectSpec EffectSpec;
	FActiveGameplayEffectHandle ActiveEffectHandle;
};
static const FName NAME_UBaseAbilitySystemComponent_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
void UBaseAbilitySystemComponent::ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	BaseAbilitySystemComponent_eventClientEffectApplied_Parms Parms;
	Parms.AbilitySystemComponent=AbilitySystemComponent;
	Parms.EffectSpec=EffectSpec;
	Parms.ActiveEffectHandle=ActiveEffectHandle;
	UFunction* Func = FindFunctionChecked(NAME_UBaseAbilitySystemComponent_ClientEffectApplied);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/BaseAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventClientEffectApplied_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventClientEffectApplied_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle = { "ActiveEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventClientEffectApplied_Parms, ActiveEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAbilitySystemComponent, nullptr, "ClientEffectApplied", nullptr, nullptr, Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers), sizeof(BaseAbilitySystemComponent_eventClientEffectApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseAbilitySystemComponent_eventClientEffectApplied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAbilitySystemComponent::execClientEffectApplied)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
	P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveEffectHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientEffectApplied_Implementation(Z_Param_AbilitySystemComponent,Z_Param_EffectSpec,Z_Param_ActiveEffectHandle);
	P_NATIVE_END;
}
// End Class UBaseAbilitySystemComponent Function ClientEffectApplied

// Begin Class UBaseAbilitySystemComponent
void UBaseAbilitySystemComponent::StaticRegisterNativesUBaseAbilitySystemComponent()
{
	UClass* Class = UBaseAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientEffectApplied", &UBaseAbilitySystemComponent::execClientEffectApplied },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAbilitySystemComponent);
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/BaseAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAbilitySystemComponent_ClientEffectApplied, "ClientEffectApplied" }, // 4117305687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams = {
	&UBaseAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UBaseAbilitySystemComponent>()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
UBaseAbilitySystemComponent::UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAbilitySystemComponent);
UBaseAbilitySystemComponent::~UBaseAbilitySystemComponent() {}
// End Class UBaseAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAbilitySystemComponent, UBaseAbilitySystemComponent::StaticClass, TEXT("UBaseAbilitySystemComponent"), &Z_Registration_Info_UClass_UBaseAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAbilitySystemComponent), 2221700285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_1677410673(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
