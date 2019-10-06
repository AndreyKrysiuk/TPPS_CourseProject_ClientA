// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientA/ClientAPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAPlayerController() {}
// Cross Module References
	CLIENTA_API UClass* Z_Construct_UClass_AClientAPlayerController_NoRegister();
	CLIENTA_API UClass* Z_Construct_UClass_AClientAPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ClientA();
// End Cross Module References
	void AClientAPlayerController::StaticRegisterNativesAClientAPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AClientAPlayerController_NoRegister()
	{
		return AClientAPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AClientAPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClientAPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ClientA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientAPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PlayerController class used to enable cursor */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ClientAPlayerController.h" },
		{ "ModuleRelativePath", "ClientAPlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClientAPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientAPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClientAPlayerController_Statics::ClassParams = {
		&AClientAPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClientAPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AClientAPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClientAPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClientAPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClientAPlayerController, 960955236);
	template<> CLIENTA_API UClass* StaticClass<AClientAPlayerController>()
	{
		return AClientAPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClientAPlayerController(Z_Construct_UClass_AClientAPlayerController, &AClientAPlayerController::StaticClass, TEXT("/Script/ClientA"), TEXT("AClientAPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClientAPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
