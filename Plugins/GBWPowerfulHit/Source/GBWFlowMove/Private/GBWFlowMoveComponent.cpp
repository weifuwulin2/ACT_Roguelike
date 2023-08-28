// Copyright GanBowen 2022-2023. All Rights Reserved.

#include "GBWFlowMoveComponent.h"

#include "Components/CapsuleComponent.h"
#include "Engine/AssetManager.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "SkeletalMeshCompiler.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "RMS/GBWRMSBPFuncLib.h"

// Sets default values for this component's properties
UGBWFlowMoveComponent::UGBWFlowMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
}

void UGBWFlowMoveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	FDoRepLifetimeParams Parameters;
	Parameters.bIsPushBased = true;
	Parameters.Condition = COND_None;
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, TaskState, Parameters)
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, NetWorkActorGuids, Parameters)
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, NetWorkActors, Parameters)
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, bIsAIPlayer, Parameters)
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, bIsAIPlayerInit, Parameters)
}

void UGBWFlowMoveComponent::BeginPlay()
{
	Super::BeginPlay();
	TaskState.OwnerCharacter = Cast<ACharacter>(GetOwner());
	TaskState.Timer = 0.0f;
	TaskState.bIsActive = false;
	TaskState.FlowMoveComponent = this;

	if (IsInServer())
	{
		TaskState.FlowMoveComponentGuid = FGuid::NewGuid();
		IsAIPlayer();
	}
}
void UGBWFlowMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	const float RealDeltaTime = DeltaTime;
	
	if (TaskState.FrameNumber == GFrameCounter )
		return;

	FlowMoveTick(RealDeltaTime);

	TaskState.Timer = TaskState.Timer + RealDeltaTime;
	TaskState.FrameDeltaTime = RealDeltaTime;
	TaskState.FrameNumber = GFrameCounter;
}

bool UGBWFlowMoveComponent::GetRootMotionParamDirect(
	FTransform& Result,
	float SimulationTime,
	float MovementTickTime,
	const ACharacter& Character,
	const UCharacterMovementComponent& MoveComponent)
{
	Result = TaskState.RMSParamNow;
	return true;
}

void UGBWFlowMoveComponent::OnEvent(FFlowMoveEvent FlowMoveEvent)
{
	TaskState.AddFlowMoveEvent(FlowMoveEvent);
	//Check Event Trigger
	if (IsInServer())
	{
		if (FlowMoveConfig)
		{
			for (auto EventTrigger:FlowMoveConfig->FlowMoveEventTrigger)
			{
				if (EventTrigger.Value.FlowMoveEvent.EqualTo(FlowMoveEvent))
				{
					DoTriggerAction(EventTrigger.Value.TriggerAction);
				}
			}
		}
	}
}

void UGBWFlowMoveComponent::SetInputValueByTargetPoint(const FVector TargetPoint)
{
	SetInputValueByTargetPoint_Server(TargetPoint);
}

void UGBWFlowMoveComponent::SetInputValueByTargetPoint_Server_Implementation(const FVector TargetPoint)
{
	if (TaskState.OwnerCharacter)
	{
		FVector ControlVector = TargetPoint - TaskState.OwnerCharacter->GetActorLocation();
		ControlVector.Normalize();
		SetControlVector(ControlVector);
		SetMoveVector(FVector(1,0,0));
		SetPerceptionVector(FVector(0,0,0));
	}
}

void UGBWFlowMoveComponent::SetMoveVector(FVector NewMoveVector)
{
	if (IsLocalOwn())
	{
		TaskState.MoveVector = NewMoveVector;
		SetMoveVector_Server(NewMoveVector);
	}
}
void UGBWFlowMoveComponent::SetMoveVector_Server_Implementation(FVector NewMoveVector)
{
	TaskState.MoveVector = NewMoveVector;
}

FVector UGBWFlowMoveComponent::GetMoveVector(const bool Consumed)
{
	const FVector r = TaskState.MoveVector;
	return r;
}

void UGBWFlowMoveComponent::SetControlVector(FVector ControlVector)
{
	if (IsLocalOwn())
	{
		TaskState.ControlVector = ControlVector;
		SetControlVector_Server(ControlVector);
	}
}
void UGBWFlowMoveComponent::SetControlVector_Server_Implementation(FVector ControlVector)
{
	TaskState.ControlVector = ControlVector;
}

FVector UGBWFlowMoveComponent::GetControlVector()
{
	return TaskState.ControlVector;
}

void UGBWFlowMoveComponent::SetPerceptionVector(FVector NewPerceptionVector)
{
	if (IsLocalOwn())
	{
		TaskState.PerceptionVector = NewPerceptionVector;
		SetPerceptionVector_Server(NewPerceptionVector);
	}
}
void UGBWFlowMoveComponent::SetPerceptionVector_Server_Implementation(FVector NewPerceptionVector)
{
	TaskState.PerceptionVector = NewPerceptionVector;
}
FVector UGBWFlowMoveComponent::GetPerceptionVector()
{
	return TaskState.PerceptionVector;
}

void UGBWFlowMoveComponent::StopFlowMove(bool WaitForCurrentActionFinished)
{
	if (IsFlowMoveActive() && (IsLocalOwn() || IsInServer()))
	{
		StopFlowMove_Server(WaitForCurrentActionFinished);
	}
}
void UGBWFlowMoveComponent::StopFlowMove_Server_Implementation(bool WaitForCurrentActionFinished)
{
	StopFlowMove_Multicast(WaitForCurrentActionFinished);
}
void UGBWFlowMoveComponent::StopFlowMove_Multicast_Implementation(bool WaitForCurrentActionFinished)
{
	if (WaitForCurrentActionFinished)
	{
		TaskState.bIsStopping = true;
        if (!TaskState.CurrentFlowMoveActionStr.IsEmpty() && TaskState.CurrentFlowMoveAction.MoveController)
        {
        	TaskState.CurrentFlowMoveAction.MoveController->FlowMoveStop(this);
        }
	}
	else
	{
		OnStopEvent();
	}
}

void UGBWFlowMoveComponent::Stop()
{
	Stop_Server();
}
void UGBWFlowMoveComponent::Stop_Server_Implementation()
{
	Stop_Multicast();
}
void UGBWFlowMoveComponent::Stop_Multicast_Implementation()
{
	OnStopEvent();
}

void UGBWFlowMoveComponent::ActiveFlowMove()
{
	if (FlowMoveConfig && FlowMoveConfig->DefaultFlowMoveScheme)
	{
		ActiveFlowMove_WithScheme(FlowMoveConfig->DefaultFlowMoveScheme);
	}
}

void UGBWFlowMoveComponent::ActiveFlowMove_WithScheme(UGBW_DA_FlowMoveScheme* FlowMoveScheme)
{
	if (TaskState.OwnerCharacter && !TaskState.bIsActive && IsLocalOwn())
	{
		Active_Server(FlowMoveScheme);
	}
}
void UGBWFlowMoveComponent::Active_Server_Implementation(UGBW_DA_FlowMoveScheme* FlowMoveScheme)
{
	Active_Multicast(FlowMoveScheme);
}
void UGBWFlowMoveComponent::Active_Multicast_Implementation(UGBW_DA_FlowMoveScheme* FlowMoveScheme)
{
	if (TaskState.OwnerCharacter)
	{
		Active_Imp(FlowMoveScheme);
	}
}

