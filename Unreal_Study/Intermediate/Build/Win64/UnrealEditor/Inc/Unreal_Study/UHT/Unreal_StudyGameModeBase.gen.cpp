// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Study/Unreal_StudyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_StudyGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREAL_STUDY_API UClass* Z_Construct_UClass_AUnreal_StudyGameModeBase();
	UNREAL_STUDY_API UClass* Z_Construct_UClass_AUnreal_StudyGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Unreal_Study();
// End Cross Module References
	void AUnreal_StudyGameModeBase::StaticRegisterNativesAUnreal_StudyGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnreal_StudyGameModeBase);
	UClass* Z_Construct_UClass_AUnreal_StudyGameModeBase_NoRegister()
	{
		return AUnreal_StudyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Study,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Unreal_StudyGameModeBase.h" },
		{ "ModuleRelativePath", "Unreal_StudyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_StudyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics::ClassParams = {
		&AUnreal_StudyGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal_StudyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnreal_StudyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnreal_StudyGameModeBase.OuterSingleton, Z_Construct_UClass_AUnreal_StudyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnreal_StudyGameModeBase.OuterSingleton;
	}
	template<> UNREAL_STUDY_API UClass* StaticClass<AUnreal_StudyGameModeBase>()
	{
		return AUnreal_StudyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_StudyGameModeBase);
	AUnreal_StudyGameModeBase::~AUnreal_StudyGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_Unreal_StudyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_Unreal_StudyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnreal_StudyGameModeBase, AUnreal_StudyGameModeBase::StaticClass, TEXT("AUnreal_StudyGameModeBase"), &Z_Registration_Info_UClass_AUnreal_StudyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnreal_StudyGameModeBase), 771846746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_Unreal_StudyGameModeBase_h_773208442(TEXT("/Script/Unreal_Study"),
		Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_Unreal_StudyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Repository_Unreal_Study_Unreal_Study_Source_Unreal_Study_Unreal_StudyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
