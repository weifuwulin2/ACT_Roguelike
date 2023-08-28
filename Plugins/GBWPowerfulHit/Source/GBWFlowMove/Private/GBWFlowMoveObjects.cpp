// Copyright GanBowen 2022-2023. All Rights Reserved.


#include "GBWFlowMoveObjects.h"

#include "GBWFlowMoveComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "RMS/GBWRMSBPFuncLib.h"
#include "Engine/Engine.h"

bool FFlowMovePerceptronSet::GetPerceptionResult(
	TArray<FGBWFlowMoveScene>& FlowMoveScene,
	TArray<FFlowMoveSceneConditionTargetScene>& TargetScene,
	TArray<bool>& bIsGet,
	EGBWFlowMoveEventType EventType,
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (Perceptrons.IsEmpty())
	{
		return false;
	}
	
	FGBWFlowMoveScene FlowMoveSceneResult = FGBWFlowMoveScene();
	
	for (const auto Item:Perceptrons)
	{
		if (Item)
		{
			FlowMoveSceneResult = FGBWFlowMoveScene();
			
			bIsGet.Add(Item->GetThePerceptionResult(FlowMoveSceneResult,EventType,OwnerCharacter,FlowMoveComponent));
			FlowMoveScene.Add(FlowMoveSceneResult);
			TargetScene.Add(Item->TargetScene);
		}
	}
	
	return !FlowMoveScene.IsEmpty();
}

FFlowMovePerceptronSet FFlowMovePerceptronSet::GetCopy(UObject* Outer)
{
	FFlowMovePerceptronSet Res = FFlowMovePerceptronSet();
	for (const auto Item:Perceptrons)
	{
		if (Item)
		{
			Res.Perceptrons.Add(Item->GetCopy(Outer));
		}
	}
	return Res;
}

void FFlowMoveScriptSet::Update(UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (FlowMoveComponent)
	{
		for (const auto Item:Scripts)
		{
			if (Item)
			{
				Item->Update(
					FlowMoveComponent->TaskState.OwnerCharacter->HasAuthority()? EFlowMoveNetworkLocationType::Server : EFlowMoveNetworkLocationType::Client,
					UGBWFlowMoveFuncLib::IsLocalOwn(FlowMoveComponent->TaskState.OwnerCharacter),
					FlowMoveComponent
				);
			}
		}	
	}
}

FFlowMoveScriptSet FFlowMoveScriptSet::GetCopy(UObject* Outer)
{
	FFlowMoveScriptSet Res = FFlowMoveScriptSet();
	for (const auto Item:Scripts)
	{
		if (Item)
		{
			Res.Scripts.Add(Item->GetCopy(Outer));
		}
	}
	return Res;
}

bool FFlowMoveMoveVectorCondition::IsMet(const FGBWFlowMoveState FlowMoveState)
{
	if (ConditionType == HasValue)
	{
		return FlowMoveState.MoveVector.Size() > 0;
	}

	if (ConditionType == HasNoValue)
	{
		return FlowMoveState.MoveVector.Size() == 0;
	}
	
	bool bIsMetSize = MoveVectorSizeRange.IsEmpty();
	bool bIsMetValue = MoveVectorRange.IsEmpty();
	
	if (!MoveVectorSizeRange.IsEmpty())
	{
		for (auto Item:MoveVectorSizeRange)
		{
			if (Item.InScope(FlowMoveState.MoveVector.Size()))
			{
				bIsMetSize = true;
				break;
			}
		}
	}

	if (!MoveVectorRange.IsEmpty())
	{
		for (auto Item:MoveVectorRange)
		{
			if (Item.InScope(FlowMoveState.MoveVector))
			{
				bIsMetValue = true;
				break;
			}
		}
	}

	return bIsMetSize && bIsMetValue;
}

bool FFlowActionCondition::IsMet(const FGBWFlowMoveState FlowMoveState, const EActionConditionActionType ActionType) const
{
	bool bRes = false;
	FString InActionNameStr = "";
	switch (ActionType)
	{
	case LastAction:
		InActionNameStr = FlowMoveState.LastFlowMoveActionStr;
		break;
	case CurrentAction:
		InActionNameStr = FlowMoveState.CurrentFlowMoveActionStr;
		break;
	case ExpectedAction:
		InActionNameStr = FlowMoveState.ExpectedFlowMoveActionStr;
		break;
	default: ;
	}
    	switch (ConditionType)
    	{
    	case Include:
    		bRes = ActionNameContains(InActionNameStr);
    		break;
    	case NotInclude:
    		bRes = !ActionNameContains(InActionNameStr);
    		break;
    	case AnyAction:
    		bRes = !FlowMoveState.LastFlowMoveActionStr.IsEmpty();
    		break;
    	case NoAction:
    		bRes = FlowMoveState.LastFlowMoveActionStr.IsEmpty();
    		break;
    	default: ;
    	}
    	return bRes;
}

bool FFlowActionCondition::ActionNameContains(const FString InActionName) const
{
	for (auto Item:ActionNameStrings)
	{
		if (InActionName.Contains(Item) || InActionName==Item)
		{
			return true;
		}
	}

	return false;
}

bool FFlowMoveSceneDirectionCondition::IsMet(FGBWFlowMoveState FlowMoveState) const
{
	switch (ConditionType)
	{
	case EDirectionConditionType::ValueRange:
		for (auto Item:SceneDirectionRange)
		{
			if (Item.InScope(FlowMoveState.FlowMoveScene.SceneDirection))
			{
				return true;
			}
		}
		return false;
	case EDirectionConditionType::MarkInclude:
		return DirectionMark.Contains(FlowMoveState.FlowMoveScene.SceneDirectionMark);
	case EDirectionConditionType::MarkNotInclude:
		return !DirectionMark.Contains(FlowMoveState.FlowMoveScene.SceneDirectionMark);
	default:
		return false;
	}
}

bool FFlowMoveEventCondition::IsMet(FGBWFlowMoveState FlowMoveState) const
{
	if (EventSet.IsEmpty())
	{
		return true;
	}
	
	switch (ConditionType)
	{
	case EEventConditionType::EventInclude:
		for (auto E:EventSet)
		{
			if (FlowMoveState.IsFlowMoveEvent(E))
			{
				if (bIsConsumeEventWhenMet)
				{
					FlowMoveState.FlowMoveComponent->SetFlowMoveEvent(EFlowMoveEventOperationType::Remove,E);
				}
				return true;
			}
		}
		return false;
	case EEventConditionType::EventNotInclude:
		for (auto E:EventSet)
		{
			if (FlowMoveState.IsFlowMoveEvent(E))
			{
				return false;
			}
		}
		return true;
	default: ;
	}

	return false;
}

bool FFlowMoveAttributeCondition::IsMet(FGBWFlowMoveState FlowMoveState) const
{
	float AttributeValue = 0.0f;
	if (FlowMoveState.FlowMoveComponent->TaskState.GetAttribute(TargetAttribute,AttributeValue))
	{
		for (auto Item:AttributeRange)
		{
			if (Item.InScope(AttributeValue))
			{
				return true;
			}
		}
	}

	return false;
}

