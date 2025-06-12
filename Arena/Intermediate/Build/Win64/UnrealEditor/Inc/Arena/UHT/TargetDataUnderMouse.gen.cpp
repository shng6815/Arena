// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/AbilitySystem/AbilityTasks/TargetDataUnderMouse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetDataUnderMouse() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UTargetDataUnderMouse();
ARENA_API UClass* Z_Construct_UClass_UTargetDataUnderMouse_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UTargetDataUnderMouse
void UTargetDataUnderMouse::StaticRegisterNativesUTargetDataUnderMouse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetDataUnderMouse);
UClass* Z_Construct_UClass_UTargetDataUnderMouse_NoRegister()
{
	return UTargetDataUnderMouse::StaticClass();
}
struct Z_Construct_UClass_UTargetDataUnderMouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AbilityTasks/TargetDataUnderMouse.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/TargetDataUnderMouse.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetDataUnderMouse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetDataUnderMouse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetDataUnderMouse_Statics::ClassParams = {
	&UTargetDataUnderMouse::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataUnderMouse_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetDataUnderMouse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetDataUnderMouse()
{
	if (!Z_Registration_Info_UClass_UTargetDataUnderMouse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetDataUnderMouse.OuterSingleton, Z_Construct_UClass_UTargetDataUnderMouse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetDataUnderMouse.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UTargetDataUnderMouse>()
{
	return UTargetDataUnderMouse::StaticClass();
}
UTargetDataUnderMouse::UTargetDataUnderMouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetDataUnderMouse);
UTargetDataUnderMouse::~UTargetDataUnderMouse() {}
// End Class UTargetDataUnderMouse

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetDataUnderMouse, UTargetDataUnderMouse::StaticClass, TEXT("UTargetDataUnderMouse"), &Z_Registration_Info_UClass_UTargetDataUnderMouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetDataUnderMouse), 3009340079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_277457928(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_AbilitySystem_AbilityTasks_TargetDataUnderMouse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
