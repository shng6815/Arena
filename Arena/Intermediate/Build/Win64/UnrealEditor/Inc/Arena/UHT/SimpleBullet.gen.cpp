// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/Actor/SimpleBullet.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleBullet() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_ASimpleBullet();
ARENA_API UClass* Z_Construct_UClass_ASimpleBullet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class ASimpleBullet Function OnSphereOverlap
struct Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics
{
	struct SimpleBullet_eventOnSphereOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xed\x9e\x88\xed\x8a\xb8 \xec\xb2\x98\xeb\xa6\xac (\xeb\xa1\x9c\xea\xb7\xb8\xeb\xa7\x8c)\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/SimpleBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xed\x9e\x88\xed\x8a\xb8 \xec\xb2\x98\xeb\xa6\xac (\xeb\xa1\x9c\xea\xb7\xb8\xeb\xa7\x8c)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleBullet_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleBullet_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleBullet_eventOnSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleBullet_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SimpleBullet_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleBullet_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleBullet_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleBullet, nullptr, "OnSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::SimpleBullet_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::SimpleBullet_eventOnSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleBullet::execOnSphereOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASimpleBullet Function OnSphereOverlap

// Begin Class ASimpleBullet
void ASimpleBullet::StaticRegisterNativesASimpleBullet()
{
	UClass* Class = ASimpleBullet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSphereOverlap", &ASimpleBullet::execOnSphereOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimpleBullet);
UClass* Z_Construct_UClass_ASimpleBullet_NoRegister()
{
	return ASimpleBullet::StaticClass();
}
struct Z_Construct_UClass_ASimpleBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/SimpleBullet.h" },
		{ "ModuleRelativePath", "Public/Actor/SimpleBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\x93\xa4\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/SimpleBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/SimpleBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/SimpleBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[] = {
		{ "Category", "Bullet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa4\xec\xa0\x95\xea\xb0\x92\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/SimpleBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa4\xec\xa0\x95\xea\xb0\x92\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeed_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/Actor/SimpleBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimpleBullet_OnSphereOverlap, "OnSphereOverlap" }, // 2073203207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleBullet_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleBullet, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleBullet_Statics::NewProp_BulletMesh = { "BulletMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleBullet, BulletMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMesh_MetaData), NewProp_BulletMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleBullet_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleBullet, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimpleBullet_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleBullet, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpan_MetaData), NewProp_LifeSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimpleBullet_Statics::NewProp_BulletSpeed = { "BulletSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleBullet, BulletSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpeed_MetaData), NewProp_BulletSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleBullet_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleBullet_Statics::NewProp_BulletMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleBullet_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleBullet_Statics::NewProp_LifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleBullet_Statics::NewProp_BulletSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleBullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASimpleBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimpleBullet_Statics::ClassParams = {
	&ASimpleBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASimpleBullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleBullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimpleBullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimpleBullet()
{
	if (!Z_Registration_Info_UClass_ASimpleBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimpleBullet.OuterSingleton, Z_Construct_UClass_ASimpleBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimpleBullet.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<ASimpleBullet>()
{
	return ASimpleBullet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleBullet);
ASimpleBullet::~ASimpleBullet() {}
// End Class ASimpleBullet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimpleBullet, ASimpleBullet::StaticClass, TEXT("ASimpleBullet"), &Z_Registration_Info_UClass_ASimpleBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimpleBullet), 38274383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_3954856384(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