bool FFlowMoveAttributeConditionSet::IsMet(FGBWFlowMoveState FlowMoveState) const
{
	if (AttributeConditionSet.IsEmpty())
	{
		return true;
	}
	
	bool bResult = false;

	switch (ConditionCombination)
	{
	case AnyMet:
		bResult = false;
		break;
	case AllNotMet:
		bResult = true;
		break;
	case AllMet:
		bResult = true;
		break;
	case AnyNotMet:
		bResult = false;
		break;
	default: ;
	}
	
	for (const auto Condition:AttributeConditionSet)
	{
		if (Condition.IsMet(FlowMoveState))
		{
			if (ConditionCombination == EFlowMoveConditionCombinationType::AnyMet)
			{
				return true;
			}
			if(ConditionCombination == EFlowMoveConditionCombinationType::AllNotMet)
			{
				return false;
			}
		}
		else
		{
			if (ConditionCombination == EFlowMoveConditionCombinationType::AllMet)
			{
				return false;
			}
			if(ConditionCombination == EFlowMoveConditionCombinationType::AnyNotMet)
			{
				return true;
			}
		}
	}

	return bResult;
}

bool FFlowMoveNetStateCondition::IsMet(FGBWFlowMoveState FlowMoveState) const
{
	if (!FlowMoveState.OwnerCharacter)
	{
		return false;
	}
	if (Type == ENetStateConditionType::Detail)
	{
		const ENetRole TheLocalRole = FlowMoveState.OwnerCharacter->GetLocalRole();
		const ENetRole TheRemoteRole = FlowMoveState.OwnerCharacter->GetRemoteRole();

		bool bIsLocalMet;
		bool bIsRemoteMet;
	
		if (LocalRole.IsEmpty())
		{
			bIsLocalMet = true;
		}
		else
		{
			bIsLocalMet = LocalRole.Contains(TheLocalRole);
		}

		if (RemoteRole.IsEmpty())
		{
			bIsRemoteMet = true;
		}
		else
		{
			bIsRemoteMet = RemoteRole.Contains(TheRemoteRole);
		}

		return bIsLocalMet && bIsRemoteMet;
	}

	if ((IsLocalPlayer == EConditionRequireType::RequireMet && !FlowMoveState.FlowMoveComponent->IsLocalPlayer())
		||IsLocalPlayer == EConditionRequireType::RequireNotMet && FlowMoveState.FlowMoveComponent->IsLocalPlayer())
	{
		return false;
	}
	if ((IsAIPlayer == EConditionRequireType::RequireMet && !FlowMoveState.FlowMoveComponent->IsAIPlayer())
		||IsAIPlayer == EConditionRequireType::RequireNotMet && FlowMoveState.FlowMoveComponent->IsAIPlayer())
	{
		return false;
	}
	if ((IsLocalOwn == EConditionRequireType::RequireMet && !FlowMoveState.FlowMoveComponent->IsLocalOwn())
		||IsLocalOwn == EConditionRequireType::RequireNotMet && FlowMoveState.FlowMoveComponent->IsLocalOwn())
	{
		return false;
	}
	if ((IsInServer == EConditionRequireType::RequireMet && !FlowMoveState.FlowMoveComponent->IsInServer())
		||IsInServer == EConditionRequireType::RequireNotMet && FlowMoveState.FlowMoveComponent->IsInServer())
	{
		return false;
	}

	return true;
}

bool FFlowMoveSceneConditionTargetScene::GetTargetScene(FGBWFlowMoveState FlowMoveState, FGBWFlowMoveScene& Result, const bool bGetAndClear) const
{
	if (TargetSceneType == ETargetSceneType::MainScene)
	{
		Result = FlowMoveState.FlowMoveScene;
		return true;
	}

	if (FlowMoveState.GetSupplementaryScene(SceneSlot,Result))
	{
		if (FlowMoveState.FlowMoveComponent->IsInServer() && bGetAndClear)
		{
			FlowMoveState.FlowMoveComponent->TaskState.RemoveSupplementaryScene(SceneSlot);
		}

		return true;
	}

	Result = FGBWFlowMoveScene();
	return true;
}

bool FFlowMoveSceneCondition::IsConditionMet(FGBWFlowMoveState FlowMoveState)
{
	FGBWFlowMoveScene TheTargetScene;
	if (!TargetScene.GetTargetScene(FlowMoveState,TheTargetScene,false))
	{
		return false;
	}
	
	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::SceneType) && !SceneTypeCondition.SceneTypeCondition.IsEmpty())
	{
		if (const bool bHasSceneType = SceneTypeCondition.SceneTypeCondition.Contains(TheTargetScene.SceneType);
			(SceneTypeCondition.ConditionType == EInclusivityType::Include_ && !bHasSceneType)
			||(SceneTypeCondition.ConditionType == EInclusivityType::NotInclude_ && bHasSceneType))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::SceneHeight) && !SceneHeightRange.IsEmpty())
	{
		bool bMet = false;
		for (auto Item:SceneHeightRange)
		{
			if (Item.InScope(TheTargetScene.SceneHeight))
			{
				bMet = true;
				break;
			}
		}
		if (!bMet)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::SceneRight) && !SceneRightRange.IsEmpty())
	{
		bool bMet = false;
		for (auto Item:SceneRightRange)
		{
			if (Item.InScope(TheTargetScene.SceneRight))
			{
				bMet = true;
				break;
			}
		}
		if (!bMet)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::SceneForward) && !SceneForwardRange.IsEmpty())
	{
		bool bMet = false;
		for (auto Item:SceneForwardRange)
		{
			if (Item.InScope(TheTargetScene.SceneForward))
			{
				bMet = true;
				break;
			}
		}
		if (!bMet)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::SceneAngle) && !SceneAngleRange.IsEmpty())
	{
		bool bMet = false;
		for (auto Item:SceneAngleRange)
		{
			if (Item.InScope(TheTargetScene.SceneAngle))
			{
				bMet = true;
				break;
			}
		}
		if (!bMet)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::SceneDirection))
	{
		if (!SceneDirectionCondition.IsMet(FlowMoveState))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::MovementMode) && !MovementModeCondition.MovementMode.IsEmpty())
	{
		if (const bool bHasMovementMode = MovementModeCondition.MovementMode.Contains(TheTargetScene.MovementMode);
			(MovementModeCondition.ConditionType == EInclusivityType::Include_ && !bHasMovementMode)
			||(MovementModeCondition.ConditionType == EInclusivityType::NotInclude_ && bHasMovementMode))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::HeightFromGround) && !HeightFromGroundRange.IsEmpty())
	{
		bool bMet = false;
		for (auto Item:HeightFromGroundRange)
		{
			if (Item.InScope(TheTargetScene.HeightFromGround))
			{
				bMet = true;
				break;
			}
		}
		if (!bMet)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::HeightFromRoof) && !HeightFromRoofRange.IsEmpty())
	{
		bool bMet = false;
		for (auto Item:HeightFromRoofRange)
		{
			if (Item.InScope(TheTargetScene.HeightFromRoof>=0? TheTargetScene.HeightFromRoof : LONG_MAX))
			{
				bMet = true;
				break;
			}
		}
		if (!bMet)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::Slope) && !SlopeRange.IsEmpty())
	{
		bool bMet = false;
		for (auto Item:SlopeRange)
		{
			if (Item.InScope(TheTargetScene.Slope))
			{
				bMet = true;
				break;
			}
		}
		if (!bMet)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::MoveVector))
	{
		if (!MoveVectorRange.IsMet(FlowMoveState))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::LastAction))
	{
		if (!LastActionCondition.IsMet(FlowMoveState, EActionConditionActionType::LastAction))
		{
			return false;
		}
	}
	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::CurrentAction))
	{
		if (!CurrentActionCondition.IsMet(FlowMoveState, EActionConditionActionType::CurrentAction))
		{
			return false;
		}
	}
	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::ExpectedAction))
	{
		if (!ExpectedActionCondition.IsMet(FlowMoveState, EActionConditionActionType::ExpectedAction))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::FlowMoveEvent))
	{
		if (!FlowMoveEventCondition.IsMet(FlowMoveState))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::Attribute))
	{
		if (!AttributeCondition.IsMet(FlowMoveState))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::FlowMoveActiveState))
	{
		switch (ActiveStateType)
		{
		case EFlowMoveActiveStateType::Active:
			if (!FlowMoveState.bIsActive)
			{
				return false;
			}
			break;
		case EFlowMoveActiveStateType::Inactive:
			if (FlowMoveState.bIsActive)
			{
				return false;
			}
			break;
		case EFlowMoveActiveStateType::ActiveOrInactive:
			
			break;
		default:
			break;
		}
	}
	else
	{
		if (!FlowMoveState.bIsActive)
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::NetState))
	{
		if (!NetStateCondition.IsMet(FlowMoveState))
		{
			return false;
		}
	}

	if (HasConditionFlag(EFlowMoveSceneConditionTypeFlags::FlowMoveSystemEvent))
	{
		bool bIsSystemEventMet = FlowMoveSystemEventSet.IsEmpty();
		for (auto E:FlowMoveSystemEventSet)
		{
			if (FlowMoveState.IsHasFlowMoveEvent(E))
			{
				bIsSystemEventMet = true;
				break;
			}
		}
		if (!bIsSystemEventMet)
		{
			return false;
		}
	}
	
	return true;
}

