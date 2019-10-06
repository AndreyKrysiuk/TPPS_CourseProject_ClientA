// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENTA_ClientAPawn_generated_h
#error "ClientAPawn.generated.h already included, missing '#pragma once' in ClientAPawn.h"
#endif
#define CLIENTA_ClientAPawn_generated_h

#define ClientA_Source_ClientA_ClientAPawn_h_12_RPC_WRAPPERS
#define ClientA_Source_ClientA_ClientAPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ClientA_Source_ClientA_ClientAPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientAPawn(); \
	friend struct Z_Construct_UClass_AClientAPawn_Statics; \
public: \
	DECLARE_CLASS(AClientAPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientA"), NO_API) \
	DECLARE_SERIALIZER(AClientAPawn)


#define ClientA_Source_ClientA_ClientAPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAClientAPawn(); \
	friend struct Z_Construct_UClass_AClientAPawn_Statics; \
public: \
	DECLARE_CLASS(AClientAPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientA"), NO_API) \
	DECLARE_SERIALIZER(AClientAPawn)


#define ClientA_Source_ClientA_ClientAPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClientAPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientAPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientAPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientAPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientAPawn(AClientAPawn&&); \
	NO_API AClientAPawn(const AClientAPawn&); \
public:


#define ClientA_Source_ClientA_ClientAPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClientAPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientAPawn(AClientAPawn&&); \
	NO_API AClientAPawn(const AClientAPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientAPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientAPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientAPawn)


#define ClientA_Source_ClientA_ClientAPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(AClientAPawn, CurrentBlockFocus); }


#define ClientA_Source_ClientA_ClientAPawn_h_9_PROLOG
#define ClientA_Source_ClientA_ClientAPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientAPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientAPawn_h_12_RPC_WRAPPERS \
	ClientA_Source_ClientA_ClientAPawn_h_12_INCLASS \
	ClientA_Source_ClientA_ClientAPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ClientA_Source_ClientA_ClientAPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientAPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientAPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientAPawn_h_12_INCLASS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientAPawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ClientAPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTA_API UClass* StaticClass<class AClientAPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ClientA_Source_ClientA_ClientAPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
