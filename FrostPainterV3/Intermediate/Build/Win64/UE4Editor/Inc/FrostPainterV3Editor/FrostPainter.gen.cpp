// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrostPainterV3Editor/FrostPainter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrostPainter() {}
// Cross Module References
	FROSTPAINTERV3EDITOR_API UClass* Z_Construct_UClass_UFrostPainter_NoRegister();
	FROSTPAINTERV3EDITOR_API UClass* Z_Construct_UClass_UFrostPainter();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_FrostPainterV3Editor();
// End Cross Module References
	void UFrostPainter::StaticRegisterNativesUFrostPainter()
	{
	}
	UClass* Z_Construct_UClass_UFrostPainter_NoRegister()
	{
		return UFrostPainter::StaticClass();
	}
	struct Z_Construct_UClass_UFrostPainter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFrostPainter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FrostPainterV3Editor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrostPainter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FrostPainter.h" },
		{ "ModuleRelativePath", "FrostPainter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFrostPainter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrostPainter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFrostPainter_Statics::ClassParams = {
		&UFrostPainter::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFrostPainter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFrostPainter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFrostPainter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFrostPainter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFrostPainter, 2508824221);
	template<> FROSTPAINTERV3EDITOR_API UClass* StaticClass<UFrostPainter>()
	{
		return UFrostPainter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFrostPainter(Z_Construct_UClass_UFrostPainter, &UFrostPainter::StaticClass, TEXT("/Script/FrostPainterV3Editor"), TEXT("UFrostPainter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFrostPainter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
