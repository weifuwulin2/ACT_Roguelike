// Copyright GanBowen 2022-2023. All Rights Reserved.


#include "GBW_DA_FlowMove.h"

#include "GBWFlowMoveComponent.h"
#include "GameFramework/InputSettings.h"

UGBWFlowMoveRMSController_Base* UGBW_DA_FlowMoveAction_::GetMoveController(UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (Type == EFlowMoveActionDAType::Condition)
	{
		if (!FlowMoveComponent)
		{
			return nullptr;
		}
		
		UGBWFlowMoveRMSController_Base* Res = nullptr;
			
		for (auto Item:MoveControllerSet)
		{
			if (Item.Value.SceneConditionSet.IsMet(
				FlowMoveComponent->TaskState.OwnerCharacter,
				FlowMoveComponent,
				FlowMoveComponent->TaskState.FrameDeltaTime,
				FlowMoveComponent->TaskState,
				true
				) && Item.Value.MoveController)
			{
				Res = Item.Value.MoveController;
				if (GetMode==EFlowMoveActionGetMode::First)
				{
					break;
				}
			}
		}

		return Res;
	}

	return  MoveController;
}

bool UGBWFlowMoveActionTree::ToFlowMoveAction(FFlowMoveAction& Result, UObject* Outer, UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (!IsActionValid(FlowMoveComponent))
	{
		return false;
	}
	Result = FFlowMoveAction();
	Result.SceneConditionSet = SceneConditionSet;
	Result.InValidConditionSet = ActionInvalidConditionSet;
	Result.ActionLockSettings = ActionLockSettings;
	Result.PerceptronsDuringAction = PerceptronsDuringAction.GetCopy(Outer);
	Result.ConditionTriggerDuringAction = ConditionTriggerDuringAction;
	Result.ScriptsDuringAction = ScriptsDuringAction.GetCopy(Outer);
	Result.MoveController = Action->GetMoveController(FlowMoveComponent)->GetCopy(Outer);
	Result.ActionTargetScene = ActionTargetScene;
	return true;
}

bool UGBWFlowMoveActionTree::IsActionValid(UGBWFlowMoveComponent* FlowMoveComponent) const
{
	if (!Action)
	{
		return false;
	}
	if (!Action->GetMoveController(FlowMoveComponent))
	{
		return false;
	}

	return true;
}

TArray<FString> UGBWFlowMoveActionTree::GetFlowMoveActionNameList() const
{
	UObject* Outer = this->GetOuter();
	while (Outer)
	{
		if (const UGBW_DA_FlowMoveScheme* Scheme = Cast<UGBW_DA_FlowMoveScheme>(Outer))
		{
			return Scheme->GetFlowMoveActionNameList("",Scheme->ActionTrees);
		}
		else
		{
			Outer = Outer->GetOuter();
		}
	}
	return {};
}

TArray<FString> UGBWFlowMoveActionTree::GetAttributeNameList() const
{
	UObject* Outer = this->GetOuter();
	while (Outer)
	{
		if (const UGBW_DA_FlowMoveScheme* Scheme = Cast<UGBW_DA_FlowMoveScheme>(Outer))
		{
			return Scheme->GetFlowMoveAttributeNameList();
		}
		else
		{
			Outer = Outer->GetOuter();
		}
	}
	return {};
}

TArray<FString> UGBWFlowMoveActionTree::GetSupplementarySceneSlotList() const
{
	UObject* Outer = this->GetOuter();
	while (Outer)
	{
		if (const UGBW_DA_FlowMoveScheme* Scheme = Cast<UGBW_DA_FlowMoveScheme>(Outer))
		{
			return Scheme->GetSupplementarySceneSlotList();
		}
		else
		{
			Outer = Outer->GetOuter();
		}
	}
	return {};
}

UGBW_DA_FlowMoveScheme::UGBW_DA_FlowMoveScheme()
{
}

bool UGBW_DA_FlowMoveScheme::IsSchemeValid() const
{
	return !Perceptrons.Perceptrons.IsEmpty();
}

