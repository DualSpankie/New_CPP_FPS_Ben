// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_FPS/CPP_FPSHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_FPSHUD() {}
// Cross Module References
	CPP_FPS_API UClass* Z_Construct_UClass_ACPP_FPSHUD_NoRegister();
	CPP_FPS_API UClass* Z_Construct_UClass_ACPP_FPSHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CPP_FPS();
// End Cross Module References
	void ACPP_FPSHUD::StaticRegisterNativesACPP_FPSHUD()
	{
	}
	UClass* Z_Construct_UClass_ACPP_FPSHUD_NoRegister()
	{
		return ACPP_FPSHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_FPSHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_FPSHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_FPSHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CPP_FPSHUD.h" },
		{ "ModuleRelativePath", "CPP_FPSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_FPSHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_FPSHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_FPSHUD_Statics::ClassParams = {
		&ACPP_FPSHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_FPSHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_FPSHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_FPSHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_FPSHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_FPSHUD, 1181142941);
	template<> CPP_FPS_API UClass* StaticClass<ACPP_FPSHUD>()
	{
		return ACPP_FPSHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_FPSHUD(Z_Construct_UClass_ACPP_FPSHUD, &ACPP_FPSHUD::StaticClass, TEXT("/Script/CPP_FPS"), TEXT("ACPP_FPSHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_FPSHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