void UGBWFlowMoveComponent::Active_Imp(UGBW_DA_FlowMoveScheme* FlowMoveScheme)
{
	if (IsInServer())
	{
		if (!TaskState.FlowMoveComponentGuid.IsValid())
		{
			TaskState.FlowMoveComponentGuid = FGuid::NewGuid();
		}
	}
	TaskState.FlowMoveScheme = FlowMoveScheme;
	TaskState.OwnerCharacter = Cast<ACharacter>(GetOwner());
	TaskState.Timer = 0.0f;
	TaskState.FlowMoveComponent = this;
	
	CapsuleHalfHeightCache = TaskState.OwnerCharacter->GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight();
	MeshRelativeLocationCache = TaskState.OwnerCharacter->GetMesh()->GetRelativeLocation();
	CapsuleRadiusCache = TaskState.OwnerCharacter->GetCapsuleComponent()->GetUnscaledCapsuleRadius();

	if (TaskState.FlowMoveScheme && TaskState.OwnerCharacter)
	{
		if (TaskState.OwnerCharacter->GetController())
		{
			TaskState.OwnerCharacter->GetController()->SetIgnoreMoveInput(true);
		}
		TaskState.bIsActive = true;
		TaskState.bIsStopping = false;
		
		GetSceneAndApply(TaskState.SchemePerceptrons,EGBWFlowMoveEventType::Init);

		OnActiveEvent();
	}
	else
	{
		OnActiveFailed.Broadcast(TaskState);
		OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnActiveFailed));
		StopFlowMove(false);
	}
	bIsNetInit = true;
}

void UGBWFlowMoveComponent::SetFlowMoveConfig(TSoftObjectPtr<UGBW_DA_FlowMoveConfig> NewFlowMoveConfig)
{
	if (IsLocalOwn())
	{
		bIsInitConfigDA = true;
		SetFlowMoveConfig_Server(NewFlowMoveConfig.ToSoftObjectPath());
	}
}
void UGBWFlowMoveComponent::SetFlowMoveConfig_Server_Implementation(
	FSoftObjectPath NewFlowMoveConfigObjectPath)
{
	SetFlowMoveConfig_Multicast(NewFlowMoveConfigObjectPath);
}
void UGBWFlowMoveComponent::SetFlowMoveConfig_Multicast_Implementation(
	FSoftObjectPath NewFlowMoveConfigObjectPath)
{
	SetFlowMoveConfig_Imp(NewFlowMoveConfigObjectPath);
}
void UGBWFlowMoveComponent::SetFlowMoveConfig_Imp(FSoftObjectPath NewFlowMoveConfigObjectPath)
{
	if (FlowMoveConfig && FlowMoveConfigObjectPath == NewFlowMoveConfigObjectPath)
	{
		return;
	}

	TSoftObjectPtr<UGBW_DA_FlowMoveConfig> TSOP(FlowMoveConfigObjectPath);
	if (const UGBW_DA_FlowMoveConfig* FlowMoveConfig_temp = TSOP.Get())
	{
		FlowMoveConfig = FlowMoveConfig_temp->GetCopy(this);

		CheckInput(true);
		return;
	}
	
	FlowMoveConfigObjectPath = NewFlowMoveConfigObjectPath;
	UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		FlowMoveConfigObjectPath,
		FStreamableDelegate::CreateUObject(this, &UGBWFlowMoveComponent::OnFlowMoveConfigLoad)
	);
}
void UGBWFlowMoveComponent::OnFlowMoveConfigLoad()
{
	TSoftObjectPtr<UGBW_DA_FlowMoveConfig> TSOP(FlowMoveConfigObjectPath);
	if (const UGBW_DA_FlowMoveConfig* FlowMoveConfig_temp = TSOP.Get())
	{
		FlowMoveConfig = FlowMoveConfig_temp->GetCopy(this);

		CheckInput(true);

		TaskState.InitAttributeSet(FlowMoveConfig->DefaultFlowMoveScheme->FlowMoveSchemeSettings.GetInitAttributeSet());

		if (FlowMoveConfig->DefaultFlowMoveScheme)
		{
			TaskState.SchemeScripts = FlowMoveConfig->DefaultFlowMoveScheme->Scripts.GetCopy(TaskState.OwnerCharacter);
			TaskState.SchemePerceptrons = FlowMoveConfig->DefaultFlowMoveScheme->Perceptrons.GetCopy(TaskState.OwnerCharacter);
            TaskState.FlowMoveScheme = FlowMoveConfig->DefaultFlowMoveScheme;
		}
	}
}

void UGBWFlowMoveComponent::TryDoAction(FString ActionString, bool AsProactiveAction)
{
	TryDoAction_Server(ActionString, AsProactiveAction);
}
void UGBWFlowMoveComponent::TryDoAction_Server_Implementation(const FString& ActionString, bool AsProactiveAction)
{
	if (!IsFlowMoveActive())
	{
		return;
	}
	FFlowMoveAction ActionResult;
	FString ActionStrResult;
	if (TaskState.FlowMoveScheme->GetFlowMoveActionByActionStr(
		ActionString,
		true,
		ActionStrResult,
		ActionResult,
		true,
		AsProactiveAction,
		TaskState))
	{
		if (!IsLocked(ActionStrResult))
		{
			SetFlowMoveExpectedAction(ActionStrResult);
			TryDoExpectedAction(TaskState.FrameDeltaTime);
		}
	}
}

void UGBWFlowMoveComponent::TryEndCurrentAction()
{
	if (IsInServer())
	{
		TryEndCurrentAction_Server();
	}
}
void UGBWFlowMoveComponent::TryEndCurrentAction_Server_Implementation()
{
	TryEndCurrentAction_Multicast();
}
void UGBWFlowMoveComponent::TryEndCurrentAction_Multicast_Implementation()
{
	TryEndCurrentAction_Imp();
}
void UGBWFlowMoveComponent::TryEndCurrentAction_Imp() const
{
	if (TaskState.CurrentFlowMoveAction.MoveController)
	{
		TaskState.CurrentFlowMoveAction.MoveController->End(TaskState.OwnerCharacter, TaskState.FlowMoveComponent,TaskState);
	}
}

