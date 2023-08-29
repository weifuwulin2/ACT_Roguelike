// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHitEditor/Public/Nodes/GBWPHAnimGraphNode_AdjustPosture.h"
#include "GBWPowerfulHit/Public/AnimNodes/GBWPHAnimNode_PostureAdjust.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPHAnimGraphNode_AdjustPosture() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHAnimNode_PostureAdjust();
	GBWPOWERFULHITEDITOR_API UClass* Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust();
	GBWPOWERFULHITEDITOR_API UClass* Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHitEditor();
// End Cross Module References
	void UGBWPHAnimGraphNode_PostureAdjust::StaticRegisterNativesUGBWPHAnimGraphNode_PostureAdjust()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPHAnimGraphNode_PostureAdjust);
	UClass* Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_NoRegister()
	{
		return UGBWPHAnimGraphNode_PostureAdjust::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHitEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/GBWPHAnimGraphNode_AdjustPosture.h" },
		{ "ModuleRelativePath", "Public/Nodes/GBWPHAnimGraphNode_AdjustPosture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Nodes/GBWPHAnimGraphNode_AdjustPosture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAnimGraphNode_PostureAdjust, Node), Z_Construct_UScriptStruct_FGBWPHAnimNode_PostureAdjust, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::NewProp_Node_MetaData)) }; // 3223122495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPHAnimGraphNode_PostureAdjust>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::ClassParams = {
		&UGBWPHAnimGraphNode_PostureAdjust::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust()
	{
		if (!Z_Registration_Info_UClass_UGBWPHAnimGraphNode_PostureAdjust.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPHAnimGraphNode_PostureAdjust.OuterSingleton, Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPHAnimGraphNode_PostureAdjust.OuterSingleton;
	}
	template<> GBWPOWERFULHITEDITOR_API UClass* StaticClass<UGBWPHAnimGraphNode_PostureAdjust>()
	{
		return UGBWPHAnimGraphNode_PostureAdjust::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPHAnimGraphNode_PostureAdjust);
	UGBWPHAnimGraphNode_PostureAdjust::~UGBWPHAnimGraphNode_PostureAdjust() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHitEditor_Public_Nodes_GBWPHAnimGraphNode_AdjustPosture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHitEditor_Public_Nodes_GBWPHAnimGraphNode_AdjustPosture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWPHAnimGraphNode_PostureAdjust, UGBWPHAnimGraphNode_PostureAdjust::StaticClass, TEXT("UGBWPHAnimGraphNode_PostureAdjust"), &Z_Registration_Info_UClass_UGBWPHAnimGraphNode_PostureAdjust, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPHAnimGraphNode_PostureAdjust), 3922525811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHitEditor_Public_Nodes_GBWPHAnimGraphNode_AdjustPosture_h_3966288720(TEXT("/Script/GBWPowerfulHitEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHitEditor_Public_Nodes_GBWPHAnimGraphNode_AdjustPosture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHitEditor_Public_Nodes_GBWPHAnimGraphNode_AdjustPosture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
