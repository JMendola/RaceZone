// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZombieGame/Laps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaps() {}
// Cross Module References
	ZOMBIEGAME_API UClass* Z_Construct_UClass_ALaps_NoRegister();
	ZOMBIEGAME_API UClass* Z_Construct_UClass_ALaps();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZombieGame();
// End Cross Module References
	void ALaps::StaticRegisterNativesALaps()
	{
	}
	UClass* Z_Construct_UClass_ALaps_NoRegister()
	{
		return ALaps::StaticClass();
	}
	struct Z_Construct_UClass_ALaps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckpointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CheckpointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZombieGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Laps.h" },
		{ "ModuleRelativePath", "Laps.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaps_Statics::NewProp_CheckpointID_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Laps.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALaps_Statics::NewProp_CheckpointID = { "CheckpointID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaps, CheckpointID), METADATA_PARAMS(Z_Construct_UClass_ALaps_Statics::NewProp_CheckpointID_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaps_Statics::NewProp_CheckpointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaps_Statics::NewProp_CheckpointID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaps_Statics::ClassParams = {
		&ALaps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALaps_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALaps_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALaps_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALaps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaps, 848793669);
	template<> ZOMBIEGAME_API UClass* StaticClass<ALaps>()
	{
		return ALaps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaps(Z_Construct_UClass_ALaps, &ALaps::StaticClass, TEXT("/Script/ZombieGame"), TEXT("ALaps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
