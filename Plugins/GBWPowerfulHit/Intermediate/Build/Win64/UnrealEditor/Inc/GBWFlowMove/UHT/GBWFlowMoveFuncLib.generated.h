// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GBWFlowMoveFuncLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UAnimMontage;
class UObject;
class USkeletalMeshComponent;
struct FGameplayTag;
struct FGBWPerceptionResult;
#ifdef GBWFLOWMOVE_GBWFlowMoveFuncLib_generated_h
#error "GBWFlowMoveFuncLib.generated.h already included, missing '#pragma once' in GBWFlowMoveFuncLib.h"
#endif
#define GBWFLOWMOVE_GBWFlowMoveFuncLib_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointToLineDistance); \
	DECLARE_FUNCTION(execGetInputYawAngle); \
	DECLARE_FUNCTION(execGetVelocityYawAngle); \
	DECLARE_FUNCTION(execAngleToDirectionXY); \
	DECLARE_FUNCTION(execRadianToDirectionXY); \
	DECLARE_FUNCTION(execGetMovementMode); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execGetGameplayTag); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execAddMovementMode); \
	DECLARE_FUNCTION(execAddObject); \
	DECLARE_FUNCTION(execAddActor); \
	DECLARE_FUNCTION(execAddGameplayTag); \
	DECLARE_FUNCTION(execAddString); \
	DECLARE_FUNCTION(execAddTransform); \
	DECLARE_FUNCTION(execAddVector); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAddBool); \
	DECLARE_FUNCTION(execGetAnimCurveValue); \
	DECLARE_FUNCTION(execIsAIPlayer); \
	DECLARE_FUNCTION(execIsLocalOwn); \
	DECLARE_FUNCTION(execGetSKMeshByTag);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointToLineDistance); \
	DECLARE_FUNCTION(execGetInputYawAngle); \
	DECLARE_FUNCTION(execGetVelocityYawAngle); \
	DECLARE_FUNCTION(execAngleToDirectionXY); \
	DECLARE_FUNCTION(execRadianToDirectionXY); \
	DECLARE_FUNCTION(execGetMovementMode); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execGetGameplayTag); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execAddMovementMode); \
	DECLARE_FUNCTION(execAddObject); \
	DECLARE_FUNCTION(execAddActor); \
	DECLARE_FUNCTION(execAddGameplayTag); \
	DECLARE_FUNCTION(execAddString); \
	DECLARE_FUNCTION(execAddTransform); \
	DECLARE_FUNCTION(execAddVector); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAddBool); \
	DECLARE_FUNCTION(execGetAnimCurveValue); \
	DECLARE_FUNCTION(execIsAIPlayer); \
	DECLARE_FUNCTION(execIsLocalOwn); \
	DECLARE_FUNCTION(execGetSKMeshByTag);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGBWFlowMoveFuncLib(); \
	friend struct Z_Construct_UClass_UGBWFlowMoveFuncLib_Statics; \
public: \
	DECLARE_CLASS(UGBWFlowMoveFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GBWFlowMove"), NO_API) \
	DECLARE_SERIALIZER(UGBWFlowMoveFuncLib)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGBWFlowMoveFuncLib(); \
	friend struct Z_Construct_UClass_UGBWFlowMoveFuncLib_Statics; \
public: \
	DECLARE_CLASS(UGBWFlowMoveFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GBWFlowMove"), NO_API) \
	DECLARE_SERIALIZER(UGBWFlowMoveFuncLib)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGBWFlowMoveFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWFlowMoveFuncLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWFlowMoveFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWFlowMoveFuncLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWFlowMoveFuncLib(UGBWFlowMoveFuncLib&&); \
	NO_API UGBWFlowMoveFuncLib(const UGBWFlowMoveFuncLib&); \
public: \
	NO_API virtual ~UGBWFlowMoveFuncLib();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGBWFlowMoveFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWFlowMoveFuncLib(UGBWFlowMoveFuncLib&&); \
	NO_API UGBWFlowMoveFuncLib(const UGBWFlowMoveFuncLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWFlowMoveFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWFlowMoveFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWFlowMoveFuncLib) \
	NO_API virtual ~UGBWFlowMoveFuncLib();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GBWFLOWMOVE_API UClass* StaticClass<class UGBWFlowMoveFuncLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveFuncLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
