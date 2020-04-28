// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FROSTPAINTERV3EDITOR_FrostPainter_generated_h
#error "FrostPainter.generated.h already included, missing '#pragma once' in FrostPainter.h"
#endif
#define FROSTPAINTERV3EDITOR_FrostPainter_generated_h

#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_SPARSE_DATA
#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execclassTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->classTest(); \
		P_NATIVE_END; \
	}


#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execclassTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->classTest(); \
		P_NATIVE_END; \
	}


#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrostPainter(); \
	friend struct Z_Construct_UClass_UFrostPainter_Statics; \
public: \
	DECLARE_CLASS(UFrostPainter, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FrostPainterV3Editor"), NO_API) \
	DECLARE_SERIALIZER(UFrostPainter)


#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFrostPainter(); \
	friend struct Z_Construct_UClass_UFrostPainter_Statics; \
public: \
	DECLARE_CLASS(UFrostPainter, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FrostPainterV3Editor"), NO_API) \
	DECLARE_SERIALIZER(UFrostPainter)


#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrostPainter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrostPainter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrostPainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrostPainter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFrostPainter(UFrostPainter&&); \
	NO_API UFrostPainter(const UFrostPainter&); \
public:


#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrostPainter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFrostPainter(UFrostPainter&&); \
	NO_API UFrostPainter(const UFrostPainter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrostPainter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrostPainter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrostPainter)


#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_PRIVATE_PROPERTY_OFFSET
#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_12_PROLOG
#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_PRIVATE_PROPERTY_OFFSET \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_SPARSE_DATA \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_RPC_WRAPPERS \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_INCLASS \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_PRIVATE_PROPERTY_OFFSET \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_SPARSE_DATA \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_INCLASS_NO_PURE_DECLS \
	FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FROSTPAINTERV3EDITOR_API UClass* StaticClass<class UFrostPainter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FrostPainterV3_Source_FrostPainterV3Editor_FrostPainter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
