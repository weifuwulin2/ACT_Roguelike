// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWRMS/Public/RMS/GBWRMS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWRMS() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource();
	GBWRMS_API UClass* Z_Construct_UClass_UGBWRMSInterface_NoRegister();
	GBWRMS_API UScriptStruct* Z_Construct_UScriptStruct_FGBWRMS_Common();
	UPackage* Z_Construct_UPackage__Script_GBWRMS();
// End Cross Module References

static_assert(std::is_polymorphic<FGBWRMS_Common>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FGBWRMS_Common cannot be polymorphic unless super FRootMotionSource is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWRMS_Common;
class UScriptStruct* FGBWRMS_Common::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWRMS_Common.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWRMS_Common.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWRMS_Common, (UObject*)Z_Construct_UPackage__Script_GBWRMS(), TEXT("GBWRMS_Common"));
	}
	return Z_Registration_Info_UScriptStruct_GBWRMS_Common.OuterSingleton;
}
template<> GBWRMS_API UScriptStruct* StaticStruct<FGBWRMS_Common>()
{
	return FGBWRMS_Common::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWRMS_Common_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RMSInterfaceObj_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_RMSInterfaceObj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RMS/GBWRMS.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWRMS_Common>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::NewProp_RMSInterfaceObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/RMS/GBWRMS.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::NewProp_RMSInterfaceObj = { "RMSInterfaceObj", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWRMS_Common, RMSInterfaceObj), Z_Construct_UClass_UGBWRMSInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::NewProp_RMSInterfaceObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::NewProp_RMSInterfaceObj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::NewProp_RMSInterfaceObj,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWRMS,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"GBWRMS_Common",
		sizeof(FGBWRMS_Common),
		alignof(FGBWRMS_Common),
		Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWRMS_Common()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWRMS_Common.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWRMS_Common.InnerSingleton, Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWRMS_Common.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMS_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMS_h_Statics::ScriptStructInfo[] = {
		{ FGBWRMS_Common::StaticStruct, Z_Construct_UScriptStruct_FGBWRMS_Common_Statics::NewStructOps, TEXT("GBWRMS_Common"), &Z_Registration_Info_UScriptStruct_GBWRMS_Common, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWRMS_Common), 3958205176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMS_h_62188651(TEXT("/Script/GBWRMS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMS_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMS_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
