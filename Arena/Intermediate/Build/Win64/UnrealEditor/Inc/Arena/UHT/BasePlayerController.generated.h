// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BasePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_BasePlayerController_generated_h
#error "BasePlayerController.generated.h already included, missing '#pragma once' in BasePlayerController.h"
#endif
#define ARENA_BasePlayerController_generated_h

#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCursorHitResult); \
	DECLARE_FUNCTION(execGetCursorWorldLocation);


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABasePlayerController(ABasePlayerController&&); \
	ABasePlayerController(const ABasePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayerController) \
	NO_API virtual ~ABasePlayerController();


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_13_PROLOG
#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class ABasePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Arena_Arena_Source_Arena_Player_BasePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
