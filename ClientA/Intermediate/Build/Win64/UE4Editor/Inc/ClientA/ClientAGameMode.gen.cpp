// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientA/ClientAGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAGameMode() {}
// Cross Module References
	CLIENTA_API UClass* Z_Construct_UClass_AClientAGameMode_NoRegister();
	CLIENTA_API UClass* Z_Construct_UClass_AClientAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ClientA();
// End Cross Module References
	void AClientAGameMode::StaticRegisterNativesAClientAGameMode()
	{
	}
	UClass* Z_Construct_UClass_AClientAGameMode_NoRegister()
	{
		return AClientAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AClientAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClientAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClientA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientAGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ClientAGameMode.h" },
		{ "ModuleRelativePath", "ClientAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClientAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientAGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClientAGameMode_Statics::ClassParams = {
		&AClientAGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AClientAGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AClientAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClientAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClientAGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClientAGameMode, 1320761248);
	template<> CLIENTA_API UClass* StaticClass<AClientAGameMode>()
	{
		return AClientAGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClientAGameMode(Z_Construct_UClass_AClientAGameMode, &AClientAGameMode::StaticClass, TEXT("/Script/ClientA"), TEXT("AClientAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClientAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
