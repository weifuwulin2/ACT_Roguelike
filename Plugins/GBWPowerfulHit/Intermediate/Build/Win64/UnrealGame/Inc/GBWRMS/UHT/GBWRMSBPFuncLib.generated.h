// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RMS/GBWRMSBPFuncLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class IGBWRMSInterface;
class UCharacterMovementComponent;
#ifdef GBWRMS_GBWRMSBPFuncLib_generated_h
#error "GBWRMSBPFuncLib.generated.h already included, missing '#pragma once' in GBWRMSBPFuncLib.h"
#endif
#define GBWRMS_GBWRMSBPFuncLib_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGBWRMS_GetCharacterViewInfo); \
	DECLARE_FUNCTION(execGBWRMS_IsRMSCommonActive); \
	DECLARE_FUNCTION(execGBWRMS_StopRMSCommon); \
	DECLARE_FUNCTION(execGBWRMS_Common);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGBWRMS_GetCharacterViewInfo); \
	DECLARE_FUNCTION(execGBWRMS_IsRMSCommonActive); \
	DECLARE_FUNCTION(execGBWRMS_StopRMSCommon); \
	DECLARE_FUNCTION(execGBWRMS_Common);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGBWRMSBPFuncLib(); \
	friend struct Z_Construct_UClass_UGBWRMSBPFuncLib_Statics; \
public: \
	DECLARE_CLASS(UGBWRMSBPFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GBWRMS"), NO_API) \
	DECLARE_SERIALIZER(UGBWRMSBPFuncLib)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGBWRMSBPFuncLib(); \
	friend struct Z_Construct_UClass_UGBWRMSBPFuncLib_Statics; \
public: \
	DECLARE_CLASS(UGBWRMSBPFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GBWRMS"), NO_API) \
	DECLARE_SERIALIZER(UGBWRMSBPFuncLib)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGBWRMSBPFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWRMSBPFuncLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWRMSBPFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWRMSBPFuncLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWRMSBPFuncLib(UGBWRMSBPFuncLib&&); \
	NO_API UGBWRMSBPFuncLib(const UGBWRMSBPFuncLib&); \
public: \
	NO_API virtual ~UGBWRMSBPFuncLib();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGBWRMSBPFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWRMSBPFuncLib(UGBWRMSBPFuncLib&&); \
	NO_API UGBWRMSBPFuncLib(const UGBWRMSBPFuncLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWRMSBPFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWRMSBPFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWRMSBPFuncLib) \
	NO_API virtual ~UGBWRMSBPFuncLib();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GBWRMS_API UClass* StaticClass<class UGBWRMSBPFuncLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
