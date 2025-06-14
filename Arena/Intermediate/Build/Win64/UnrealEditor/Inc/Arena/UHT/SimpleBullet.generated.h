// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/SimpleBullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARENA_SimpleBullet_generated_h
#error "SimpleBullet.generated.h already included, missing '#pragma once' in SimpleBullet.h"
#endif
#define ARENA_SimpleBullet_generated_h

#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimpleBullet(); \
	friend struct Z_Construct_UClass_ASimpleBullet_Statics; \
public: \
	DECLARE_CLASS(ASimpleBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(ASimpleBullet)


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASimpleBullet(ASimpleBullet&&); \
	ASimpleBullet(const ASimpleBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimpleBullet) \
	NO_API virtual ~ASimpleBullet();


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_9_PROLOG
#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class ASimpleBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Actor_SimpleBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
