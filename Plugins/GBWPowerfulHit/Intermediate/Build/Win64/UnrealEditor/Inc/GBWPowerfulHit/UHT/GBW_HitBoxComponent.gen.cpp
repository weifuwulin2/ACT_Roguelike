// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBW_HitBoxComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBW_HitBoxComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBW_HitBoxComponent();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBW_HitBoxComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
// End Cross Module References
	void UGBW_HitBoxComponent::StaticRegisterNativesUGBW_HitBoxComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBW_HitBoxComponent);
	UClass* Z_Construct_UClass_UGBW_HitBoxComponent_NoRegister()
	{
		return UGBW_HitBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGBW_HitBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBW_HitBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBW_HitBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "GBW_HitBoxBase_DoNotUseThis" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "GBW_HitBoxComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBW_HitBoxComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBW_HitBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBW_HitBoxComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBW_HitBoxComponent_Statics::ClassParams = {
		&UGBW_HitBoxComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGBW_HitBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBW_HitBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBW_HitBoxComponent()
	{
		if (!Z_Registration_Info_UClass_UGBW_HitBoxComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBW_HitBoxComponent.OuterSingleton, Z_Construct_UClass_UGBW_HitBoxComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBW_HitBoxComponent.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBW_HitBoxComponent>()
	{
		return UGBW_HitBoxComponent::StaticClass();
	}
	UGBW_HitBoxComponent::UGBW_HitBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBW_HitBoxComponent);
	UGBW_HitBoxComponent::~UGBW_HitBoxComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_HitBoxComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_HitBoxComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBW_HitBoxComponent, UGBW_HitBoxComponent::StaticClass, TEXT("UGBW_HitBoxComponent"), &Z_Registration_Info_UClass_UGBW_HitBoxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBW_HitBoxComponent), 4080094658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_HitBoxComponent_h_1486088702(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_HitBoxComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBW_HitBoxComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
