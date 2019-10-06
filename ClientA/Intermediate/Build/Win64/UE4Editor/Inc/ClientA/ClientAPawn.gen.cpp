// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientA/ClientAPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAPawn() {}
// Cross Module References
	CLIENTA_API UClass* Z_Construct_UClass_AClientAPawn_NoRegister();
	CLIENTA_API UClass* Z_Construct_UClass_AClientAPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ClientA();
	CLIENTA_API UClass* Z_Construct_UClass_AClientABlock_NoRegister();
// End Cross Module References
	void AClientAPawn::StaticRegisterNativesAClientAPawn()
	{
	}
	UClass* Z_Construct_UClass_AClientAPawn_NoRegister()
	{
		return AClientAPawn::StaticClass();
	}
	struct Z_Construct_UClass_AClientAPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClientAPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ClientA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientAPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClientAPawn.h" },
		{ "ModuleRelativePath", "ClientAPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientAPawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "ClientAPawn" },
		{ "ModuleRelativePath", "ClientAPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClientAPawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClientAPawn, CurrentBlockFocus), Z_Construct_UClass_AClientABlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClientAPawn_Statics::NewProp_CurrentBlockFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_AClientAPawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClientAPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClientAPawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClientAPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientAPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClientAPawn_Statics::ClassParams = {
		&AClientAPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AClientAPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AClientAPawn_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AClientAPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AClientAPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClientAPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClientAPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClientAPawn, 2028574494);
	template<> CLIENTA_API UClass* StaticClass<AClientAPawn>()
	{
		return AClientAPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClientAPawn(Z_Construct_UClass_AClientAPawn, &AClientAPawn::StaticClass, TEXT("/Script/ClientA"), TEXT("AClientAPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClientAPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
