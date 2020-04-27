// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrostPainterV3/FrostPainterV3GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrostPainterV3GameModeBase() {}
// Cross Module References
	FROSTPAINTERV3_API UClass* Z_Construct_UClass_AFrostPainterV3GameModeBase_NoRegister();
	FROSTPAINTERV3_API UClass* Z_Construct_UClass_AFrostPainterV3GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FrostPainterV3();
// End Cross Module References
	void AFrostPainterV3GameModeBase::StaticRegisterNativesAFrostPainterV3GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFrostPainterV3GameModeBase_NoRegister()
	{
		return AFrostPainterV3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FrostPainterV3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FrostPainterV3GameModeBase.h" },
		{ "ModuleRelativePath", "FrostPainterV3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrostPainterV3GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics::ClassParams = {
		&AFrostPainterV3GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFrostPainterV3GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFrostPainterV3GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFrostPainterV3GameModeBase, 2247427509);
	template<> FROSTPAINTERV3_API UClass* StaticClass<AFrostPainterV3GameModeBase>()
	{
		return AFrostPainterV3GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFrostPainterV3GameModeBase(Z_Construct_UClass_AFrostPainterV3GameModeBase, &AFrostPainterV3GameModeBase::StaticClass, TEXT("/Script/FrostPainterV3"), TEXT("AFrostPainterV3GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFrostPainterV3GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
