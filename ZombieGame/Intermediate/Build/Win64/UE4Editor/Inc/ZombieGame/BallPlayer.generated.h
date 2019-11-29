// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBIEGAME_BallPlayer_generated_h
#error "BallPlayer.generated.h already included, missing '#pragma once' in BallPlayer.h"
#endif
#define ZOMBIEGAME_BallPlayer_generated_h

#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_RPC_WRAPPERS \
	virtual bool MoveRight_Validate(float ); \
	virtual void MoveRight_Implementation(float Value); \
	virtual bool MoveUp_Validate(float ); \
	virtual void MoveUp_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveRight_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveRight_Validate")); \
			return; \
		} \
		P_THIS->MoveRight_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveUp_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveUp_Validate")); \
			return; \
		} \
		P_THIS->MoveUp_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool MoveRight_Validate(float ); \
	virtual void MoveRight_Implementation(float Value); \
	virtual bool MoveUp_Validate(float ); \
	virtual void MoveUp_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveRight_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveRight_Validate")); \
			return; \
		} \
		P_THIS->MoveRight_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->MoveUp_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("MoveUp_Validate")); \
			return; \
		} \
		P_THIS->MoveUp_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_EVENT_PARMS \
	struct BallPlayer_eventMoveRight_Parms \
	{ \
		float Value; \
	}; \
	struct BallPlayer_eventMoveUp_Parms \
	{ \
		float Value; \
	};


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_CALLBACK_WRAPPERS
#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallPlayer(); \
	friend struct Z_Construct_UClass_ABallPlayer_Statics; \
public: \
	DECLARE_CLASS(ABallPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ABallPlayer)


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABallPlayer(); \
	friend struct Z_Construct_UClass_ABallPlayer_Statics; \
public: \
	DECLARE_CLASS(ABallPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ABallPlayer)


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallPlayer(ABallPlayer&&); \
	NO_API ABallPlayer(const ABallPlayer&); \
public:


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallPlayer(ABallPlayer&&); \
	NO_API ABallPlayer(const ABallPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallPlayer)


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_PRIVATE_PROPERTY_OFFSET
#define ZombieGame_Source_ZombieGame_BallPlayer_h_16_PROLOG \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_EVENT_PARMS


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_RPC_WRAPPERS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_CALLBACK_WRAPPERS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_INCLASS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZombieGame_Source_ZombieGame_BallPlayer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_CALLBACK_WRAPPERS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_INCLASS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIEGAME_API UClass* StaticClass<class ABallPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZombieGame_Source_ZombieGame_BallPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
