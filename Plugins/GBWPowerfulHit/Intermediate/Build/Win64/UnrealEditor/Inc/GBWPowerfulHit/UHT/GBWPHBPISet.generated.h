// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GBWPHBPISet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGBWPH_Anim_BodyShakeData;
struct FGBWPH_Anim_BodyTwistData;
struct FGBWPH_Anim_PostureAdjuestData;
#ifdef GBWPOWERFULHIT_GBWPHBPISet_generated_h
#error "GBWPHBPISet.generated.h already included, missing '#pragma once' in GBWPHBPISet.h"
#endif
#define GBWPOWERFULHIT_GBWPHBPISet_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics; \
	GBWPOWERFULHIT_API static class UScriptStruct* StaticStruct();


template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<struct FGBWPH_Anim_PostureAdjuestData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics; \
	GBWPOWERFULHIT_API static class UScriptStruct* StaticStruct();


template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<struct FGBWPH_Anim_BodyShakeData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics; \
	GBWPOWERFULHIT_API static class UScriptStruct* StaticStruct();


template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<struct FGBWPH_Anim_BodyTwistData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_RPC_WRAPPERS \
	virtual bool GetBodyTwistData_Implementation(bool ClearData, FGBWPH_Anim_BodyTwistData& BodyTwistData) { return false; }; \
	virtual bool GetBodyShakeData_Implementation(bool ClearData, FGBWPH_Anim_BodyShakeData& BodyShakeData) { return false; }; \
	virtual bool GetPostureAdjustData_Implementation(FGBWPH_Anim_PostureAdjuestData& PostureAdjuestData) { return false; }; \
 \
	DECLARE_FUNCTION(execGetBodyTwistData); \
	DECLARE_FUNCTION(execGetBodyShakeData); \
	DECLARE_FUNCTION(execGetPostureAdjustData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetBodyTwistData_Implementation(bool ClearData, FGBWPH_Anim_BodyTwistData& BodyTwistData) { return false; }; \
	virtual bool GetBodyShakeData_Implementation(bool ClearData, FGBWPH_Anim_BodyShakeData& BodyShakeData) { return false; }; \
	virtual bool GetPostureAdjustData_Implementation(FGBWPH_Anim_PostureAdjuestData& PostureAdjuestData) { return false; }; \
 \
	DECLARE_FUNCTION(execGetBodyTwistData); \
	DECLARE_FUNCTION(execGetBodyShakeData); \
	DECLARE_FUNCTION(execGetPostureAdjustData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GBWPOWERFULHIT_API UGBWPHBPI_Anim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWPHBPI_Anim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GBWPOWERFULHIT_API, UGBWPHBPI_Anim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWPHBPI_Anim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GBWPOWERFULHIT_API UGBWPHBPI_Anim(UGBWPHBPI_Anim&&); \
	GBWPOWERFULHIT_API UGBWPHBPI_Anim(const UGBWPHBPI_Anim&); \
public: \
	GBWPOWERFULHIT_API virtual ~UGBWPHBPI_Anim();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GBWPOWERFULHIT_API UGBWPHBPI_Anim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GBWPOWERFULHIT_API UGBWPHBPI_Anim(UGBWPHBPI_Anim&&); \
	GBWPOWERFULHIT_API UGBWPHBPI_Anim(const UGBWPHBPI_Anim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GBWPOWERFULHIT_API, UGBWPHBPI_Anim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWPHBPI_Anim); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWPHBPI_Anim) \
	GBWPOWERFULHIT_API virtual ~UGBWPHBPI_Anim();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGBWPHBPI_Anim(); \
	friend struct Z_Construct_UClass_UGBWPHBPI_Anim_Statics; \
public: \
	DECLARE_CLASS(UGBWPHBPI_Anim, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GBWPowerfulHit"), GBWPOWERFULHIT_API) \
	DECLARE_SERIALIZER(UGBWPHBPI_Anim)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGBWPHBPI_Anim() {} \
public: \
	typedef UGBWPHBPI_Anim UClassType; \
	typedef IGBWPHBPI_Anim ThisClass; \
	static bool Execute_GetBodyShakeData(UObject* O, bool ClearData, FGBWPH_Anim_BodyShakeData& BodyShakeData); \
	static bool Execute_GetBodyTwistData(UObject* O, bool ClearData, FGBWPH_Anim_BodyTwistData& BodyTwistData); \
	static bool Execute_GetPostureAdjustData(UObject* O, FGBWPH_Anim_PostureAdjuestData& PostureAdjuestData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_INCLASS_IINTERFACE \
protected: \
	virtual ~IGBWPHBPI_Anim() {} \
public: \
	typedef UGBWPHBPI_Anim UClassType; \
	typedef IGBWPHBPI_Anim ThisClass; \
	static bool Execute_GetBodyShakeData(UObject* O, bool ClearData, FGBWPH_Anim_BodyShakeData& BodyShakeData); \
	static bool Execute_GetBodyTwistData(UObject* O, bool ClearData, FGBWPH_Anim_BodyTwistData& BodyTwistData); \
	static bool Execute_GetPostureAdjustData(UObject* O, FGBWPH_Anim_PostureAdjuestData& PostureAdjuestData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_116_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_119_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GBWPOWERFULHIT_API UClass* StaticClass<class UGBWPHBPI_Anim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
