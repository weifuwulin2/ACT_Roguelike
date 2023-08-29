// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GBWFlowMoveComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UGBW_DA_FlowMoveConfig;
class UGBW_DA_FlowMoveScheme;
class USkeletalMeshComponent;
enum class EGBWFlowMoveActionDurationType : uint8;
struct FFlowMoveEvent;
struct FFlowMoveSceneConditionTargetScene;
struct FFlowMoveTriggerActionSet;
struct FGBWFlowMoveAnimSetting;
struct FGBWFlowMoveAttribute;
struct FGBWFlowMoveScene;
struct FGBWFlowMoveState;
struct FGuid;
struct FSoftObjectPath;
#ifdef GBWFLOWMOVE_GBWFlowMoveComponent_generated_h
#error "GBWFlowMoveComponent.generated.h already included, missing '#pragma once' in GBWFlowMoveComponent.h"
#endif
#define GBWFLOWMOVE_GBWFlowMoveComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_15_DELEGATE \
static void FFlowMoveDlg_DelegateWrapper(const FMulticastScriptDelegate& FlowMoveDlg, FGBWFlowMoveState FlowMoveState);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_16_DELEGATE \
static void FFlowMoveActionDlg_DelegateWrapper(const FMulticastScriptDelegate& FlowMoveActionDlg, const FString& ActionName);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_17_DELEGATE \
static void FFlowMoveEventDlg_DelegateWrapper(const FMulticastScriptDelegate& FlowMoveEventDlg, EFlowMoveEventOperationType Type, const FString& EventName);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_RPC_WRAPPERS \
	virtual void DoAction_Multicast_Implementation(const FString& ActionStr); \
	virtual void DoAction_Server_Implementation(const FString& ActionStr, bool AsProactiveAction); \
	virtual void SetFlowMoveConfig_Multicast_Implementation(FSoftObjectPath NewFlowMoveConfigObjectPath); \
	virtual void SetFlowMoveConfig_Server_Implementation(FSoftObjectPath NewFlowMoveConfigObjectPath); \
	virtual void SetCapsuleAndKeepMesh_Multicast_Implementation(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz); \
	virtual void SetCapsuleAndKeepMesh_Server_Implementation(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz); \
	virtual void ResetCapsuleAndMesh_Multicast_Implementation(); \
	virtual void ResetCapsuleAndMesh_Server_Implementation(); \
	virtual void SetNetWorkActorLocation_Server_Implementation(FGuid ActorGuid, FVector NewLocation); \
	virtual void DestroyNetWorkActor_Server_Implementation(FGuid ActorGuid); \
	virtual void SpawnNetWorkActor_Server_Implementation(FGuid ActorGuid, TSubclassOf<AActor>  ActorClass, FTransform Transform); \
	virtual void SetAttribute_Server_Implementation(const FString& Name, float Value); \
	virtual void SetFlowMoveLastAction_Server_Implementation(const FString& NewLastActionStr); \
	virtual void SetFlowMoveExpectedAction_Server_Implementation(const FString& NewExpectedActionStr); \
	virtual void SetFlowMoveScene_Server_Implementation(FGBWFlowMoveScene NewScene, FFlowMoveSceneConditionTargetScene TargetScene, bool bIsRemoveSupplementaryScene); \
	virtual void SetFlowMoveEvent_Multicast_Implementation(EFlowMoveEventOperationType EventOperationType, const FString& EventName); \
	virtual void SetFlowMoveEvent_Server_Implementation(EFlowMoveEventOperationType EventOperationType, const FString& EventName); \
	virtual void StopMontage_Multicast_Implementation(UAnimMontage* Montage, float BlendOutTime); \
	virtual void StopMontage_Server_Implementation(UAnimMontage* Montage, float BlendOutTime); \
	virtual void PlayMontage_Multicast_Implementation(USkeletalMeshComponent* SKMeshComp, UAnimMontage* Montage, FName SectionName, float PlayRate, bool StartInServer); \
	virtual void PlayMontage_Server_Implementation(USkeletalMeshComponent* SKMeshComp, UAnimMontage* Montage, FName SectionName, float PlayRate, bool StartInServer); \
	virtual void EndCurrentAction_Multicast_Implementation(const FString& FromActionStr); \
	virtual void EndCurrentAction_Server_Implementation(const FString& FromActionStr); \
	virtual void TryEndCurrentAction_Multicast_Implementation(); \
	virtual void TryEndCurrentAction_Server_Implementation(); \
	virtual void TryDoAction_Server_Implementation(const FString& ActionString, bool AsProactiveAction); \
	virtual void Active_Multicast_Implementation(UGBW_DA_FlowMoveScheme* FlowMoveScheme); \
	virtual void Active_Server_Implementation(UGBW_DA_FlowMoveScheme* FlowMoveScheme); \
	virtual void Stop_Multicast_Implementation(); \
	virtual void Stop_Server_Implementation(); \
	virtual void StopFlowMove_Multicast_Implementation(bool WaitForCurrentActionFinished); \
	virtual void StopFlowMove_Server_Implementation(bool WaitForCurrentActionFinished); \
	virtual void SetPerceptionVector_Server_Implementation(FVector NewPerceptionVector); \
	virtual void SetControlVector_Server_Implementation(FVector ControlVector); \
	virtual void SetMoveVector_Server_Implementation(FVector NewMoveVector); \
	virtual void SetInputValueByTargetPoint_Server_Implementation(FVector TargetPoint); \
 \
	DECLARE_FUNCTION(execDoAction_Multicast); \
	DECLARE_FUNCTION(execDoAction_Server); \
	DECLARE_FUNCTION(execSetFlowMoveConfig_Multicast); \
	DECLARE_FUNCTION(execSetFlowMoveConfig_Server); \
	DECLARE_FUNCTION(execSetFlowMoveConfig); \
	DECLARE_FUNCTION(execAdjustCapsuleAndKeepMeshByCurrentLocation); \
	DECLARE_FUNCTION(execAdjustCapsuleAndKeepMeshByTargetLocation); \
	DECLARE_FUNCTION(execSetCapsuleAndKeepMesh_Multicast); \
	DECLARE_FUNCTION(execSetCapsuleAndKeepMesh_Server); \
	DECLARE_FUNCTION(execSetCapsuleAndKeepMesh); \
	DECLARE_FUNCTION(execResetCapsuleAndMesh_Multicast); \
	DECLARE_FUNCTION(execResetCapsuleAndMesh_Server); \
	DECLARE_FUNCTION(execResetCapsuleAndMesh); \
	DECLARE_FUNCTION(execSetNetWorkActorLocation_Server); \
	DECLARE_FUNCTION(execSetNetWorkActorLocation); \
	DECLARE_FUNCTION(execDestroyNetWorkActor_Server); \
	DECLARE_FUNCTION(execDestroyNetWorkActor); \
	DECLARE_FUNCTION(execSpawnNetWorkActor_Server); \
	DECLARE_FUNCTION(execSpawnNetWorkActor); \
	DECLARE_FUNCTION(execGetNetWorkActor); \
	DECLARE_FUNCTION(execIsFlowMoveActive); \
	DECLARE_FUNCTION(execIsInServer); \
	DECLARE_FUNCTION(execIsLocalOwn); \
	DECLARE_FUNCTION(execIsAIPlayer); \
	DECLARE_FUNCTION(execIsLocalPlayer); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execSetAttribute_Server); \
	DECLARE_FUNCTION(execSetAttribute); \
	DECLARE_FUNCTION(execSetFlowMoveLastAction_Server); \
	DECLARE_FUNCTION(execSetFlowMoveLastAction); \
	DECLARE_FUNCTION(execSetFlowMoveExpectedAction_Server); \
	DECLARE_FUNCTION(execSetFlowMoveExpectedAction); \
	DECLARE_FUNCTION(execSetFlowMoveScene_Server); \
	DECLARE_FUNCTION(execSetFlowMoveScene); \
	DECLARE_FUNCTION(execDoTriggerAction); \
	DECLARE_FUNCTION(execSetFlowMoveEvent_Multicast); \
	DECLARE_FUNCTION(execSetFlowMoveEvent_Server); \
	DECLARE_FUNCTION(execSetFlowMoveEvent); \
	DECLARE_FUNCTION(execStopMontage_Multicast); \
	DECLARE_FUNCTION(execStopMontage_Server); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execPlayMontage_Multicast); \
	DECLARE_FUNCTION(execPlayMontage_Server); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execEndCurrentAction_Multicast); \
	DECLARE_FUNCTION(execEndCurrentAction_Server); \
	DECLARE_FUNCTION(execEndCurrentAction); \
	DECLARE_FUNCTION(execTryEndCurrentAction_Multicast); \
	DECLARE_FUNCTION(execTryEndCurrentAction_Server); \
	DECLARE_FUNCTION(execTryEndCurrentAction); \
	DECLARE_FUNCTION(execTryDoAction_Server); \
	DECLARE_FUNCTION(execTryDoAction); \
	DECLARE_FUNCTION(execActive_Multicast); \
	DECLARE_FUNCTION(execActive_Server); \
	DECLARE_FUNCTION(execActiveFlowMove_WithScheme); \
	DECLARE_FUNCTION(execActiveFlowMove); \
	DECLARE_FUNCTION(execStop_Multicast); \
	DECLARE_FUNCTION(execStop_Server); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStopFlowMove_Multicast); \
	DECLARE_FUNCTION(execStopFlowMove_Server); \
	DECLARE_FUNCTION(execStopFlowMove); \
	DECLARE_FUNCTION(execGetPerceptionVector); \
	DECLARE_FUNCTION(execSetPerceptionVector_Server); \
	DECLARE_FUNCTION(execSetPerceptionVector); \
	DECLARE_FUNCTION(execGetControlVector); \
	DECLARE_FUNCTION(execSetControlVector_Server); \
	DECLARE_FUNCTION(execSetControlVector); \
	DECLARE_FUNCTION(execGetMoveVector); \
	DECLARE_FUNCTION(execSetMoveVector_Server); \
	DECLARE_FUNCTION(execSetMoveVector); \
	DECLARE_FUNCTION(execSetInputValueByTargetPoint_Server); \
	DECLARE_FUNCTION(execSetInputValueByTargetPoint); \
	DECLARE_FUNCTION(execOnEvent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DoAction_Multicast_Implementation(const FString& ActionStr); \
	virtual void DoAction_Server_Implementation(const FString& ActionStr, bool AsProactiveAction); \
	virtual void SetFlowMoveConfig_Multicast_Implementation(FSoftObjectPath NewFlowMoveConfigObjectPath); \
	virtual void SetFlowMoveConfig_Server_Implementation(FSoftObjectPath NewFlowMoveConfigObjectPath); \
	virtual void SetCapsuleAndKeepMesh_Multicast_Implementation(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz); \
	virtual void SetCapsuleAndKeepMesh_Server_Implementation(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz); \
	virtual void ResetCapsuleAndMesh_Multicast_Implementation(); \
	virtual void ResetCapsuleAndMesh_Server_Implementation(); \
	virtual void SetNetWorkActorLocation_Server_Implementation(FGuid ActorGuid, FVector NewLocation); \
	virtual void DestroyNetWorkActor_Server_Implementation(FGuid ActorGuid); \
	virtual void SpawnNetWorkActor_Server_Implementation(FGuid ActorGuid, TSubclassOf<AActor>  ActorClass, FTransform Transform); \
	virtual void SetAttribute_Server_Implementation(const FString& Name, float Value); \
	virtual void SetFlowMoveLastAction_Server_Implementation(const FString& NewLastActionStr); \
	virtual void SetFlowMoveExpectedAction_Server_Implementation(const FString& NewExpectedActionStr); \
	virtual void SetFlowMoveScene_Server_Implementation(FGBWFlowMoveScene NewScene, FFlowMoveSceneConditionTargetScene TargetScene, bool bIsRemoveSupplementaryScene); \
	virtual void SetFlowMoveEvent_Multicast_Implementation(EFlowMoveEventOperationType EventOperationType, const FString& EventName); \
	virtual void SetFlowMoveEvent_Server_Implementation(EFlowMoveEventOperationType EventOperationType, const FString& EventName); \
	virtual void StopMontage_Multicast_Implementation(UAnimMontage* Montage, float BlendOutTime); \
	virtual void StopMontage_Server_Implementation(UAnimMontage* Montage, float BlendOutTime); \
	virtual void PlayMontage_Multicast_Implementation(USkeletalMeshComponent* SKMeshComp, UAnimMontage* Montage, FName SectionName, float PlayRate, bool StartInServer); \
	virtual void PlayMontage_Server_Implementation(USkeletalMeshComponent* SKMeshComp, UAnimMontage* Montage, FName SectionName, float PlayRate, bool StartInServer); \
	virtual void EndCurrentAction_Multicast_Implementation(const FString& FromActionStr); \
	virtual void EndCurrentAction_Server_Implementation(const FString& FromActionStr); \
	virtual void TryEndCurrentAction_Multicast_Implementation(); \
	virtual void TryEndCurrentAction_Server_Implementation(); \
	virtual void TryDoAction_Server_Implementation(const FString& ActionString, bool AsProactiveAction); \
	virtual void Active_Multicast_Implementation(UGBW_DA_FlowMoveScheme* FlowMoveScheme); \
	virtual void Active_Server_Implementation(UGBW_DA_FlowMoveScheme* FlowMoveScheme); \
	virtual void Stop_Multicast_Implementation(); \
	virtual void Stop_Server_Implementation(); \
	virtual void StopFlowMove_Multicast_Implementation(bool WaitForCurrentActionFinished); \
	virtual void StopFlowMove_Server_Implementation(bool WaitForCurrentActionFinished); \
	virtual void SetPerceptionVector_Server_Implementation(FVector NewPerceptionVector); \
	virtual void SetControlVector_Server_Implementation(FVector ControlVector); \
	virtual void SetMoveVector_Server_Implementation(FVector NewMoveVector); \
	virtual void SetInputValueByTargetPoint_Server_Implementation(FVector TargetPoint); \
 \
	DECLARE_FUNCTION(execDoAction_Multicast); \
	DECLARE_FUNCTION(execDoAction_Server); \
	DECLARE_FUNCTION(execSetFlowMoveConfig_Multicast); \
	DECLARE_FUNCTION(execSetFlowMoveConfig_Server); \
	DECLARE_FUNCTION(execSetFlowMoveConfig); \
	DECLARE_FUNCTION(execAdjustCapsuleAndKeepMeshByCurrentLocation); \
	DECLARE_FUNCTION(execAdjustCapsuleAndKeepMeshByTargetLocation); \
	DECLARE_FUNCTION(execSetCapsuleAndKeepMesh_Multicast); \
	DECLARE_FUNCTION(execSetCapsuleAndKeepMesh_Server); \
	DECLARE_FUNCTION(execSetCapsuleAndKeepMesh); \
	DECLARE_FUNCTION(execResetCapsuleAndMesh_Multicast); \
	DECLARE_FUNCTION(execResetCapsuleAndMesh_Server); \
	DECLARE_FUNCTION(execResetCapsuleAndMesh); \
	DECLARE_FUNCTION(execSetNetWorkActorLocation_Server); \
	DECLARE_FUNCTION(execSetNetWorkActorLocation); \
	DECLARE_FUNCTION(execDestroyNetWorkActor_Server); \
	DECLARE_FUNCTION(execDestroyNetWorkActor); \
	DECLARE_FUNCTION(execSpawnNetWorkActor_Server); \
	DECLARE_FUNCTION(execSpawnNetWorkActor); \
	DECLARE_FUNCTION(execGetNetWorkActor); \
	DECLARE_FUNCTION(execIsFlowMoveActive); \
	DECLARE_FUNCTION(execIsInServer); \
	DECLARE_FUNCTION(execIsLocalOwn); \
	DECLARE_FUNCTION(execIsAIPlayer); \
	DECLARE_FUNCTION(execIsLocalPlayer); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execSetAttribute_Server); \
	DECLARE_FUNCTION(execSetAttribute); \
	DECLARE_FUNCTION(execSetFlowMoveLastAction_Server); \
	DECLARE_FUNCTION(execSetFlowMoveLastAction); \
	DECLARE_FUNCTION(execSetFlowMoveExpectedAction_Server); \
	DECLARE_FUNCTION(execSetFlowMoveExpectedAction); \
	DECLARE_FUNCTION(execSetFlowMoveScene_Server); \
	DECLARE_FUNCTION(execSetFlowMoveScene); \
	DECLARE_FUNCTION(execDoTriggerAction); \
	DECLARE_FUNCTION(execSetFlowMoveEvent_Multicast); \
	DECLARE_FUNCTION(execSetFlowMoveEvent_Server); \
	DECLARE_FUNCTION(execSetFlowMoveEvent); \
	DECLARE_FUNCTION(execStopMontage_Multicast); \
	DECLARE_FUNCTION(execStopMontage_Server); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execPlayMontage_Multicast); \
	DECLARE_FUNCTION(execPlayMontage_Server); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execEndCurrentAction_Multicast); \
	DECLARE_FUNCTION(execEndCurrentAction_Server); \
	DECLARE_FUNCTION(execEndCurrentAction); \
	DECLARE_FUNCTION(execTryEndCurrentAction_Multicast); \
	DECLARE_FUNCTION(execTryEndCurrentAction_Server); \
	DECLARE_FUNCTION(execTryEndCurrentAction); \
	DECLARE_FUNCTION(execTryDoAction_Server); \
	DECLARE_FUNCTION(execTryDoAction); \
	DECLARE_FUNCTION(execActive_Multicast); \
	DECLARE_FUNCTION(execActive_Server); \
	DECLARE_FUNCTION(execActiveFlowMove_WithScheme); \
	DECLARE_FUNCTION(execActiveFlowMove); \
	DECLARE_FUNCTION(execStop_Multicast); \
	DECLARE_FUNCTION(execStop_Server); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStopFlowMove_Multicast); \
	DECLARE_FUNCTION(execStopFlowMove_Server); \
	DECLARE_FUNCTION(execStopFlowMove); \
	DECLARE_FUNCTION(execGetPerceptionVector); \
	DECLARE_FUNCTION(execSetPerceptionVector_Server); \
	DECLARE_FUNCTION(execSetPerceptionVector); \
	DECLARE_FUNCTION(execGetControlVector); \
	DECLARE_FUNCTION(execSetControlVector_Server); \
	DECLARE_FUNCTION(execSetControlVector); \
	DECLARE_FUNCTION(execGetMoveVector); \
	DECLARE_FUNCTION(execSetMoveVector_Server); \
	DECLARE_FUNCTION(execSetMoveVector); \
	DECLARE_FUNCTION(execSetInputValueByTargetPoint_Server); \
	DECLARE_FUNCTION(execSetInputValueByTargetPoint); \
	DECLARE_FUNCTION(execOnEvent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGBWFlowMoveComponent(); \
	friend struct Z_Construct_UClass_UGBWFlowMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UGBWFlowMoveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GBWFlowMove"), NO_API) \
	DECLARE_SERIALIZER(UGBWFlowMoveComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGBWFlowMoveComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TaskState=NETFIELD_REP_START, \
		NetWorkActorGuids, \
		NetWorkActors, \
		bIsAIPlayer, \
		bIsAIPlayerInit, \
		NETFIELD_REP_END=bIsAIPlayerInit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGBWFlowMoveComponent(); \
	friend struct Z_Construct_UClass_UGBWFlowMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UGBWFlowMoveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GBWFlowMove"), NO_API) \
	DECLARE_SERIALIZER(UGBWFlowMoveComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGBWFlowMoveComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TaskState=NETFIELD_REP_START, \
		NetWorkActorGuids, \
		NetWorkActors, \
		bIsAIPlayer, \
		bIsAIPlayerInit, \
		NETFIELD_REP_END=bIsAIPlayerInit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGBWFlowMoveComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGBWFlowMoveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWFlowMoveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWFlowMoveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWFlowMoveComponent(UGBWFlowMoveComponent&&); \
	NO_API UGBWFlowMoveComponent(const UGBWFlowMoveComponent&); \
public: \
	NO_API virtual ~UGBWFlowMoveComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGBWFlowMoveComponent(UGBWFlowMoveComponent&&); \
	NO_API UGBWFlowMoveComponent(const UGBWFlowMoveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGBWFlowMoveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGBWFlowMoveComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGBWFlowMoveComponent) \
	NO_API virtual ~UGBWFlowMoveComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GBWFLOWMOVE_API UClass* StaticClass<class UGBWFlowMoveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWFlowMove_Public_GBWFlowMoveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
