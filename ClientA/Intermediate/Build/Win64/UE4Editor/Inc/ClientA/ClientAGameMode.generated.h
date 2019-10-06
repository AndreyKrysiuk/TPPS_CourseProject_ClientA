// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENTA_ClientAGameMode_generated_h
#error "ClientAGameMode.generated.h already included, missing '#pragma once' in ClientAGameMode.h"
#endif
#define CLIENTA_ClientAGameMode_generated_h

#define ClientA_Source_ClientA_ClientAGameMode_h_13_RPC_WRAPPERS
#define ClientA_Source_ClientA_ClientAGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ClientA_Source_ClientA_ClientAGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientAGameMode(); \
	friend struct Z_Construct_UClass_AClientAGameMode_Statics; \
public: \
	DECLARE_CLASS(AClientAGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ClientA"), CLIENTA_API) \
	DECLARE_SERIALIZER(AClientAGameMode)


#define ClientA_Source_ClientA_ClientAGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAClientAGameMode(); \
	friend struct Z_Construct_UClass_AClientAGameMode_Statics; \
public: \
	DECLARE_CLASS(AClientAGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ClientA"), CLIENTA_API) \
	DECLARE_SERIALIZER(AClientAGameMode)


#define ClientA_Source_ClientA_ClientAGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTA_API AClientAGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientAGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTA_API, AClientAGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientAGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CLIENTA_API AClientAGameMode(AClientAGameMode&&); \
	CLIENTA_API AClientAGameMode(const AClientAGameMode&); \
public:


#define ClientA_Source_ClientA_ClientAGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CLIENTA_API AClientAGameMode(AClientAGameMode&&); \
	CLIENTA_API AClientAGameMode(const AClientAGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTA_API, AClientAGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientAGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClientAGameMode)


#define ClientA_Source_ClientA_ClientAGameMode_h_13_PRIVATE_PROPERTY_OFFSET
#define ClientA_Source_ClientA_ClientAGameMode_h_10_PROLOG
#define ClientA_Source_ClientA_ClientAGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientAGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientAGameMode_h_13_RPC_WRAPPERS \
	ClientA_Source_ClientA_ClientAGameMode_h_13_INCLASS \
	ClientA_Source_ClientA_ClientAGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ClientA_Source_ClientA_ClientAGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientAGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientAGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientAGameMode_h_13_INCLASS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientAGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTA_API UClass* StaticClass<class AClientAGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ClientA_Source_ClientA_ClientAGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
