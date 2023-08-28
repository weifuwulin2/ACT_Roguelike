// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Curves/CurveVector.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "GBWFlowMoveObjects.generated.h"

struct FFlowMoveAttributeModifier;
struct FFlowMoveSceneConditionTargetScene;
struct FGBWFlowMoveState;
struct FGBWFlowMoveScene;
class UGBWFlowMoveSceneCondition_Base;
class UGBWFlowMoveComponent;
class UGBWFlowMoveRMSController_Base;
class UGBW_DA_FlowMoveScheme;
class UGBWFlowMovePerceptron_Base;
class UGBWFlowMoveScript_Base;

// BEGIN struct
UENUM(BlueprintType)
enum class EGBWFlowMoveEventType : uint8
{
	Init,
	Update,
	End,
	GetCache
};
UENUM(BlueprintType)
enum class EGBWPerceptionResultItemType : uint8
{
	Bool,
	Float,
	Vector,
	Transform,
	String,
	GamePlayTag,
	Actor,
	Object,
	MovementMode
};
UENUM(BlueprintType)
enum EFlowMoveEventOperationType
{
	Add,
	Remove
};
UENUM(BlueprintType)
enum EFlowMoveTriggerActionType
{
	DoAction,
	SetEvent,
	ActiveFlowMove,
	StopFlowMove,
	SetAttribute
};
UENUM(BlueprintType)
enum EFlowMoveAttributeModifierType
{
	SET,
	ADD,
	SUB,
	AddPerSec,
	SubPerSec
};
UENUM(BlueprintType)
enum EConditionRequireType
{
	RequireMet,
	RequireNotMet,
	NotRequire
};
UENUM(BlueprintType)
enum EFlowMoveEventType
{
	OnActive,
	OnActiveFailed,
	OnUpdate,
	OnStop,
	OnActionStart,
	OnActionUpdate,
	OnActionEnd,
	OnNoActionCanExecute,
	OnEventAdd,
	OnEventRemove,
	OnMovementModeChange
};
USTRUCT(BlueprintType)
struct FFlowMoveEvent
{
	GENERATED_BODY()

	UPROPERTY()
	int InFrameNum = -1;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveEventType> EventType = EFlowMoveEventType::OnActionStart;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="EventType == EFlowMoveEventType::OnActionStart || EventType == EFlowMoveEventType::OnActionEnd || EventType == EFlowMoveEventType::OnActionUpdate",
			GetOptions="GetFlowMoveActionNameList"))
	FString ActionName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="EventType == EFlowMoveEventType::OnEventAdd || EventType == EFlowMoveEventType::OnEventRemove"))
	FString EventName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="EventType == EFlowMoveEventType::OnMovementModeChange"))
	TEnumAsByte<EMovementMode> NewMovementMode = EMovementMode::MOVE_None;
	
	FFlowMoveEvent(){}
	FFlowMoveEvent(EFlowMoveEventType TheEventType);
	FFlowMoveEvent(EFlowMoveEventType TheEventType, FString ActionOrEventName);
	FFlowMoveEvent(EMovementMode NewMovementMode);
	bool EqualTo(FFlowMoveEvent OtherEvent) const;
};
USTRUCT(BlueprintType)
struct FAttributeModifier
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveAttributeModifierType> ModifierType = EFlowMoveAttributeModifierType::AddPerSec;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(GetOptions="GetAttributeNameList"))
	FString TargetAttribute = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	float ModifierValue = 0.0f;

	void ExecuteModifier(UGBWFlowMoveComponent* FlowMoveComponent) const;
};
USTRUCT(BlueprintType)
struct FFlowMoveTriggerAction
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveTriggerActionType> Type = EFlowMoveTriggerActionType::DoAction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveTriggerActionType::DoAction",
			GetOptions="GetFlowMoveActionNameList"))
	FString ActionName = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveTriggerActionType::SetEvent"))
	TEnumAsByte<EFlowMoveEventOperationType> EventOperationType = EFlowMoveEventOperationType::Add;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveTriggerActionType::SetEvent"))
	FString EventName = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveTriggerActionType::SetAttribute"))
	TArray<FAttributeModifier> AttributeModifierSet;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveTriggerActionType::StopFlowMove"))
	bool WaitForCurrentActionFinished = true;
};
USTRUCT(BlueprintType)
struct FFlowMoveTriggerActionSet
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",meta=(TitleProperty="{Type}"))
	TArray<FFlowMoveTriggerAction> TriggerActionSet;
};
USTRUCT(BlueprintType)
struct FFlowMoveInputActionAction
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
	meta=(GetOptions="GetInputActionNameList"))
	FName InputActionName = NAME_None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TMap<TEnumAsByte<EInputEvent>,FFlowMoveTriggerActionSet> TriggerAction;

	bool bIsBind = false;
	FFlowMoveInputActionAction(){bIsBind = false;}
};
USTRUCT(BlueprintType)
struct FFlowMoveInputValueTrigger_MoveVector
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Move", DisplayName="Forward / Backward Axis Name",
		meta=(GetOptions="GetInputAxisNameList"))
	FName ForwardAxisName = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Move", DisplayName="Reverse Forward / Backward Axis")
	bool ReverseForwardAxis = false;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Move", DisplayName="Right / Left Axis Name",
		meta=(GetOptions="GetInputAxisNameList"))
	FName RightAxisName = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Move", DisplayName="Reverse Right / Left Axis")
	bool ReverseRightAxis = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Move", DisplayName="Up / Down Axis Name",
		meta=(GetOptions="GetInputAxisNameList"))
	FName UpAxisName = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Move", DisplayName="Reverse Up / Down Axis")
	bool ReverseUpAxis = false;
	
	FFlowMoveInputValueTrigger_MoveVector(){}
};
USTRUCT(BlueprintType)
struct FFlowMoveInputValueTrigger_PerceptionInput
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Perception",
		meta=(ClampMin=0, ForceUnits = "°"))
	float UpAngleThreshold = 10.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Perception",
		meta=(ClampMin=0, ForceUnits = "°"))
	float DownAngleThreshold = 30.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Perception",
		meta=(ClampMin=0, ForceUnits = "°"))
	float LeftAndRightAngleThreshold = 15.0f;
	
	FFlowMoveInputValueTrigger_PerceptionInput(){}
};
USTRUCT(BlueprintType)
struct FFlowMoveInputValueTriggerSettings
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Move", meta=(InlineEditConditionToggle))
	bool bIsMoveInput = false;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Move",
		meta=(EditCondition="bIsMoveInput"))
	FFlowMoveInputValueTrigger_MoveVector MoveVectorTrigger = FFlowMoveInputValueTrigger_MoveVector();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Control",
		DisplayName="Use Controller ForwardVector As ControlInput")
	bool bIsControlInput = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Perception",
		DisplayName="Calculate PerceptionVector from MoveVector and ControlVector",
		meta=(InlineEditConditionToggle))
	bool bIsPerceptionInput = false;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Perception",
		meta=(EditCondition="bIsPerceptionInput"))
	FFlowMoveInputValueTrigger_PerceptionInput PerceptionInputSettings = FFlowMoveInputValueTrigger_PerceptionInput();

	FFlowMoveInputValueTriggerSettings(){}
	void CheckInput(const UGBWFlowMoveComponent* FlowMoveComponent) const;
	static bool HasAxisBinding(const ACharacter* Character, const FName AxisName);
	void GetInputValue(
		FVector& MoveVector,
		FVector& ControlVector,
		FVector& PerceptionVector,
		bool& IsMoveInput,
		bool& IsControlInput,
		bool& IsPerceptionInput,
		const UGBWFlowMoveComponent* FlowMoveComponent) const;
};

