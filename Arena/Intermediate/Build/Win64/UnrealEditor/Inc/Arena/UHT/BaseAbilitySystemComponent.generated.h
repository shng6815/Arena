// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpec;
#ifdef ARENA_BaseAbilitySystemComponent_generated_h
#error "BaseAbilitySystemComponent.generated.h already included, missing '#pragma once' in BaseAbilitySystemComponent.h"
#endif
#define ARENA_BaseAbilitySystemComponent_generated_h

#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientEffectApplied_Implementation(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle); \
	DECLARE_FUNCTION(execClientEffectApplied);


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_CALLBACK_WRAPPERS
#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(UBaseAbilitySystemComponent)


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseAbilitySystemComponent(UBaseAbilitySystemComponent&&); \
	UBaseAbilitySystemComponent(const UBaseAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAbilitySystemComponent) \
	NO_API virtual ~UBaseAbilitySystemComponent();


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_11_PROLOG
#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_CALLBACK_WRAPPERS \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class UBaseAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
