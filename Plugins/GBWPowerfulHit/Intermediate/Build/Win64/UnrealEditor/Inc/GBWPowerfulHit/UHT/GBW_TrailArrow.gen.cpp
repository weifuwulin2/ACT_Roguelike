// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBW_TrailArrow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBW_TrailArrow() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBW_TrailArrow();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBW_TrailArrow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
// End Cross Module References
	void UGBW_TrailArrow::StaticRegisterNativesUGBW_TrailArrow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBW_TrailArrow);
	UClass* Z_Construct_UClass_UGBW_TrailArrow_NoRegister()
	{
		return UGBW_TrailArrow::StaticClass();
	}
	struct Z_Construct_UClass_UGBW_TrailArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBW_TrailArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArrowComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBW_TrailArrow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GBW_TrailArrow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBW_TrailArrow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBW_TrailArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBW_TrailArrow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBW_TrailArrow_Statics::ClassParams = {
		&UGBW_TrailArrow::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_UGBW_TrailArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBW_TrailArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBW_TrailArrow()
	{
		if (!Z_Registration_Info_UClass_UGBW_TrailArrow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBW_TrailArrow.OuterSingleton, Z_Construct_UClass_UGBW_TrailArrow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBW_TrailArrow.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBW_TrailArrow>()
	{
		return UGBW_TrailArrow::StaticClass();
	}
	UGBW_TrailArrow::UGBW_TrailArrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBW_TrailArrow);
	UGBW_TrailArrow::~UGBW_TrailArrow() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_TrailArrow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_TrailArrow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBW_TrailArrow, UGBW_TrailArrow::StaticClass, TEXT("UGBW_TrailArrow"), &Z_Registration_Info_UClass_UGBW_TrailArrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBW_TrailArrow), 677407277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_TrailArrow_h_3692758524(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_TrailArrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_TrailArrow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
