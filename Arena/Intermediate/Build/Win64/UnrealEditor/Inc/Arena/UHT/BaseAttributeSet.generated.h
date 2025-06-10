// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/BaseAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ARENA_BaseAttributeSet_generated_h
#error "BaseAttributeSet.generated.h already included, missing '#pragma once' in BaseAttributeSet.h"
#endif
#define ARENA_BaseAttributeSet_generated_h

#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	ARENA_API static class UScriptStruct* StaticStruct();


template<> ARENA_API UScriptStruct* StaticStruct<struct FEffectProperties>();

#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Output); \
	DECLARE_FUNCTION(execOnRep_MaxShield); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_Speed); \
	DECLARE_FUNCTION(execOnRep_MaxDurability); \
	DECLARE_FUNCTION(execOnRep_Durability);


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttributeSet(); \
	friend struct Z_Construct_UClass_UBaseAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UBaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Durability=NETFIELD_REP_START, \
		MaxDurability, \
		Speed, \
		Shield, \
		MaxShield, \
		Output, \
		NETFIELD_REP_END=Output	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBaseAttributeSet) \
public:


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseAttributeSet(UBaseAttributeSet&&); \
	UBaseAttributeSet(const UBaseAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttributeSet) \
	NO_API virtual ~UBaseAttributeSet();


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_50_PROLOG
#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class UBaseAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_AbilitySystem_BaseAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
