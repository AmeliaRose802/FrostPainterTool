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
	FROSTPAINTERV3EDITOR_API UFunction* Z_Construct_UFunction_UFrostPainter_classTest();
// End Cross Module References
	void UFrostPainter::StaticRegisterNativesUFrostPainter()
	{
		UClass* Class = UFrostPainter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "classTest", &UFrostPainter::execclassTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFrostPainter_classTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrostPainter_classTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functionality Testing" },
		{ "ModuleRelativePath", "FrostPainter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrostPainter_classTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrostPainter, nullptr, "classTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFrostPainter_classTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrostPainter_classTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFrostPainter_classTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFrostPainter_classTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFrostPainter_NoRegister()
	{
		return UFrostPainter::StaticClass();
	}
	struct Z_Construct_UClass_UFrostPainter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UFrostPainter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrostPainter_classTest, "classTest" }, // 2672285972
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UFrostPainter, 2357623980);
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
