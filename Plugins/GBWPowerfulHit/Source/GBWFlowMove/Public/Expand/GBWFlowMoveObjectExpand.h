// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GBWFlowMoveComponent.h"
#include "GBWFlowMoveObjects.h"
#include "Kismet/KismetMathLibrary.h"
#include "RMS/GBWRMSBPFuncLib.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "GBWFlowMoveObjectExpand.generated.h"

//BEGIN Perceptron
USTRUCT(BlueprintType)
struct FGBWFlowMoveDefaultPerceptionSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	FGBWFlowMoveTraceSetting TraceSetting = FGBWFlowMoveTraceSetting();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 60, ForceUnits = "cm"))
	float PrejudgeDistance = 150.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 60, ForceUnits = "cm"))
	float TraceDetectorHeight = 80.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 100, ForceUnits = "cm"))
	float CrawlerMaxTraceDistance = 300.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "cm"))
	float TargetPointMaxDownDistance = 500.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 30, ClampMax = 180, ForceUnits = "°"))
	float DirectiveCoverageAngle = 90.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", DisplayName="CrawlerCount / HalfDirectiveCoverageAngle", Meta = (ClampMin = 1))
	int CrawlerCount = 2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 30.0f, ForceUnits = "cm"))
	float BeginLedgeDownForwardTraceDistanceThreshold = 90.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 32))
	int MaxCrawlerStep = 32;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings", DisplayName="SceneTag_Free")
	FName FreeTag = "Free";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings", DisplayName="SceneTag_HitWall")
	FName HitWallTag = "HitWall";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings", DisplayName="SceneTag_Ledge")
	FName LedgeTag = "Ledge";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings", DisplayName="SceneTag_Hole")
	FName HoleTag = "Hole";

	FGBWFlowMoveDefaultPerceptionSetting(){}
};
UCLASS(Blueprintable, meta = (DisplayName = "_Default Perceptron"))
class GBWFLOWMOVE_API UGBWFlowMovePerceptron_Default : public UGBWFlowMovePerceptron_Base
{
	GENERATED_BODY()
public:
	UGBWFlowMovePerceptron_Default();
	
	virtual bool GetPerceptionResult_Implementation(
		FGBWFlowMoveScene& FlowMoveScene,
		EGBWFlowMoveEventType EventType,
		ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FGBWFlowMoveDefaultPerceptionSetting ThePerceptionSetting = FGBWFlowMoveDefaultPerceptionSetting();

	bool FindWay(
		FGBWFlowMoveScene& FlowMoveScene,
		ACharacter* Character,
		UGBWFlowMoveComponent* FlowMoveComponent,
		FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting) const;

	static TArray<FVector> GenerateCrawlerDirection(float TraceAngle, FVector TraceVector, int InterpCount = 2);
	bool TestWay(FHitResult& TryHitResult, FHitResult& SuccessHitResult, ACharacter* Character, FVector Start, FVector End, float TraceHeight,FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting) const;
	void FindBottleneck(
		ACharacter* Character,
		FVector Start,
		FVector End,
		FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting,
		TArray<FHitResult>& WayHitResultDown,
		TArray<FHitResult>& WayHitResultUp,
		float& MaxHeightHitResult_High,
		FHitResult& MaxHeightHitResult_HighResult,
		float& MaxHeightHitResult_Low,
		FHitResult& MaxHeightHitResult_LowResult,
		float& MinHeightHitResult_Low,
		FHitResult& MinHeightHitResult_LowResult,
		float& WayMinHeight,
		FHitResult& MinZoneHitResult_DownResult,
		FHitResult& MinZoneHitResult_UpResult
		) const;
	static float GetSlope(const ACharacter* Character, TArray<FHitResult> HitResultArr, bool& bIsWalkable);
	bool TestBarrierFree(ACharacter* Character,const FHitResult TargetHitResultDown, FHitResult& WayHitResult, TArray<FHitResult>& WayHitResultDownArr,float TraceHeight, FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting) const;
	static FGBWFlowMoveScene MakeFinalFlowMoveScene(ACharacter* Character, FGBWFlowMoveScene InFlowMoveScene, FVector TraceDirection, FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting);
};

USTRUCT(BlueprintType)
struct FGBWFlowMoveFindTheBestFootholdPerceptionSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	bool SimpleDebug = false;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	FGBWFlowMoveTraceSetting TraceSetting = FGBWFlowMoveTraceSetting();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 60, ForceUnits = "cm"))
	float PrejudgeDistance = 400.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 100, ForceUnits = "cm"))
	float CrawlerMaxTraceDistance = 400.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "cm"))
	float TargetPointMaxDistance = 400.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", DisplayName="CrawlerCount / HalfDirectiveCoverageAngle", Meta = (ClampMin = 1))
	int CrawlerCount = 16;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings", DisplayName="SceneTag_Free")
	FName SuccessTag = "FindFoothold";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings", DisplayName="SceneTag_HitWall")
	FName FailedTag = "NotFindFoothold";

	FGBWFlowMoveFindTheBestFootholdPerceptionSetting(){}
};
UCLASS(Blueprintable, meta = (DisplayName = "_FindTheBestFoothold"))
class GBWFLOWMOVE_API UGBWFlowMovePerceptron_FindTheBestFoothold : public UGBWFlowMovePerceptron_Base
{
	GENERATED_BODY()
public:
	UGBWFlowMovePerceptron_FindTheBestFoothold();
	