bool FFlowMoveSceneCondition::HasConditionFlag(EFlowMoveSceneConditionTypeFlags InFlag) const
{
	return (ConditionFlags & static_cast<uint32>(InFlag));
}

bool FFlowMoveSceneCondition::HasConditionFlag() const
{
	return ConditionFlags > 0;
}

void FGBWFlowMoveState::ClearCurrentFlowMoveAction()
{
	CurrentFlowMoveAction = FFlowMoveAction();
	CurrentFlowMoveActionStr = "";
	CurrentFlowMoveExecutedTime = 0.0f;
}

void FGBWFlowMoveState::ClearExpectedFlowMoveAction()
{
	ExpectedFlowMoveActionStr = "";
}

void FGBWFlowMoveState::ClearLastFlowMoveAction()
{
	LastFlowMoveActionStr = "";
}

void FGBWFlowMoveState::SetSupplementaryScene(const FString SceneSlot, FGBWFlowMoveScene NewScene)
{
	if (SceneSlot.IsEmpty())
	{
		return;
	}
	if (const int Index = GetSupplementarySceneIndex(SceneSlot); Index>=0)
	{
		SupplementaryFlowMoveScene[Index].Scene = NewScene;
	}
	else
	{
		FGBWSupplementaryFlowMoveScene New = FGBWSupplementaryFlowMoveScene();
		New.Scene = NewScene;
		New.SupplementarySlot = SceneSlot;
		SupplementaryFlowMoveScene.Add(New);
	}
}

void FGBWFlowMoveState::RemoveSupplementaryScene(const FString SceneSlot)
{
	if (SceneSlot.IsEmpty())
	{
		return;
	}
	if (const int Index = GetSupplementarySceneIndex(SceneSlot); Index>=0)
	{
		SupplementaryFlowMoveScene.RemoveAt(Index);
	}
}

bool FGBWFlowMoveState::GetSupplementaryScene(const FString SceneSlot, FGBWFlowMoveScene& Result)
{
	if (SceneSlot.IsEmpty())
	{
		return false;
	}
	if (const int Index = GetSupplementarySceneIndex(SceneSlot); Index>=0)
	{
		Result = SupplementaryFlowMoveScene[Index].Scene;
		return true;
	}
	return false;
}

int FGBWFlowMoveState::GetSupplementarySceneIndex(const FString SceneSlot)
{
	if (SceneSlot.IsEmpty())
	{
		return -1;
	}
	for (int i=0; i<SupplementaryFlowMoveScene.Num(); i++)
	{
		if (SupplementaryFlowMoveScene[i].SupplementarySlot == SceneSlot)
		{
			return i;
		}
	}
	return -1;
}

void FGBWFlowMoveState::AddFlowMoveEvent(FString NewEvent)
{
	if (NewEvent.IsEmpty())
	{
		return;
	}
	FlowMoveEventSet.AddUnique(NewEvent);
}

void FGBWFlowMoveState::RemoveFlowMoveEvent(FString Event)
{
	FlowMoveEventSet.Remove(Event);
}

bool FGBWFlowMoveState::IsFlowMoveEvent(FString Event) const
{
	return FlowMoveEventSet.Find(Event)>=0;
}

void FGBWFlowMoveState::InitAttributeSet(TArray<FGBWFlowMoveAttribute> NewInitAttributeSet)
{
	AttributeSet = NewInitAttributeSet;
}

void FGBWFlowMoveState::SetAttribute(FString Name, float Value)
{
	int Index = AttributeIndex(Name);
	if (Index >= 0)
	{
		AttributeSet[Index].SetValue(Value);
	}
	else
	{
		AttributeSet.Add({Name, Value});
	}
}
bool FGBWFlowMoveState::GetAttribute(FString Name, float& Value)
{
	if (const int Index = AttributeIndex(Name); Index >= 0)
	{
		Value = AttributeSet[Index].Value;
		return true;
	}

	return false;
}
int FGBWFlowMoveState::AttributeIndex(FString Name)
{
	for (int i=0; i<AttributeSet.Num(); i++)
	{
		if (AttributeSet[i].Name == Name)
		{
			return i;
		}
	}

	return -1;
}

bool FGBWFlowMoveState::GetAttributeInfo(FString Name, FGBWFlowMoveAttribute& Attribute)
{
	if (const int Index = AttributeIndex(Name); Index >= 0)
	{
		Attribute = AttributeSet[Index];
		return true;
	}

	return false;
}

void FGBWFlowMoveState::ClearFlowMoveEvent()
{
	TArray<FFlowMoveEvent> FlowMoveEventNow_Temp = FlowMoveEventNow;
	int RemoveCount = 0;
	for (int i=0; i<FlowMoveEventNow_Temp.Num(); i++)
	{
		//Delay 2 frame to clear event
		if (FlowMoveEventNow_Temp[i].InFrameNum <= FrameNumber-2)
		{
			FlowMoveEventNow.RemoveAt(i-RemoveCount);
			RemoveCount++;
		}
	}
}