void UGBWFlowMoveComponent::EndCurrentAction(FString FromActionStr)
{
	if (IsInServer())
	{
		EndCurrentAction_Server(FromActionStr);
	}
}
void UGBWFlowMoveComponent::EndCurrentAction_Server_Implementation(const FString& FromActionStr)
{
	EndCurrentAction_Multicast(FromActionStr);
}
void UGBWFlowMoveComponent::EndCurrentAction_Multicast_Implementation(const FString& FromActionStr)
{
	EndCurrentAction_Imp(FromActionStr);
}
void UGBWFlowMoveComponent::EndCurrentAction_Imp(const FString FromActionStr)
{
	OnActionEndEvent(TaskState.CurrentFlowMoveActionStr);
	GetSceneAndApply(TaskState.CurrentFlowMoveAction.PerceptronsDuringAction,EGBWFlowMoveEventType::End);

	FFlowMoveTriggerActionSet ConditionAction;
	if (IsInServer())
	{
        if (FromActionStr == "" || FromActionStr != TaskState.CurrentFlowMoveActionStr)
        {
        	ConditionAction =
        		TaskState.CurrentFlowMoveAction.GetConditionAction(
        			TaskState.OwnerCharacter,
        			this,
        			TaskState.FrameDeltaTime,
        			TaskState,
        			TaskState.FlowMoveScheme->FlowMoveSchemeSettings.ActionGetMode
        		);
        }
	}
	
	if (TaskState.CurrentFlowMoveAction.MoveController)
    {
    	TaskState.CurrentFlowMoveAction.MoveController->End(TaskState.OwnerCharacter,this,TaskState);
    }
    Recovery();
    TaskState.CurrentFlowMoveExecutedTime = 0.0f;

    TaskState.ClearCurrentFlowMoveAction();

	if (IsInServer())
	{
		if (!ConditionAction.TriggerActionSet.IsEmpty())
		{
			DoTriggerAction(ConditionAction);
		}
	}
}

FName UGBWFlowMoveComponent::GetRandomSectionName(UAnimMontage* Montage, TArray<FName> RandomSections)
{
	const FName LastName = LastMontageSectionNameCache.FindRef(Montage);
	int Index;
	FName SectionName = NAME_None;
	if (!RandomSections.IsEmpty())
	{
		if (RandomSections.Num()==1)
		{
			Index = 0;
			SectionName = RandomSections[Index];
		}
		else
		{
			while (true)
			{
				Index = FMath::RandRange(0,RandomSections.Num()-1);
				SectionName = RandomSections[Index];
				if (SectionName != LastName)
				{
					break;
				}
			}
		}
	}
	else
	{
		if (Montage->CompositeSections.Num()==1)
		{
			Index = 0;
			SectionName = Montage->GetSectionName(Index);
		}
		else
		{
			while (true)
			{
				Index = FMath::RandRange(0, Montage->CompositeSections.Num() - 1);
				SectionName = Montage->GetSectionName(Index);
				if (SectionName != LastName)
				{
					break;
				}
			}
		}
	}

	LastMontageSectionNameCache.Add(Montage, SectionName);
	return  SectionName;
}

void UGBWFlowMoveComponent::PlayMontage(
	FGBWFlowMoveAnimSetting AnimSetting,
	EGBWFlowMoveActionDurationType DurationType,
	float Duration,
	bool StartInServer)
{
	if ((StartInServer && IsInServer()) || (!StartInServer && IsLocalOwn()))
	{
		if (UGBWFlowMoveFuncLib::GetSKMeshByTag(
			SKMeshCompCache,
			TaskState.OwnerCharacter,
			AnimSetting.MeshTag,
			AnimSetting.ExcludedMeshTag,
			AnimSetting.Montage
			))
		{
			AnimInstanceCache = SKMeshCompCache->GetAnimInstance();
			const FName SectionName = GetRandomSectionName(AnimSetting.Montage, AnimSetting.RandomSections);

			if (AnimInstanceCache)
			{
				int SectionIndex = AnimSetting.Montage->GetSectionIndex(SectionName);
				SectionIndex = FMath::Max(SectionIndex, 0);
				const float MontageRealTime =
					 AnimSetting.Montage->GetSectionLength(SectionIndex)/
						 AnimSetting.Montage->RateScale;
				ActionDurationCache = MontageRealTime;
				switch (DurationType)
				{
				case EGBWFlowMoveActionDurationType::MontageDuration:
					AnimPlayRateCache = 1.0f;
					break;
				case EGBWFlowMoveActionDurationType::SpecifyDuration:
					AnimPlayRateCache = MontageRealTime / Duration;
					ActionDurationCache = Duration;
					break;
				case EGBWFlowMoveActionDurationType::Infinite:
					AnimPlayRateCache = 1.0f;
					break;
				default:
					AnimPlayRateCache = 1.0f;
				}

				if (StartInServer)
				{
					PlayMontage_Multicast(
						SKMeshCompCache,
						AnimSetting.Montage,
						SectionName,
						AnimPlayRateCache,
						StartInServer
					);
				}
				else
				{
					PlayMontage_Imp(
                    	SKMeshCompCache,
                    	AnimSetting.Montage,
                    	SectionName,
                    	AnimPlayRateCache
                    );
    
                    PlayMontage_Server(
                    	SKMeshCompCache,
                    	AnimSetting.Montage,
                    	SectionName,
                    	AnimPlayRateCache,
						StartInServer
                    );
				}
			}
		}
	}
}

void UGBWFlowMoveComponent::PlayMontage_Server_Implementation(
	USkeletalMeshComponent* SKMeshComp, 
	UAnimMontage* Montage,
	FName SectionName,
	float PlayRate,
	bool StartInServer)
{
	PlayMontage_Multicast(
		SKMeshComp,
		Montage,
		SectionName,
		PlayRate,
		StartInServer
	);
}

void UGBWFlowMoveComponent::PlayMontage_Multicast_Implementation(
	USkeletalMeshComponent* SKMeshComp,
	UAnimMontage* Montage,
	FName SectionName,
	float PlayRate,
	bool StartInServer)
{
	if (StartInServer || (!StartInServer && !IsLocalOwn()))
	{
		PlayMontage_Imp(
        		SKMeshComp,
        		Montage,
        		SectionName,
        		PlayRate
        	);
	}
}

bool UGBWFlowMoveComponent::PlayMontage_Imp(
	USkeletalMeshComponent* SKMeshComp,
	UAnimMontage* Montage,
	FName SectionName,
	float PlayRate)
{
	if (!SKMeshComp || !Montage)
	{
		return false;
	}
	
	SKMeshCompCache = SKMeshComp;
	AnimInstanceCache = SKMeshCompCache->GetAnimInstance();
	AnimPlayRateCache = PlayRate;
	
	if (AnimInstanceCache)
	{
		int SectionIndex = Montage->GetSectionIndex(SectionName);
		SectionIndex = FMath::Max(SectionIndex, 0);
		const float MontageRealTime =
			 Montage->GetSectionLength(SectionIndex)/
				 Montage->RateScale;
		ActionDurationCache = MontageRealTime / AnimPlayRateCache;
		AnimInstanceCache->Montage_Stop(0.1f);
		float MontageLength = AnimInstanceCache->Montage_Play(
			Montage,
			AnimPlayRateCache,
			EMontagePlayReturnType::MontageLength);
			
		if (MontageLength> 0)
		{
			CurrentActionRootMotionModeCache = AnimInstanceCache->RootMotionMode;
			AnimInstanceCache->SetRootMotionMode(ERootMotionMode::Type::IgnoreRootMotion);

			if (SectionName != NAME_None)
			{
				AnimInstanceCache->Montage_JumpToSection(SectionName, Montage);
				Montage->GetSectionStartAndEndTime(SectionIndex,AnimPlayStartPositionCache,AnimPlayEndPositionCache);
			}
			else
			{
				AnimPlayStartPositionCache = 0.0f;
			}

			return true;
		}
	}

	return false;
}