	virtual bool GetPerceptionResult_Implementation(
		FGBWFlowMoveScene& FlowMoveScene,
		EGBWFlowMoveEventType EventType,
		ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FGBWFlowMoveFindTheBestFootholdPerceptionSetting ThePerceptionSetting = FGBWFlowMoveFindTheBestFootholdPerceptionSetting();

	bool FindWay(
		FGBWFlowMoveScene& FlowMoveScene,
		ACharacter* Character,
		UGBWFlowMoveComponent* FlowMoveComponent,
		FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting) const;

	static TArray<FVector> GenerateCrawlerDirection(FVector BeginTraceVector, int InterpCount = 16);
	bool TestWay(FHitResult& TryHitResult,
		ACharacter* Character,
		FVector Start,
		FVector End,
		FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting) const;
	void FindBottleneck(
		ACharacter* Character,
		FVector Start,
		FVector End,
		FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting,
		TArray<FHitResult>& WayHitResultDown,
		TArray<FHitResult>& WayHitResultUp,
		float& MaxHeightHitResult_High,
		FHitResult& MaxHeightHitResult_HighResult,
		float& MaxHeightHitResult_Low,
		FHitResult& MaxHeightHitResult_LowResult,
		float& MinHeightHitResult_Low,
		FHitResult& MinHeightHitResult_LowResult,
		float& WayMinHeight,
		FHitResult& MinZoneHitResult_DownResult,
		FHitResult& MinZoneHitResult_UpResult
		) const;
	static FGBWFlowMoveScene MakeFinalFlowMoveScene(ACharacter* Character, FGBWFlowMoveScene InFlowMoveScene, FVector TraceDirection, FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting);
};

USTRUCT(BlueprintType)
struct FGBWFlowMoveGetTargetPointByProjectilePerceptionSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	TSubclassOf<USceneComponent> LaunchFromComponentClass = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	FName LaunchFromComponentTag = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	FName LaunchFromComponentSocketName = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	FTransform LaunchFromComponentOffset = FTransform();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "s"))
	float DelayLaunch = 0.35f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "cm"))
	float ProjectileRadius = 15.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "cm/s"))
	float ProjectileSpeed = 4500.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "cm"))
	float ProjectileMaxFlyDistance = 2000.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	TSubclassOf<AActor> ProjectileActorClass = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception")
	bool GetLastProjectileLocationAsTargetWhenNotHit = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "°"))
	float TraceAngleThreshold = 180.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	FGBWFlowMoveTraceSetting TraceSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings")
	FName FailedTag = "NoTarget";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings")
	FName SuccessTag = "GetTarget";

	FGBWFlowMoveGetTargetPointByProjectilePerceptionSetting(){}
};
UCLASS(Blueprintable, meta = (DisplayName = "_Get Target By Projectile"))
class GBWFLOWMOVE_API UGBWFlowMovePerceptron_GetTargetPointByProjectile : public UGBWFlowMovePerceptron_Base
{
	GENERATED_BODY()
public:
	UGBWFlowMovePerceptron_GetTargetPointByProjectile();
	
