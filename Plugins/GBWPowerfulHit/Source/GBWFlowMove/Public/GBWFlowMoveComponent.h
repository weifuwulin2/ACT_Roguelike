// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GBW_DA_FlowMove.h"
#include "Components/ActorComponent.h"
#include "RMS/GBWRMSInterface.h"
#include "GBWFlowMoveComponent.generated.h"


UCLASS(Blueprintable, editinlinenew, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GBWFLOWMOVE_API UGBWFlowMoveComponent : public UActorComponent, public IGBWRMSInterface
{
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlowMoveDlg, FGBWFlowMoveState, FlowMoveState);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlowMoveActionDlg, FString, ActionName);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlowMoveEventDlg, EFlowMoveEventOperationType, Type, FString, EventName);
	GENERATED_BODY()

public:	
	UGBWFlowMoveComponent();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
protected:
	virtual void BeginPlay() override;
public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

// BEGIN IGBWRMSInterface
	virtual bool GetRootMotionParamDirect(
		FTransform& Result,
		float SimulationTime,
		float MovementTickTime,
		const ACharacter& Character,
		const UCharacterMovementComponent& MoveComponent) override;
// END IGBWRMSInterface

// BEGIN Dlg
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveDlg OnActive;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveDlg OnActiveFailed;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveDlg OnUpdate;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveDlg OnStop;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveActionDlg OnActionStart;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveActionDlg OnActionUpdate;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveActionDlg OnActionEnd;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "GBW|FlowMove")
	FFlowMoveEventDlg OnFlowMoveEvent;
// END Dlg

	UFUNCTION()
	void OnEvent(FFlowMoveEvent FlowMoveEvent);

// BEGIN Get Input
	/** 
	 * Automatically adjust the MoveVector, ControlVector, and PerceptionVector by specifying a target location.
	 * This is very useful for AI characters.
	 * Note that this method only takes effect when the role has network permissions.
	 * For example, for local players, players on the server, and AI players on the server.
	 * In other words, for AI Characters on the client, this method does not take effect.
	 */
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Input")
	void SetInputValueByTargetPoint(FVector TargetPoint);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Input")
	void SetInputValueByTargetPoint_Server(FVector TargetPoint);
	
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Input")
	void SetMoveVector(FVector NewMoveVector);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Input")
	void SetMoveVector_Server(FVector NewMoveVector);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Input")
	FVector GetMoveVector(bool Consumed=true);

	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Input")
	void SetControlVector(FVector NewControlVector);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Input")
	void SetControlVector_Server(FVector ControlVector);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Input")
	FVector GetControlVector();
	
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Input")
	void SetPerceptionVector(FVector NewPerceptionVector);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Input")
	void SetPerceptionVector_Server(FVector NewPerceptionVector);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Input")
	FVector GetPerceptionVector();
// END Get Input