void UGBWFlowMoveComponent::SetFlowMoveScene(
		FGBWFlowMoveScene NewScene,
		FFlowMoveSceneConditionTargetScene TargetScene,
		bool bIsRemoveSupplementaryScene)
{
	if (IsLocalOwn() || IsInServer())
	{
		SetFlowMoveScene_Imp(NewScene, TargetScene, bIsRemoveSupplementaryScene);
		SetFlowMoveScene_Server(NewScene, TargetScene, bIsRemoveSupplementaryScene);
	}
}
void UGBWFlowMoveComponent::SetFlowMoveScene_Server_Implementation(
		FGBWFlowMoveScene NewScene,
		FFlowMoveSceneConditionTargetScene TargetScene,
		bool bIsRemoveSupplementaryScene)
{
	SetFlowMoveScene_Imp(NewScene, TargetScene, bIsRemoveSupplementaryScene);
}
void UGBWFlowMoveComponent::SetFlowMoveScene_Imp(
		FGBWFlowMoveScene NewScene,
		FFlowMoveSceneConditionTargetScene TargetScene,
		bool bIsRemoveSupplementaryScene)
{
	if (TargetScene.TargetSceneType == ETargetSceneType::MainScene)
	{
		if (TaskState.FlowMoveScene.MovementMode != NewScene.MovementMode)
		{
			OnEvent(FFlowMoveEvent(NewScene.MovementMode));
		}
		TaskState.FlowMoveScene = NewScene;
	}
	else if (bIsRemoveSupplementaryScene)
	{
		TaskState.RemoveSupplementaryScene(TargetScene.SceneSlot);
	}
	else
	{
		TaskState.SetSupplementaryScene(TargetScene.SceneSlot,NewScene);
	}
}

void UGBWFlowMoveComponent::SetFlowMoveExpectedAction(FString NewExpectedActionStr)
{
	if (IsInServer() || IsLocalOwn())
	{
		SetFlowMoveExpectedAction_Server(NewExpectedActionStr);
	}
}
void UGBWFlowMoveComponent::SetFlowMoveExpectedAction_Server_Implementation(const FString& NewExpectedActionStr)
{
	SetFlowMoveExpectedAction_Imp(NewExpectedActionStr);
}
void UGBWFlowMoveComponent::SetFlowMoveExpectedAction_Imp(FString NewExpectedActionStr)
{
	if (NewExpectedActionStr.IsEmpty())
	{
		TaskState.ClearExpectedFlowMoveAction();
		return;
	}
	
	FFlowMoveAction ActionResult;
	FString ActionStrResult;
	if (TaskState.FlowMoveScheme->GetFlowMoveActionByActionStr(
		NewExpectedActionStr,
		true,
		ActionStrResult,
		ActionResult))
	{
		TaskState.ExpectedFlowMoveActionStr = ActionStrResult;
	}
	else
	{
		TaskState.ClearExpectedFlowMoveAction();
	}
}

void UGBWFlowMoveComponent::SetFlowMoveLastAction(FString NewLastActionStr)
{
	if (IsInServer())
	{
		SetFlowMoveLastAction_Server(NewLastActionStr);
	}
}

void UGBWFlowMoveComponent::SetFlowMoveLastAction_Server_Implementation(const FString& NewLastActionStr)
{
	SetFlowMoveLastAction_Imp(NewLastActionStr);
}

void UGBWFlowMoveComponent::SetFlowMoveLastAction_Imp(FString NewLastActionStr)
{
	FFlowMoveAction ActionResult;
	FString ActionStrResult;
	if (TaskState.FlowMoveScheme->GetFlowMoveActionByActionStr(NewLastActionStr,true,ActionStrResult,ActionResult))
	{
		TaskState.LastFlowMoveActionStr = ActionStrResult;
	}
	else
	{
		TaskState.ClearLastFlowMoveAction();
	}
}

bool UGBWFlowMoveComponent::IsAnimActive(const UAnimMontage* Montage) const
{
	if (AnimInstanceCache && Montage)
	{
		return AnimInstanceCache->Montage_IsActive(Montage);
	}
	return false;
}

bool UGBWFlowMoveComponent::GetSceneAndApply(FFlowMovePerceptronSet PerceptronSet, EGBWFlowMoveEventType EventType)
{
	TArray<FGBWFlowMoveScene> FlowMoveScene;
	TArray<FFlowMoveSceneConditionTargetScene> TargetScene;
	TArray<bool> bIsGet;
	PerceptronSet.GetPerceptionResult(
		FlowMoveScene,
		TargetScene,
		bIsGet,
		EventType,
		TaskState.OwnerCharacter,
		this);

	if (EventType != EGBWFlowMoveEventType::End)
	{
		for (int i=0; i<FlowMoveScene.Num(); i++)
        {
        	SetFlowMoveScene(
        		FlowMoveScene[i],
        		TargetScene[i],
        		!bIsGet[i]);
        }
	}

	return !FlowMoveScene.IsEmpty();
}

void UGBWFlowMoveComponent::SetAttribute(FString Name, float Value)
{
	if (IsInServer())
	{
		SetAttribute_Server(Name,Value);
	}
}
void UGBWFlowMoveComponent::SetAttribute_Server_Implementation(const FString& Name, float Value)
{
	SetAttribute_Imp(Name,Value);
}
void UGBWFlowMoveComponent::SetAttribute_Imp(FString Name, float Value)
{
	TaskState.SetAttribute(Name, Value);
}

bool UGBWFlowMoveComponent::GetAttribute(FString Name, FGBWFlowMoveAttribute& Attribute)
{
	return TaskState.GetAttributeInfo(Name,Attribute);
}

bool UGBWFlowMoveComponent::IsLocalPlayer()
{
	if (!TaskState.OwnerCharacter)
	{
		return false;
	}

	if (!bIsLocalPlayerInit)
	{
		bIsLocalPlayer = UGBWFlowMoveFuncLib::IsLocalOwn(TaskState.OwnerCharacter)
		&& UGameplayStatics::GetPlayerCharacter(this, 0) == TaskState.OwnerCharacter;
		bIsLocalPlayerInit = true;
	}
	return bIsLocalPlayer;
}

bool UGBWFlowMoveComponent::IsAIPlayer()
{
	if (!TaskState.OwnerCharacter)
	{
		return false;
	}

	if (IsInServer())
	{
		bIsAIPlayer = UGBWFlowMoveFuncLib::IsAIPlayer(TaskState.OwnerCharacter);
		bIsAIPlayerInit = true;
	}
	
	return bIsAIPlayer;
}

