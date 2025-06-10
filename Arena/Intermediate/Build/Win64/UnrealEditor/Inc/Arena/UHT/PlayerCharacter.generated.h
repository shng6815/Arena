// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define ARENA_PlayerCharacter_generated_h

#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Sprinting); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execSetSprinting);


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSprinting=NETFIELD_REP_START, \
		NETFIELD_REP_END=bSprinting	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&); \
	APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_13_PROLOG
#define FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal_Projects_Arena_Source_Arena_Character_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