// BEGIN FlowMove Control
	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Action")
	void StopFlowMove(bool WaitForCurrentActionFinished);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|Action")
	void StopFlowMove_Server(bool WaitForCurrentActionFinished);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Action")
	void StopFlowMove_Multicast(bool WaitForCurrentActionFinished);

	UFUNCTION(Category = "GBW|FlowMove|Action")
	void Stop();
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|Action")
	void Stop_Server();
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Action")
	void Stop_Multicast();
	
	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Action")
	void ActiveFlowMove();
	UFUNCTION()
	void ActiveFlowMove_WithScheme(UGBW_DA_FlowMoveScheme* FlowMoveScheme);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Action")
	void Active_Server(UGBW_DA_FlowMoveScheme* FlowMoveScheme);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Action")
	void Active_Multicast(UGBW_DA_FlowMoveScheme* FlowMoveScheme);
	void Active_Imp(UGBW_DA_FlowMoveScheme* FlowMoveScheme);
	
	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Action")
	void TryDoAction(FString ActionString, bool AsProactiveAction = true);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|Action")
	void TryDoAction_Server(const FString& ActionString, bool AsProactiveAction);

	UFUNCTION(Category = "GBW|FlowMove|Action")
	void TryEndCurrentAction();
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Action")
	void TryEndCurrentAction_Server();
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Action")
	void TryEndCurrentAction_Multicast();
	void TryEndCurrentAction_Imp() const;

	UFUNCTION(Category = "GBW|FlowMove|Action")
	void EndCurrentAction(FString FromActionStr);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Action")
	void EndCurrentAction_Server(const FString& FromActionStr);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Action")
	void EndCurrentAction_Multicast(const FString& FromActionStr);
	void EndCurrentAction_Imp(const FString FromActionStr);
	
	FName GetRandomSectionName(UAnimMontage* Montage,TArray<FName> RandomSections);
	UFUNCTION(Category = "GBW|FlowMove|Anim")
	void PlayMontage(
		FGBWFlowMoveAnimSetting AnimSetting,
		EGBWFlowMoveActionDurationType DurationType,
		float Duration,
		bool StartInServer = false);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Anim")
	void PlayMontage_Server(
		USkeletalMeshComponent* SKMeshComp,
		UAnimMontage* Montage,
		FName SectionName,
		float PlayRate,
		bool StartInServer = false);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Anim")
	void PlayMontage_Multicast(
		USkeletalMeshComponent* SKMeshComp,
		UAnimMontage* Montage,
		FName SectionName,
		float PlayRate,
		bool StartInServer = false);
	bool PlayMontage_Imp(
		USkeletalMeshComponent* SKMeshComp,
		UAnimMontage* Montage,
		FName SectionName,
		float PlayRate);
	
	UFUNCTION(Category = "GBW|FlowMove|Anim")
	void StopMontage(UAnimMontage* Montage, float BlendOutTime = 0.1f);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Anim")
	void StopMontage_Server(UAnimMontage* Montage, float BlendOutTime = 0.1f);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Anim")
	void StopMontage_Multicast(UAnimMontage* Montage, float BlendOutTime = 0.1f);
	void StopMontage_Imp(const UAnimMontage* Montage, float BlendOutTime = 0.1f) const;

	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Event")
	void SetFlowMoveEvent(TEnumAsByte<EFlowMoveEventOperationType> EventOperationType, FString EventName);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Event")
	void SetFlowMoveEvent_Server(EFlowMoveEventOperationType EventOperationType,const FString& EventName);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Event")
	void SetFlowMoveEvent_Multicast(EFlowMoveEventOperationType EventOperationType,const FString& EventName);
	void SetFlowMoveEvent_Imp(EFlowMoveEventOperationType EventOperationType,const FString& EventName);

	UFUNCTION()
	void DoTriggerAction(FFlowMoveTriggerActionSet TriggerAction);
// END FlowMove Control

// BEGIN FlowMove State
	UFUNCTION(Category = "GBW|FlowMove|State")
	void SetFlowMoveScene(
		FGBWFlowMoveScene NewScene,
		FFlowMoveSceneConditionTargetScene TargetScene,
		bool bIsRemoveSupplementaryScene);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|State")
	void SetFlowMoveScene_Server(
		FGBWFlowMoveScene NewScene,
		FFlowMoveSceneConditionTargetScene TargetScene,
		bool bIsRemoveSupplementaryScene);
	void SetFlowMoveScene_Imp(
		FGBWFlowMoveScene NewScene,
		FFlowMoveSceneConditionTargetScene TargetScene,
		bool bIsRemoveSupplementaryScene);

	UFUNCTION(Category = "GBW|FlowMove|State")
	void SetFlowMoveExpectedAction(FString NewExpectedActionStr);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|State")
	void SetFlowMoveExpectedAction_Server(const FString& NewExpectedActionStr);
	void SetFlowMoveExpectedAction_Imp(FString NewExpectedActionStr);

	UFUNCTION(Category = "GBW|FlowMove|State")
	void SetFlowMoveLastAction(FString NewLastActionStr);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|State")
	void SetFlowMoveLastAction_Server(const FString& NewLastActionStr);
	void SetFlowMoveLastAction_Imp(FString NewLastActionStr);

	bool IsAnimActive(const UAnimMontage* Montage) const;
	bool GetSceneAndApply(FFlowMovePerceptronSet PerceptronSet, EGBWFlowMoveEventType EventType);

	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|State")
	void SetAttribute(FString Name, float Value);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|State")
	void SetAttribute_Server(const FString& Name, float Value);
	void SetAttribute_Imp(FString Name, float Value);

	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|State")
	bool GetAttribute(FString Name, FGBWFlowMoveAttribute& Attribute);