bool UGBWFlowMoveComponent::IsLocalOwn()
{
	if (!TaskState.OwnerCharacter)
	{
		return false;
	}

	if (!bIsLocalOwnInit)
	{
		bIsLocalOwn = UGBWFlowMoveFuncLib::IsLocalOwn(TaskState.OwnerCharacter);
		bIsLocalOwnInit = true;
	}
	
	return bIsLocalOwn;
}

bool UGBWFlowMoveComponent::IsInServer()
{
	if (!bIsInServerInit)
	{
		bIsInServer = TaskState.OwnerCharacter && TaskState.OwnerCharacter->HasAuthority();
		bIsInServerInit = true;
	}
	return bIsInServer;
}

bool UGBWFlowMoveComponent::IsFlowMoveActive() const
{
	return TaskState.OwnerCharacter && TaskState.bIsActive;
}

AActor* UGBWFlowMoveComponent::GetNetWorkActor(const FGuid ActorGuid)
{
	if (ActorGuid.IsValid())
	{
		const int Index = NetWorkActorGuids.Find(ActorGuid);
		if (Index != INDEX_NONE)
		{
			return NetWorkActors[Index];
		}
	}

	return nullptr;
}

void UGBWFlowMoveComponent::SpawnNetWorkActor(const FGuid ActorGuid, const TSubclassOf<AActor> ActorClass, const FTransform Transform)
{
	if (IsInServer() || IsLocalOwn())
	{
		SpawnNetWorkActor_Server(ActorGuid, ActorClass, Transform);
	}
}
void UGBWFlowMoveComponent::SpawnNetWorkActor_Server_Implementation(const FGuid ActorGuid, const TSubclassOf<AActor> ActorClass, const FTransform Transform)
{
	SpawnNetWorkActor_Imp(ActorGuid, ActorClass, Transform);
}
void UGBWFlowMoveComponent::SpawnNetWorkActor_Imp(FGuid ActorGuid, const TSubclassOf<AActor> ActorClass, const FTransform Transform)
{
	if (ActorGuid.IsValid())
	{
		const int Index = NetWorkActorGuids.Find(ActorGuid);
		if (Index != INDEX_NONE)
		{
			if (NetWorkActors[Index])
			{
				NetWorkActors[Index]->Destroy();
			}
			
			NetWorkActorGuids.RemoveAt(Index);
			NetWorkActors.RemoveAt(Index);
		}
		
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.Owner = TaskState.OwnerCharacter;
		SpawnInfo.Instigator = TaskState.OwnerCharacter;
		SpawnInfo.Name = FName(ActorGuid.ToString());
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		if (AActor* Actor = TaskState.OwnerCharacter->GetWorld()->SpawnActor<AActor>(ActorClass, Transform, SpawnInfo))
		{
			Actor->SetReplicates(true);
			Actor->SetReplicateMovement(true);
			NetWorkActorGuids.Add(ActorGuid);
			NetWorkActors.Add(Actor);
		}
	}
}

void UGBWFlowMoveComponent::DestroyNetWorkActor(const FGuid ActorGuid)
{
	if (IsInServer() || IsLocalOwn())
	{
		DestroyNetWorkActor_Server(ActorGuid);
	}
}
void UGBWFlowMoveComponent::DestroyNetWorkActor_Server_Implementation(const FGuid ActorGuid)
{
	DestroyNetWorkActor_Imp(ActorGuid);
}
void UGBWFlowMoveComponent::DestroyNetWorkActor_Imp(const FGuid ActorGuid)
{
	if (ActorGuid.IsValid())
	{
		const int Index = NetWorkActorGuids.Find(ActorGuid);
		if (Index != INDEX_NONE)
		{
			if (NetWorkActors[Index])
			{
				NetWorkActors[Index]->Destroy();
			}
			
			NetWorkActorGuids.RemoveAt(Index);
			NetWorkActors.RemoveAt(Index);
		}
	}
}

void UGBWFlowMoveComponent::SetNetWorkActorLocation(const FGuid ActorGuid, const FVector NewLocation)
{
	if (IsLocalOwn() || IsInServer())
	{
		SetNetWorkActorLocation_Server(ActorGuid, NewLocation);
	}
}
void UGBWFlowMoveComponent::SetNetWorkActorLocation_Server_Implementation(const FGuid ActorGuid, const FVector NewLocation)
{
	SetNetWorkActorLocation_Imp(ActorGuid, NewLocation);
}
void UGBWFlowMoveComponent::SetNetWorkActorLocation_Imp(const FGuid ActorGuid, const FVector NewLocation)
{
	if (ActorGuid.IsValid())
	{
		const int Index = NetWorkActorGuids.Find(ActorGuid);
		if (Index != INDEX_NONE)
		{
			if (NetWorkActors[Index])
			{
				NetWorkActors[Index]->SetActorLocation(NewLocation);
			}
		}
	}
}

void UGBWFlowMoveComponent::ResetCapsuleAndMesh()
{
	if (IsInServer())
	{
		ResetCapsuleAndMesh_Server();
	}
}
void UGBWFlowMoveComponent::ResetCapsuleAndMesh_Server_Implementation()
{
	ResetCapsuleAndMesh_Multicast();
}
void UGBWFlowMoveComponent::ResetCapsuleAndMesh_Multicast_Implementation()
{
	ResetCapsuleAndMesh_Imp();
}
void UGBWFlowMoveComponent::ResetCapsuleAndMesh_Imp() const
{
	TaskState.OwnerCharacter->GetCapsuleComponent()->SetCapsuleHalfHeight(CapsuleHalfHeightCache);
	TaskState.OwnerCharacter->GetMesh()->SetRelativeLocation(MeshRelativeLocationCache);
}

void UGBWFlowMoveComponent::SetCapsuleAndKeepMesh(float NewHeight)
{
	if (IsInServer())
	{
		const FVector CapScale = TaskState.OwnerCharacter->GetCapsuleComponent()->GetComponentScale();
		const float TargetHalfHeight = NewHeight / 2.0f / CapScale.Z;
		float TargetRadius = CapsuleRadiusCache;
		if (NewHeight / 2.0f < TaskState.OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleRadius())
		{
			TargetRadius = TargetHalfHeight / 2.0f ;
		}

		const float TargetMeshRlz = MeshRelativeLocationCache.Z + (CapsuleHalfHeightCache * CapScale.Z - NewHeight / 2.0f);

		SetCapsuleAndKeepMesh_Server(TargetRadius,TargetHalfHeight,TargetMeshRlz);
	}
}
void UGBWFlowMoveComponent::SetCapsuleAndKeepMesh_Server_Implementation(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz)
{
	SetCapsuleAndKeepMesh_Multicast(TargetRadius,TargetHalfHeight,TargetMeshRlz);
}
void UGBWFlowMoveComponent::SetCapsuleAndKeepMesh_Multicast_Implementation(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz)
{
	SetCapsuleAndKeepMesh_Imp(TargetRadius,TargetHalfHeight,TargetMeshRlz);
}
void UGBWFlowMoveComponent::SetCapsuleAndKeepMesh_Imp(float TargetRadius, float TargetHalfHeight, float TargetMeshRlz) const
{
	TaskState.OwnerCharacter->GetCapsuleComponent()->SetCapsuleRadius(TargetRadius);
	TaskState.OwnerCharacter->GetCapsuleComponent()->SetCapsuleHalfHeight(TargetHalfHeight);
	TaskState.OwnerCharacter->GetMesh()->SetRelativeLocation(FVector(
		MeshRelativeLocationCache.X,
		MeshRelativeLocationCache.Y,
		TargetMeshRlz
	));
}

