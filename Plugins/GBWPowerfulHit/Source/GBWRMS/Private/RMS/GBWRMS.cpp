// Copyright GanBowen 2022-2023. All Rights Reserved.


#include "RMS/GBWRMS.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void FGBWRMS_Common::PrepareRootMotion(
	float SimulationTime,
	float MovementTickTime,
	const ACharacter& Character,
	const UCharacterMovementComponent& MoveComponent)
{
	RootMotionParams.Clear();
	
	if (Duration > SMALL_NUMBER && MovementTickTime > SMALL_NUMBER)
	{
		const FTransform NewTransform = GetRootMotionParam(
			SimulationTime,
			MovementTickTime,
			Character,
			MoveComponent);
		RootMotionParams.Set(NewTransform);
		bSimulatedNeedsSmoothing = true;
	}
	SetTime(GetTime() + SimulationTime);
}

bool FGBWRMS_Common::UpdateStateFrom(const FRootMotionSource* SourceToTakeStateFrom,
	bool bMarkForSimulatedCatchup)
{
	return FRootMotionSource::UpdateStateFrom(SourceToTakeStateFrom, bMarkForSimulatedCatchup);
}

bool FGBWRMS_Common::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	return FRootMotionSource::NetSerialize(Ar, Map, bOutSuccess);
}

FRootMotionSource* FGBWRMS_Common::Clone() const
{
	FGBWRMS_Common* CopyPtr = new FGBWRMS_Common(*this);
	return CopyPtr;
}

bool FGBWRMS_Common::Matches(const FRootMotionSource* Other) const
{
	return FRootMotionSource::Matches(Other);
}

bool FGBWRMS_Common::MatchesAndHasSameState(const FRootMotionSource* Other) const
{
	return FRootMotionSource::MatchesAndHasSameState(Other);
}

UScriptStruct* FGBWRMS_Common::GetScriptStruct() const
{
	return FGBWRMS_Common::StaticStruct();
}

FString FGBWRMS_Common::ToSimpleString() const
{
	return FString::Printf(
		TEXT("[ID:%u]FGBWRMS_Common %s"), LocalID, *InstanceName.GetPlainNameString());
}

void FGBWRMS_Common::AddReferencedObjects(FReferenceCollector& Collector)
{
	FRootMotionSource::AddReferencedObjects(Collector);
}

bool FGBWRMS_Common::IsRmsInterfaceObjectValid() const
{
	return RMSInterfaceObj && RMSInterfaceObj.GetInterface() != nullptr && RMSInterfaceObj.GetObject()->IsValidLowLevel();
}

FTransform FGBWRMS_Common::GetRootMotionParam(
	float SimulationTime,
	float MovementTickTime,
	const ACharacter& Character,
	const UCharacterMovementComponent& MoveComponent) const
{
	FTransform Result = FTransform();
	if (IsRmsInterfaceObjectValid())
	{
		if (!RMSInterfaceObj->GetRootMotionParamDirect(
			Result,
			SimulationTime,
			MovementTickTime,
			Character,
			MoveComponent))
		{
			Result = FTransform();
		}
	}
	
	return Result;
}
