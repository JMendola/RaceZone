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

#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_RPC_WRAPPERS
#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_EVENT_PARMS
#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_CALLBACK_WRAPPERS
#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallPlayer(); \
	friend struct Z_Construct_UClass_ABallPlayer_Statics; \
public: \
	DECLARE_CLASS(ABallPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ABallPlayer)


#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABallPlayer(); \
	friend struct Z_Construct_UClass_ABallPlayer_Statics; \
public: \
	DECLARE_CLASS(ABallPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ABallPlayer)


#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_STANDARD_CONSTRUCTORS \
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


#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallPlayer(ABallPlayer&&); \
	NO_API ABallPlayer(const ABallPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallPlayer)


#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_PRIVATE_PROPERTY_OFFSET
#define ZombieGame_Source_ZombieGame_BallPlayer_h_15_PROLOG \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_EVENT_PARMS


#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_RPC_WRAPPERS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_CALLBACK_WRAPPERS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_INCLASS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZombieGame_Source_ZombieGame_BallPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_CALLBACK_WRAPPERS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_INCLASS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_BallPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIEGAME_API UClass* StaticClass<class ABallPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZombieGame_Source_ZombieGame_BallPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