void UGBWFlowMoveComponent::AdjustCapsuleAndKeepMeshByTargetLocation(FGBWFlowMoveScene FlowMoveScene)
{
	if (FlowMoveScene.TargetLocation_Floor.IsNearlyZero() || FlowMoveScene.TargetLocation_Roof.IsNearlyZero())
	{
		ResetCapsuleAndMesh();
	}
	else
	{
		const float TargetHeight = FMath::Abs((FlowMoveScene.TargetLocation_Floor - FlowMoveScene.TargetLocation_Roof).Z);
		if (TargetHeight / 2.0f > CapsuleHalfHeightCache * TaskState.OwnerCharacter->GetCapsuleComponent()->GetComponentScale().Z)
		{
			ResetCapsuleAndMesh();
		}
		else
		{
			SetCapsuleAndKeepMesh(TargetHeight * 0.8f);
		}
	}
}

void UGBWFlowMoveComponent::AdjustCapsuleAndKeepMeshByCurrentLocation(FGBWFlowMoveScene FlowMoveScene)
{
	if (FlowMoveScene.Location_Floor.IsNearlyZero() || FlowMoveScene.Location_Roof.IsNearlyZero())
	{
		ResetCapsuleAndMesh();
	}
	else
	{
		const float TargetHeight = FMath::Abs((FlowMoveScene.Location_Floor - FlowMoveScene.Location_Roof).Z);
		if (TargetHeight / 2.0f > CapsuleHalfHeightCache * TaskState.OwnerCharacter->GetCapsuleComponent()->GetComponentScale().Z)
		{
			ResetCapsuleAndMesh();
		}
		else
		{
			SetCapsuleAndKeepMesh(TargetHeight * 0.9f);
		}
	}
}

bool UGBWFlowMoveComponent::CheckUpdateValid()
{
	if (!IsValid(TaskState.FlowMoveScheme)
		|| !TaskState.FlowMoveScheme->IsSchemeValid()
		|| !IsFlowMoveActive())
	{
		return false;
	}

	if (!UGBWRMSBPFuncLib::GBWRMS_IsRMSCommonActive(TaskState.OwnerCharacter->GetCharacterMovement()))
	{
		FName RMSInsName;
		UGBWRMSBPFuncLib::GBWRMS_Common(
						RMSInsName,
						this,
						TaskState.OwnerCharacter->GetCharacterMovement(),
						true);
	}

	if (!bIsNetInit && TaskState.FlowMoveScheme)
	{
		Active_Imp(TaskState.FlowMoveScheme);
	}
	
	return true;
}

void UGBWFlowMoveComponent::UpdateCharacterNetState(float DeltaTime)
{
	
}

void UGBWFlowMoveComponent::UpdateScript(float DeltaTime)
{
	TaskState.SchemeScripts.Update(this);
}

void UGBWFlowMoveComponent::UpdateScene(float DeltaTime)
{
	GetSceneAndApply(TaskState.CurrentFlowMoveAction.PerceptronsDuringAction,EGBWFlowMoveEventType::Update);
	GetSceneAndApply(TaskState.SchemePerceptrons,EGBWFlowMoveEventType::Update);
}

void UGBWFlowMoveComponent::UpdateExpectedAction(float DeltaTime)
{
	if (IsInServer() && !TaskState.bIsStopping)
	{
		FFlowMoveAction FlowMoveAction;
		if(TaskState.FlowMoveScheme->GetFlowMoveAction(
			TaskState.FlowMoveScheme->FlowMoveSchemeSettings.ActionGetMode,
			TaskState.OwnerCharacter,
			this,
			DeltaTime,
			TaskState,
			true,
			FlowMoveAction,
			TaskState.ExpectedFlowMoveActionStr))
		{
			SetFlowMoveExpectedAction(TaskState.ExpectedFlowMoveActionStr);
		}
		else
		{
			SetFlowMoveExpectedAction("");
			if (TaskState.CurrentFlowMoveActionStr.IsEmpty())
			{
				OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnNoActionCanExecute));
			}
		}
	}
}

void UGBWFlowMoveComponent::UpdateConditionAction(float DeltaTime)
{
	//Check condition action
	if (IsInServer() && !TaskState.bIsStopping)
	{
		const FFlowMoveTriggerActionSet ConditionAction =
				TaskState.CurrentFlowMoveAction.GetConditionAction(
					TaskState.OwnerCharacter,
					this,
					TaskState.FrameDeltaTime,
					TaskState,
					TaskState.FlowMoveScheme->FlowMoveSchemeSettings.ActionGetMode
				);
	
		DoTriggerAction(ConditionAction);
	}
}

bool UGBWFlowMoveComponent::TryDoExpectedAction(float DeltaTime)
{
	if (IsInServer() && !TaskState.bIsStopping)
	{
		if (!TaskState.ExpectedFlowMoveActionStr.IsEmpty())
		{
			if (!IsLocked(TaskState.ExpectedFlowMoveActionStr))
			{
				SetFlowMoveLastAction(TaskState.CurrentFlowMoveActionStr);
				DoAction_Multicast(TaskState.ExpectedFlowMoveActionStr);
				return true;
			}
		}
	}

	return false;
}
void UGBWFlowMoveComponent::DoAction_Server_Implementation(const FString& ActionStr, bool AsProactiveAction)
{
	if (IsFlowMoveActive())
	{
		FFlowMoveAction ActionResult;
		FString ActionStrResult;
		if (TaskState.FlowMoveScheme->GetFlowMoveActionByActionStr(
			ActionStr,
			true,
			ActionStrResult,
			ActionResult,
			true,
			AsProactiveAction,
			TaskState))
		{
			if (!IsLocked(ActionStrResult))
			{
				DoAction_Multicast(ActionStrResult);
			}
		}
	}
}
void UGBWFlowMoveComponent::DoAction_Multicast_Implementation(const FString& ActionStr)
{
	FFlowMoveAction ActionResult;
	FString ActionStrResult;
	if (TaskState.FlowMoveScheme->GetFlowMoveActionByActionStr(
		ActionStr,
		false,
		ActionStrResult,
		ActionResult,
		false,
		true,
		TaskState)
		&& ActionResult.ActionTargetScene.GetTargetScene(TaskState,TaskState.CurrentActionTargetScene,true))
	{
		if (!TaskState.CurrentFlowMoveActionStr.IsEmpty())
		{
			EndCurrentAction_Imp(ActionStrResult);
		}
		if (!TaskState.CurrentFlowMoveActionStr.IsEmpty())
		{
			return;
		}
		
		TaskState.CurrentFlowMoveActionStr = ActionStrResult;
		TaskState.CurrentFlowMoveAction = ActionResult;
		TaskState.CurrentFlowMoveExecutedTime = 0.0f;
		if (TaskState.CurrentFlowMoveAction.MoveController)
		{
			OnActionStart.Broadcast(ActionStr);
			OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnActionStart,ActionStrResult));
			
			FGBWFlowMoveRMSControllerInitInfo ControllerInitInfo;
			ControllerInitInfo.BeginTransform = TaskState.OwnerCharacter->GetTransform();
			ControllerInitInfo.BeginFlowMoveState = TaskState;
			TaskState.CurrentFlowMoveAction.MoveController->InitRMSController(ControllerInitInfo);
			
			if (GetSceneAndApply(TaskState.CurrentFlowMoveAction.PerceptronsDuringAction,EGBWFlowMoveEventType::Init))
			{
				if (IsInServer())
				{
					const FFlowMoveTriggerActionSet ConditionAction =
						TaskState.CurrentFlowMoveAction.GetConditionAction(
						TaskState.OwnerCharacter,
						this,
						TaskState.FrameDeltaTime,
						TaskState,
						TaskState.FlowMoveScheme->FlowMoveSchemeSettings.ActionGetMode
					);
	
					DoTriggerAction(ConditionAction);
				}
			}
		}
	}
}

