// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENTA_ClientAPlayerController_generated_h
#error "ClientAPlayerController.generated.h already included, missing '#pragma once' in ClientAPlayerController.h"
#endif
#define CLIENTA_ClientAPlayerController_generated_h

#define ClientA_Source_ClientA_ClientAPlayerController_h_13_RPC_WRAPPERS
#define ClientA_Source_ClientA_ClientAPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ClientA_Source_ClientA_ClientAPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientAPlayerController(); \
	friend struct Z_Construct_UClass_AClientAPlayerController_Statics; \
public: \
	DECLARE_CLASS(AClientAPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClientA"), NO_API) \
	DECLARE_SERIALIZER(AClientAPlayerController)


#define ClientA_Source_ClientA_ClientAPlayerController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAClientAPlayerController(); \
	friend struct Z_Construct_UClass_AClientAPlayerController_Statics; \
public: \
	DECLARE_CLASS(AClientAPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClientA"), NO_API) \
	DECLARE_SERIALIZER(AClientAPlayerController)


#define ClientA_Source_ClientA_ClientAPlayerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClientAPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientAPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientAPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientAPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientAPlayerController(AClientAPlayerController&&); \
	NO_API AClientAPlayerController(const AClientAPlayerController&); \
public:


#define ClientA_Source_ClientA_ClientAPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientAPlayerController(AClientAPlayerController&&); \
	NO_API AClientAPlayerController(const AClientAPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientAPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientAPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClientAPlayerController)


#define ClientA_Source_ClientA_ClientAPlayerController_h_13_PRIVATE_PROPERTY_OFFSET
#define ClientA_Source_ClientA_ClientAPlayerController_h_10_PROLOG
#define ClientA_Source_ClientA_ClientAPlayerController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_RPC_WRAPPERS \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_INCLASS \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ClientA_Source_ClientA_ClientAPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientAPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTA_API UClass* StaticClass<class AClientAPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ClientA_Source_ClientA_ClientAPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