USTRUCT(BlueprintType)
struct FGBWFlowMoveTraceSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	bool isDebug = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug",
		meta=(EditConditionHides,EditCondition="isDebug"))
	float DebugTime = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug",
		meta=(EditConditionHides,EditCondition="isDebug"))
	bool DrawTraceShape = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug",
		meta=(EditConditionHides,EditCondition="isDebug"))
	bool DrawTraceLine = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	TArray<TEnumAsByte<ETraceTypeQuery>> TraceChannels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreeningConditions")
	bool UseScreeningConditions = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreeningConditions",
		meta=(EditConditionHides,EditCondition="UseScreeningConditions"))
	TArray<TSubclassOf<AActor>> ActorWithClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreeningConditions",
		meta=(EditConditionHides,EditCondition="UseScreeningConditions"))
	TArray<FName> ActorWithTag;

	FGBWFlowMoveTraceSetting(){}
	bool IsMetScreeningConditions(const AActor* InActor);
};
USTRUCT(BlueprintType)
struct FGBWPerceptionResultItem
{
	GENERATED_BODY()

	UPROPERTY()
	EGBWPerceptionResultItemType Type = EGBWPerceptionResultItemType::Float;
	
	UPROPERTY()
	bool BValue = true;
	UPROPERTY()
	float FValue = 0.0f;
	UPROPERTY()
	FVector VValue = FVector::ZeroVector;
	UPROPERTY()
	FTransform TValue = FTransform();
	UPROPERTY()
	FString SValue = "";
	UPROPERTY()
	FGameplayTag GTValue = FGameplayTag::EmptyTag;
	UPROPERTY()
	AActor* AValue = nullptr;
	UPROPERTY()
	UObject* OValue = nullptr;
	UPROPERTY()
	TEnumAsByte<EMovementMode> MovementModeValue = EMovementMode::MOVE_None;
	
	FGBWPerceptionResultItem(){}
	FGBWPerceptionResultItem(bool value){BValue=value;Type = EGBWPerceptionResultItemType::Bool;}
	FGBWPerceptionResultItem(float value){FValue=value;Type = EGBWPerceptionResultItemType::Float;}
	FGBWPerceptionResultItem(FVector value){VValue=value;Type = EGBWPerceptionResultItemType::Vector;}
	FGBWPerceptionResultItem(FTransform value){TValue=value;Type = EGBWPerceptionResultItemType::Transform;}
	FGBWPerceptionResultItem(FString value){SValue=value;Type = EGBWPerceptionResultItemType::String;}
	FGBWPerceptionResultItem(FGameplayTag value){GTValue=value;Type = EGBWPerceptionResultItemType::GamePlayTag;}
	FGBWPerceptionResultItem(AActor* value){AValue=value;Type = EGBWPerceptionResultItemType::Actor;}
	FGBWPerceptionResultItem(UObject* value){OValue=value;Type = EGBWPerceptionResultItemType::Object;}
	FGBWPerceptionResultItem(EMovementMode value){MovementModeValue=value;Type = EGBWPerceptionResultItemType::MovementMode;}
};
USTRUCT(BlueprintType)
struct FGBWPerceptionResult
{
	GENERATED_BODY()
	
	UPROPERTY()
	TArray<FName> Keys;
	UPROPERTY()
	TArray<FGBWPerceptionResultItem> Values;
	
	FGBWPerceptionResult(){}

	bool IsValid() const;

	void AddBool(FName Key, bool Value);
	void AddFloat(FName Key, float Value);
	void AddVector(FName Key, FVector Value);
	void AddTransform(FName Key, FTransform Value);
	void AddString(FName Key, FString Value);
	void AddGameplayTag(FName Key, FGameplayTag Value);
	void AddActor(FName Key, AActor* Value);
	void AddObject(FName Key, UObject* Value);
	void AddMovementMode(FName Key, EMovementMode Value);

	void GetBool(FName Key, bool& IsGet, bool& Value) const;
	void GetFloat(FName Key, bool& IsGet, float& Value) const;
	void GetVector(FName Key, bool& IsGet, FVector& Value) const;
	void GetTransform(FName Key, bool& IsGet, FTransform& Value) const;
	void GetString(FName Key, bool& IsGet, FString& Value) const;
	void GetGameplayTag(FName Key, bool& IsGet, FGameplayTag& Value) const;
	void GetActor(FName Key, bool& IsGet, AActor*& Value) const;
	void GetObject(FName Key, bool& IsGet, UObject*& Value) const;
	void GetMovementMode(FName Key, bool& IsGet, TEnumAsByte<EMovementMode>& Value) const;
};

