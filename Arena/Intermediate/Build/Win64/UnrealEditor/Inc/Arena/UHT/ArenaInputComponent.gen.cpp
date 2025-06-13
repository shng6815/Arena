// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/Public/Input/ArenaInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaInputComponent() {}

// Begin Cross Module References
ARENA_API UClass* Z_Construct_UClass_UArenaInputComponent();
ARENA_API UClass* Z_Construct_UClass_UArenaInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References

// Begin Class UArenaInputComponent
void UArenaInputComponent::StaticRegisterNativesUArenaInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArenaInputComponent);
UClass* Z_Construct_UClass_UArenaInputComponent_NoRegister()
{
	return UArenaInputComponent::StaticClass();
}
struct Z_Construct_UClass_UArenaInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/ArenaInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/ArenaInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArenaInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArenaInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Arena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArenaInputComponent_Statics::ClassParams = {
	&UArenaInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArenaInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArenaInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArenaInputComponent()
{
	if (!Z_Registration_Info_UClass_UArenaInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArenaInputComponent.OuterSingleton, Z_Construct_UClass_UArenaInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArenaInputComponent.OuterSingleton;
}
template<> ARENA_API UClass* StaticClass<UArenaInputComponent>()
{
	return UArenaInputComponent::StaticClass();
}
UArenaInputComponent::UArenaInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArenaInputComponent);
UArenaInputComponent::~UArenaInputComponent() {}
// End Class UArenaInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArenaInputComponent, UArenaInputComponent::StaticClass, TEXT("UArenaInputComponent"), &Z_Registration_Info_UClass_UArenaInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArenaInputComponent), 3463304639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_4160558175(TEXT("/Script/Arena"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
