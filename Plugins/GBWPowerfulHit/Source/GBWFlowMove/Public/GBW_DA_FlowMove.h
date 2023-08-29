// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GBWFlowMoveFuncLib.h"
#include "Engine/DataAsset.h"
#include "GBW_DA_FlowMove.generated.h"

UENUM(BlueprintType)
enum EFlowMoveActionDAType
{
	Base,
	Condition
};
USTRUCT(BlueprintType)
struct FFlowMoveConditionMoveController
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveSceneConditionSet SceneConditionSet = FFlowMoveSceneConditionSet();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings")
	UGBWFlowMoveRMSController_Base* MoveController = nullptr;
	
	FFlowMoveConditionMoveController(){}
};
UCLASS(DisplayName="UGBW_DA_FlowMoveAction")
class GBWFLOWMOVE_API UGBW_DA_FlowMoveAction_ : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveActionDAType> Type = EFlowMoveActionDAType::Base;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveActionDAType::Base"))
	UGBWFlowMoveRMSController_Base* MoveController = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveActionDAType::Condition"))
	TEnumAsByte<EFlowMoveActionGetMode> GetMode = EFlowMoveActionGetMode::First;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings",
		meta=(EditConditionHides,EditCondition="Type == EFlowMoveActionDAType::Condition"))
	TMap<FString, FFlowMoveConditionMoveController> MoveControllerSet;
	
	UGBW_DA_FlowMoveAction_(){}

	UGBWFlowMoveRMSController_Base* GetMoveController(UGBWFlowMoveComponent* FlowMoveComponent);
};

UENUM(BlueprintType)
enum EFlowMoveActionTreeNodeType
{
	TransitNode,
	ActionNode
};
UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, meta = (DisplayName = "ActionTreeNode"))
class GBWFLOWMOVE_API UGBWFlowMoveActionTree : public UGBWFlowMoveObject_Base
{
	GENERATED_BODY()
public:
	UGBWFlowMoveActionTree()
	{}
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(MultiLine=true))
	FText Description = FText::FromString("Some Description For This Action Tree");
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	TEnumAsByte<EFlowMoveActionTreeNodeType> TreeNodeType = EFlowMoveActionTreeNodeType::ActionNode;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings")
	FFlowMoveSceneConditionSet SceneConditionSet = FFlowMoveSceneConditionSet();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode"))
	UGBW_DA_FlowMoveAction_* Action = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode"))
	FFlowMoveSceneConditionTargetScene ActionTargetScene = FFlowMoveSceneConditionTargetScene();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", meta=(EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode"))
	FFlowMoveSceneConditionSet ActionInvalidConditionSet = FFlowMoveSceneConditionSet();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings", Meta = (ClampMin = 0, ClampMax = 100, ForceUnits = "%", EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode"))
	FGBWFlowMoveActionLock ActionLockSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings|DuringAction", meta=(EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode"))
	FFlowMovePerceptronSet PerceptronsDuringAction = FFlowMovePerceptronSet();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings|DuringAction", meta=(EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode"))
	FFlowMoveScriptSet ScriptsDuringAction = FFlowMoveScriptSet();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|DuringAction", meta=(EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode"))
	TArray<FFlowMoveConditionTriggerAction> ConditionTriggerDuringAction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings", meta=(EditConditionHides, EditCondition="TreeNodeType == EFlowMoveActionTreeNodeType::TransitNode"))
	TMap<FName, UGBWFlowMoveActionTree*> ActionTrees;

	bool ToFlowMoveAction(FFlowMoveAction& Result, UObject* Outer, UGBWFlowMoveComponent* FlowMoveComponent);
	bool IsActionValid(UGBWFlowMoveComponent* FlowMoveComponent) const;

	UFUNCTION()
	TArray<FString> GetFlowMoveActionNameList() const;

	UFUNCTION()
	TArray<FString> GetAttributeNameList() const;

	UFUNCTION()
	TArray<FString> GetSupplementarySceneSlotList() const;
};

UCLASS()
class GBWFLOWMOVE_API UGBW_DA_FlowMoveScheme : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	FGBWFlowMoveSchemeSettings FlowMoveSchemeSettings = FGBWFlowMoveSchemeSettings();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	FFlowMovePerceptronSet Perceptrons = FFlowMovePerceptronSet();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	FFlowMoveScriptSet Scripts = FFlowMoveScriptSet();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Settings")
	TMap<FName, UGBWFlowMoveActionTree*> ActionTrees;
	
	UGBW_DA_FlowMoveScheme();
	bool IsSchemeValid() const;

	UFUNCTION()
	TArray<FString> GetFlowMoveActionNameList(FString ParentName, TMap<FName, UGBWFlowMoveActionTree*> ActionTree) const;

	UFUNCTION()
	TArray<FString> GetFlowMoveAttributeNameList() const;

	UFUNCTION()
	TArray<FString> GetSupplementarySceneSlotList() const;

	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|DA")
	bool GetFlowMoveAction(
		EFlowMoveActionGetMode GetMode,
		ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent,
		float DeltaTime,
		FGBWFlowMoveState FlowMoveState,
		bool bIsOnlyGetActionStr,
		FFlowMoveAction& FlowMoveAction,
		FString& FlowMoveActionStr);

	bool GetFlowMoveActionFromActionTree(
		TMap<FName, UGBWFlowMoveActionTree*> InActionTrees,
		EFlowMoveActionGetMode GetMode,
		ACharacter* OwnerCharacter,
		UGBWFlowMoveComponent* FlowMoveComponent,
		float DeltaTime,
		FGBWFlowMoveState FlowMoveState,
		bool bIsOnlyGetActionStr,
		FFlowMoveAction& FlowMoveAction,
		FString& FlowMoveActionStr);

	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|DA")
	bool GetFlowMoveActionByActionStr(
		FString InFlowMoveActionStr,
		bool bIsOnlyGetActionStr,
		FString& FlowMoveActionStr,
		FFlowMoveAction& FlowMoveAction,
		bool CheckCondition = false,
		bool AsProactiveAction = true,
		FGBWFlowMoveState FlowMoveState = FGBWFlowMoveState());
};

UCLASS()
class GBWFLOWMOVE_API UGBW_DA_FlowMoveConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="FlowMoveSettings")
	UGBW_DA_FlowMoveScheme* DefaultFlowMoveScheme;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="FlowMoveSettings", DisplayName="FlowMoveInputActionTrigger")
	TMap<FString,FFlowMoveInputActionAction> FlowMoveInputTrigger;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="FlowMoveSettings", DisplayName="FlowMoveInputValueTrigger")
	FFlowMoveInputValueTriggerSettings FlowMoveInputValueTrigger;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="FlowMoveSettings")
	TMap<FString,FFlowMoveConditionTriggerAction> FlowMoveConditionTrigger;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="FlowMoveSettings")
	TMap<FString,FFlowMoveEventTriggerAction> FlowMoveEventTrigger;

	UFUNCTION()
	static TArray<FName> GetInputActionNameList();
	UFUNCTION()
	static TArray<FName> GetInputAxisNameList();
	UFUNCTION()
	TArray<FString> GetFlowMoveActionNameList() const;
	UFUNCTION()
	TArray<FString> GetAttributeNameList() const;
	UFUNCTION()
	TArray<FString> GetSupplementarySceneSlotList() const;

	UGBW_DA_FlowMoveConfig* GetCopy(UObject* Outer) const;
};