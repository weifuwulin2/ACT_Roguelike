// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GBWPowerfulHitFuncLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class AGBWPH_HitTrace_Base;
class UActorComponent;
class UAnimInstance;
class UAnimMontage;
class UObject;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGBWPH_HitTraceParameter;
struct FGBWPHSerializationObjectInfo;
struct FGBWPHSerializationObjectInfoFragmentSet;
#ifdef GBWPOWERFULHIT_GBWPowerfulHitFuncLib_generated_h
#error "GBWPowerfulHitFuncLib.generated.h already included, missing '#pragma once' in GBWPowerfulHitFuncLib.h"
#endif
#define GBWPOWERFULHIT_GBWPowerfulHitFuncLib_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics; \
	GBWPOWERFULHIT_API static class UScriptStruct* StaticStruct();


template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<struct FGBWPHSerializationObjectInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics; \
	GBWPOWERFULHIT_API static class UScriptStruct* StaticStruct();


template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<struct FGBWPHSerializationObjectInfoFragment>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics; \
	GBWPOWERFULHIT_API static class UScriptStruct* StaticStruct();


template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<struct FGBWPHSerializationObjectInfoFragmentSet>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetComponentSpaceTransformRefPose); \
	DECLARE_FUNCTION(execGBWDeserializeObjectFromFragmentSet); \
	DECLARE_FUNCTION(execGBWSerializeObjectToFragmentSet); \
	DECLARE_FUNCTION(execGBWRebuildSerializationObject); \
	DECLARE_FUNCTION(execGBWDivideSerializationObject); \
	DECLARE_FUNCTION(execGBWDeserializeObject); \
	DECLARE_FUNCTION(execGBWSerializeObject); \
	DECLARE_FUNCTION(execGBWCloneObject); \
	DECLARE_FUNCTION(execGBWSetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execGBWSetSkeletalMeshAndAnimInstance); \
	DECLARE_FUNCTION(execGBWSetAnimInstanceClass); \
	DECLARE_FUNCTION(execGBWIsSKMCompatibleWithMontage); \
	DECLARE_FUNCTION(execGBWGetRootMotionMode); \
	DECLARE_FUNCTION(execGBWGetRootMotionDataFormMontage); \
	DECLARE_FUNCTION(execGBWGetRootMotionDeltaTransform); \
	DECLARE_FUNCTION(execGBWGetSectionNameFromMontage); \
	DECLARE_FUNCTION(execGBWMakeHitTraceActor); \
	DECLARE_FUNCTION(execIsLocalOwn); \
	DECLARE_FUNCTION(execForceDestroyComponent); \
	DECLARE_FUNCTION(execGetChildTagsRecurse); \
	DECLARE_FUNCTION(execGetDirectChildTags);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetComponentSpaceTransformRefPose); \
	DECLARE_FUNCTION(execGBWDeserializeObjectFromFragmentSet); \
	DECLARE_FUNCTION(execGBWSerializeObjectToFragmentSet); \
	DECLARE_FUNCTION(execGBWRebuildSerializationObject); \
	DECLARE_FUNCTION(execGBWDivideSerializationObject); \
	DECLARE_FUNCTION(execGBWDeserializeObject); \
	DECLARE_FUNCTION(execGBWSerializeObject); \
	DECLARE_FUNCTION(execGBWCloneObject); \
	DECLARE_FUNCTION(execGBWSetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execGBWSetSkeletalMeshAndAnimInstance); \
	DECLARE_FUNCTION(execGBWSetAnimInstanceClass); \
	DECLARE_FUNCTION(execGBWIsSKMCompatibleWithMontage); \
	DECLARE_FUNCTION(execGBWGetRootMotionMode); \
	DECLARE_FUNCTION(execGBWGetRootMotionDataFormMontage); \
	DECLARE_FUNCTION(execGBWGetRootMotionDeltaTransform); \
	DECLARE_FUNCTION(execGBWGetSectionNameFromMontage); \
	DECLARE_FUNCTION(execGBWMakeHitTraceActor); \
	DECLARE_FUNCTION(execIsLocalOwn); \
	DECLARE_FUNCTION(execForceDestroyComponent); \
	DECLARE_FUNCTION(execGetChildTagsRecurse); \
	DECLARE_FUNCTION(execGetDirectChildTags);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGBWPowerfulHitFuncLib(); \
	friend struct Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics; \
public: \
	DECLARE_CLASS(UGBWPowerfulHitFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GBWPowerfulHit"), NO_API) \
	DECLARE_SERIALIZER(UGBWPowerfulHitFuncLib)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUGBWPowerfulHitFuncLib(); \
	friend struct Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics; \
public: \
	DECLARE_CLASS(UGBWPowerfulHitFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GBWPowerfulHit"), NO_API) \
	DECLARE_SERIALIZER(UGBWPowerfulHitFuncLib)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGBWPowerfulHitFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWPowerfulHitFuncLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWPowerfulHitFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWPowerfulHitFuncLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWPowerfulHitFuncLib(UGBWPowerfulHitFuncLib&&); \
	NO_API UGBWPowerfulHitFuncLib(const UGBWPowerfulHitFuncLib&); \
public: \
	NO_API virtual ~UGBWPowerfulHitFuncLib();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGBWPowerfulHitFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWPowerfulHitFuncLib(UGBWPowerfulHitFuncLib&&); \
	NO_API UGBWPowerfulHitFuncLib(const UGBWPowerfulHitFuncLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWPowerfulHitFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWPowerfulHitFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWPowerfulHitFuncLib) \
	NO_API virtual ~UGBWPowerfulHitFuncLib();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_90_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GBWPOWERFULHIT_API UClass* StaticClass<class UGBWPowerfulHitFuncLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
