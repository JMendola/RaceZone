// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZombieGame/BallPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallPlayer() {}
// Cross Module References
	ZOMBIEGAME_API UClass* Z_Construct_UClass_ABallPlayer_NoRegister();
	ZOMBIEGAME_API UClass* Z_Construct_UClass_ABallPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ZombieGame();
	ZOMBIEGAME_API UFunction* Z_Construct_UFunction_ABallPlayer_Jump();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABallPlayer_Jump = FName(TEXT("Jump"));
	void ABallPlayer::Jump()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABallPlayer_Jump),NULL);
	}
	void ABallPlayer::StaticRegisterNativesABallPlayer()
	{
	}
	struct Z_Construct_UFunction_ABallPlayer_Jump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABallPlayer_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABallPlayer_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABallPlayer, nullptr, "Jump", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABallPlayer_Jump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABallPlayer_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABallPlayer_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABallPlayer_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABallPlayer_NoRegister()
	{
		return ABallPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ABallPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentLapID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentLapID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ZombieGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABallPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABallPlayer_Jump, "Jump" }, // 2534202730
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BallPlayer.h" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "BallPlayer" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_JumpImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_MovementForce_MetaData[] = {
		{ "Category", "BallPlayer" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_MovementForce = { "MovementForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, MovementForce), METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_MovementForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "BallPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "BallPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_RootMesh_MetaData[] = {
		{ "Category", "BallPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_RootMesh = { "RootMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, RootMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_RootMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_RootMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BallPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallPlayer_Statics::NewProp_currentLapID_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "BallPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABallPlayer_Statics::NewProp_currentLapID = { "currentLapID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABallPlayer, currentLapID), METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::NewProp_currentLapID_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::NewProp_currentLapID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_JumpImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_MovementForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_RootMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallPlayer_Statics::NewProp_currentLapID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallPlayer_Statics::ClassParams = {
		&ABallPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABallPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABallPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABallPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallPlayer, 2543354219);
	template<> ZOMBIEGAME_API UClass* StaticClass<ABallPlayer>()
	{
		return ABallPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallPlayer(Z_Construct_UClass_ABallPlayer, &ABallPlayer::StaticClass, TEXT("/Script/ZombieGame"), TEXT("ABallPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