	virtual bool GetPerceptionResult_Implementation(
		FGBWFlowMoveScene& FlowMoveScene,
		EGBWFlowMoveEventType EventType,
		ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FGBWFlowMoveGetTargetPointByProjectilePerceptionSetting ThePerceptionSetting = FGBWFlowMoveGetTargetPointByProjectilePerceptionSetting();
	
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove")
	bool GetFlowScene(
		FGBWFlowMoveScene& FlowMoveScene,
		EGBWFlowMoveEventType EventType,
		ACharacter* Character = nullptr,
		FGBWFlowMoveGetTargetPointByProjectilePerceptionSetting PerceptionSetting = FGBWFlowMoveGetTargetPointByProjectilePerceptionSetting(),
		FVector InputVector = FVector::ZeroVector,
		FVector ControlVector = FVector::ZeroVector,
		UGBWFlowMoveComponent* FlowMoveComponent = nullptr);

private:
	bool bIsActive = false;
	bool bIsFinished = false;
	FVector LastProjectileLocation = FVector::ZeroVector;
	FVector FlyDirection = FVector::ZeroVector;
	float Timer = 0.0f;
	float FlyDistance = 0.0f;
	FGuid ProjectileActorGUID = FGuid();
	bool bIsProjectileActorInited = false;
	
	void ResetState(UGBWFlowMoveComponent* FlowMoveComponent);

	FVector GetLaunchLocation(const ACharacter* Character) const;

	void UpdateProjectileActor(float DeltaTime, UGBWFlowMoveComponent* FlowMoveComponent);
};

USTRUCT(BlueprintType)
struct FGBWFlowMoveFindTargetPointByActorPerceptionSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Perception")
	TSubclassOf<UUserWidget> SightWidgetClass_NoTarget;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Perception")
	TSubclassOf<UUserWidget> SightWidgetClass_GetTarget;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Perception")
	TSubclassOf<UUserWidget> TargetWidgetClass;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Perception")
	USoundBase* Sound_GetTarget = nullptr;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "cm"))
	float PrejudgeDistance = 2000.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Perception", Meta = (ClampMin = 0, ForceUnits = "°"))
	float TraceAngleThreshold = 180.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	FGBWFlowMoveTraceSetting TraceSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings")
	FName FailedTag = "NoTarget";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResultSettings")
	FName SuccessTag = "GetTarget";

	FGBWFlowMoveFindTargetPointByActorPerceptionSetting(){}
};
UCLASS(Blueprintable, meta = (DisplayName = "_Find Target By Actor"))
class GBWFLOWMOVE_API UGBWFlowMovePerceptron_FindTargetPointByActor : public UGBWFlowMovePerceptron_Base
{
	GENERATED_BODY()
public:
	UGBWFlowMovePerceptron_FindTargetPointByActor();
	
	virtual bool GetPerceptionResult_Implementation(
		FGBWFlowMoveScene& FlowMoveScene,
		EGBWFlowMoveEventType EventType,
		ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FGBWFlowMoveFindTargetPointByActorPerceptionSetting ThePerceptionSetting = FGBWFlowMoveFindTargetPointByActorPerceptionSetting();
	
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove")
	bool GetFlowScene(
		FGBWFlowMoveScene& FlowMoveScene,
		ACharacter* Character = nullptr,
		FGBWFlowMoveFindTargetPointByActorPerceptionSetting PerceptionSetting = FGBWFlowMoveFindTargetPointByActorPerceptionSetting(),
		FVector InputVector = FVector::ZeroVector,
		FVector ControlVector = FVector::ZeroVector);

	UPROPERTY()
	UUserWidget* SightWidget_NoTarget = nullptr;
	UPROPERTY()
	UUserWidget* SightWidget_GetTarget = nullptr;
	UPROPERTY()
	UUserWidget* TargetWidget = nullptr;
	void CheckWidget(EGBWFlowMoveEventType EventType, UGBWFlowMoveComponent* FlowMoveComponent);
};
//END Perceptron

// BEGIN RMSController
UCLASS(Blueprintable, meta = (DisplayName = "_ControlledMove"))
class GBWFLOWMOVE_API UGBWFlowMoveRMSController_ControlledMove : public UGBWFlowMoveRMSController_Base
{
	GENERATED_BODY()
	
public:
	UGBWFlowMoveRMSController_ControlledMove(){};

	float GetTime() const;