void UGBWFlowMoveComponent::UpdateCurrentAction(float DeltaTime)
{
	if (TaskState.CurrentFlowMoveActionStr.IsEmpty())
	{
		TaskState.CurrentFlowMoveExecutedTime = 0.0f;
	}
	else
	{
		OnActionUpdate.Broadcast(TaskState.CurrentFlowMoveActionStr);
		OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnActionUpdate,TaskState.CurrentFlowMoveActionStr));
		
		//update time
		TaskState.CurrentFlowMoveExecutedTime += DeltaTime;
		//update script
		TaskState.CurrentFlowMoveAction.ScriptsDuringAction.Update(this);
		//update move controller
		if (TaskState.CurrentFlowMoveAction.MoveController)
		{
			TaskState.CurrentFlowMoveAction.MoveController->Update(this);
		}
		//Update RMS
		if (IsInServer())
		{
			FTransform NewParam = FTransform();
			if (TaskState.CurrentFlowMoveAction.MoveController
				&& TaskState.CurrentFlowMoveAction.MoveController->GetTheRMSParam(
					NewParam,
					TaskState.OwnerCharacter,
					TaskState.FlowMoveComponent,
					DeltaTime,
					TaskState))
			{
				TaskState.RMSParamNow = NewParam;
				TaskState.RMSParamNow_Local = NewParam;
			}
		}
		else if (IsLocalOwn())
		{
			FTransform NewParam = FTransform();
			if (TaskState.CurrentFlowMoveAction.MoveController
				&& TaskState.CurrentFlowMoveAction.MoveController->GetTheRMSParam(
					NewParam,
					TaskState.OwnerCharacter,
					TaskState.FlowMoveComponent,
					DeltaTime,
					TaskState))
			{
				TaskState.RMSParamNow_Local = NewParam;
			}
		}
		//check valid
		if (IsInServer())
		{
			const bool bIsInvalidMet = TaskState.CurrentFlowMoveAction.IsInValidMet(
				TaskState.OwnerCharacter,
				TaskState.FlowMoveComponent,
				DeltaTime,
				TaskState);
			const bool bIsActionActive = TaskState.CurrentFlowMoveAction.IsActive(
				TaskState.OwnerCharacter,
				TaskState.FlowMoveComponent,
				DeltaTime,
				TaskState);

			if (bIsInvalidMet)
			{
				TryEndCurrentAction();
			}

			if (!bIsActionActive)
			{
				EndCurrentAction("");
			}
		}
	}
}

void UGBWFlowMoveComponent::UpdateConditionTrigger(float DeltaTime)
{
	if (IsInServer() && FlowMoveConfig)
	{
		for (auto Trigger:FlowMoveConfig->FlowMoveConditionTrigger)
		{
			if (Trigger.Value.SceneConditionSet.IsMet(
				TaskState.OwnerCharacter,
				this,
				DeltaTime,
				TaskState,
				true
			))
			{
				DoTriggerAction(Trigger.Value.TriggerAction);
			}
		}
	}
}

void UGBWFlowMoveComponent::OnActiveEvent()
{
	OnActive.Broadcast(TaskState);
	OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnActive));
}

void UGBWFlowMoveComponent::FlowMoveTick(float DeltaTime)
{
	//Clear FlowMoveEvent
	TaskState.ClearFlowMoveEvent();
	
	//Check DA
	CheckDA();
	
	//Check Input
	CheckInput();
	
	//Update CharacterNetState
	UpdateCharacterNetState(DeltaTime);
	
	//Update Script
	UpdateScript(DeltaTime);

	//Update Scene
	UpdateScene(DeltaTime);

	//Update ConditionTrigger
	UpdateConditionTrigger(DeltaTime);

	OnUpdate.Broadcast(TaskState);
	OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnUpdate));

	//Check Stop
	CheckStop();
	
	//Check Update Valid
	if (!CheckUpdateValid())
	{
		return;
	}
	
	//Get Expected Action
	UpdateExpectedAction(DeltaTime);

	//Update Condition Action
	UpdateConditionAction(DeltaTime);
	
	//Try Do Expected Action
	TryDoExpectedAction(DeltaTime);
	
	//Update Current Action //Update RMS
	UpdateCurrentAction(DeltaTime);
}

void UGBWFlowMoveComponent::CheckStop()
{
	//check valid
	if (IsInServer())
	{
		if (TaskState.bIsStopping)
		{
			if (TaskState.CurrentFlowMoveActionStr.IsEmpty()
				||!TaskState.CurrentFlowMoveAction.IsLockForStop()
				||TaskState.CurrentFlowMoveAction.IsInValidMet(
				TaskState.OwnerCharacter,
				TaskState.FlowMoveComponent,
				TaskState.FrameDeltaTime,
				TaskState)
				|| !TaskState.CurrentFlowMoveAction.IsActive(
				TaskState.OwnerCharacter,
				TaskState.FlowMoveComponent,
				TaskState.FrameDeltaTime,
				TaskState))
			{
				Stop();
			}
		}
	}
}

void UGBWFlowMoveComponent::CheckDA()
{
	if (!FlowMoveConfig && !bIsInitConfigDA)
	{
		SetFlowMoveConfig(FlowMoveConfigDA);
	}
}

