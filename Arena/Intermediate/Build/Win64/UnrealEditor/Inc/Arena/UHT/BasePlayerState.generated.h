// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BasePlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_BasePlayerState_generated_h
#error "BasePlayerState.generated.h already included, missing '#pragma once' in BasePlayerState.h"
#endif
#define ARENA_BasePlayerState_generated_h

#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerState(); \
	friend struct Z_Construct_UClass_ABasePlayerState_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ABasePlayerState*>(this); }


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABasePlayerState(ABasePlayerState&&); \
	ABasePlayerState(const ABasePlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayerState) \
	NO_API virtual ~ABasePlayerState();


#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerState_h_14_PROLOG
#define FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class ABasePlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_shng6815_OneDrive___KookminUNIV_docs_Arena_Arena_Source_Arena_Player_BasePlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