	virtual bool CheckValid_Implementation(FGBWFlowMoveState FlowMoveState) override;
	virtual bool OnInit_Implementation(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo) override;
	virtual void OnUpdate_Implementation(
		EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent) override;
	virtual bool GetRMSParam_Implementation(
			FTransform& Result,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState) override;
	virtual bool IsActive_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState) override;
	virtual bool OnEnd_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			FGBWFlowMoveState FlowMoveState) override;
	virtual void OnFlowMoveStop_Implementation(UGBWFlowMoveComponent* FlowMoveComponent) override;
	virtual float GetDuration_Implementation() override;
	virtual float GetExecutedTime_Implementation() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool isDebug = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	float MaxForceSize = 2000.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="StartAction")
	FFlowMoveSceneConditionSet SceneConditionSet = FFlowMoveSceneConditionSet();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StartAction")
	FGBWFlowMoveSetting StartAction = FGBWFlowMoveSetting();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BurstAction")
	FGBWFlowMoveSetting BurstAction = FGBWFlowMoveSetting();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="MovingAction")
	bool IgnoresGravity = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="MovingAction", Meta = (ClampMin = 100, ClampMax = 100, ForceUnits = "m/s2"))
	float GravitationalAcceleration_ms2 = -9.8f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="MovingAction", Meta = (ClampMin = 0, ForceUnits = "cm/s2"))
	float MoveSpeed = 800.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="MovingAction", Meta = (ClampMin = 3, ForceUnits = "°/s"))
	float RotationSmoothSpeed = 360.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="MovingAction", Meta = (ClampMin = 3, ForceUnits = "value/s"))
	float InputVectorSmoothSpeed = 10.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MovingAction")
	FGBWFlowMoveAnimSetting MovingAnim = FGBWFlowMoveAnimSetting();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EndAction")
	FGBWFlowMoveSetting EndAction = FGBWFlowMoveSetting();

	// BEGIN RunTime
	FVector LastInputVector = FVector::ZeroVector;
	FVector LastControlVector = FVector::ZeroVector;
	float Timer = 0.0f;
	float RMSTimer = 0.0f;
	float AccumulatedFallDistance = 0.0f;

	enum EControlledMoveState
	{
		Start,
		Burst,
		Moving,
		End,
		Finished
	};
	EControlledMoveState State = EControlledMoveState::Start;
	
	bool bIsStart = false;
	bool bIsBurst = false;
	bool bIsMoving = false;
	bool bIsEnd = false;
	// END RunTime

	bool GetRMSParam_Moving(
		FTransform& Result,
		const ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent,
		float DeltaTime,
		FGBWFlowMoveState FlowMoveState);
	bool GetRMSParam_Action(
		FTransform& Result,
		ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent,
		float DeltaTime,
		FGBWFlowMoveState FlowMoveState,
		FGBWFlowMoveSetting ActionSetting);

	float GetMoveRateValue(const UGBWFlowMoveComponent* FlowMoveComponent, float MoveFraction, FGBWFlowMoveSetting ActionSetting) const;
	FVector GetMoveControlVector(const UGBWFlowMoveComponent* FlowMoveComponent, float MoveFraction, FGBWFlowMoveSetting ActionSetting) const;
	FVector GetPathOffsetVector(const UGBWFlowMoveComponent* FlowMoveComponent, const FVector ForwardVector, float MoveFraction, float DeltaTime, FGBWFlowMoveSetting ActionSetting) const;
	
	bool ExtractRotation(
		FRotator& OutRotation,
		const ACharacter* Character,
		FRotator StartRotation,
		FRotator TargetRotation,
		float Fraction) const;
	
	void PostureAdjust(float DeltaTime, FGBWFlowMoveState FlowMoveState) const;
	static void RecoveryPosture(FGBWFlowMoveState FlowMoveState);
	void UpdateState(ACharacter* OwnerCharacter,
	                 UGBWFlowMoveComponent* FlowMoveComponent,
	                 float DeltaTime,
	                 FGBWFlowMoveState FlowMoveState);
	
	UFUNCTION()
	static bool PlayMontage(
		UGBWFlowMoveComponent* FlowMoveComponent,
		FGBWFlowMoveAnimSetting AnimSetting,
		EGBWFlowMoveActionDurationType DurationType,
		float Duration);
	
	void RMSDebug(
		const ACharacter* Character,
		float Time,
		FVector InputVector
		) const;
};

UCLASS(Blueprintable, meta = (DisplayName = "_TargetMove"))
class GBWFLOWMOVE_API UGBWFlowMoveRMSController_TargetMove : public UGBWFlowMoveRMSController_Base
{
	GENERATED_BODY()
	
public:
	UGBWFlowMoveRMSController_TargetMove(){};

	float GetTime() const{return Timer;}
	