void UGBWFlowMoveComponent::CheckInput(bool bReset)
{
	if (IsLocalPlayer() && TaskState.OwnerCharacter && FlowMoveConfig && TaskState.OwnerCharacter->InputComponent)
	{
		TArray<FString> Keys;
		TArray<FFlowMoveInputActionAction> Triggers;
		FlowMoveConfig->FlowMoveInputTrigger.GetKeys(Keys);
		for (const auto Key:Keys)
		{
			FFlowMoveInputActionAction InputTrigger = FlowMoveConfig->FlowMoveInputTrigger.FindRef(Key);
			if ((bReset || !InputTrigger.bIsBind) && InputTrigger.InputActionName.IsValid())
			{
				for (auto TriggerAction:InputTrigger.TriggerAction)
				{
					TaskState.OwnerCharacter->InputComponent->BindAction<TDelegate<void(FFlowMoveTriggerActionSet)>>(
                    	InputTrigger.InputActionName,
                    	TriggerAction.Key,
                    	this,
                    	&UGBWFlowMoveComponent::DoTriggerAction,
                    	TriggerAction.Value);
				}
				
				InputTrigger.bIsBind = true;
				FlowMoveConfig->FlowMoveInputTrigger.Add(Key,InputTrigger);
			}
		}

		FVector MoveVector;
		FVector ControlVector;
		FVector PerceptionVector;
		bool IsMoveInput;
		bool IsControlInput;
		bool IsPerceptionInput;
		FlowMoveConfig->FlowMoveInputValueTrigger.GetInputValue(
			MoveVector,
			ControlVector,
			PerceptionVector,
			IsMoveInput,
			IsControlInput,
			IsPerceptionInput,
			this);
		if (IsMoveInput)
		{
			SetMoveVector(MoveVector);
		}
		if (IsControlInput)
		{
			SetControlVector(ControlVector);
		}
		if (IsPerceptionInput)
		{
			SetPerceptionVector(PerceptionVector);
		}
	}
}

void UGBWFlowMoveComponent::StopMontage(UAnimMontage* Montage, float BlendOutTime)
{
	if (IsLocalOwn())
	{
		StopMontage_Imp(Montage, BlendOutTime);
		StopMontage_Server(Montage, BlendOutTime);
	}
}
void UGBWFlowMoveComponent::StopMontage_Server_Implementation(UAnimMontage* Montage, float BlendOutTime)
{
	StopMontage_Multicast(Montage, BlendOutTime);
}
void UGBWFlowMoveComponent::StopMontage_Multicast_Implementation(UAnimMontage* Montage, float BlendOutTime)
{
	if (!IsLocalOwn())
	{
		StopMontage_Imp(Montage, BlendOutTime);
	}
}
void UGBWFlowMoveComponent::StopMontage_Imp(const UAnimMontage* Montage, const float BlendOutTime) const
{
	if (AnimInstanceCache)
	{
		AnimInstanceCache->Montage_Stop(BlendOutTime, Montage);
	}
}

void UGBWFlowMoveComponent::SetFlowMoveEvent(
	TEnumAsByte<EFlowMoveEventOperationType> EventOperationType,	FString EventName)
{
	if (IsInServer() || IsLocalOwn())
	{
		SetFlowMoveEvent_Server(EventOperationType,EventName);
	}
}

void UGBWFlowMoveComponent::SetFlowMoveEvent_Server_Implementation(
	EFlowMoveEventOperationType EventOperationType, const FString& EventName)
{
	SetFlowMoveEvent_Multicast(EventOperationType,EventName);
}

void UGBWFlowMoveComponent::SetFlowMoveEvent_Multicast_Implementation(EFlowMoveEventOperationType EventOperationType,
	const FString& EventName)
{
	SetFlowMoveEvent_Imp(EventOperationType,EventName);
}

void UGBWFlowMoveComponent::SetFlowMoveEvent_Imp(
	EFlowMoveEventOperationType EventOperationType,
	const FString& EventName)
{
	if (IsInServer())
	{
		switch (EventOperationType)
        {
        case  EFlowMoveEventOperationType::Add:
        	TaskState.AddFlowMoveEvent(EventName);
        	break;
        case EFlowMoveEventOperationType::Remove:
        	TaskState.RemoveFlowMoveEvent(EventName);
        	break;
        default: ;
        }
	}
	
	OnFlowMoveEvent.Broadcast(EventOperationType,EventName);
	OnEvent(FFlowMoveEvent(
		EventOperationType==EFlowMoveEventOperationType::Add? EFlowMoveEventType::OnEventAdd : EFlowMoveEventType::OnEventRemove,
		EventName));
}

void UGBWFlowMoveComponent::DoTriggerAction(FFlowMoveTriggerActionSet TriggerAction)
{
	for (auto Action:TriggerAction.TriggerActionSet)
	{
		switch (Action.Type) {
		case EFlowMoveTriggerActionType::DoAction:
			TryDoAction(Action.ActionName,true);
			break;
		case EFlowMoveTriggerActionType::SetEvent:
			SetFlowMoveEvent(Action.EventOperationType,Action.EventName);
			break;
		case EFlowMoveTriggerActionType::ActiveFlowMove:
			ActiveFlowMove();
			break;
		case EFlowMoveTriggerActionType::StopFlowMove:
			StopFlowMove(Action.WaitForCurrentActionFinished);
			break;
		case EFlowMoveTriggerActionType::SetAttribute:
			for (auto Modifier:Action.AttributeModifierSet)
			{
				Modifier.ExecuteModifier(this);
			}
			break;
		default: ;
		}	
	}
}

void UGBWFlowMoveComponent::OnStopEvent()
{
	if (!IsFlowMoveActive())
	{
		return;
	}
	TaskState.bIsActive = false;
	TaskState.bIsStopping = false;
	EndCurrentAction(TaskState.CurrentFlowMoveActionStr);
	if (TaskState.OwnerCharacter->GetController())
	{
		TaskState.OwnerCharacter->GetController()->SetIgnoreMoveInput(false);
	}
	UGBWRMSBPFuncLib::GBWRMS_StopRMSCommon(TaskState.OwnerCharacter->GetCharacterMovement());

	GetSceneAndApply(TaskState.SchemePerceptrons,EGBWFlowMoveEventType::End);
	GetSceneAndApply(TaskState.CurrentFlowMoveAction.PerceptronsDuringAction,EGBWFlowMoveEventType::End);
	
	Recovery();

	OnStop.Broadcast(TaskState);
	OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnStop));
}

void UGBWFlowMoveComponent::OnActionEndEvent(FString ActionName)
{
	OnActionEnd.Broadcast(ActionName);
	OnEvent(FFlowMoveEvent(EFlowMoveEventType::OnActionEnd,ActionName));
}

bool UGBWFlowMoveComponent::IsLocked(const FString ForActionStr) const
{
	if (TaskState.CurrentFlowMoveActionStr.IsEmpty())
	{
		return false;
	}

	return TaskState.CurrentFlowMoveAction.IsLock(ForActionStr);
}

void UGBWFlowMoveComponent::Recovery()
{
	ResetCapsuleAndMesh();
	if (AnimInstanceCache)
	{
		AnimInstanceCache->SetRootMotionMode(CurrentActionRootMotionModeCache);
	}
}