void FGBWFlowMoveState::AddFlowMoveEvent(FFlowMoveEvent NewEvent)
{
	FFlowMoveEvent TheNewEvent = NewEvent;
	TheNewEvent.InFrameNum = FrameNumber;
	FlowMoveEventNow.Add(TheNewEvent);
}

bool FGBWFlowMoveState::IsHasFlowMoveEvent(FFlowMoveEvent FlowMoveEvent)
{
	for (auto Event:FlowMoveEventNow)
	{
		if (Event.EqualTo(FlowMoveEvent))
		{
			return true;
		}
	}
	return false;
}

TArray<FGBWFlowMoveAttribute> FGBWFlowMoveSchemeSettings::GetInitAttributeSet()
{
	TArray<FGBWFlowMoveAttribute> Res;

	for (auto Item:InitAttributeSet)
	{
		Res.Add(Item.Value.ToFlowMoveAttribute(Item.Key));
	}
		
	return Res;
}

bool UGBWFlowMoveObject_Base::IsNameStableForNetworking() const
{
	return true;
}

bool UGBWFlowMoveObject_Base::IsSupportedForNetworking() const
{
	return true;
}

UGBWFlowMoveObject_Base::UGBWFlowMoveObject_Base()
{Guid = FGuid::NewGuid();}

void UGBWFlowMoveObject_Base::SetWorldContext(UObject* NewWorldContext)
{
	WorldContext = new FWorldContext();
	WorldContext->SetCurrentWorld(NewWorldContext->GetWorld());
}

UObject* UGBWFlowMoveObject_Base::GetWorldContextObject()
{
	if (WorldContext && WorldContext->World())
	{
		return WorldContext->World();
	}
	
	WorldContext = new FWorldContext();
	WorldContext->SetCurrentWorld(GWorld->GetWorld());
	return GWorld->GetWorld();
}

UWorld* UGBWFlowMoveObject_Base::GetWorld() const
{
	if (UWorld* TheWorld = GWorld->GetWorld())
	{
		if (TheWorld->WorldType == EWorldType::Type::Game || TheWorld->WorldType == EWorldType::Type::PIE)
		{
			return TheWorld;
		}
	}
	return nullptr;
}

void UGBWFlowMoveRMSController_Base::InitRMSController(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo)
{
	InitFlowMoveInfo = NewInitFlowMoveInfo;
	Init(NewInitFlowMoveInfo);
}

bool UGBWFlowMoveRMSController_Base::CheckValid_Implementation(FGBWFlowMoveState FlowMoveState)
{
	return true;
}

bool UGBWFlowMoveRMSController_Base::GetIsValid(FGBWFlowMoveState FlowMoveState)
{
	return CheckValid(FlowMoveState);
}

bool UGBWFlowMoveRMSController_Base::OnInit_Implementation(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo)
{
	return true;
}

bool UGBWFlowMoveRMSController_Base::Init(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo)
{
	return OnInit(NewInitFlowMoveInfo);
}

void UGBWFlowMoveRMSController_Base::Update(UGBWFlowMoveComponent* FlowMoveComponent)
{
	OnUpdate(FlowMoveComponent->TaskState.OwnerCharacter->HasAuthority()? EFlowMoveNetworkLocationType::Server : EFlowMoveNetworkLocationType::Client,
	         UGBWFlowMoveFuncLib::IsLocalOwn(FlowMoveComponent->TaskState.OwnerCharacter),
	         FlowMoveComponent);
}

bool UGBWFlowMoveRMSController_Base::GetRMSParam_Implementation(FTransform& Result, ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, float DeltaTime, FGBWFlowMoveState FlowMoveState)
{
	Result = FTransform();
	return false;
}

bool UGBWFlowMoveRMSController_Base::GetTheRMSParam(FTransform& Result, ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, float DeltaTime, FGBWFlowMoveState FlowMoveState)
{
	return GetRMSParam(Result, OwnerCharacter, FlowMoveComponent, DeltaTime, FlowMoveState);
}

bool UGBWFlowMoveRMSController_Base::IsActive_Implementation(ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, float DeltaTime, FGBWFlowMoveState FlowMoveState)
{
	return false;
}

bool UGBWFlowMoveRMSController_Base::IsActiveNow(ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime, FGBWFlowMoveState FlowMoveState)
{
	return IsActive(OwnerCharacter, FlowMoveComponent, DeltaTime, FlowMoveState);
}

bool UGBWFlowMoveRMSController_Base::OnEnd_Implementation(ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, FGBWFlowMoveState FlowMoveState)
{
	return false;
}

bool UGBWFlowMoveRMSController_Base::End(ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent,
	FGBWFlowMoveState FlowMoveState)
{
	return OnEnd(OwnerCharacter, FlowMoveComponent, FlowMoveState);
}

void UGBWFlowMoveRMSController_Base::FlowMoveStop(UGBWFlowMoveComponent* FlowMoveComponent)
{
	return OnFlowMoveStop(FlowMoveComponent);
}

float UGBWFlowMoveRMSController_Base::GetDuration_Implementation()
{
	return 100000000.0f;
}

float UGBWFlowMoveRMSController_Base::GetTheDuration()
{
	return GetDuration();
}

float UGBWFlowMoveRMSController_Base::GetExecutedTime_Implementation()
{
	return 0.0f;
}

float UGBWFlowMoveRMSController_Base::GetTheExecutedTime()
{
	return GetExecutedTime();
}

void UGBWFlowMoveRMSController_Base::CheckCopyCache()
{
	TArray<UObject*> Keys;
	CopyCache.GetKeys(Keys);
	for (const auto K:Keys)
	{
		if (!K)
		{
			CopyCache.Remove(K);
		}
	}
}

UGBWFlowMoveRMSController_Base* UGBWFlowMoveRMSController_Base::GetCopy(UObject* Outer)
{
	CheckCopyCache();
	UGBWFlowMoveRMSController_Base* Res;
	UObject* TheOuter = Outer;
	if (!TheOuter)
	{
		TheOuter = this->GetOuter();
	}
	if (CopyCache.Find(TheOuter))
	{
		Res = CopyCache.FindRef(TheOuter);
	}
	else
	{
		Res = Cast<UGBWFlowMoveRMSController_Base>(DuplicateObject<UObject>(this, TheOuter));
		Res->Guid = FGuid::NewGuid();
		CopyCache.Add(TheOuter,Res);
	}
		
	return Res;
}

bool UGBWFlowMoveSceneCondition_Base::IsConditionMet_Implementation(ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, float DeltaTime, FGBWFlowMoveState FlowMoveState)
{
	return false;
}

bool UGBWFlowMoveSceneCondition_Base::IsTheConditionMet(ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, float DeltaTime, FGBWFlowMoveState FlowMoveState)
{
	return IsConditionMet(OwnerCharacter, FlowMoveComponent, DeltaTime, FlowMoveState);
}

TArray<FString> UGBWFlowMoveSceneCondition_Base::GetSupplementarySceneSlotList() const
{
	UObject* Outer = this->GetOuter();
	while (Outer)
	{
		if (const UGBW_DA_FlowMoveScheme* Scheme = Cast<UGBW_DA_FlowMoveScheme>(Outer))
		{
			return Scheme->GetSupplementarySceneSlotList();
		}
		else if (const UGBW_DA_FlowMoveConfig* Config = Cast<UGBW_DA_FlowMoveConfig>(Outer))
		{
			return Config->GetSupplementarySceneSlotList();
		}
		else
		{
			Outer = Outer->GetOuter();
		}
	}
	return {};
}