// END FlowMove State

// BEGIN FlowMove Tools
	UFUNCTION(BlueprintPure,Category = "GBW|FlowMove|State")
	bool IsLocalPlayer();
	UFUNCTION(BlueprintPure,Category = "GBW|FlowMove|State")
	bool IsAIPlayer();
	UFUNCTION(BlueprintPure,Category = "GBW|FlowMove|State")
	bool IsLocalOwn();
	UFUNCTION(BlueprintPure,Category = "GBW|FlowMove|State")
	bool IsInServer();
	UFUNCTION(BlueprintPure,Category = "GBW|FlowMove|State")
	bool IsFlowMoveActive() const;
	
	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	AActor* GetNetWorkActor(FGuid ActorGuid);
	
	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	void SpawnNetWorkActor(FGuid ActorGuid, TSubclassOf<AActor> ActorClass, FTransform Transform);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|Tools")
	void SpawnNetWorkActor_Server(FGuid ActorGuid, TSubclassOf<AActor> ActorClass, FTransform Transform);
	void SpawnNetWorkActor_Imp(FGuid ActorGuid, TSubclassOf<AActor> ActorClass, FTransform Transform);

	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	void DestroyNetWorkActor(FGuid ActorGuid);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|Tools")
	void DestroyNetWorkActor_Server(FGuid ActorGuid);
	void DestroyNetWorkActor_Imp(FGuid ActorGuid);

	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	void SetNetWorkActorLocation(FGuid ActorGuid, FVector NewLocation);
	UFUNCTION(Reliable,Server,Category = "GBW|FlowMove|Tools")
	void SetNetWorkActorLocation_Server(FGuid ActorGuid, FVector NewLocation);
	void SetNetWorkActorLocation_Imp(FGuid ActorGuid, FVector NewLocation);

	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	void ResetCapsuleAndMesh();
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Tools")
	void ResetCapsuleAndMesh_Server();
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Tools")
	void ResetCapsuleAndMesh_Multicast();
	void ResetCapsuleAndMesh_Imp() const;

	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	void SetCapsuleAndKeepMesh(float NewHeight);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Tools")
	void SetCapsuleAndKeepMesh_Server(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Tools")
	void SetCapsuleAndKeepMesh_Multicast(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz);
	void SetCapsuleAndKeepMesh_Imp(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz) const;

	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	void AdjustCapsuleAndKeepMeshByTargetLocation(FGBWFlowMoveScene FlowMoveScene);
	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Tools")
	void AdjustCapsuleAndKeepMeshByCurrentLocation(FGBWFlowMoveScene FlowMoveScene);
// END FlowMove Tools

// BEGIN Config
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="FlowMoveSettings")
	TSoftObjectPtr<UGBW_DA_FlowMoveConfig> FlowMoveConfigDA = TSoftObjectPtr<UGBW_DA_FlowMoveConfig>();
	UPROPERTY()
	bool bIsInitConfigDA = false;
	UPROPERTY()
	FSoftObjectPath FlowMoveConfigObjectPath;
	UPROPERTY()
	UGBW_DA_FlowMoveConfig* FlowMoveConfig;
	
	UFUNCTION(BlueprintCallable,Category = "GBW|FlowMove|Config")
	void SetFlowMoveConfig(TSoftObjectPtr<UGBW_DA_FlowMoveConfig> NewFlowMoveConfig);
	UFUNCTION(Reliable, Server, Category = "GBW|FlowMove|Config")
	void SetFlowMoveConfig_Server(FSoftObjectPath NewFlowMoveConfigObjectPath);
	UFUNCTION(Reliable, NetMulticast, Category = "GBW|FlowMove|Config")
	void SetFlowMoveConfig_Multicast(FSoftObjectPath NewFlowMoveConfigObjectPath);
	void SetFlowMoveConfig_Imp(FSoftObjectPath NewFlowMoveConfigObjectPath);
	void OnFlowMoveConfigLoad();
