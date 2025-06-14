// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/ArenaInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_ArenaInputComponent_generated_h
#error "ArenaInputComponent.generated.h already included, missing '#pragma once' in ArenaInputComponent.h"
#endif
#define ARENA_ArenaInputComponent_generated_h

#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArenaInputComponent(); \
	friend struct Z_Construct_UClass_UArenaInputComponent_Statics; \
public: \
	DECLARE_CLASS(UArenaInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(UArenaInputComponent)


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArenaInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArenaInputComponent(UArenaInputComponent&&); \
	UArenaInputComponent(const UArenaInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArenaInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArenaInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArenaInputComponent) \
	NO_API virtual ~UArenaInputComponent();


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_8_PROLOG
#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class UArenaInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Input_ArenaInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