TArray<FString> UGBWFlowMovePerceptron_Base::GetSupplementarySceneSlotList() const
{
	UObject* Outer = this->GetOuter();
	while (Outer)
	{
		if (const UGBW_DA_FlowMoveScheme* Scheme = Cast<UGBW_DA_FlowMoveScheme>(Outer))
		{
			return Scheme->GetSupplementarySceneSlotList();
		}
		else if (const UGBW_DA_FlowMoveConfig* Config = Cast<UGBW_DA_FlowMoveConfig>(Outer))
		{
			return Config->GetSupplementarySceneSlotList();
		}
		else
		{
			Outer = Outer->GetOuter();
		}
	}
	return {};
}

void UGBWFlowMovePerceptron_Base::SetCache(FGBWFlowMoveScene TheFlowMoveSceneCache)
{
	bHasCache = true;
	FlowMoveSceneCache = TheFlowMoveSceneCache;
}

bool UGBWFlowMovePerceptron_Base::GetCache(FGBWFlowMoveScene& Result, const bool bConsume)
{
	const bool bIsGet = bHasCache;
	Result = FlowMoveSceneCache;
	if (bConsume)
	{
		bHasCache = false;
	}
	return bIsGet;
}

bool UGBWFlowMovePerceptron_Base::GetPerceptionResult_Implementation(FGBWFlowMoveScene& FlowMoveScene,
	EGBWFlowMoveEventType EventType, ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent)
{
	return false;
}

bool UGBWFlowMovePerceptron_Base::GetThePerceptionResult(FGBWFlowMoveScene& FlowMoveScene,
                                                         const EGBWFlowMoveEventType EventType, ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (!SceneConditionSet.IsMet(OwnerCharacter,FlowMoveComponent,FlowMoveComponent->TaskState.FrameDeltaTime,FlowMoveComponent->TaskState,true))
	{
		if (bIsActive)
		{
			GetPerceptionResult(FlowMoveScene, EGBWFlowMoveEventType::End, OwnerCharacter, FlowMoveComponent);
			bIsActive = false;
		}
		
		return false;
	}
	if (EventType == EGBWFlowMoveEventType::End)
	{
		bIsActive = false;
	}
	else
	{
		bIsActive = true;
	}
	
	return GetPerceptionResult(FlowMoveScene, EventType, OwnerCharacter, FlowMoveComponent);
}

void UGBWFlowMovePerceptron_Base::CheckCopyCache()
{
	TArray<UObject*> Keys;
	CopyCache.GetKeys(Keys);
	for (const auto K:Keys)
	{
		if (!K)
		{
			CopyCache.Remove(K);
		}
	}
}

UGBWFlowMovePerceptron_Base* UGBWFlowMovePerceptron_Base::GetCopy(UObject* Outer)
{
	CheckCopyCache();
	UGBWFlowMovePerceptron_Base* Res;
	UObject* TheOuter = Outer;
	if (!TheOuter)
	{
		TheOuter = this->GetOuter();
	}
	if (CopyCache.Find(TheOuter))
	{
		Res = CopyCache.FindRef(TheOuter);
	}
	else
	{
		Res = Cast<UGBWFlowMovePerceptron_Base>(DuplicateObject<UObject>(this, TheOuter));
		Res->Guid = FGuid::NewGuid();
		CopyCache.Add(TheOuter,Res);
	}
	return Res;
}

void UGBWFlowMoveScript_Base::Update(EFlowMoveNetworkLocationType NetworkLocation, bool bIsLocalOwn,
                                     UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (!SceneConditionSet.IsMet(
		FlowMoveComponent->TaskState.OwnerCharacter,
		FlowMoveComponent,FlowMoveComponent->TaskState.FrameDeltaTime,
		FlowMoveComponent->TaskState,
		true))
	{
		return;
	}
	OnUpdate(NetworkLocation, bIsLocalOwn, FlowMoveComponent);
}

void UGBWFlowMoveScript_Base::CheckCopyCache()
{
	TArray<UObject*> Keys;
	CopyCache.GetKeys(Keys);
	for (const auto K:Keys)
	{
		if (!K)
		{
			CopyCache.Remove(K);
		}
	}
}

UGBWFlowMoveScript_Base* UGBWFlowMoveScript_Base::GetCopy(UObject* Outer)
{
	CheckCopyCache();
	UGBWFlowMoveScript_Base* Res;
	UObject* TheOuter = Outer;
	if (!TheOuter)
	{
		TheOuter = this->GetOuter();
	}
	if (CopyCache.Find(TheOuter))
	{
		Res = CopyCache.FindRef(TheOuter);
	}
	else
	{
		Res = Cast<UGBWFlowMoveScript_Base>(DuplicateObject<UObject>(this, TheOuter));
		Res->Guid = FGuid::NewGuid();
		CopyCache.Add(TheOuter,Res);
	}
	return Res;
}

void FAttributeModifier::ExecuteModifier(UGBWFlowMoveComponent* FlowMoveComponent) const
{
	if (FlowMoveComponent)
	{
		float BaseValue = 0.0f;
		FlowMoveComponent->TaskState.GetAttribute(TargetAttribute, BaseValue);
		float TargetValue = 0.0f;
		switch (ModifierType)
		{
		case EFlowMoveAttributeModifierType::ADD:
			TargetValue = BaseValue + ModifierValue;
			break;
		case EFlowMoveAttributeModifierType::SUB:
			TargetValue = BaseValue - ModifierValue;
			break;
		case EFlowMoveAttributeModifierType::SET:
			TargetValue = ModifierValue;
			break;
		case EFlowMoveAttributeModifierType::AddPerSec:
			TargetValue = BaseValue + ModifierValue * FlowMoveComponent->TaskState.FrameDeltaTime;
			break;
		case EFlowMoveAttributeModifierType::SubPerSec:
			TargetValue = BaseValue - ModifierValue * FlowMoveComponent->TaskState.FrameDeltaTime;
			break;
		default: ;
		}

		FlowMoveComponent->SetAttribute(TargetAttribute,TargetValue);
	}
}

void FFlowMoveInputValueTriggerSettings::CheckInput(const UGBWFlowMoveComponent* FlowMoveComponent) const
{
	if (!FlowMoveComponent || !FlowMoveComponent->TaskState.OwnerCharacter->InputComponent)
	{
		return;
	}

	if (bIsMoveInput)
	{
		if (MoveVectorTrigger.ForwardAxisName.IsValid() && !HasAxisBinding(FlowMoveComponent->TaskState.OwnerCharacter, MoveVectorTrigger.ForwardAxisName))
		{
			FlowMoveComponent->TaskState.OwnerCharacter->InputComponent->BindAxis(MoveVectorTrigger.ForwardAxisName);
		}
		if (MoveVectorTrigger.RightAxisName.IsValid() && !HasAxisBinding(FlowMoveComponent->TaskState.OwnerCharacter, MoveVectorTrigger.RightAxisName))
		{
			FlowMoveComponent->TaskState.OwnerCharacter->InputComponent->BindAxis(MoveVectorTrigger.RightAxisName);
		}
		if (MoveVectorTrigger.UpAxisName.IsValid() && !HasAxisBinding(FlowMoveComponent->TaskState.OwnerCharacter, MoveVectorTrigger.UpAxisName))
		{
			FlowMoveComponent->TaskState.OwnerCharacter->InputComponent->BindAxis(MoveVectorTrigger.UpAxisName);
		}
	}
}