UENUM(BlueprintType)
enum EFlowMoveConditionCombinationType
{
	AllMet,
	AnyMet,
	AllNotMet,
	AnyNotMet
};
UENUM(BlueprintType)
enum EFlowMoveActionGetMode
{
	First,
	Last
};
UENUM(BlueprintType)
enum class EGBWFlowMoveActionDurationType : uint8
{
	SpecifyDuration,
	MontageDuration,
	Infinite
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveAnimSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FName MeshTag = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TArray<FName> ExcludedMeshTag = {};
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	UAnimMontage* Montage = nullptr;
	/** If the array is empty, random will be attempted in all Montage Sections */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TArray<FName> RandomSections = {};
};
UENUM(BlueprintType)
enum class EGBWFlowMoveCurveType : uint8
{
	CurveAsset,
	AnimMontageCurve
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveCurveSetting
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	EGBWFlowMoveCurveType MoveRateCurveType = EGBWFlowMoveCurveType::CurveAsset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
		meta = (EditCondition = "MoveRateCurveType == EGBWFlowMoveCurveType::CurveAsset", EditConditionHides))
	UCurveFloat* MoveRateCurve = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
			meta = (EditCondition = "MoveRateCurveType == EGBWFlowMoveCurveType::AnimMontageCurve", EditConditionHides))
	FName MoveRateAnimCurveName = FName("MoveRate");

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	EGBWFlowMoveCurveType PathOffsetCurveType = EGBWFlowMoveCurveType::CurveAsset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
		meta = (EditCondition = "PathOffsetCurveType == EGBWFlowMoveCurveType::CurveAsset", EditConditionHides))
	UCurveVector* PathOffsetCurve = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
			meta = (EditCondition = "PathOffsetCurveType == EGBWFlowMoveCurveType::AnimMontageCurve", EditConditionHides))
	FName PathOffsetAnimCurveName_X = FName("PathOffset.X");
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
			meta = (EditCondition = "PathOffsetCurveType == EGBWFlowMoveCurveType::AnimMontageCurve", EditConditionHides))
	FName PathOffsetAnimCurveName_Y = FName("PathOffset.Y");
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
			meta = (EditCondition = "PathOffsetCurveType == EGBWFlowMoveCurveType::AnimMontageCurve", EditConditionHides))
	FName PathOffsetAnimCurveName_Z = FName("PathOffset.Z");

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	EGBWFlowMoveCurveType MoveControlCurveType = EGBWFlowMoveCurveType::CurveAsset;
	/**
	 *Curve-x : Gravity curve
	 *Curve-y : Rotation Control Rate curve
	 *Curve-z : To TargetPoint Finish Curve
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
		meta = (EditCondition = "MoveControlCurveType == EGBWFlowMoveCurveType::CurveAsset", EditConditionHides))
	UCurveVector* MoveControlCurve = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
			meta = (EditCondition = "MoveControlCurveType == EGBWFlowMoveCurveType::AnimMontageCurve", EditConditionHides))
	FName GravityAnimCurveName = FName("Gravity");
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
			meta = (EditCondition = "MoveControlCurveType == EGBWFlowMoveCurveType::AnimMontageCurve", EditConditionHides))
	FName RotationControlAnimCurveName = FName("RotationControl");
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
			meta = (EditCondition = "MoveControlCurveType == EGBWFlowMoveCurveType::AnimMontageCurve", EditConditionHides))
	FName TargetPointFinishAnimCurveName = FName("TargetPointFinish");
	
	FGBWFlowMoveCurveSetting(){}
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveSetting
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	EGBWFlowMoveActionDurationType DurationType = EGBWFlowMoveActionDurationType::MontageDuration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings",
		meta = (EditCondition = "DurationType == EGBWFlowMoveActionDurationType::SpecifyDuration", EditConditionHides, ClampMin = 0.1, ForceUnits = "s"))
	float Duration = 0.7;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	bool IgnoreGravity = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float GravitationalAcceleration_MS2 = -4.9f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector PathOffsetScale = FVector(1.0f);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	bool AllowRotationControl = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float RotationControlScale = 1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveCurveSetting FlowMoveCurveSetting = FGBWFlowMoveCurveSetting();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveAnimSetting AnimSetting = FGBWFlowMoveAnimSetting();

	FGBWFlowMoveSetting(){}
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveLock
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",meta=(GetOptions="GetFlowMoveActionNameList"))
	FString FlowMoveActionStr;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", Meta = (ClampMin = 0, ClampMax = 100, ForceUnits = "%"))
	float SpecifyLockFraction = 80.0f;
	
	FGBWFlowMoveLock(){}
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveActionLock
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", Meta = (ClampMin = 0, ClampMax = 100, ForceUnits = "%"))
	float DefaultLockFraction = 100.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", Meta = (ClampMin = 0, ClampMax = 100, ForceUnits = "%"))
	float FlowMoveStopLockFraction = 80.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		Meta = (ClampMin = 0, ClampMax = 100, ForceUnits = "%", TitleProperty="{SpecifyLockFraction}% for {FlowMoveActionStr}"))
	TArray<FGBWFlowMoveLock> SpecifyLockFraction;
	
	FGBWFlowMoveActionLock(){}

	bool IsLock(FString ForActionStr, float TotalDuration, float InTime) const;
	bool IsLockForStop(float TotalDuration, float InTime) const;
};
USTRUCT(BlueprintType)
struct FFlowMovePerceptronSet
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings")
	TArray<UGBWFlowMovePerceptron_Base*> Perceptrons;

	FFlowMovePerceptronSet(){}

	bool GetPerceptionResult(
			TArray<FGBWFlowMoveScene>& FlowMoveScene,
			TArray<FFlowMoveSceneConditionTargetScene>& TargetScene,
			TArray<bool>& bIsGet,
			EGBWFlowMoveEventType EventType,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent);

	FFlowMovePerceptronSet GetCopy(UObject* Outer);
};
USTRUCT(BlueprintType)
struct FFlowMoveScriptSet
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings")
	TArray<UGBWFlowMoveScript_Base*> Scripts;

	FFlowMoveScriptSet(){}

	void Update(UGBWFlowMoveComponent* FlowMoveComponent);

	FFlowMoveScriptSet GetCopy(UObject* Outer);
};

UENUM(BlueprintType)
enum class EGBWFlowMoveDirectionType : uint8
{
	MM UMETA(DisplayName="◈"),
	MU UMETA(DisplayName="↑"),
	MD UMETA(DisplayName="↓"),
	LM UMETA(DisplayName="←"),
	RM UMETA(DisplayName="→"),
	LU UMETA(DisplayName="↖"),
	RU UMETA(DisplayName="↗"),
	LD UMETA(DisplayName="↙"),
	RD UMETA(DisplayName="↘")
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveScene
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FName SceneType = NAME_None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float SceneHeight = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float SceneRight = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float SceneForward = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float SceneAngle = 0.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float SceneDirection = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	EGBWFlowMoveDirectionType SceneDirectionMark = EGBWFlowMoveDirectionType::MM;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	AActor* TargetActor = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector PrepareLocation = FVector::Zero();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector PrepareLocation_Floor = FVector::Zero();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector PrepareLocation_Roof = FVector::Zero();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector TargetLocation = FVector::Zero();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector TargetLocation_Floor = FVector::Zero();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector TargetLocation_Roof = FVector::Zero();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TEnumAsByte<EMovementMode> MovementMode = EMovementMode::MOVE_None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector Location_Floor = FVector::Zero();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FVector Location_Roof = FVector::Zero();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float HeightFromGround = 0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float HeightFromRoof = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float Slope = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWPerceptionResult PerceptionResult = FGBWPerceptionResult();

	FGBWFlowMoveScene(){}

	bool IsValid() const
	{
		return PerceptionResult.IsValid();
	}

	void CopyTo(FGBWFlowMoveScene& Target) const;

	void SetTargetLocationAndGenerateFloorAndRoof(FVector NewTargetLocation, ACharacter* Character, FGBWFlowMoveTraceSetting TraceSetting);
	void SetLocationAndGenerateFloorAndRoof(FVector NewLocation, ACharacter* Character, FGBWFlowMoveTraceSetting TraceSetting);
	void SetPrepareLocationAndGenerateFloorAndRoof(FVector NewPrepareLocation, ACharacter* Character, FGBWFlowMoveTraceSetting TraceSetting);
	void SetSceneDirectionAndGenerateMark(float NewDirection);
};
USTRUCT(BlueprintType)
struct FGBWSupplementaryFlowMoveScene
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FString SupplementarySlot = FString();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveScene Scene = FGBWFlowMoveScene();
};

UENUM(BlueprintType)
enum class EGBWFlowMoveValueScopePointType : uint8
{
	Contain UMETA(DisplayName="Contain"),
	NotContain UMETA(DisplayName="NotContain"),
	Unrestricted UMETA(DisplayName="∞")
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveFloatScopePoint
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	EGBWFlowMoveValueScopePointType Type = EGBWFlowMoveValueScopePointType::Unrestricted;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings", meta=(EditConditionHides, EditCondition="Type!=EGBWFlowMoveValueScopePointType::Unrestricted"))
	float Value = 0.0f;

	FGBWFlowMoveFloatScopePoint(){}
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveFloatScope
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveFloatScopePoint Min = FGBWFlowMoveFloatScopePoint();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveFloatScopePoint Max = FGBWFlowMoveFloatScopePoint();

	FGBWFlowMoveFloatScope(){}
	bool InScope(const float InValue) const;
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveVectorScope
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveFloatScope X_Scope = FGBWFlowMoveFloatScope();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveFloatScope Y_Scope = FGBWFlowMoveFloatScope();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveFloatScope Z_Scope = FGBWFlowMoveFloatScope();

	FGBWFlowMoveVectorScope(){}
	bool InScope(const FVector InValue) const;
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveTransformScope
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveVectorScope Location_Scope = FGBWFlowMoveVectorScope();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveVectorScope Rotation_Scope = FGBWFlowMoveVectorScope();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveVectorScope Scale_Scope = FGBWFlowMoveVectorScope();

	FGBWFlowMoveTransformScope(){}
	bool InScope(const FTransform InValue) const;
};
USTRUCT(BlueprintType)
struct FGBWPerceptionResultItemScope
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings")
	EGBWPerceptionResultItemType Type = EGBWPerceptionResultItemType::Float;
	
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::Bool"))
	FString BValueScope = "Ture/False";
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::Float"))
	FGBWFlowMoveFloatScope FValueScope = FGBWFlowMoveFloatScope();
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::Vector"))
	FGBWFlowMoveVectorScope VValueScope = FGBWFlowMoveVectorScope();
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::Transform"))
	FGBWFlowMoveTransformScope TValueScope = FGBWFlowMoveTransformScope();
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::String"))
	TSet<FString> SValueScope;
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::GameplayTag"))
	TSet<FGameplayTag> GTValueScope;
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::Actor"))
	FString AValueScope = "Currently not supported";
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::Object"))
	FString OValueScope = "Currently not supported";
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings",meta=(EditConditionHides,EditCondition="Type==EGBWPerceptionResultItemType::MovementMode"))
	TSet<TEnumAsByte<EMovementMode>> MovementModeValueScope = {
		EMovementMode::MOVE_None,
		EMovementMode::MOVE_Walking,
		EMovementMode::MOVE_NavWalking,
		EMovementMode::MOVE_Flying,
		EMovementMode::MOVE_Falling,
		EMovementMode::MOVE_Swimming,
		EMovementMode::MOVE_Custom
	};
	
	FGBWPerceptionResultItemScope(){}
};
USTRUCT(BlueprintType)
struct FGBWPerceptionResultScope
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings")
	TMap<FName,FGBWPerceptionResultItemScope> Scope;
	
	FGBWPerceptionResultScope(){}
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveSceneScope
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TSet<FName> SceneTypeScope;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveFloatScope SceneHeightScope = FGBWFlowMoveFloatScope();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TSet<TEnumAsByte<EMovementMode>> MovementModeScope = {
		EMovementMode::MOVE_None,
		EMovementMode::MOVE_Walking,
		EMovementMode::MOVE_NavWalking,
		EMovementMode::MOVE_Flying,
		EMovementMode::MOVE_Falling,
		EMovementMode::MOVE_Swimming,
		EMovementMode::MOVE_Custom
	};

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveFloatScope HeightFromGround = FGBWFlowMoveFloatScope();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWPerceptionResultScope PerceptionResultScope = FGBWPerceptionResultScope();

	FGBWFlowMoveSceneScope(){}
};



UENUM(BlueprintType)
enum EInclusivityType
{
	Include_,
	NotInclude_
};
USTRUCT(BlueprintType)
struct FFlowMoveSceneTypeCondition
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EInclusivityType> ConditionType = EInclusivityType::Include_;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TSet<FName> SceneTypeCondition;
};
USTRUCT(BlueprintType)
struct FFlowMoveMovementModeCondition
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EInclusivityType> ConditionType = EInclusivityType::Include_;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TSet<TEnumAsByte<EMovementMode>> MovementMode;
};
UENUM(BlueprintType)
enum EInputValueConditionType
{
	HasValue,
	HasNoValue,
	Range
};
USTRUCT(BlueprintType)
struct FFlowMoveMoveVectorCondition
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EInputValueConditionType> ConditionType = EInputValueConditionType::HasValue;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="ConditionType == EInputValueConditionType::Range"))
	TArray<FGBWFlowMoveFloatScope> MoveVectorSizeRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="ConditionType == EInputValueConditionType::Range"))
	TArray<FGBWFlowMoveVectorScope> MoveVectorRange;

	bool IsMet(FGBWFlowMoveState FlowMoveState);
};
UENUM(BlueprintType)
enum EActionConditionActionType
{
	LastAction,
	CurrentAction,
	ExpectedAction
};
UENUM(BlueprintType)
enum EActionConditionType
{
	Include,
	NotInclude,
	NoAction,
	AnyAction
};
USTRUCT(BlueprintType)
struct FFlowActionCondition
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EActionConditionType> ConditionType = EActionConditionType::NoAction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides, EditCondition="ConditionType == EActionConditionType::Include || ConditionType == EActionConditionType::NotInclude"))
	TArray<FString> ActionNameStrings;

	bool IsMet(FGBWFlowMoveState FlowMoveState,EActionConditionActionType ActionType) const;
	bool ActionNameContains(FString InActionName) const;
};

UENUM(BlueprintType)
enum EDirectionConditionType
{
	ValueRange,
	MarkInclude,
	MarkNotInclude
};
USTRUCT(BlueprintType)
struct FFlowMoveSceneDirectionCondition
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EDirectionConditionType> ConditionType = EDirectionConditionType::MarkInclude;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="ConditionType == EDirectionConditionType::ValueRange"))
	TArray<FGBWFlowMoveFloatScope> SceneDirectionRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="ConditionType == EDirectionConditionType::MarkInclude || ConditionType == EDirectionConditionType::MarkNotInclude"))
	TSet<EGBWFlowMoveDirectionType> DirectionMark;

	bool IsMet(FGBWFlowMoveState FlowMoveState) const;
};
UENUM(BlueprintType)
enum EEventConditionType
{
	EventInclude,
	EventNotInclude
};
USTRUCT(BlueprintType)
struct FFlowMoveEventCondition
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Settings")
	TEnumAsByte<EEventConditionType> ConditionType = EEventConditionType::EventInclude;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Settings")
	TArray<FString> EventSet;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="ConditionType == EEventConditionType::EventInclude"))
	bool bIsConsumeEventWhenMet = false;

	bool IsMet(FGBWFlowMoveState FlowMoveState) const;
};

USTRUCT(BlueprintType)
struct FFlowMoveAttributeCondition
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(GetOptions="GetAttributeNameList"))
	FString TargetAttribute = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TArray<FGBWFlowMoveFloatScope> AttributeRange;

	bool IsMet(FGBWFlowMoveState FlowMoveState) const;
};
USTRUCT(BlueprintType)
struct FFlowMoveAttributeConditionSet
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveConditionCombinationType> ConditionCombination = EFlowMoveConditionCombinationType::AllMet;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TArray<FFlowMoveAttributeCondition> AttributeConditionSet;

	bool IsMet(FGBWFlowMoveState FlowMoveState) const;
};

UENUM(BlueprintType)
enum ENetStateConditionType
{
	Quick,
	Detail
};
USTRUCT(BlueprintType)
struct FFlowMoveNetStateCondition
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<ENetStateConditionType> Type = ENetStateConditionType::Quick;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == ENetStateConditionType::Detail"))
	TArray<TEnumAsByte<ENetRole>> LocalRole;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == ENetStateConditionType::Detail"))
	TArray<TEnumAsByte<ENetRole>> RemoteRole;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == ENetStateConditionType::Quick"))
	TEnumAsByte<EConditionRequireType> IsLocalPlayer = EConditionRequireType::NotRequire;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == ENetStateConditionType::Quick"))
	TEnumAsByte<EConditionRequireType> IsAIPlayer = EConditionRequireType::NotRequire;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == ENetStateConditionType::Quick"))
	TEnumAsByte<EConditionRequireType> IsLocalOwn = EConditionRequireType::NotRequire;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == ENetStateConditionType::Quick"))
	TEnumAsByte<EConditionRequireType> IsInServer = EConditionRequireType::NotRequire;

	bool IsMet(FGBWFlowMoveState FlowMoveState) const;
};
UENUM(BlueprintType)
enum EFlowMoveActiveStateType
{
	Active,
	Inactive,
	ActiveOrInactive
};
UENUM(meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EFlowMoveSceneConditionTypeFlags : uint32
{
	SceneType = 1 << 0,
	SceneHeight = 1 << 1,
	SceneRight = 1 << 2,
	SceneForward = 1 << 3,
	SceneAngle = 1 << 4,
	SceneDirection = 1 << 5,
	MovementMode = 1 << 6,
	HeightFromGround = 1 << 7,
	HeightFromRoof = 1 << 8,
	Slope = 1 << 9,
	MoveVector = 1 << 10,
	LastAction = 1 << 11,
	CurrentAction = 1 << 12,
	ExpectedAction = 1 << 13,
	FlowMoveEvent = 1 << 14,
	Attribute = 1 << 15,
	FlowMoveActiveState = 1 << 16,
	NetState = 1 << 17,
	FlowMoveSystemEvent = 1 << 18
};
ENUM_CLASS_FLAGS(EFlowMoveSceneConditionTypeFlags);

UENUM(BlueprintType)
enum ETargetSceneType
{
	MainScene,
	SupplementaryScene
};
USTRUCT(BlueprintType)
struct FFlowMoveSceneConditionTargetScene
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<ETargetSceneType> TargetSceneType = ETargetSceneType::MainScene;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="TargetSceneType == ETargetSceneType::SupplementaryScene",GetOptions="GetSupplementarySceneSlotList"))
	FString SceneSlot = "You should set the corresponding Scene Slot for this Perceptron here";

	bool GetTargetScene(FGBWFlowMoveState FlowMoveState, FGBWFlowMoveScene& Result, bool bGetAndClear) const;
};
USTRUCT(BlueprintType)
struct FFlowMoveSceneCondition
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, Category="Settings")
	FFlowMoveSceneConditionTargetScene TargetScene = FFlowMoveSceneConditionTargetScene();
	
	UPROPERTY(EditDefaultsOnly, Category="Settings", meta = (Bitmask, BitmaskEnum = EFlowMoveSceneConditionTypeFlags))
	int32 ConditionFlags;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::SceneType"))
	FFlowMoveSceneTypeCondition SceneTypeCondition;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::SceneHeight"))
	TArray<FGBWFlowMoveFloatScope> SceneHeightRange;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::SceneRight"))
	TArray<FGBWFlowMoveFloatScope> SceneRightRange;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::SceneForward"))
	TArray<FGBWFlowMoveFloatScope> SceneForwardRange;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::SceneAngle"))
	TArray<FGBWFlowMoveFloatScope> SceneAngleRange;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::SceneDirection"))
	FFlowMoveSceneDirectionCondition SceneDirectionCondition;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::MovementMode"))
	FFlowMoveMovementModeCondition MovementModeCondition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::HeightFromGround"))
	TArray<FGBWFlowMoveFloatScope> HeightFromGroundRange;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::HeightFromRoof"))
	TArray<FGBWFlowMoveFloatScope> HeightFromRoofRange;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::Slope"))
	TArray<FGBWFlowMoveFloatScope> SlopeRange;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::MoveVector"))
	FFlowMoveMoveVectorCondition MoveVectorRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::LastAction"))
	FFlowActionCondition LastActionCondition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::CurrentAction"))
	FFlowActionCondition CurrentActionCondition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::ExpectedAction"))
	FFlowActionCondition ExpectedActionCondition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::FlowMoveEvent"))
	FFlowMoveEventCondition FlowMoveEventCondition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::Attribute"))
	FFlowMoveAttributeConditionSet AttributeCondition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::FlowMoveActiveState"))
	TEnumAsByte<EFlowMoveActiveStateType> ActiveStateType = EFlowMoveActiveStateType::Active;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::NetState"))
	FFlowMoveNetStateCondition NetStateCondition = FFlowMoveNetStateCondition();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides,EditCondition="ConditionFlags & EFlowMoveSceneConditionTypeFlags::FlowMoveSystemEvent"))
	TArray<FFlowMoveEvent> FlowMoveSystemEventSet;
	
	bool IsConditionMet(FGBWFlowMoveState FlowMoveState);
	bool HasConditionFlag(EFlowMoveSceneConditionTypeFlags InFlag) const;
	bool HasConditionFlag() const;
};

UENUM(BlueprintType)
enum EFlowMoveSceneConditionSetType
{
	FlowMoveSceneConditionTemplate,
	CustomConditions,
	Both,
	OnlyForProactive,
	NoCondition
};
USTRUCT(BlueprintType)
struct FFlowMoveSceneConditionSet
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveSceneConditionSetType> ConditionType = EFlowMoveSceneConditionSetType::FlowMoveSceneConditionTemplate;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides, EditCondition="ConditionType == EFlowMoveSceneConditionSetType::FlowMoveSceneConditionTemplate || ConditionType == EFlowMoveSceneConditionSetType::Both"))
	FFlowMoveSceneCondition SceneCondition = FFlowMoveSceneCondition();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", DisplayName="CustomConditionsCombinationType",
		meta=(EditConditionHides, EditCondition="ConditionType == EFlowMoveSceneConditionSetType::CustomConditions || ConditionType == EFlowMoveSceneConditionSetType::Both"))
	TEnumAsByte<EFlowMoveConditionCombinationType> ConditionCombination = EFlowMoveConditionCombinationType::AllMet;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings", DisplayName="CustomConditions",
		meta=(EditConditionHides, EditCondition="ConditionType == EFlowMoveSceneConditionSetType::CustomConditions || ConditionType == EFlowMoveSceneConditionSetType::Both"))
	TArray<UGBWFlowMoveSceneCondition_Base*> SceneConditions;

	FFlowMoveSceneConditionSet();

	bool IsMet(ACharacter* OwnerCharacter,
	           UGBWFlowMoveComponent* FlowMoveComponent,
	           float DeltaTime,
	           FGBWFlowMoveState FlowMoveState,
	           bool AsProactiveAction = false);
	bool IsAdditionalConditionMet(ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	bool IsSet() const;
};
USTRUCT(BlueprintType)
struct FFlowMoveConditionTriggerAction
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveSceneConditionSet SceneConditionSet = FFlowMoveSceneConditionSet();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveTriggerActionSet TriggerAction;
	
	FFlowMoveConditionTriggerAction(){}
};

USTRUCT(BlueprintType)
struct FFlowMoveEventTriggerAction
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveEvent FlowMoveEvent = FFlowMoveEvent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveTriggerActionSet TriggerAction;
	
	FFlowMoveEventTriggerAction(){}
};
USTRUCT(BlueprintType)
struct FFlowMoveAction
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveSceneConditionSet SceneConditionSet = FFlowMoveSceneConditionSet();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveSceneConditionTargetScene ActionTargetScene = FFlowMoveSceneConditionTargetScene();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveSceneConditionSet InValidConditionSet = FFlowMoveSceneConditionSet();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FGBWFlowMoveActionLock ActionLockSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	FFlowMovePerceptronSet PerceptronsDuringAction = FFlowMovePerceptronSet();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	FFlowMoveScriptSet ScriptsDuringAction = FFlowMoveScriptSet();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TArray<FFlowMoveConditionTriggerAction> ConditionTriggerDuringAction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings")
	UGBWFlowMoveRMSController_Base* MoveController = nullptr;

	FFlowMoveAction(){}

	bool IsMet(ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	bool IsInValidMet(ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	bool IsActive(ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState) const;
	bool IsLock(FString ForActionStr) const;
	bool IsLockForStop() const;
	FFlowMoveTriggerActionSet GetConditionAction(ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState,
			TEnumAsByte<EFlowMoveActionGetMode> ActionGetMode);
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveAttribute
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FString Name = "";
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float Value = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float Range_Min = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float Range_Max = 0.0f;
	
	FGBWFlowMoveAttribute(){}
	FGBWFlowMoveAttribute(FString TheName, float TheValue);
	FGBWFlowMoveAttribute(FString TheName, float TheValue, float TheRange_Min, float TheRange_Max);
	void SetValue(float NewValue);
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveAttributeValue
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float Value = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float Range_Min = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float Range_Max = 0.0f;

	FGBWFlowMoveAttribute ToFlowMoveAttribute(FString Name) const;
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveState
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Settings")
	FGuid FlowMoveComponentGuid = FGuid();
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	UGBWFlowMoveComponent* FlowMoveComponent = nullptr;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	ACharacter* OwnerCharacter = nullptr;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	UGBW_DA_FlowMoveScheme* FlowMoveScheme = nullptr;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	bool bIsActive = false;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	bool bIsStopping = false;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float Timer = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float FrameDeltaTime = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	int FrameNumber = INDEX_NONE;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FGBWFlowMoveScene FlowMoveScene = FGBWFlowMoveScene();
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	TArray<FGBWSupplementaryFlowMoveScene> SupplementaryFlowMoveScene;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	TArray<FGBWFlowMoveAttribute> AttributeSet;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	TArray<FString> FlowMoveEventSet;

	FFlowMoveScriptSet SchemeScripts = FFlowMoveScriptSet();
	FFlowMovePerceptronSet SchemePerceptrons = FFlowMovePerceptronSet();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FVector MoveVector = FVector::ZeroVector;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FVector ControlVector = FVector::ZeroVector;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FVector PerceptionVector = FVector::ZeroVector;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FString LastFlowMoveActionStr = "";
	
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FFlowMoveAction CurrentFlowMoveAction = FFlowMoveAction();
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FString CurrentFlowMoveActionStr = "";
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float CurrentFlowMoveExecutedTime = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FGBWFlowMoveScene CurrentActionTargetScene = FGBWFlowMoveScene();
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FString ExpectedFlowMoveActionStr = "";

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	FTransform RMSParamNow = FTransform();
	FTransform RMSParamNow_Local = FTransform();

	TArray<FFlowMoveEvent> FlowMoveEventNow;

	FGBWFlowMoveState(){}
	void ClearCurrentFlowMoveAction();
	void ClearExpectedFlowMoveAction();
	void ClearLastFlowMoveAction();
	void SetSupplementaryScene(const FString SceneSlot, FGBWFlowMoveScene NewScene);
	void RemoveSupplementaryScene(const FString SceneSlot);
	bool GetSupplementaryScene(const FString SceneSlot, FGBWFlowMoveScene& Result);
	int GetSupplementarySceneIndex(const FString SceneSlot);
	
	void AddFlowMoveEvent(FString NewEvent);
	void RemoveFlowMoveEvent(FString Event);
	bool IsFlowMoveEvent(FString Event) const;

	void InitAttributeSet(TArray<FGBWFlowMoveAttribute> NewInitAttributeSet);
	void SetAttribute(FString Name, float Value);
	bool GetAttribute(FString Name, float& Value);
	int AttributeIndex(FString Name);
	bool GetAttributeInfo(FString Name, FGBWFlowMoveAttribute& Attribute);

	void ClearFlowMoveEvent();
	void AddFlowMoveEvent(FFlowMoveEvent NewEvent);
	bool IsHasFlowMoveEvent(FFlowMoveEvent FlowMoveEvent);
};
USTRUCT(BlueprintType)
struct FGBWFlowMoveRMSControllerInitInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FGBWFlowMoveState BeginFlowMoveState = FGBWFlowMoveState();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FTransform BeginTransform = FTransform();
	
	FGBWFlowMoveRMSControllerInitInfo(){}
};

UENUM(BlueprintType)
enum EFlowMoveNetworkLocationType
{
	Server,
	Client
};

USTRUCT(BlueprintType)
struct FGBWFlowMoveSchemeSettings
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TEnumAsByte<EFlowMoveActionGetMode> ActionGetMode = EFlowMoveActionGetMode::First;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FString ActionNameSeparator = "->";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TMap<FString,FGBWFlowMoveAttributeValue> InitAttributeSet;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TArray<FString> SupplementarySceneSlot;

	FGBWFlowMoveSchemeSettings(){}
	TArray<FGBWFlowMoveAttribute> GetInitAttributeSet();
};
//END struct

UCLASS(Blueprintable, meta = (DisplayName = "GBWFlowMoveObject_Base"))
class GBWFLOWMOVE_API UGBWFlowMoveObject_Base : public UObject
{
	GENERATED_BODY()

	virtual bool IsNameStableForNetworking() const override;
	virtual bool IsSupportedForNetworking() const override;
protected:
	struct FWorldContext* WorldContext;
public:
	UGBWFlowMoveObject_Base();

	UPROPERTY()
	FGuid Guid = FGuid();

	// Allows the Object to use BP_Functions
	UFUNCTION(BlueprintCallable, Category="WorldContext")
		void SetWorldContext(UObject* NewWorldContext);

	UFUNCTION(BlueprintCallable, Category = "WorldContext")
		UObject* GetWorldContextObject();

	//~ Begin UObject Interface
	virtual class UWorld* GetWorld() const override final;
	struct FWorldContext* GetWorldContext() const { return WorldContext; };
};

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, meta = (DisplayName = "GBWFlowMoveRMSController_Base"))
class GBWFLOWMOVE_API UGBWFlowMoveRMSController_Base : public UGBWFlowMoveObject_Base
{
	GENERATED_BODY()

public:
	UGBWFlowMoveRMSController_Base(){}

	UPROPERTY(BlueprintReadWrite, Category="RunTime")
	FGBWFlowMoveRMSControllerInitInfo InitFlowMoveInfo = FGBWFlowMoveRMSControllerInitInfo();
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|RMS")
	void InitRMSController(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	bool CheckValid(FGBWFlowMoveState FlowMoveState);
	virtual bool CheckValid_Implementation(FGBWFlowMoveState FlowMoveState);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS")
			bool GetIsValid(FGBWFlowMoveState FlowMoveState);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	bool OnInit(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo);
	virtual bool OnInit_Implementation(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS")
			bool Init(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	void OnUpdate(EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent);
	virtual void OnUpdate_Implementation(EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent){}
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS")
	void Update(UGBWFlowMoveComponent* FlowMoveComponent);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	bool GetRMSParam(
			FTransform& Result,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	virtual bool GetRMSParam_Implementation(
			FTransform& Result,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS", meta = (DisplayName = "GBW|FlowMove|RMS"))
			bool GetTheRMSParam(
			FTransform& Result,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	bool IsActive(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	virtual bool IsActive_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS", meta = (DisplayName = "GBW|FlowMove|RMS"))
			bool IsActiveNow(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	bool OnEnd(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			FGBWFlowMoveState FlowMoveState);
	virtual bool OnEnd_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			FGBWFlowMoveState FlowMoveState);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS", meta = (DisplayName = "GBW|FlowMove|RMS"))
			bool End(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			FGBWFlowMoveState FlowMoveState);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	void OnFlowMoveStop(UGBWFlowMoveComponent* FlowMoveComponent);
	virtual void OnFlowMoveStop_Implementation(UGBWFlowMoveComponent* FlowMoveComponent){}
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS", meta = (DisplayName = "GBW|FlowMove|RMS"))
			void FlowMoveStop(UGBWFlowMoveComponent* FlowMoveComponent);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	float GetDuration();
	virtual float GetDuration_Implementation();
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS", meta = (DisplayName = "GBW|FlowMove|RMS"))
			float GetTheDuration();

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	float GetExecutedTime();
	virtual float GetExecutedTime_Implementation();
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS", meta = (DisplayName = "GBW|FlowMove|RMS"))
			float GetTheExecutedTime();

	UPROPERTY()
	TMap<UObject*,UGBWFlowMoveRMSController_Base*> CopyCache;
	void CheckCopyCache();
	UGBWFlowMoveRMSController_Base* GetCopy(UObject* Outer);
};

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, meta = (DisplayName = "GBWFlowMoveSceneCondition_Base"))
class GBWFLOWMOVE_API UGBWFlowMoveSceneCondition_Base : public UGBWFlowMoveObject_Base
{
	GENERATED_BODY()
public:
	UGBWFlowMoveSceneCondition_Base(){}

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|RMS")
	bool IsConditionMet(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);
	virtual bool IsConditionMet_Implementation(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);

	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|RMS")
			bool IsTheConditionMet(
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent,
			float DeltaTime,
			FGBWFlowMoveState FlowMoveState);

	UFUNCTION()
	TArray<FString> GetSupplementarySceneSlotList() const;
};

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, meta = (DisplayName = "GBWFlowMovePerceptron_Base"))
class GBWFLOWMOVE_API UGBWFlowMovePerceptron_Base : public UGBWFlowMoveObject_Base
{
	GENERATED_BODY()
public:
	UGBWFlowMovePerceptron_Base()
	{}
	
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="PerceptronSettings")
	FFlowMoveSceneConditionTargetScene TargetScene = FFlowMoveSceneConditionTargetScene();
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="PerceptronSettings")
	FFlowMoveSceneConditionSet SceneConditionSet = FFlowMoveSceneConditionSet();
	bool bIsActive = false;

	FGBWFlowMoveScene FlowMoveSceneCache = FGBWFlowMoveScene();
	bool bHasCache = false;

	UFUNCTION()
	TArray<FString> GetSupplementarySceneSlotList() const;

	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Perception")
	void SetCache(FGBWFlowMoveScene TheFlowMoveSceneCache);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Perception")
	bool GetCache(FGBWFlowMoveScene& Result, const bool bConsume = true);

	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove|Perception")
	bool GetPerceptionResult(
			FGBWFlowMoveScene& FlowMoveScene,
			EGBWFlowMoveEventType EventType,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent);
	virtual bool GetPerceptionResult_Implementation(
			FGBWFlowMoveScene& FlowMoveScene,
			EGBWFlowMoveEventType EventType,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent);
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove|Perception")
			bool GetThePerceptionResult(
			FGBWFlowMoveScene& FlowMoveScene,
			const EGBWFlowMoveEventType EventType,
			ACharacter* OwnerCharacter,
			UGBWFlowMoveComponent* FlowMoveComponent);

	UPROPERTY()
	TMap<UObject*,UGBWFlowMovePerceptron_Base*> CopyCache;
	void CheckCopyCache();
	UGBWFlowMovePerceptron_Base* GetCopy(UObject* Outer);
};

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, meta = (DisplayName = "GBWFlowMoveScript_Base"))
class GBWFLOWMOVE_API UGBWFlowMoveScript_Base : public UGBWFlowMoveObject_Base
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="ScriptSettings")
	FFlowMoveSceneConditionSet SceneConditionSet = FFlowMoveSceneConditionSet();
	
	UGBWFlowMoveScript_Base()
	{}
	
	UFUNCTION(BlueprintNativeEvent, Category = "GBW|FlowMove")
	void OnUpdate(
		EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent);
	virtual void OnUpdate_Implementation(
		EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent){}
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove")
	void Update(
		EFlowMoveNetworkLocationType NetworkLocation,
		bool bIsLocalOwn,
		UGBWFlowMoveComponent* FlowMoveComponent);

	UPROPERTY()
	TMap<UObject*,UGBWFlowMoveScript_Base*> CopyCache;
	void CheckCopyCache();
	UGBWFlowMoveScript_Base* GetCopy(UObject* Outer);
};