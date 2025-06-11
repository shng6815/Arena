// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArenaCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_ArenaCharacter_generated_h
#error "ArenaCharacter.generated.h already included, missing '#pragma once' in ArenaCharacter.h"
#endif
#define ARENA_ArenaCharacter_generated_h

#define FID_Users_user_Documents_Arena_Arena_Source_Arena_ArenaCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaCharacter(); \
	friend struct Z_Construct_UClass_AArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(AArenaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(AArenaCharacter)


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_ArenaCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArenaCharacter(AArenaCharacter&&); \
	AArenaCharacter(const AArenaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaCharacter) \
	NO_API virtual ~AArenaCharacter();


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_ArenaCharacter_h_18_PROLOG
#define FID_Users_user_Documents_Arena_Arena_Source_Arena_ArenaCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_ArenaCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_ArenaCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class AArenaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Arena_Arena_Source_Arena_ArenaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
