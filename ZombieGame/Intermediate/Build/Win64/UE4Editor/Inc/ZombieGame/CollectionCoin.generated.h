// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBIEGAME_CollectionCoin_generated_h
#error "CollectionCoin.generated.h already included, missing '#pragma once' in CollectionCoin.h"
#endif
#define ZOMBIEGAME_CollectionCoin_generated_h

#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_RPC_WRAPPERS
#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectionCoin(); \
	friend struct Z_Construct_UClass_ACollectionCoin_Statics; \
public: \
	DECLARE_CLASS(ACollectionCoin, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ACollectionCoin)


#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollectionCoin(); \
	friend struct Z_Construct_UClass_ACollectionCoin_Statics; \
public: \
	DECLARE_CLASS(ACollectionCoin, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ACollectionCoin)


#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectionCoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectionCoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectionCoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectionCoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectionCoin(ACollectionCoin&&); \
	NO_API ACollectionCoin(const ACollectionCoin&); \
public:


#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectionCoin(ACollectionCoin&&); \
	NO_API ACollectionCoin(const ACollectionCoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectionCoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectionCoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectionCoin)


#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ACollectionCoin, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ACollectionCoin, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__CollectEffect() { return STRUCT_OFFSET(ACollectionCoin, CollectEffect); }


#define ZombieGame_Source_ZombieGame_CollectionCoin_h_9_PROLOG
#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_RPC_WRAPPERS \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_INCLASS \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZombieGame_Source_ZombieGame_CollectionCoin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_INCLASS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_CollectionCoin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIEGAME_API UClass* StaticClass<class ACollectionCoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZombieGame_Source_ZombieGame_CollectionCoin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