TArray<FString> UGBW_DA_FlowMoveScheme::GetFlowMoveActionNameList(FString ParentName,
	TMap<FName, UGBWFlowMoveActionTree*> ActionTree) const
{
	TArray<FString> Res;
	for (auto Item:ActionTree)
	{
		Res.Add((ParentName.IsEmpty()?"":(ParentName+FlowMoveSchemeSettings.FGBWFlowMoveSchemeSettings::ActionNameSeparator)) + Item.Key.ToString());
		if (Item.Value && Item.Value->TreeNodeType == EFlowMoveActionTreeNodeType::TransitNode)
		{
			Res.Append(GetFlowMoveActionNameList(
				(ParentName.IsEmpty()?"":(ParentName+FlowMoveSchemeSettings.FGBWFlowMoveSchemeSettings::ActionNameSeparator))+Item.Key.ToString(),
				Item.Value->ActionTrees));
		}
	}

	return Res;
}

TArray<FString> UGBW_DA_FlowMoveScheme::GetFlowMoveAttributeNameList() const
{
	TArray<FString> Res;
	FlowMoveSchemeSettings.InitAttributeSet.GetKeys(Res);
	
	return Res;
}

TArray<FString> UGBW_DA_FlowMoveScheme::GetSupplementarySceneSlotList() const
{
	return FlowMoveSchemeSettings.SupplementarySceneSlot;
}

bool UGBW_DA_FlowMoveScheme::GetFlowMoveAction(
	EFlowMoveActionGetMode GetMode,
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState,
	bool bIsOnlyGetActionStr,
	FFlowMoveAction& FlowMoveAction,
	FString& FlowMoveActionStr)
{
	return GetFlowMoveActionFromActionTree(
			ActionTrees,
			 GetMode,
			 OwnerCharacter,
			 FlowMoveComponent,
			 DeltaTime,
			 FlowMoveState,
			 bIsOnlyGetActionStr,
			 FlowMoveAction,
			 FlowMoveActionStr
			);
}

bool UGBW_DA_FlowMoveScheme::GetFlowMoveActionFromActionTree(TMap<FName, UGBWFlowMoveActionTree*> InActionTrees,
	EFlowMoveActionGetMode GetMode, ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime, FGBWFlowMoveState FlowMoveState, bool bIsOnlyGetActionStr, FFlowMoveAction& FlowMoveAction,
	FString& FlowMoveActionStr)
{
	bool bIsGet = false;
	FFlowMoveAction FlowMoveAction_Res;
	FString FlowMoveActionStr_In = FlowMoveActionStr;
	FString FlowMoveActionStr_Res = FlowMoveActionStr_In;
	
	for (const auto TreeNode:InActionTrees)
	{
		if (TreeNode.Value && TreeNode.Value->SceneConditionSet.IsMet(OwnerCharacter,FlowMoveComponent,DeltaTime,FlowMoveState))
		{
			if (!TreeNode.Key.IsNone())
			{
				if (TreeNode.Value->TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode && TreeNode.Value->IsActionValid(FlowMoveComponent))
				{
					FlowMoveActionStr = FlowMoveActionStr + FlowMoveSchemeSettings.ActionNameSeparator + TreeNode.Key.ToString();
					if (bIsOnlyGetActionStr)
					{
						return true;
					}
					return TreeNode.Value->ToFlowMoveAction(FlowMoveAction,OwnerCharacter,FlowMoveComponent);
				}

				FlowMoveActionStr_Res = FlowMoveActionStr_Res + FlowMoveSchemeSettings.ActionNameSeparator + TreeNode.Key.ToString();
				if (GetFlowMoveActionFromActionTree(
					TreeNode.Value->ActionTrees,
					 GetMode,
					 OwnerCharacter,
					 FlowMoveComponent,
					 DeltaTime,
					 FlowMoveState,
					 bIsOnlyGetActionStr,
					 FlowMoveAction_Res,
					 FlowMoveActionStr_Res
					))
				{
					bIsGet = true;
					FlowMoveAction = FlowMoveAction_Res;
					FlowMoveActionStr = FlowMoveActionStr_Res;
					if (GetMode == EFlowMoveActionGetMode::First)
					{
						break;
					}
				}
				FlowMoveActionStr_Res = FlowMoveActionStr_In;
			}
		}
	}
	
	return bIsGet;
}