// END Config
	
//BEGIN Runtime 
	UPROPERTY(BlueprintReadOnly, Replicated,Category = "GBW|FlowMove")
	FGBWFlowMoveState TaskState;
	UPROPERTY(Replicated)
	TArray<FGuid> NetWorkActorGuids;
	UPROPERTY(Replicated)
	TArray<AActor*> NetWorkActors;
	
	UPROPERTY()
	bool bIsNetInit = false;
	UPROPERTY()
	TEnumAsByte<ERootMotionMode::Type> CurrentActionRootMotionModeCache = ERootMotionMode::Type::RootMotionFromMontagesOnly;
	UPROPERTY()
	USkeletalMeshComponent* SKMeshCompCache = nullptr;
	UPROPERTY()
	UAnimInstance* AnimInstanceCache = nullptr;
	UPROPERTY()
	TMap<UAnimMontage*,FName> LastMontageSectionNameCache;
	float ActionDurationCache = 0.0f;
	float AnimPlayRateCache = 1.0f;
	float AnimPlayStartPositionCache = 0.0f;
	float AnimPlayEndPositionCache = 0.0f;
	float CapsuleHalfHeightCache = 90.0f;
	float CapsuleRadiusCache = 30.0f;
	FVector MeshRelativeLocationCache = FVector(0,0,-92.0f);
//END Runtime
	
private:

	bool bIsLocalPlayer = false;
	bool bIsLocalPlayerInit = false;
	
	UPROPERTY(Replicated)
	bool bIsAIPlayer = false;
	UPROPERTY(Replicated)
	bool bIsAIPlayerInit = false;
	
	bool bIsLocalOwn = false;
	bool bIsLocalOwnInit = false;
	bool bIsInServer = false;
	bool bIsInServerInit = false;
	bool bIsFlowMoveActive= false;
	bool bIsFlowMoveActiveInit = false;
	
//BEGIN Runtime
	//FlowMove Tick
	void FlowMoveTick(float DeltaTime);
	//Check Stop
	void CheckStop();
	//Check DA
	void CheckDA();
	//Check Input
	void CheckInput(bool bReset = false);
	//Check Valid
	bool CheckUpdateValid();
	//Update CharacterNetState
	void UpdateCharacterNetState(float DeltaTime);
	//Update Script
	void UpdateScript(float DeltaTime);
	//Update Scene
	void UpdateScene(float DeltaTime);
	//Update Expected Action
	void UpdateExpectedAction(float DeltaTime);
	//Update Condition Action
	void UpdateConditionAction(float DeltaTime);
	//Try Do Expected Action
	bool TryDoExpectedAction(float DeltaTime);
	UFUNCTION(Server,Reliable)
	void DoAction_Server(const FString& ActionStr, bool AsProactiveAction);
	UFUNCTION(NetMulticast,Reliable)
	void DoAction_Multicast(const FString& ActionStr);
	//Update Current Action  //Update RMS
	void UpdateCurrentAction(float DeltaTime);
	//Update ConditionTrigger
	void UpdateConditionTrigger(float DeltaTime);
//END Runtime

	void OnActiveEvent();
	void OnStopEvent();
	void OnActionEndEvent(FString ActionName);
	bool IsLocked(const FString ForActionStr) const;
	void Recovery();
};
