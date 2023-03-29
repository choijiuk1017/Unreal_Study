// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Study/PlayerCharactor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharactor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UNREAL_STUDY_API UClass* Z_Construct_UClass_APlayerCharactor();
	UNREAL_STUDY_API UClass* Z_Construct_UClass_APlayerCharactor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Unreal_Study();
// End Cross Module References
	void APlayerCharactor::StaticRegisterNativesAPlayerCharactor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharactor);
	UClass* Z_Construct_UClass_APlayerCharactor_NoRegister()
	{
		return APlayerCharactor::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Study,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharactor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharactor.h" },
		{ "ModuleRelativePath", "PlayerCharactor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharactor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharactor_Statics::ClassParams = {
		&APlayerCharactor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharactor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharactor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharactor()
	{
		if (!Z_Registration_Info_UClass_APlayerCharactor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharactor.OuterSingleton, Z_Construct_UClass_APlayerCharactor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharactor.OuterSingleton;
	}
	template<> UNREAL_STUDY_API UClass* StaticClass<APlayerCharactor>()
	{
		return APlayerCharactor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharactor);
	APlayerCharactor::~APlayerCharactor() {}
	struct Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_PlayerCharactor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_PlayerCharactor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharactor, APlayerCharactor::StaticClass, TEXT("APlayerCharactor"), &Z_Registration_Info_UClass_APlayerCharactor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharactor), 1434042119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_PlayerCharactor_h_2737938685(TEXT("/Script/Unreal_Study"),
		Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_PlayerCharactor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_PlayerCharactor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
