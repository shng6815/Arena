// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/BasicAttackAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_BasicAttackAbility_generated_h
#error "BasicAttackAbility.generated.h already included, missing '#pragma once' in BasicAttackAbility.h"
#endif
#define ARENA_BasicAttackAbility_generated_h

#define FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPerformAttack);


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicAttackAbility(); \
	friend struct Z_Construct_UClass_UBasicAttackAbility_Statics; \
public: \
	DECLARE_CLASS(UBasicAttackAbility, UBaseGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(UBasicAttackAbility)


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasicAttackAbility(UBasicAttackAbility&&); \
	UBasicAttackAbility(const UBasicAttackAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicAttackAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicAttackAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasicAttackAbility) \
	NO_API virtual ~UBasicAttackAbility();


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_9_PROLOG
#define FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class UBasicAttackAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Arena_Arena_Source_Arena_AbilitySystem_Abilities_BasicAttackAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
