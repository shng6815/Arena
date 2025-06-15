// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/Interaction/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UCombatInterface();
ARENA_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
ARENA_API UFunction* Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Delegate FOnDeathSignature
struct Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics
{
	struct _Script_Arena_eventOnDeathSignature_Parms
	{
		AActor* DeadActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::NewProp_DeadActor = { "DeadActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arena_eventOnDeathSignature_Parms, DeadActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::NewProp_DeadActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arena, nullptr, "OnDeathSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::_Script_Arena_eventOnDeathSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::_Script_Arena_eventOnDeathSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arena_OnDeathSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeathSignature, AActor* DeadActor)
{
	struct _Script_Arena_eventOnDeathSignature_Parms
	{
		AActor* DeadActor;
	};
	_Script_Arena_eventOnDeathSignature_Parms Parms;
	Parms.DeadActor=DeadActor;
	OnDeathSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDeathSignature

// Begin Interface UCombatInterface Function GetAvatar
struct CombatInterface_eventGetAvatar_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventGetAvatar_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* ICombatInterface::GetAvatar()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvatar instead.");
	CombatInterface_eventGetAvatar_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_GetAvatar = FName(TEXT("GetAvatar"));
AActor* ICombatInterface::Execute_GetAvatar(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventGetAvatar_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetAvatar);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAvatar_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetAvatar", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers), sizeof(CombatInterface_eventGetAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatInterface_eventGetAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_GetAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execGetAvatar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetAvatar_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatInterface Function GetAvatar

// Begin Interface UCombatInterface Function IsDead
struct CombatInterface_eventIsDead_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventIsDead_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatInterface::IsDead() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDead instead.");
	CombatInterface_eventIsDead_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_IsDead = FName(TEXT("IsDead"));
bool ICombatInterface::Execute_IsDead(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventIsDead_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_IsDead);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsDead_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatInterface_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventIsDead_Parms), &Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers), sizeof(CombatInterface_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatInterface_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatInterface Function IsDead

// Begin Interface UCombatInterface
void UCombatInterface::StaticRegisterNativesUCombatInterface()
{
	UClass* Class = UCombatInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvatar", &ICombatInterface::execGetAvatar },
		{ "IsDead", &ICombatInterface::execIsDead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
{
	return UCombatInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_GetAvatar, "GetAvatar" }, // 533864735
		{ &Z_Construct_UFunction_UCombatInterface_IsDead, "IsDead" }, // 2770988236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
	&UCombatInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatInterface()
{
	if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UCombatInterface>()
{
	return UCombatInterface::StaticClass();
}
UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
UCombatInterface::~UCombatInterface() {}
// End Interface UCombatInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 727267323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_99433847(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
