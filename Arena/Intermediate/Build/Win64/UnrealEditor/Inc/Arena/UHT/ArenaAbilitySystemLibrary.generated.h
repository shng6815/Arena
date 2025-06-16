// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/ArenaAbilitySystemLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
struct FDamageEffectParams;
struct FGameplayEffectContextHandle;
#ifdef ARENA_ArenaAbilitySystemLibrary_generated_h
#error "ArenaAbilitySystemLibrary.generated.h already included, missing '#pragma once' in ArenaAbilitySystemLibrary.h"
#endif
#define ARENA_ArenaAbilitySystemLibrary_generated_h

#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsNotFriend); \
	DECLARE_FUNCTION(execSetSourceEffectParamsASC); \
	DECLARE_FUNCTION(execSetTargetEffectParamsASC); \
	DECLARE_FUNCTION(execApplyDamageEffect);


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArenaAbilitySystemLibrary(); \
	friend struct Z_Construct_UClass_UArenaAbilitySystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UArenaAbilitySystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(UArenaAbilitySystemLibrary)


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArenaAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArenaAbilitySystemLibrary(UArenaAbilitySystemLibrary&&); \
	UArenaAbilitySystemLibrary(const UArenaAbilitySystemLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArenaAbilitySystemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArenaAbilitySystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArenaAbilitySystemLibrary) \
	NO_API virtual ~UArenaAbilitySystemLibrary();


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_15_PROLOG
#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class UArenaAbilitySystemLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Public_AbilitySystem_ArenaAbilitySystemLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
