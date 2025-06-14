// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/CombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARENA_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define ARENA_CombatInterface_generated_h

#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_11_DELEGATE \
ARENA_API void FOnDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeathSignature, AActor* DeadActor);


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AActor* GetAvatar_Implementation() { return NULL; }; \
	virtual bool IsDead_Implementation() const { return false; }; \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execIsDead);


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_CALLBACK_WRAPPERS
#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARENA_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatInterface(UCombatInterface&&); \
	UCombatInterface(const UCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARENA_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	ARENA_API virtual ~UCombatInterface();


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arena"), ARENA_API) \
	DECLARE_SERIALIZER(UCombatInterface)


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static AActor* Execute_GetAvatar(UObject* O); \
	static bool Execute_IsDead(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_15_PROLOG
#define FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_CALLBACK_WRAPPERS \
	FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class UCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Arena_Arena_Source_Arena_Public_Interaction_CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
