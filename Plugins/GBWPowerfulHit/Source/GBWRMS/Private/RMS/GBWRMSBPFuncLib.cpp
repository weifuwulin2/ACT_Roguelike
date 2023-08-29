// Copyright GanBowen 2022-2023. All Rights Reserved.


#include "RMS/GBWRMSBPFuncLib.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

int32 UGBWRMSBPFuncLib::GBWRMS_Common(
	FName& InstanceName,
	TScriptInterface<IGBWRMSInterface> RMSInterfaceObj,
	UCharacterMovementComponent* MovementComponent,
	bool ClearOtherRMS)
{
	InstanceName = TEXT("GBWRMSCommon");
	if (!MovementComponent)
	{
		return -1;
	}
	constexpr int32 NewPriority = 0;
	if (ClearOtherRMS)
	{
		MovementComponent->CurrentRootMotion.Clear();
	}
	else if (auto RMS = MovementComponent->GetRootMotionSource(InstanceName))
	{
		MovementComponent->RemoveRootMotionSource(InstanceName);
	}

	TSharedPtr<FGBWRMS_Common> RmsCommon = MakeShared<FGBWRMS_Common>();
	RmsCommon->Duration = 100000000.0f;
	RmsCommon->InstanceName = InstanceName;
	RmsCommon->AccumulateMode = ERootMotionAccumulateMode::Override;
	RmsCommon->Settings.SetFlag(ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck);
	RmsCommon->Priority = NewPriority;
	
	RmsCommon->FinishVelocityParams.Mode = ERootMotionFinishVelocityMode::ClampVelocity;
	RmsCommon->FinishVelocityParams.SetVelocity = FVector::Zero();
	RmsCommon->FinishVelocityParams.ClampVelocity = 0.0f;
	
	RmsCommon->SetTime(0);
	RmsCommon->RMSInterfaceObj = RMSInterfaceObj;

	return MovementComponent->ApplyRootMotionSource(RmsCommon);
}

bool UGBWRMSBPFuncLib::GBWRMS_StopRMSCommon(UCharacterMovementComponent* MovementComponent)
{
	if (MovementComponent)
	{
		if (auto RMS = MovementComponent->GetRootMotionSource("GBWRMSCommon"))
		{
			MovementComponent->RemoveRootMotionSource("GBWRMSCommon");
		}
		return true;
	}
	return false;
}

bool UGBWRMSBPFuncLib::GBWRMS_IsRMSCommonActive(UCharacterMovementComponent* MovementComponent)
{
	if (MovementComponent)
	{
		if (auto RMS = MovementComponent->GetRootMotionSource("GBWRMSCommon"))
		{
			return true;
		}
	}
	return false;
}

bool UGBWRMSBPFuncLib::GBWRMS_GetCharacterViewInfo(
	ACharacter* Character,
	FVector& ViewLocation,
	FRotator& ViewRotation,
	FVector& ForwardVector)
{
	if (Character)
	{
		if (UGameplayStatics::GetPlayerPawn(Character,0) == Character)
		{
			const APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(Character,0);
			ViewLocation = CameraManager->GetCameraLocation();
			ViewRotation = CameraManager->GetCameraRotation();
			ForwardVector = CameraManager->GetActorForwardVector();
		}
		else
		{
			Character->GetActorEyesViewPoint(ViewLocation,ViewRotation);
			ForwardVector = Character->GetActorForwardVector();
		}
		
		return true;
	}

	return false;
}
