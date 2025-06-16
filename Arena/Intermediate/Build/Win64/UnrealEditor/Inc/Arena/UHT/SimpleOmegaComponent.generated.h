// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Omega/SimpleOmegaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FGameplayTag;
#ifdef ARENA_SimpleOmegaComponent_generated_h
#error "SimpleOmegaComponent.generated.h already included, missing '#pragma once' in SimpleOmegaComponent.h"
#endif
#define ARENA_SimpleOmegaComponent_generated_h

#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_10_DELEGATE \
ARENA_API void FOnOmegaStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOmegaStateChanged, bool bIsOmega);


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOmegaTagChanged); \
	DECLARE_FUNCTION(execTransferOmegaTo); \
	DECLARE_FUNCTION(execGetCurrentOmegaPlayer); \
	DECLARE_FUNCTION(execIsStealOnCooldown); \
	DECLARE_FUNCTION(execStartStealCooldown); \
	DECLARE_FUNCTION(execCanBeStolen); \
	DECLARE_FUNCTION(execIsOmega); \
	DECLARE_FUNCTION(execDeactivateOmega); \
	DECLARE_FUNCTION(execActivateOmega);


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleOmegaComponent(); \
	friend struct Z_Construct_UClass_USimpleOmegaComponent_Statics; \
public: \
	DECLARE_CLASS(USimpleOmegaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(USimpleOmegaComponent)


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleOmegaComponent(USimpleOmegaComponent&&); \
	USimpleOmegaComponent(const USimpleOmegaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleOmegaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleOmegaComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimpleOmegaComponent) \
	NO_API virtual ~USimpleOmegaComponent();


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_16_PROLOG
#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class USimpleOmegaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_Omega_SimpleOmegaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
