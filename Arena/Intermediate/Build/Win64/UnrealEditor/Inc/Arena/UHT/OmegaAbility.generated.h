// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/OmegaAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARENA_OmegaAbility_generated_h
#error "OmegaAbility.generated.h already included, missing '#pragma once' in OmegaAbility.h"
#endif
#define ARENA_OmegaAbility_generated_h

#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastApplyVisualChanges_Implementation(); \
	DECLARE_FUNCTION(execIsInStealRange); \
	DECLARE_FUNCTION(execCanStealFromPlayer); \
	DECLARE_FUNCTION(execFindStealableOmegaPlayer); \
	DECLARE_FUNCTION(execRestoreHealth); \
	DECLARE_FUNCTION(execApplyStatBoosts); \
	DECLARE_FUNCTION(execMulticastApplyVisualChanges); \
	DECLARE_FUNCTION(execApplySimpleVisualChanges); \
	DECLARE_FUNCTION(execExecuteSteal); \
	DECLARE_FUNCTION(execExecuteTransform); \
	DECLARE_FUNCTION(execDetermineAndExecuteAction);


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_CALLBACK_WRAPPERS
#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOmegaAbility(); \
	friend struct Z_Construct_UClass_UOmegaAbility_Statics; \
public: \
	DECLARE_CLASS(UOmegaAbility, UBaseGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(UOmegaAbility)


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOmegaAbility(UOmegaAbility&&); \
	UOmegaAbility(const UOmegaAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOmegaAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOmegaAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOmegaAbility) \
	NO_API virtual ~UOmegaAbility();


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_13_PROLOG
#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_CALLBACK_WRAPPERS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class UOmegaAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_Abilities_OmegaAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
