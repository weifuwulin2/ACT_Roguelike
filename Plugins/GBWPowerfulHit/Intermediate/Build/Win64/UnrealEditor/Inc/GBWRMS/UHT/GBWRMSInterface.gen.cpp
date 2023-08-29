// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWRMS/Public/RMS/GBWRMSInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWRMSInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GBWRMS_API UClass* Z_Construct_UClass_UGBWRMSInterface();
	GBWRMS_API UClass* Z_Construct_UClass_UGBWRMSInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GBWRMS();
// End Cross Module References
	void UGBWRMSInterface::StaticRegisterNativesUGBWRMSInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWRMSInterface);
	UClass* Z_Construct_UClass_UGBWRMSInterface_NoRegister()
	{
		return UGBWRMSInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGBWRMSInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWRMSInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWRMS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWRMSInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RMS/GBWRMSInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWRMSInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGBWRMSInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWRMSInterface_Statics::ClassParams = {
		&UGBWRMSInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWRMSInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWRMSInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWRMSInterface()
	{
		if (!Z_Registration_Info_UClass_UGBWRMSInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWRMSInterface.OuterSingleton, Z_Construct_UClass_UGBWRMSInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWRMSInterface.OuterSingleton;
	}
	template<> GBWRMS_API UClass* StaticClass<UGBWRMSInterface>()
	{
		return UGBWRMSInterface::StaticClass();
	}
	UGBWRMSInterface::UGBWRMSInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWRMSInterface);
	UGBWRMSInterface::~UGBWRMSInterface() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWRMSInterface, UGBWRMSInterface::StaticClass, TEXT("UGBWRMSInterface"), &Z_Registration_Info_UClass_UGBWRMSInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWRMSInterface), 3947433606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSInterface_h_2942612432(TEXT("/Script/GBWRMS"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