bool FFlowMoveInputValueTriggerSettings::HasAxisBinding(const ACharacter* Character, const FName AxisName)
{
	if (!Character || !Character->InputComponent)
    {
    	return false;
    }
    bool bFound = false;

    for (const FInputAxisBinding& AxisBinding : Character->InputComponent->AxisBindings)
    {
    	if (AxisBinding.AxisName == AxisName)
    	{
    		bFound = true;
    		break;
    	}
    }

    return bFound;
}

void FFlowMoveInputValueTriggerSettings::GetInputValue(
	FVector& MoveVector,
	FVector& ControlVector,
	FVector& PerceptionVector,
	bool& IsMoveInput,
	bool& IsControlInput,
	bool& IsPerceptionInput,
	const UGBWFlowMoveComponent* FlowMoveComponent) const
{
	IsMoveInput = false;
	IsControlInput = false;
	IsPerceptionInput = false;
	if (!FlowMoveComponent)
	{
		return;
	}
	CheckInput(FlowMoveComponent);
	
	if (bIsMoveInput)
	{
		if (HasAxisBinding(
			FlowMoveComponent->TaskState.OwnerCharacter,
			MoveVectorTrigger.ForwardAxisName))
		{
			MoveVector.X =
				FlowMoveComponent->TaskState.OwnerCharacter->
				GetInputAxisValue(MoveVectorTrigger.ForwardAxisName) * (MoveVectorTrigger.ReverseForwardAxis? -1: 1);
			IsMoveInput = true;
		}

		if (HasAxisBinding(
			FlowMoveComponent->TaskState.OwnerCharacter,
			MoveVectorTrigger.RightAxisName))
		{
			MoveVector.Y =
				FlowMoveComponent->TaskState.OwnerCharacter->
				GetInputAxisValue(MoveVectorTrigger.RightAxisName) * (MoveVectorTrigger.ReverseRightAxis? -1: 1);
			IsMoveInput = true;
		}

		if (HasAxisBinding(
			FlowMoveComponent->TaskState.OwnerCharacter,
			MoveVectorTrigger.UpAxisName))
		{
			MoveVector.Z =
				FlowMoveComponent->TaskState.OwnerCharacter->
				GetInputAxisValue(MoveVectorTrigger.UpAxisName) * (MoveVectorTrigger.ReverseUpAxis? -1: 1);
			IsMoveInput = true;
		}
	}

	if (bIsControlInput)
	{
		FVector ViewLocation;
		FRotator ViewRotation;
		FVector ForwardVector;
		UGBWRMSBPFuncLib::GBWRMS_GetCharacterViewInfo(FlowMoveComponent->TaskState.OwnerCharacter,ViewLocation, ViewRotation, ForwardVector);
		ControlVector = ForwardVector;
		IsControlInput = true;
	}

	if (bIsPerceptionInput)
	{
		const FTransform TraceT = FlowMoveComponent->TaskState.OwnerCharacter->GetTransform();

		FVector Direction = UKismetMathLibrary::ProjectVectorOnToPlane(FlowMoveComponent->TaskState.ControlVector, FlowMoveComponent->TaskState.OwnerCharacter->GetActorForwardVector());
		
		FVector DirectionResult = UKismetMathLibrary::InverseTransformDirection(TraceT,Direction);
		if (const float Pitch = DirectionResult.Z * 90.0f; -PerceptionInputSettings.DownAngleThreshold< Pitch && Pitch < PerceptionInputSettings.UpAngleThreshold)
		{
			DirectionResult.Z =0;
		}
		if (const float Yaw = DirectionResult.Y * 90.0f; -PerceptionInputSettings.LeftAndRightAngleThreshold< Yaw && Yaw < PerceptionInputSettings.LeftAndRightAngleThreshold)
		{
			DirectionResult.Y =0;
		}
		DirectionResult.X = 0;
		Direction.Normalize();
		PerceptionVector = DirectionResult;
		IsPerceptionInput = true;
	}
}

bool FGBWFlowMoveTraceSetting::IsMetScreeningConditions(const AActor* InActor)
{
	if (!InActor)
	{
		return false;
	}
	if (!UseScreeningConditions
		||(ActorWithClass.IsEmpty() && ActorWithTag.IsEmpty()))
	{
		return true;
	}

	bool bIsMetActorClass = false;
	bool bIsMetActorTag = false;
	for (auto Class: ActorWithClass)
	{
		if (IsValid(Class) && InActor->GetClass()->IsChildOf(Class))
		{
			bIsMetActorClass = true;
			break;
		}
	}
	for (const auto Tag: ActorWithTag)
	{
		if (InActor->ActorHasTag(Tag))
		{
			bIsMetActorTag = true;
			break;
		}
	}

	return bIsMetActorClass || bIsMetActorTag;
}

bool FGBWPerceptionResult::IsValid() const
{
	return Keys.Num()==Values.Num();
}

void FGBWPerceptionResult::AddBool(FName Key, bool Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddFloat(FName Key, float Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddVector(FName Key, FVector Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddTransform(FName Key, FTransform Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddString(FName Key, FString Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddGameplayTag(FName Key, FGameplayTag Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddActor(FName Key, AActor* Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddObject(FName Key, UObject* Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::AddMovementMode(FName Key, EMovementMode Value)
{
	const int Index = Keys.Find(Key);
	if (Index != INDEX_NONE)
	{
		Values[Index] = {Value};
	}
	else
	{
		Keys.Add(Key); Values.Add({Value});
	}
}

void FGBWPerceptionResult::GetBool(FName Key, bool& IsGet, bool& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::Bool)
		{
			Value = Item.BValue;
		}
	}
}

void FGBWPerceptionResult::GetFloat(FName Key, bool& IsGet, float& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::Float)
		{
			Value = Item.FValue;
		}
	}
}

void FGBWPerceptionResult::GetVector(FName Key, bool& IsGet, FVector& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::Vector)
		{
			Value = Item.VValue;
		}
	}
}

void FGBWPerceptionResult::GetTransform(FName Key, bool& IsGet, FTransform& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::Transform)
		{
			Value = Item.TValue;
		}
	}
}

void FGBWPerceptionResult::GetString(FName Key, bool& IsGet, FString& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::String)
		{
			Value = Item.SValue;
		}
	}
}

void FGBWPerceptionResult::GetGameplayTag(FName Key, bool& IsGet, FGameplayTag& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::GamePlayTag)
		{
			Value = Item.GTValue;
		}
	}
}

void FGBWPerceptionResult::GetActor(FName Key, bool& IsGet, AActor*& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::Actor)
		{
			Value = Item.AValue;
		}
	}
}

void FGBWPerceptionResult::GetObject(FName Key, bool& IsGet, UObject*& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::Object)
		{
			Value = Item.OValue;
		}
	}
}

