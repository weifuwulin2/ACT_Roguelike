// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GBWRMSInterface.h"
#include "GameFramework/RootMotionSource.h"
#include "UObject/NoExportTypes.h"
#include "GBWRMS.generated.h"

USTRUCT()
struct GBWRMS_API FGBWRMS_Common : public FRootMotionSource
{
	GENERATED_USTRUCT_BODY()
	FGBWRMS_Common(){};

	virtual ~FGBWRMS_Common(){}

	virtual void PrepareRootMotion(
		float SimulationTime,
		float MovementTickTime,
		const ACharacter& Character,
		const UCharacterMovementComponent& MoveComponent
	) override;
	virtual bool UpdateStateFrom(const FRootMotionSource* SourceToTakeStateFrom, bool bMarkForSimulatedCatchup = false) override;

	virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;
	virtual FRootMotionSource* Clone() const override;

	virtual bool Matches(const FRootMotionSource* Other) const override;

	virtual bool MatchesAndHasSameState(const FRootMotionSource* Other) const override;
	virtual UScriptStruct* GetScriptStruct() const override;
	virtual FString ToSimpleString() const override;
	virtual void AddReferencedObjects(class FReferenceCollector& Collector) override;

	UPROPERTY()
	TScriptInterface<IGBWRMSInterface> RMSInterfaceObj = nullptr;

	bool IsRmsInterfaceObjectValid() const;
	FTransform GetRootMotionParam(
		float SimulationTime,
		float MovementTickTime,
		const ACharacter& Character,
		const UCharacterMovementComponent& MoveComponent) const;
};
template<>
struct TStructOpsTypeTraits< FGBWRMS_Common > : public TStructOpsTypeTraitsBase2< FGBWRMS_Common >
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true
	};
};