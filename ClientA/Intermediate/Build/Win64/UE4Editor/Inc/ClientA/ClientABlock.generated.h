// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef CLIENTA_ClientABlock_generated_h
#error "ClientABlock.generated.h already included, missing '#pragma once' in ClientABlock.h"
#endif
#define CLIENTA_ClientABlock_generated_h

#define ClientA_Source_ClientA_ClientABlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define ClientA_Source_ClientA_ClientABlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define ClientA_Source_ClientA_ClientABlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientABlock(); \
	friend struct Z_Construct_UClass_AClientABlock_Statics; \
public: \
	DECLARE_CLASS(AClientABlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientA"), CLIENTA_API) \
	DECLARE_SERIALIZER(AClientABlock)


#define ClientA_Source_ClientA_ClientABlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAClientABlock(); \
	friend struct Z_Construct_UClass_AClientABlock_Statics; \
public: \
	DECLARE_CLASS(AClientABlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientA"), CLIENTA_API) \
	DECLARE_SERIALIZER(AClientABlock)


#define ClientA_Source_ClientA_ClientABlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTA_API AClientABlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientABlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTA_API, AClientABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientABlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CLIENTA_API AClientABlock(AClientABlock&&); \
	CLIENTA_API AClientABlock(const AClientABlock&); \
public:


#define ClientA_Source_ClientA_ClientABlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CLIENTA_API AClientABlock(AClientABlock&&); \
	CLIENTA_API AClientABlock(const AClientABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTA_API, AClientABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientABlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClientABlock)


#define ClientA_Source_ClientA_ClientABlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AClientABlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(AClientABlock, BlockMesh); }


#define ClientA_Source_ClientA_ClientABlock_h_10_PROLOG
#define ClientA_Source_ClientA_ClientABlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientABlock_h_13_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientABlock_h_13_RPC_WRAPPERS \
	ClientA_Source_ClientA_ClientABlock_h_13_INCLASS \
	ClientA_Source_ClientA_ClientABlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ClientA_Source_ClientA_ClientABlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ClientA_Source_ClientA_ClientABlock_h_13_PRIVATE_PROPERTY_OFFSET \
	ClientA_Source_ClientA_ClientABlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientABlock_h_13_INCLASS_NO_PURE_DECLS \
	ClientA_Source_ClientA_ClientABlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTA_API UClass* StaticClass<class AClientABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ClientA_Source_ClientA_ClientABlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
