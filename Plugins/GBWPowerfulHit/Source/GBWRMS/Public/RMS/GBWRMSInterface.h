// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/Interface.h"
#include "GBWRMSInterface.generated.h"

UINTERFACE(MinimalAPI)
class UGBWRMSInterface : public UInterface
{
	GENERATED_BODY()
};

class GBWRMS_API IGBWRMSInterface
{
	GENERATED_BODY()
public:
	virtual bool GetRootMotionParamDirect(
		FTransform& Result,
		float SimulationTime,
		float MovementTickTime,
		const ACharacter& Character,
		const UCharacterMovementComponent& MoveComponent)
	{return false;}
};