void FGBWPerceptionResult::GetMovementMode(FName Key, bool& IsGet, TEnumAsByte<EMovementMode>& Value) const
{
	const int Index = Keys.Find(Key);
	IsGet = (Index != INDEX_NONE);
	if (IsGet)
	{
		if (const FGBWPerceptionResultItem Item = Values[Index];
			Item.Type == EGBWPerceptionResultItemType::MovementMode)
		{
			Value = Item.MovementModeValue;
		}
	}
}

FFlowMoveSceneConditionSet::FFlowMoveSceneConditionSet()
{
	
}

bool FFlowMoveSceneConditionSet::IsMet(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState,
	bool AsProactiveAction)
{
	if (ConditionType == EFlowMoveSceneConditionSetType::NoCondition)
	{
		return true;
	}
	if (ConditionType == EFlowMoveSceneConditionSetType::OnlyForProactive)
	{
		return AsProactiveAction;
	}
	
	if (ConditionType == EFlowMoveSceneConditionSetType::FlowMoveSceneConditionTemplate)
	{
		return SceneCondition.IsConditionMet(FlowMoveState);
	}

	if (ConditionType == EFlowMoveSceneConditionSetType::CustomConditions)
	{
		return IsAdditionalConditionMet(
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState
		);
	}
	
	return SceneCondition.IsConditionMet(FlowMoveState)
	&& IsAdditionalConditionMet(
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState
		);
}

bool FFlowMoveSceneConditionSet::IsAdditionalConditionMet(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	if (SceneConditions.IsEmpty())
	{
		return true;
	}
	
	bool bResult = false;

	switch (ConditionCombination)
	{
	case AnyMet:
		bResult = false;
		break;
	case AllNotMet:
		bResult = true;
		break;
	case AllMet:
		bResult = true;
		break;
	case AnyNotMet:
		bResult = false;
		break;
	default: ;
	}
	
	for (const auto Condition:SceneConditions)
	{
		if (Condition && Condition->IsTheConditionMet(
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState
		))
		{
			if (ConditionCombination == EFlowMoveConditionCombinationType::AnyMet)
			{
				return true;
			}
			if(ConditionCombination == EFlowMoveConditionCombinationType::AllNotMet)
			{
				return false;
			}
		}
		else
		{
			if (ConditionCombination == EFlowMoveConditionCombinationType::AllMet)
			{
				return false;
			}
			if(ConditionCombination == EFlowMoveConditionCombinationType::AnyNotMet)
			{
				return true;
			}
		}
	}

	return bResult;
}

bool FFlowMoveSceneConditionSet::IsSet() const
{
	if (ConditionType == EFlowMoveSceneConditionSetType::NoCondition)
	{
		return false;
	}
	
	if (ConditionType == EFlowMoveSceneConditionSetType::OnlyForProactive)
	{
		return true;
	}
	
	if (ConditionType == EFlowMoveSceneConditionSetType::FlowMoveSceneConditionTemplate)
	{
		return SceneCondition.HasConditionFlag();
	}

	if (ConditionType == EFlowMoveSceneConditionSetType::CustomConditions)
	{
		return !SceneConditions.IsEmpty();
	}

	return SceneCondition.HasConditionFlag() || !SceneConditions.IsEmpty();
}

FFlowMoveEvent::FFlowMoveEvent(EFlowMoveEventType TheEventType)
{
	EventType = TheEventType;
}

FFlowMoveEvent::FFlowMoveEvent(EFlowMoveEventType TheEventType, FString ActionOrEventName)
{
	EventType = TheEventType;
	if (EventType == EFlowMoveEventType::OnActionStart || EventType == EFlowMoveEventType::OnActionEnd || EventType == EFlowMoveEventType::OnActionUpdate)
	{
		ActionName = ActionOrEventName;
	}
	else if (EventType == EFlowMoveEventType::OnEventAdd || EventType == EFlowMoveEventType::OnEventRemove)
	{
		EventName = ActionOrEventName;
	}
}

FFlowMoveEvent::FFlowMoveEvent(EMovementMode TheNewMovementMode)
{
	EventType = EFlowMoveEventType::OnMovementModeChange;
	NewMovementMode = TheNewMovementMode;
}

bool FFlowMoveEvent::EqualTo(FFlowMoveEvent OtherEvent) const
{
	if (EventType != OtherEvent.EventType)
	{
		return false;
	}
		
	if (EventType == EFlowMoveEventType::OnActionStart || EventType == EFlowMoveEventType::OnActionEnd || EventType == EFlowMoveEventType::OnActionUpdate)
	{
		return ActionName==OtherEvent.ActionName
		|| ActionName.Contains(OtherEvent.ActionName)
		|| OtherEvent.ActionName.Contains(ActionName);
	}
		
	if (EventType == EFlowMoveEventType::OnEventAdd || EventType == EFlowMoveEventType::OnEventRemove)
	{
		return EventName==OtherEvent.EventName;
	}

	if (EventType == EFlowMoveEventType::OnMovementModeChange)
	{
		return NewMovementMode == OtherEvent.NewMovementMode;
	}

	return true;
}

bool FGBWFlowMoveActionLock::IsLock(const FString ForActionStr, const float TotalDuration, const float InTime) const
{
	float LockFraction = DefaultLockFraction;
	for (auto Item:SpecifyLockFraction)
	{
		if (ForActionStr.Contains(Item.FlowMoveActionStr))
		{
			LockFraction = Item.SpecifyLockFraction;
			break;
		}
	}

	LockFraction *= 0.01f;

	return InTime < TotalDuration * LockFraction;
}

bool FGBWFlowMoveActionLock::IsLockForStop(float TotalDuration, float InTime) const
{
	float LockFraction = FlowMoveStopLockFraction;

	LockFraction *= 0.01f;

	return InTime < TotalDuration * LockFraction;
}

bool FFlowMoveAction::IsMet(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	return MoveController && SceneConditionSet.IsMet(
		OwnerCharacter,
		FlowMoveComponent,
		DeltaTime,
		FlowMoveState
	);
}

bool FFlowMoveAction::IsInValidMet(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	if (!MoveController)
	{
		return true;
	}
	if (!MoveController->GetIsValid(FlowMoveState))
	{
		return true;
	}
	if (!InValidConditionSet.IsSet())
	{
		return false;
	}
	return InValidConditionSet.IsMet(
		OwnerCharacter,
		FlowMoveComponent,
		DeltaTime,
		FlowMoveState);
}

bool FFlowMoveAction::IsActive(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState) const
{
	return MoveController
	&& MoveController->IsActiveNow(
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState);
}

bool FFlowMoveAction::IsLock(FString ForActionStr) const
{
	if (MoveController)
	{
		return ActionLockSettings.IsLock(
			ForActionStr,
			MoveController->GetTheDuration(),
			MoveController->GetTheExecutedTime());
	}
	return false;
}

bool FFlowMoveAction::IsLockForStop() const
{
	if (MoveController)
	{
		return ActionLockSettings.IsLockForStop(
			MoveController->GetTheDuration(),
			MoveController->GetTheExecutedTime());
	}
	return false;
}