	virtual bool CheckValid_Implementation(FGBWFlowMoveState FlowMoveState) override;
	virtual bool OnInit_Implementation(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo) override;
	virtual void OnUpdate_Implementation(EFlowMoveNetworkLocationType NetworkLocation, bool bIsLocalOwn, UGBWFlowMoveComponent* FlowMoveComponent) override;
	virtual bool GetRMSParam_Implementation(
			FTransform& Result,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState) override;
	virtual bool IsActive_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState) override;
	virtual bool OnEnd_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			FGBWFlowMoveState FlowMoveState) override;
	virtual float GetDuration_Implementation() override;
	virtual float GetExecutedTime_Implementation() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool isDebug = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	float MaxForceSize = 2000.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	float InputVectorSmoothSpeed = 10.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	float RotationSmoothSpeed = 10.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveSetting Action = FGBWFlowMoveSetting();

	// BEGIN RunTime
	bool bIsExecuted = false;
	FVector LastInputVector = FVector::ZeroVector;
	FVector LastControlVector = FVector::ZeroVector;
	float Timer = 0.0f;
	float AccumulatedFallDistance = 0.0f;
	FVector LastDtMove = FVector::ZeroVector;
	FVector LastLocation = FVector::ZeroVector;
	FVector AccumulatedLossesDtMove = FVector::ZeroVector;
	// END RunTime
	float GetMoveRateValue(const UGBWFlowMoveComponent* FlowMoveComponent, float MoveFraction, FGBWFlowMoveSetting ActionSetting) const;
	FVector GetMoveControlVector(const UGBWFlowMoveComponent* FlowMoveComponent, float MoveFraction, FGBWFlowMoveSetting ActionSetting) const;
	FVector GetPathOffsetVector(const UGBWFlowMoveComponent* FlowMoveComponent, const FVector ForwardVector, float MoveFraction, FGBWFlowMoveSetting ActionSetting) const;
	bool ExtractRotation(
	FRotator& OutRotation,
	const ACharacter* Character,
	FRotator StartRotation,
	FRotator TargetRotation,
	float Fraction) const;

	void UpdateState();
	
	UFUNCTION()
	static bool PlayMontage(
		UGBWFlowMoveComponent* FlowMoveComponent,
		FGBWFlowMoveAnimSetting AnimSetting,
		EGBWFlowMoveActionDurationType DurationType,
		float Duration);
	
	void RMSDebug(
		ACharacter* Character,
		float Time,
		float MoveFraction,
		FVector MoveControl,
		FVector InputVector,
		FVector PathOffset,
		FVector CurrentTarget,
		float FallDistance,
		FTransform RootMotionParam,
		FGBWFlowMoveSetting ActionSetting
		) const;
};
// END RMSController

// BEGIN SceneCondition
UCLASS(Blueprintable, meta = (DisplayName = "_FlowMoveScene"))
class GBWFLOWMOVE_API UGBWFlowMoveSceneCondition_FlowMoveScene : public UGBWFlowMoveSceneCondition_Base
{
	GENERATED_BODY()
public:
	virtual bool IsConditionMet_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveSceneCondition SceneCondition;

	UFUNCTION()
	TArray<FString> GetAttributeNameList() const;
};
// END SceneCondition

// BEGIN Script
UCLASS(Blueprintable, meta = (DisplayName = "_Debug"))
class GBWFLOWMOVE_API UGBWFlowMoveScript_Debug : public UGBWFlowMoveScript_Base
{
	GENERATED_BODY()
public:
	virtual void OnUpdate_Implementation(
		EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool bIsDebug = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool FlowMoveState = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool FlowMoveAction = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool FlowMoveScene = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
    bool FlowMoveSupplementaryScene = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool FlowMoveEvent = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	bool FlowMoveAttribute = true;

	void FlowMoveDebug(FGBWFlowMoveState TaskState) const;
};

UENUM(BlueprintType)
enum EFlowMoveAdjustCapsuleType
{
	NoAdjust,
	Always,
	DuringActionActive,
	DuringActionNotActive
};
USTRUCT(BlueprintType)
struct FFlowMoveAdjustCapsuleSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveAdjustCapsuleType> Type = EFlowMoveAdjustCapsuleType::NoAdjust;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type != EFlowMoveAdjustCapsuleType::NoAdjust", ClampMin = 0, ClampMax = 100, ForceUnits = "%"))
	float AdjustToValidSpaceFraction = 80.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveAdjustCapsuleType::DuringActionActive || Type == EFlowMoveAdjustCapsuleType::DuringActionNotActive"))
	TArray<FString> Actions;
};
UCLASS(Blueprintable, meta = (DisplayName = "_AdjustCapsule"))
class GBWFLOWMOVE_API UGBWFlowMoveScript_AdjustCapsule : public UGBWFlowMoveScript_Base
{
	GENERATED_BODY()
public:
	virtual void OnUpdate_Implementation(
		EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(ClampMin = 10.0f, ForceUnits = "cm"))
	float MinHeightCanAdjustTo = 30.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveAdjustCapsuleSetting ByCurrentLocation = FFlowMoveAdjustCapsuleSetting();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveAdjustCapsuleSetting ByTargetLocation = FFlowMoveAdjustCapsuleSetting();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TMap<FString, float> DuringActionAdjustTo;

	static bool ActionNameContains(FString InActionName, TArray<FString> ActionNameStrings); 
};
// END Script