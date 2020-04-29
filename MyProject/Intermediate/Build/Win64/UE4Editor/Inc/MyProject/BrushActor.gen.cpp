// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BrushActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushActor() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ABrushActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ABrushActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABrushActor_TestFunction();
// End Cross Module References
	void ABrushActor::StaticRegisterNativesABrushActor()
	{
		UClass* Class = ABrushActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestFunction", &ABrushActor::execTestFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABrushActor_TestFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABrushActor_TestFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BrushActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABrushActor_TestFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABrushActor, nullptr, "TestFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABrushActor_TestFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABrushActor_TestFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABrushActor_TestFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABrushActor_TestFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABrushActor_NoRegister()
	{
		return ABrushActor::StaticClass();
	}
	struct Z_Construct_UClass_ABrushActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrushActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABrushActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABrushActor_TestFunction, "TestFunction" }, // 2895425488
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrushActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BrushActor.h" },
		{ "ModuleRelativePath", "BrushActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrushActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrushActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrushActor_Statics::ClassParams = {
		&ABrushActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABrushActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrushActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrushActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrushActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrushActor, 3401927234);
	template<> MYPROJECT_API UClass* StaticClass<ABrushActor>()
	{
		return ABrushActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrushActor(Z_Construct_UClass_ABrushActor, &ABrushActor::StaticClass, TEXT("/Script/MyProject"), TEXT("ABrushActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrushActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
