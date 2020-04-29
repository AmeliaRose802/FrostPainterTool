// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_BrushActor_generated_h
#error "BrushActor.generated.h already included, missing '#pragma once' in BrushActor.h"
#endif
#define MYPROJECT_BrushActor_generated_h

#define MyProject_Source_MyProject_BrushActor_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_BrushActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestFunction(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_BrushActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestFunction(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_BrushActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABrushActor(); \
	friend struct Z_Construct_UClass_ABrushActor_Statics; \
public: \
	DECLARE_CLASS(ABrushActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABrushActor)


#define MyProject_Source_MyProject_BrushActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABrushActor(); \
	friend struct Z_Construct_UClass_ABrushActor_Statics; \
public: \
	DECLARE_CLASS(ABrushActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABrushActor)


#define MyProject_Source_MyProject_BrushActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrushActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrushActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrushActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrushActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrushActor(ABrushActor&&); \
	NO_API ABrushActor(const ABrushActor&); \
public:


#define MyProject_Source_MyProject_BrushActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrushActor(ABrushActor&&); \
	NO_API ABrushActor(const ABrushActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrushActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrushActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABrushActor)


#define MyProject_Source_MyProject_BrushActor_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_BrushActor_h_9_PROLOG
#define MyProject_Source_MyProject_BrushActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BrushActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BrushActor_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_BrushActor_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_BrushActor_h_12_INCLASS \
	MyProject_Source_MyProject_BrushActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_BrushActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BrushActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BrushActor_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_BrushActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BrushActor_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BrushActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABrushActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_BrushActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