bool UGBW_DA_FlowMoveScheme::GetFlowMoveActionByActionStr(
	const FString InFlowMoveActionStr,
	bool bIsOnlyGetActionStr,
	FString& FlowMoveActionStr,
	FFlowMoveAction& FlowMoveAction,
	bool CheckCondition,
	bool AsProactiveAction,
	FGBWFlowMoveState FlowMoveState)
{
	if (InFlowMoveActionStr.IsEmpty())
	{
		return false;
	}

	TArray<FString> StrArr;
	InFlowMoveActionStr.ParseIntoArray(StrArr, *FlowMoveSchemeSettings.ActionNameSeparator);

	UGBWFlowMoveActionTree* Result = nullptr;
	TMap<FName, UGBWFlowMoveActionTree*> InActionTrees = ActionTrees;
	for (auto s: StrArr)
	{
		if (auto Item = InActionTrees.FindRef(FName(s)))
		{
			if (!CheckCondition
				|| (CheckCondition
					&& Item->SceneConditionSet.IsMet(
						FlowMoveState.OwnerCharacter,
						FlowMoveState.FlowMoveComponent,
						FlowMoveState.FrameDeltaTime,
						FlowMoveState,
						AsProactiveAction
					)))
			{
				Result = Item;
				InActionTrees = Item->ActionTrees;
			}
			else
			{
				Result = nullptr;
				break;
			}
		}
		else
		{
			Result = nullptr;
			break;
		}
	}

	if (Result)
	{
		FlowMoveActionStr = InFlowMoveActionStr;
		if (Result->TreeNodeType == EFlowMoveActionTreeNodeType::ActionNode)
		{
			if (bIsOnlyGetActionStr)
			{
				return true;
			}
			return Result->ToFlowMoveAction(FlowMoveAction,FlowMoveState.OwnerCharacter,FlowMoveState.FlowMoveComponent);
		}
		else
		{
			return GetFlowMoveActionFromActionTree(
			Result->ActionTrees,
			 FlowMoveSchemeSettings.ActionGetMode,
			 FlowMoveState.OwnerCharacter,
			 FlowMoveState.FlowMoveComponent,
			 FlowMoveState.FrameDeltaTime,
			 FlowMoveState,
			 bIsOnlyGetActionStr,
			 FlowMoveAction,
			 FlowMoveActionStr
			);
		}
	}

	return false;
}

TArray<FName> UGBW_DA_FlowMoveConfig::GetInputActionNameList()
{
	TArray<FName> ActionNames;
	UInputSettings::GetInputSettings()->GetActionNames(ActionNames);
	return ActionNames;
}

TArray<FName> UGBW_DA_FlowMoveConfig::GetInputAxisNameList()
{
	TArray<FName> AxisNames;
	UInputSettings::GetInputSettings()->GetAxisNames(AxisNames);
	return AxisNames;
}

TArray<FString> UGBW_DA_FlowMoveConfig::GetFlowMoveActionNameList() const
{
	TArray<FString> ActionNames;
	if (DefaultFlowMoveScheme)
	{
		ActionNames = DefaultFlowMoveScheme->GetFlowMoveActionNameList("",DefaultFlowMoveScheme->ActionTrees);
	}
	return ActionNames;
}

TArray<FString> UGBW_DA_FlowMoveConfig::GetAttributeNameList() const
{
	TArray<FString> Res;
	
	if (DefaultFlowMoveScheme)
	{
		Res = DefaultFlowMoveScheme->GetFlowMoveAttributeNameList();
	}

	return Res;
}

TArray<FString> UGBW_DA_FlowMoveConfig::GetSupplementarySceneSlotList() const
{
	TArray<FString> Res;
	
	if (DefaultFlowMoveScheme)
	{
		Res = DefaultFlowMoveScheme->GetSupplementarySceneSlotList();
	}

	return Res;
}

UGBW_DA_FlowMoveConfig* UGBW_DA_FlowMoveConfig::GetCopy(UObject* Outer) const
{
	UObject* TheOuter = Outer;
	if (!TheOuter)
	{
		TheOuter = this->GetOuter();
	}
		
	UGBW_DA_FlowMoveConfig* Res = Cast<UGBW_DA_FlowMoveConfig>(DuplicateObject<UObject>(this, TheOuter));
		
	return Res;
}
