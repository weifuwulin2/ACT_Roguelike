// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RMS/GBWRMS.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GBWRMSBPFuncLib.generated.h"

/**
 * 
 */
UCLASS()
class GBWRMS_API UGBWRMSBPFuncLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category="GBW|RMS")
	static int32 GBWRMS_Common(
		FName& InstanceName,
		TScriptInterface<IGBWRMSInterface> RMSInterfaceObj,
		UCharacterMovementComponent* MovementComponent,
		bool ClearOtherRMS = true);
	
	UFUNCTION(BlueprintCallable, Category="GBW|RMS")
	static bool GBWRMS_StopRMSCommon(UCharacterMovementComponent* MovementComponent);
	
	UFUNCTION(BlueprintCallable, Category="GBW|RMS")
	static bool GBWRMS_IsRMSCommonActive(UCharacterMovementComponent* MovementComponent);
	
	UFUNCTION(BlueprintCallable, Category="GBW|RMS")
	static bool GBWRMS_GetCharacterViewInfo(
		ACharacter* Character,
		FVector& ViewLocation,
		FRotator& ViewRotation,
		FVector& ForwardVector);
};