FFlowMoveTriggerActionSet FFlowMoveAction::GetConditionAction(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState,
	TEnumAsByte<EFlowMoveActionGetMode> ActionGetMode)
{
	FFlowMoveTriggerActionSet Result =  FFlowMoveTriggerActionSet();

	for (auto Item:ConditionTriggerDuringAction)
	{
		if (Item.SceneConditionSet.IsMet(OwnerCharacter,FlowMoveComponent,DeltaTime,FlowMoveState))
		{
			Result = Item.TriggerAction;
			if (ActionGetMode==EFlowMoveActionGetMode::First)
			{
				break;
			}
		}
	}
	
	return Result;
}

FGBWFlowMoveAttribute::FGBWFlowMoveAttribute(FString TheName, float TheValue)
{
	Name = TheName;
	SetValue(TheValue);
}

FGBWFlowMoveAttribute::FGBWFlowMoveAttribute(FString TheName, float TheValue, float TheRange_Min, float TheRange_Max)
{
	Name = TheName;
	Range_Min = TheRange_Min;
	Range_Max = TheRange_Max;
	SetValue(TheValue);
}

void FGBWFlowMoveAttribute::SetValue(float NewValue)
{
	if (NewValue < Range_Min)
	{
		Value = Range_Min;
	}
	else if (NewValue > Range_Max)
	{
		Value = Range_Max;
	}
	else
	{
		Value = NewValue;
	}
}

FGBWFlowMoveAttribute FGBWFlowMoveAttributeValue::ToFlowMoveAttribute(FString Name) const
{
	return FGBWFlowMoveAttribute(Name,Value,Range_Min,Range_Max);
}

void FGBWFlowMoveScene::CopyTo(FGBWFlowMoveScene& Target) const
{
	Target.SceneType = SceneType;

	Target.SceneHeight = SceneHeight;

	Target.SceneAngle = SceneAngle;
	
	Target.SceneDirection = SceneDirection;
	Target.SceneDirectionMark = SceneDirectionMark;

	Target.TargetActor = TargetActor;
	Target.TargetPrimitive = TargetPrimitive;

	Target.PrepareLocation = PrepareLocation;
	Target.PrepareLocation_Floor = PrepareLocation_Floor;
	Target.PrepareLocation_Roof = PrepareLocation_Roof;
	
	Target.TargetLocation = TargetLocation;
	Target.TargetLocation_Floor = TargetLocation_Floor;
	Target.TargetLocation_Roof = TargetLocation_Roof;

	Target.MovementMode = MovementMode;

	Target.Location_Floor = Location_Floor;
	Target.Location_Roof = Location_Roof;
	Target.HeightFromGround = HeightFromGround;
	Target.HeightFromRoof = HeightFromRoof;

	Target.Slope = Slope;
}

void FGBWFlowMoveScene::SetTargetLocationAndGenerateFloorAndRoof(FVector NewTargetLocation, ACharacter* Character,
	FGBWFlowMoveTraceSetting TraceSetting)
{
	TargetLocation = NewTargetLocation;
	bool Floor; FHitResult OutHit_Floor; bool Roof; FHitResult OutHit_Roof;
	UGBWFlowMoveFuncLib::FindFloorAndRoof(Character, TargetLocation, 10000.0f, 10000.0f, TraceSetting,
	                                      Floor, OutHit_Floor, Roof, OutHit_Roof);

	TargetLocation_Floor = OutHit_Floor.ImpactPoint;
	TargetLocation_Roof = OutHit_Roof.ImpactPoint;
}

void FGBWFlowMoveScene::SetLocationAndGenerateFloorAndRoof(FVector NewLocation, ACharacter* Character,
	FGBWFlowMoveTraceSetting TraceSetting)
{
	bool Floor; FHitResult OutHit_Floor; bool Roof; FHitResult OutHit_Roof;
	UGBWFlowMoveFuncLib::FindFloorAndRoof(Character, NewLocation, 10000.0f, 10000.0f, TraceSetting,
										  Floor, OutHit_Floor, Roof, OutHit_Roof);

	Location_Floor = OutHit_Floor.ImpactPoint;
	Location_Roof = OutHit_Roof.ImpactPoint;

	FVector FootLocation = Character->GetCapsuleComponent()->GetComponentLocation() - FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
	FVector HeadLocation = Character->GetCapsuleComponent()->GetComponentLocation() + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
    	
	HeightFromGround = (Location_Floor-FootLocation).Length();
	HeightFromRoof = Roof? (Location_Roof-HeadLocation).Length() : -1;
}

void FGBWFlowMoveScene::SetPrepareLocationAndGenerateFloorAndRoof(FVector NewPrepareLocation, ACharacter* Character,
	FGBWFlowMoveTraceSetting TraceSetting)
{
	PrepareLocation = NewPrepareLocation;
	bool Floor; FHitResult OutHit_Floor; bool Roof; FHitResult OutHit_Roof;
	UGBWFlowMoveFuncLib::FindFloorAndRoof(Character, PrepareLocation, 10000.0f, 10000.0f, TraceSetting,
										  Floor, OutHit_Floor, Roof, OutHit_Roof);

	PrepareLocation_Floor = OutHit_Floor.ImpactPoint;
	PrepareLocation_Roof = OutHit_Roof.ImpactPoint;
}

void FGBWFlowMoveScene::SetSceneDirectionAndGenerateMark(float NewDirection)
{
	SceneDirection = NewDirection;
	if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, -22.5f, 22.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::MU;
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, 22.5f, 67.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::RU;
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, 67.5f, 112.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::RM;
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, 112.5f, 157.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::RD;
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, 157.5f, 180.0f)
		|| UKismetMathLibrary::InRange_FloatFloat(SceneDirection, -180.0f, -157.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::MD;
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, -157.5f, -112.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::LD;
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, -112.5f, -67.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::LM;
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(SceneDirection, -67.5f, -22.5f))
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::LU;
	}
	else
	{
		SceneDirectionMark = EGBWFlowMoveDirectionType::MM;
	}
}

bool FGBWFlowMoveFloatScope::InScope(const float InValue) const
{
	if (Min.Type==EGBWFlowMoveValueScopePointType::Contain && !(InValue>=Min.Value))
	{
		return false;
	}
	if (Min.Type==EGBWFlowMoveValueScopePointType::NotContain && !(InValue>Min.Value))
	{
		return false;
	}
	if (Max.Type==EGBWFlowMoveValueScopePointType::Contain && !(InValue<=Max.Value))
	{
		return false;
	}
	if (Max.Type==EGBWFlowMoveValueScopePointType::NotContain && !(InValue<Max.Value))
	{
		return false;
	}
	return true;
}

bool FGBWFlowMoveVectorScope::InScope(const FVector InValue) const
{
	return X_Scope.InScope(InValue.X) && Y_Scope.InScope(InValue.Y) && Z_Scope.InScope(InValue.Z);
}

bool FGBWFlowMoveTransformScope::InScope(const FTransform InValue) const
{
	return Location_Scope.InScope(InValue.GetLocation())
		&& Rotation_Scope.InScope({
			InValue.GetRotation().X,InValue.GetRotation().Y,InValue.GetRotation().Z
		})
		&& Scale_Scope.InScope(InValue.GetScale3D());
}
