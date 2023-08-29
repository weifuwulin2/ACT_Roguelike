// Copyright GanBowen 2022-2023. All Rights Reserved.


#include "Expand/GBWFlowMoveObjectExpand.h"

#include "GBWFlowMoveComponent.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "Curves/CurveFloat.h"
#include "RMS/GBWRMSBPFuncLib.h"
#include "Engine/Engine.h"

UGBWFlowMovePerceptron_Default::UGBWFlowMovePerceptron_Default():Super()
{
	ThePerceptionSetting.TraceSetting.TraceObjectTypes = {
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldStatic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldDynamic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_Destructible)
	};

	ThePerceptionSetting.TraceSetting.TraceChannels = {
		UCollisionProfile::Get()->ConvertToTraceType(ECC_Visibility)
	};
}

bool UGBWFlowMovePerceptron_Default::GetPerceptionResult_Implementation(FGBWFlowMoveScene& FlowMoveScene,
	EGBWFlowMoveEventType EventType, ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (FlowMoveComponent)
	{
		return FindWay(
			FlowMoveScene,
			OwnerCharacter,
			FlowMoveComponent,
			ThePerceptionSetting
		);
	}
	return false;
}

bool UGBWFlowMovePerceptron_Default::FindWay(
	FGBWFlowMoveScene& FlowMoveScene,
	ACharacter* Character,
	UGBWFlowMoveComponent* FlowMoveComponent,
	FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting) const
{
	if (!Character || !FlowMoveComponent)
	{
		return false;
	}
	
	FVector MoveVector = FlowMoveComponent->TaskState.MoveVector;
	FVector ControlVector = FlowMoveComponent->GetControlVector();
	ControlVector.Z = 0.0f;
	ControlVector.Normalize();
	FVector TraceDirection = ControlVector.Rotation().RotateVector(MoveVector);
	TraceDirection.Normalize();
	if (TraceDirection.IsNearlyZero())
	{
		TraceDirection = Character->GetCapsuleComponent()->GetForwardVector();
	}
	FVector PerceptionDirection = (FMath::Abs(TraceDirection.Rotation().Yaw-ControlVector.Rotation().Yaw)<=30)? FlowMoveComponent->GetPerceptionVector() : FVector::Zero();
	PerceptionDirection.Normalize();

	bool bIsForwardHit = false;
	bool bIsFindWay = false;
	bool bIsLedgeDownHit = false;
	bool bIsFree = false;
	FHitResult InitHitResult;
	FHitResult WayHitResult;
	
	FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
	CollisionQueryParams.bTraceComplex = false;
	CollisionQueryParams.AddIgnoredActor(Character);
	
	FVector ForwardTrace_Start = Character->GetCapsuleComponent()->GetComponentLocation();
	FVector ForwardTrace_End =
		(TraceDirection.IsNearlyZero()? Character->GetCapsuleComponent()->GetForwardVector() : TraceDirection) * PerceptionSetting.PrejudgeDistance
		+ ForwardTrace_Start;
	
	FlowMoveScene.SceneType = PerceptionSetting.FreeTag;
	FlowMoveScene.TargetLocation = ForwardTrace_End;
	FlowMoveScene.PrepareLocation = Character->GetCapsuleComponent()->GetComponentLocation();

	FHitResult ForwardTraceHit;
	static const FName ForwardTraceTag{FString::Format(TEXT("{0} (Forward Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};
	CollisionQueryParams.TraceTag = ForwardTraceTag;
	TArray<struct FHitResult> ForwardTraceHitArr;
	ForwardTraceHit = UGBWFlowMoveFuncLib::SweepMulti(
		Character->GetWorld(),
		ForwardTraceHitArr,
		ForwardTrace_Start - (TraceDirection.IsNearlyZero()? ControlVector : TraceDirection) * 5.0f,
		ForwardTrace_End,
		FQuat::Identity,
		PerceptionSetting.TraceSetting,
		FCollisionShape::MakeCapsule(Character->GetCapsuleComponent()->GetScaledCapsuleRadius(), Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()),
		CollisionQueryParams
	);
	
	bIsForwardHit = ForwardTraceHit.IsValidBlockingHit();
	InitHitResult = ForwardTraceHit;

	if (bIsForwardHit)
	{
		FTransform TraceBaseTransform = Character->GetCapsuleComponent()->GetComponentTransform();
		TraceBaseTransform.SetRotation(TraceDirection.Rotation().Quaternion());
		
		if (!Character->GetCharacterMovement()->IsWalkable(ForwardTraceHit))
		{
			TArray<FVector> InputVectorInterp = GenerateCrawlerDirection(PerceptionSetting.DirectiveCoverageAngle,PerceptionDirection,PerceptionSetting.CrawlerCount);
			TArray<FHitResult> LastHitResultInterp;
			TArray<bool> IsTraceOutOfDistance;
			for (int i=0; i<InputVectorInterp.Num(); i++)
			{
				LastHitResultInterp.Add(InitHitResult);
				IsTraceOutOfDistance.Add(false);
			}
		
			for (int i=0; i<PerceptionSetting.MaxCrawlerStep; i++)
			{
				bool bIsBreak = false;
				for (int j=0; j<InputVectorInterp.Num(); j++)
				{
					if (!IsTraceOutOfDistance.Contains(false))
					{
						bIsBreak = true;
						break;
					}

					if ((LastHitResultInterp[j].TraceStart-InitHitResult.TraceStart).Length()>PerceptionSetting.CrawlerMaxTraceDistance)
					{
						IsTraceOutOfDistance[j] = true;
					}
					else
					{
						FVector Offset =
							UKismetMathLibrary::TransformDirection(
								TraceBaseTransform,
								FVector(0,InputVectorInterp[j].Y, InputVectorInterp[j].Z))
								* Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
						FHitResult TryHitResult;
						FHitResult SuccessHitResult;
						if (TestWay(
							TryHitResult,
							SuccessHitResult,
							Character,
							LastHitResultInterp[j].TraceStart + Offset,
							LastHitResultInterp[j].TraceEnd + Offset,
							PerceptionSetting.TraceDetectorHeight,
							PerceptionSetting
						))
						{
							bIsBreak = true;
							bIsFindWay = true;
							WayHitResult = SuccessHitResult;
							break;
						}
						else
						{
							LastHitResultInterp[j] = TryHitResult;
						}
					}
				}
				if (bIsBreak)
				{
					break;
				}
			}
		}
		else
		{
			FHitResult LastHitResult = InitHitResult;
			FVector Offset =
						UKismetMathLibrary::TransformDirection(
							TraceBaseTransform,
							FVector(0,0, 1))
							* Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
		
			for (int i=0; i<PerceptionSetting.MaxCrawlerStep; i++)
			{
				if ((LastHitResult.TraceStart-InitHitResult.TraceStart).Length()>PerceptionSetting.CrawlerMaxTraceDistance)
				{
					break;
				}
				else
				{
					FHitResult TryHitResult;
					FHitResult SuccessHitResult;
					if (TestWay(
						TryHitResult,
						SuccessHitResult,
						Character,
						LastHitResult.TraceStart + Offset,
						LastHitResult.TraceEnd + Offset,
						PerceptionSetting.TraceDetectorHeight,
						PerceptionSetting
					))
					{
						bIsFindWay = true;
						WayHitResult = SuccessHitResult;
						break;
					}
					else
					{
						LastHitResult = TryHitResult;
					}
				}
			}
		}
	}
	else if (
	!bIsForwardHit
	|| (ForwardTraceHit.ImpactPoint-Character->GetCapsuleComponent()->GetComponentLocation()).Length() <= PerceptionSetting.BeginLedgeDownForwardTraceDistanceThreshold
	)
	{
		ForwardTrace_End =
			ForwardTrace_Start
			- FVector(
				0,0,
				Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() - Character->GetCapsuleComponent()->GetScaledCapsuleRadius() + Character->GetCharacterMovement()->MaxStepHeight);
		ForwardTrace_Start =
			ForwardTrace_End
			+ (PerceptionSetting.PrejudgeDistance + Character->GetCapsuleComponent()->GetScaledCapsuleRadius()) * TraceDirection;

		ForwardTraceHitArr.Empty();
		ForwardTraceHit = UGBWFlowMoveFuncLib::LineTrace(
			Character->GetWorld(),
			ForwardTraceHitArr,
			Character->GetCapsuleComponent()->GetComponentLocation(),
			ForwardTrace_Start,
			PerceptionSetting.TraceSetting,
			CollisionQueryParams
		);

		if (!ForwardTraceHit.IsValidBlockingHit())
		{
			ForwardTraceHitArr.Empty();
			ForwardTraceHit = UGBWFlowMoveFuncLib::SweepMulti(
				Character->GetWorld(),
				ForwardTraceHitArr,
				ForwardTrace_Start,
				ForwardTrace_End,
				FQuat::Identity,
				PerceptionSetting.TraceSetting,
				FCollisionShape::MakeSphere(Character->GetCapsuleComponent()->GetScaledCapsuleRadius()),
				CollisionQueryParams
			);

			bIsForwardHit = ForwardTraceHit.IsValidBlockingHit();

			if (bIsForwardHit)
			{
				bIsFindWay = true;
				WayHitResult = InitHitResult;
				InitHitResult = ForwardTraceHit;
				bIsLedgeDownHit = true;
			}
		
			InitHitResult = ForwardTraceHit;
		}
		else
		{
			bIsFree = true;
		}
	}
	else
	{
		bIsFree = true;
	}

	if (bIsForwardHit && !bIsFree)
	{
		if (!bIsFindWay)
		{
			FlowMoveScene.SceneType = PerceptionSetting.HitWallTag;
			FlowMoveScene.TargetActor = InitHitResult.GetActor();
			FlowMoveScene.TargetPrimitive = InitHitResult.Component;
			FlowMoveScene.TargetLocation = InitHitResult.ImpactPoint;
			FlowMoveScene.PrepareLocation = InitHitResult.TraceStart;
		}
		else
		{
			TArray<FHitResult> WayHitResultDown;
			TArray<FHitResult> WayHitResultUp;
			float MaxHeightHitResult_High;
			FHitResult MaxHeightHitResult_HighResult;
			float MaxHeightHitResult_Low;
			FHitResult MaxHeightHitResult_LowResult;
			float MinHeightHitResult_Low;
			FHitResult MinHeightHitResult_LowResult;
			float WayMinHeight;
			FHitResult MinZoneHitResult_DownResult;
			FHitResult MinZoneHitResult_UpResult;
			
			FindBottleneck(
				Character,
				 WayHitResult.TraceStart,
				 WayHitResult.TraceEnd,
				 PerceptionSetting,
				WayHitResultDown, 
				WayHitResultUp,
				MaxHeightHitResult_High,
				MaxHeightHitResult_HighResult,
				MaxHeightHitResult_Low,
				MaxHeightHitResult_LowResult,
				MinHeightHitResult_Low,
				MinHeightHitResult_LowResult,
				WayMinHeight,
				MinZoneHitResult_DownResult,
				MinZoneHitResult_UpResult);

			if (WayMinHeight<=0 || WayMinHeight >= Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()*2)
			{
				TArray<FHitResult> WayHitResultDownArr;

				FHitResult WayHitResultDown_Temp;
				UGBWFlowMoveFuncLib::GetTheLastValidHitResult(WayHitResultDown,WayHitResultDown_Temp);
				FHitResult WayHitResult_Temp;
				bool bIsBarrierFree = TestBarrierFree(
					Character,
					WayHitResultDown_Temp,
					WayHitResult_Temp,
					WayHitResultDownArr,
					PerceptionSetting.TraceDetectorHeight,
					PerceptionSetting);
				
				if (!bIsBarrierFree)
				{
					WayHitResultDownArr = WayHitResultDown;
				}
				else
				{
					WayHitResult = WayHitResult_Temp;
				}
				
				bool IsSlopeWalkable = false;
				FlowMoveScene.Slope = GetSlope(Character,WayHitResultDownArr,IsSlopeWalkable);

				if (IsSlopeWalkable)
				{
					FlowMoveScene.SceneType = PerceptionSetting.FreeTag;
				}
				else
				{
					FlowMoveScene.SceneType = PerceptionSetting.LedgeTag;
				}

				if (bIsLedgeDownHit)
				{
					if (MinHeightHitResult_Low>=0)
					{
						FlowMoveScene.TargetActor = MinHeightHitResult_LowResult.GetActor();
						FlowMoveScene.TargetPrimitive = MinHeightHitResult_LowResult.GetComponent();
						FlowMoveScene.TargetLocation = MinHeightHitResult_LowResult.ImpactPoint + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
					}
					else if (MaxHeightHitResult_Low >= 0)
					{
						FlowMoveScene.TargetActor = MaxHeightHitResult_LowResult.GetActor();
						FlowMoveScene.TargetPrimitive = MaxHeightHitResult_LowResult.GetComponent();
						FlowMoveScene.TargetLocation = MaxHeightHitResult_LowResult.ImpactPoint + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
					}
				}
				else
				{
					FlowMoveScene.PrepareLocation = WayHitResult.TraceStart;
					if (MaxHeightHitResult_High>=0)
					{
						FlowMoveScene.TargetActor = MaxHeightHitResult_HighResult.GetActor();
						FlowMoveScene.TargetPrimitive = MaxHeightHitResult_HighResult.GetComponent();
						FlowMoveScene.TargetLocation = MaxHeightHitResult_HighResult.ImpactPoint + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
					}
					else if (MaxHeightHitResult_Low >= 0)
					{
						FlowMoveScene.TargetActor = MaxHeightHitResult_LowResult.GetActor();
						FlowMoveScene.TargetPrimitive = MaxHeightHitResult_LowResult.GetComponent();
						FlowMoveScene.TargetLocation = MaxHeightHitResult_LowResult.ImpactPoint + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
					}
				}
			}
			else
			{
				FlowMoveScene.SceneType = PerceptionSetting.HoleTag;
				FlowMoveScene.TargetActor = MinZoneHitResult_DownResult.GetActor();
				FlowMoveScene.TargetPrimitive = MinZoneHitResult_DownResult.Component;
				FlowMoveScene.TargetLocation = (MinZoneHitResult_DownResult.ImpactPoint + MinZoneHitResult_UpResult.ImpactPoint) / 2.0f;
				FlowMoveScene.PrepareLocation = WayHitResult.TraceStart;
			}
		}
	}

	FlowMoveScene = MakeFinalFlowMoveScene(Character,FlowMoveScene,TraceDirection,PerceptionSetting);
	return true;
}

TArray<FVector> UGBWFlowMovePerceptron_Default::GenerateCrawlerDirection(
	const float TraceAngle,
	const FVector TraceVector,
	const int InterpCount)
{
	TArray<FVector> Result;
	
	if (TraceVector.IsNearlyZero())
	{
		Result.Add(FVector(0,0,1));
		const int LoopCount = 360.0f/TraceAngle*InterpCount;
		for (int i=1; i<=LoopCount; i++)
		{
			Result.Add(UKismetMathLibrary::RotateAngleAxis(
				FVector(0,0,1),
				TraceAngle/InterpCount*i,
				FVector(1,0,0)
			));
			Result.Add(UKismetMathLibrary::RotateAngleAxis(
				FVector(0,0,1),
				-TraceAngle/InterpCount*i,
				FVector(1,0,0)
			));
		}
	}
	else
	{
		Result.Add(TraceVector);
		for (int i=1; i<=InterpCount; i++)
		{
			Result.Add(UKismetMathLibrary::RotateAngleAxis(
				TraceVector,
				TraceAngle/2/i,
				FVector(1,0,0)
			));
			Result.Add(UKismetMathLibrary::RotateAngleAxis(
				TraceVector,
				-TraceAngle/2/i,
				FVector(1,0,0)
			));
		}
	}

	return Result;
}

bool UGBWFlowMovePerceptron_Default::TestWay(
	FHitResult& TryHitResult,
	FHitResult& SuccessHitResult,
	ACharacter* Character,
	FVector Start,
	FVector End,
	float TraceHeight,
	FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting) const
{
	FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
	CollisionQueryParams.bTraceComplex = false;
	CollisionQueryParams.AddIgnoredActor(Character);

	FHitResult ForwardTraceHit;
	static const FName ForwardTraceTag{FString::Format(TEXT("{0} (Forward Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};
	CollisionQueryParams.TraceTag = ForwardTraceTag;
	TArray<struct FHitResult> ForwardTraceHitArr;
	ForwardTraceHit = UGBWFlowMoveFuncLib::LineTrace(
		Character->GetWorld(),
		ForwardTraceHitArr,
		Character->GetCapsuleComponent()->GetComponentLocation(),
		Start,
		PerceptionSetting.TraceSetting,
		CollisionQueryParams
	);

	if (ForwardTraceHit.IsValidBlockingHit())
	{
		return false;
	}

	ForwardTraceHitArr.Empty();
	ForwardTraceHit = UGBWFlowMoveFuncLib::SweepMulti(
		Character->GetWorld(),
		ForwardTraceHitArr,
		Start,
		End,
		FQuat::Identity,
		PerceptionSetting.TraceSetting,
		FCollisionShape::MakeSphere(Character->GetCapsuleComponent()->GetScaledCapsuleRadius()),
		CollisionQueryParams
	);

	TryHitResult = ForwardTraceHit;
	if (ForwardTraceHit.bBlockingHit || ForwardTraceHit.bStartPenetrating)
	{
		return false;
	}

	float FinalTraceHalfHeight = TraceHeight>Character->GetCapsuleComponent()->GetScaledCapsuleRadius()*2? TraceHeight/2 : Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
	float FinalTraceZOffset = FinalTraceHalfHeight - Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
	ForwardTraceHitArr.Empty();
	ForwardTraceHit = UGBWFlowMoveFuncLib::SweepMulti(
		Character->GetWorld(),
		ForwardTraceHitArr,
		Start + FVector(0,0, FinalTraceZOffset),
		End + FVector(0,0, FinalTraceZOffset),
		FQuat::Identity,
		PerceptionSetting.TraceSetting,
		FCollisionShape::MakeCapsule(
			Character->GetCapsuleComponent()->GetScaledCapsuleRadius(),
			FinalTraceHalfHeight),
			CollisionQueryParams
	);

	if (ForwardTraceHit.bBlockingHit || ForwardTraceHit.bStartPenetrating)
	{
		TryHitResult = ForwardTraceHit;
		return false;
	}
	
	SuccessHitResult = ForwardTraceHit;
	return true;
}

void UGBWFlowMovePerceptron_Default::FindBottleneck(
	ACharacter* Character,
	FVector Start,
	FVector End,
	FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting,
	TArray<FHitResult>& WayHitResultDown, 
	TArray<FHitResult>& WayHitResultUp,
	float& MaxHeightHitResult_High,
	FHitResult& MaxHeightHitResult_HighResult,
	float& MaxHeightHitResult_Low,
	FHitResult& MaxHeightHitResult_LowResult,
	float& MinHeightHitResult_Low,
	FHitResult& MinHeightHitResult_LowResult,
	float& WayMinHeight,
	FHitResult& MinZoneHitResult_DownResult,
	FHitResult& MinZoneHitResult_UpResult) const
{
	WayMinHeight = -1.0f;
	MaxHeightHitResult_High = -1.0f;
	MaxHeightHitResult_Low = -1.0f;
	MinHeightHitResult_Low = -1.0f;

	float FootHeight = Character->GetCapsuleComponent()->GetComponentLocation().Z - Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	
	FVector TraceLocation;
	float StepCount = (Start-End).Length() / Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
	for (int i=0; i<=StepCount; i++)
	{
		TraceLocation = FMath::Lerp(Start, End,
		i/StepCount
		);
		bool Floor; FHitResult OutHit_Floor; bool Roof; FHitResult OutHit_Roof;
		UGBWFlowMoveFuncLib::FindFloorAndRoof(Character, TraceLocation, 10000.0f, 10000.0f, PerceptionSetting.TraceSetting,
			Floor, OutHit_Floor, Roof, OutHit_Roof);

		WayHitResultDown.Add(OutHit_Floor);
		WayHitResultUp.Add(OutHit_Roof);

		if (Floor)
		{
			float Height = OutHit_Floor.ImpactPoint.Z - FootHeight;
			if (Height >= 0)
			{
				if (Height >= MaxHeightHitResult_High - 5)
				{
					MaxHeightHitResult_High = Height;
					MaxHeightHitResult_HighResult = OutHit_Floor;
				}
			}
			else
			{
				if (-Height <= MaxHeightHitResult_Low+5.0f || MaxHeightHitResult_Low < 0)
				{
					MaxHeightHitResult_Low = -Height;
					MaxHeightHitResult_LowResult = OutHit_Floor;
				}

				if (-Height >= MinHeightHitResult_Low)
				{
					MinHeightHitResult_Low = -Height;
					MinHeightHitResult_LowResult = OutHit_Floor;
				}
			}
		}

		if (Floor && Roof)
		{
			float WayHeight = (OutHit_Roof.ImpactPoint-OutHit_Floor.ImpactPoint).Z;
			if (WayMinHeight <= 0 || (WayMinHeight>0 && WayMinHeight >= WayHeight))
			{
				WayMinHeight = WayHeight;
				MinZoneHitResult_DownResult = OutHit_Floor;
				MinZoneHitResult_UpResult = OutHit_Roof;
			}
		}
	}
}

float UGBWFlowMovePerceptron_Default::GetSlope(
	const ACharacter* Character,
	TArray<FHitResult> HitResultArr,
	bool& bIsWalkable)
{
	if (!Character || HitResultArr.IsEmpty())
	{
		bIsWalkable = false;
		return 0.0f;
	}
	
	bIsWalkable = true;

	FVector FootLocation = Character->GetCapsuleComponent()->GetComponentLocation();
	FootLocation.Z = FootLocation.Z - Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	float SlopeRes = 0.0f;
	float SlopeMax = 0.0f;
	float SlopeMin = 0.0f;
	
	FVector LastLocation = HitResultArr[0].ImpactPoint;

	float HeightDistance = FMath::Abs(LastLocation.Z - FootLocation.Z);
	float StandardDistance = (FVector(LastLocation.X, LastLocation.Y, 0) - FVector(FootLocation.X, FootLocation.Y, 0)).Length();
		
	if (HeightDistance > Character->GetCharacterMovement()->MaxStepHeight
		|| StandardDistance > Character->GetCharacterMovement()->MaxStepHeight*2)
	{
		bIsWalkable = false;
	}
	
	for (int i=1; i<HitResultArr.Num()-1; i++)
	{
		FHitResult Hit = HitResultArr[i];
		if (!Character->GetCharacterMovement()->IsWalkable(Hit))
		{
			bIsWalkable = false;
		}

		if (Hit.IsValidBlockingHit())
		{
			FVector ImpactLocation_Temp = Hit.ImpactPoint;
			FVector LastLocation_Temp = LastLocation;
			HeightDistance = FMath::Abs((Hit.ImpactPoint - LastLocation).Z);
			StandardDistance = (FVector(ImpactLocation_Temp.X, ImpactLocation_Temp.Y, 0) - FVector(LastLocation_Temp.X, LastLocation_Temp.Y, 0)).Length();
		
			if (HeightDistance > Character->GetCharacterMovement()->MaxStepHeight
				|| StandardDistance > Character->GetCharacterMovement()->MaxStepHeight*2)
			{
				bIsWalkable = false;
			}
		
			const float Slope = (Hit.ImpactPoint - LastLocation).Rotation().Pitch;
			if (Slope > SlopeMax)
			{
				SlopeMax = Slope;
			}
			else if (Slope < SlopeMin)
			{
				SlopeMin = Slope;
			}
			SlopeRes += Slope;
			LastLocation = Hit.ImpactPoint;	
		}
	}

	if (bIsWalkable)
	{
		return SlopeRes>0? SlopeMax : SlopeMin;
	}
	else
	{
		return 0;
	}
	
}

bool UGBWFlowMovePerceptron_Default::TestBarrierFree(
	ACharacter* Character,
	const FHitResult TargetHitResultDown,
	FHitResult& WayHitResult,
	TArray<FHitResult>& WayHitResultDownArr,
	float TraceHeight,
	FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting) const
{
	FVector End = TargetHitResultDown.TraceStart;
	FVector Start = Character->GetCapsuleComponent()->GetComponentLocation();
	Start.Z = End.Z;

	FHitResult TryHitResult;
	FHitResult SuccessHitResult;
	if (!TestWay(TryHitResult,
		SuccessHitResult,
		Character,
		Start,
		End,
		TraceHeight,
		PerceptionSetting))
	{
		return false;
	}

	WayHitResult = SuccessHitResult;

	FVector TraceLocation;
	float StepCount = (Start-End).Length() / Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
	for (int i=0; i<=StepCount; i++)
	{
		TraceLocation = FMath::Lerp(Start, End,
		i/StepCount
		);
		bool Floor; FHitResult OutHit_Floor; bool Roof; FHitResult OutHit_Roof;
		UGBWFlowMoveFuncLib::FindFloorAndRoof(Character, TraceLocation, 10000.0f, 10000.0f, PerceptionSetting.TraceSetting,
			Floor, OutHit_Floor, Roof, OutHit_Roof);

		if (Floor)
		{
			WayHitResultDownArr.Add(OutHit_Floor);
		}
	}
	
	return !WayHitResultDownArr.IsEmpty();
}

FGBWFlowMoveScene UGBWFlowMovePerceptron_Default::MakeFinalFlowMoveScene(
	ACharacter* Character,
	FGBWFlowMoveScene InFlowMoveScene,
	FVector TraceDirection,
	FGBWFlowMoveDefaultPerceptionSetting PerceptionSetting)
{
	FGBWFlowMoveScene Res = InFlowMoveScene;

	Res.MovementMode = Character->GetCharacterMovement()->MovementMode;

	bool bIsInAir = (Res.MovementMode==EMovementMode::MOVE_Falling || Res.MovementMode==EMovementMode::MOVE_Flying);
	
	FTransform T = FTransform();
	T.SetLocation(Character->GetCapsuleComponent()->GetComponentLocation()-FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));
	T.SetRotation(TraceDirection.Rotation().Quaternion());
	T.SetScale3D(Character->GetCapsuleComponent()->GetComponentScale());

	if ( Res.TargetLocation.Z - T.GetLocation().Z <= -PerceptionSetting.TargetPointMaxDownDistance)
	{
		Res.TargetLocation.Z = bIsInAir? Character->GetCapsuleComponent()->GetComponentLocation().Z : T.GetLocation().Z - PerceptionSetting.TargetPointMaxDownDistance;
	}
	
	FVector RelativeLocation = T.InverseTransformPosition(Res.TargetLocation);
	Res.SceneHeight = RelativeLocation.Z;
	Res.SceneRight = RelativeLocation.Y;
	Res.SceneForward = RelativeLocation.X;
	Res.SceneAngle = RelativeLocation.Rotation().Pitch;

	FVector A = UKismetMathLibrary::ProjectVectorOnToPlane(
		(bIsInAir? Res.PrepareLocation : Res.TargetLocation)-Character->GetCapsuleComponent()->GetComponentLocation(),TraceDirection);
	A.Normalize();
	FVector B = UKismetMathLibrary::ProjectVectorOnToPlane(Character->GetCapsuleComponent()->GetUpVector(),TraceDirection);
	B.Normalize();
	float DirectionAngle = UKismetMathLibrary::DegAcos(UKismetMathLibrary::Dot_VectorVector(A,B));
	
	T.SetLocation(Character->GetCapsuleComponent()->GetComponentLocation());
	FVector A2 = UKismetMathLibrary::InverseTransformDirection(T,A);
	FVector B2 = UKismetMathLibrary::InverseTransformDirection(T,B);
	bool bIsRight = UKismetMathLibrary::CrossProduct2D(
		FVector2D(A2.Y, A2.Z),
		FVector2D(B2.Y, B2.Z)
	)>=0;

	Res.SetSceneDirectionAndGenerateMark(DirectionAngle * (bIsRight? 1 : -1));

	Res.SetTargetLocationAndGenerateFloorAndRoof(Res.TargetLocation, Character, PerceptionSetting.TraceSetting);
	Res.SetLocationAndGenerateFloorAndRoof(Character->GetCapsuleComponent()->GetComponentLocation(), Character, PerceptionSetting.TraceSetting);
	Res.SetPrepareLocationAndGenerateFloorAndRoof(Res.PrepareLocation, Character, PerceptionSetting.TraceSetting);
	
	return Res;
}

UGBWFlowMovePerceptron_FindTheBestFoothold::UGBWFlowMovePerceptron_FindTheBestFoothold()
{
	ThePerceptionSetting.TraceSetting.TraceObjectTypes = {
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldStatic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldDynamic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_Destructible)
	};

	ThePerceptionSetting.TraceSetting.TraceChannels = {
		UCollisionProfile::Get()->ConvertToTraceType(ECC_Visibility)
	};
}

bool UGBWFlowMovePerceptron_FindTheBestFoothold::GetPerceptionResult_Implementation(FGBWFlowMoveScene& FlowMoveScene,
	EGBWFlowMoveEventType EventType, ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (FlowMoveComponent)
	{
		return FindWay(
			FlowMoveScene,
			OwnerCharacter,
			FlowMoveComponent,
			ThePerceptionSetting
		);
	}
	return false;
}

bool UGBWFlowMovePerceptron_FindTheBestFoothold::FindWay(FGBWFlowMoveScene& FlowMoveScene, ACharacter* Character,
                                                         UGBWFlowMoveComponent* FlowMoveComponent, FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting) const
{
	if (!Character || !FlowMoveComponent)
	{
		return false;
	}
	
	FVector MoveVector = FlowMoveComponent->TaskState.MoveVector;
	FVector ControlVector = FlowMoveComponent->GetControlVector();
	ControlVector.Z = 0.0f;
	ControlVector.Normalize();
	FVector TraceDirection = ControlVector.Rotation().RotateVector(MoveVector);
	TraceDirection.Normalize();
	if (TraceDirection.IsNearlyZero())
	{
		TraceDirection = ControlVector;
	}
	if (TraceDirection.IsNearlyZero())
	{
		TraceDirection = Character->GetCapsuleComponent()->GetForwardVector();
	}
	
	FVector UpTrace_Start = Character->GetCapsuleComponent()->GetComponentLocation();
	FVector UpTrace_End;

	FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
	CollisionQueryParams.bTraceComplex = false;
	CollisionQueryParams.AddIgnoredActor(Character);

	FHitResult UpTraceHit;
	static const FName UpTraceTag{FString::Format(TEXT("{0} (Up Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};
	CollisionQueryParams.TraceTag = UpTraceTag;
	TArray<struct FHitResult> ForwardTraceHitArr;
	UpTraceHit = UGBWFlowMoveFuncLib::LineTrace(
		Character->GetWorld(),
		ForwardTraceHitArr,
		UpTrace_Start,
		UpTrace_Start + FVector(0,0,PerceptionSetting.PrejudgeDistance),
		PerceptionSetting.TraceSetting,
		CollisionQueryParams
	);

	if (UpTraceHit.IsValidBlockingHit())
	{
		UpTrace_End = UpTraceHit.ImpactPoint;
	}
	else
	{
		UpTrace_End = UpTrace_Start + FVector(0,0,PerceptionSetting.PrejudgeDistance);
	}
	
	TArray<FVector> TraceVectorInterp = GenerateCrawlerDirection(TraceDirection,PerceptionSetting.CrawlerCount);
	TArray<FVector> LastHitPointInterp;
	TArray<FVector> AlternatePointArr_Target;
	TArray<FVector> AlternatePointArr_Prepare;
	float MaxDistance = -1;
	int MaxDistanceIndex = 0;
	TArray<AActor*> AlternatePointArr_TargetActor;
	TArray<TWeakObjectPtr<UPrimitiveComponent>> AlternatePointArr_TargetPrimitive;
	for (int i=0; i<TraceVectorInterp.Num(); i++)
	{
		LastHitPointInterp.Add(UpTrace_End);
	}

	FVector Offset{0,0,Character->GetCapsuleComponent()->GetScaledCapsuleRadius()};
	
	for (int j=0; j<TraceVectorInterp.Num(); j++)
	{
		FVector TraceStart = FVector(UpTrace_Start.X,UpTrace_Start.Y,LastHitPointInterp[j].Z) - Offset;
		FVector TraceEnd = TraceStart + TraceVectorInterp[j] * PerceptionSetting.CrawlerMaxTraceDistance;
		FHitResult TryHitResult;
		if (!TestWay(
			TryHitResult,
			Character,
			TraceStart,
			TraceEnd,
			PerceptionSetting
		))
		{
			break;
		}
			
		if (TryHitResult.IsValidBlockingHit())
		{
			LastHitPointInterp[j] = TryHitResult.ImpactPoint;
		}
		else
		{
			LastHitPointInterp[j] = TraceEnd - Offset;
		}

		TArray<FHitResult> WayHitResultDown;
		TArray<FHitResult> WayHitResultUp;
		float MaxHeightHitResult_High;
		FHitResult MaxHeightHitResult_HighResult;
		float MaxHeightHitResult_Low;
		FHitResult MaxHeightHitResult_LowResult;
		float MinHeightHitResult_Low;
		FHitResult MinHeightHitResult_LowResult;
		float WayMinHeight;
		FHitResult MinZoneHitResult_DownResult;
		FHitResult MinZoneHitResult_UpResult;
			
		FindBottleneck(
			Character,
			TraceStart,
			LastHitPointInterp[j],
			PerceptionSetting,
			WayHitResultDown, 
			WayHitResultUp,
			MaxHeightHitResult_High,
			MaxHeightHitResult_HighResult,
			MaxHeightHitResult_Low,
			MaxHeightHitResult_LowResult,
			MinHeightHitResult_Low,
			MinHeightHitResult_LowResult,
			WayMinHeight,
			MinZoneHitResult_DownResult,
			MinZoneHitResult_UpResult);

		if (WayMinHeight<=0 || WayMinHeight >= Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()*2)
		{
			TArray<FHitResult> WayHitResultDown_Valid;
			if (MaxHeightHitResult_HighResult.IsValidBlockingHit()
					&& Character->GetCharacterMovement()->IsWalkable(MaxHeightHitResult_HighResult)
					&& (MaxHeightHitResult_HighResult.ImpactPoint-UpTrace_Start).Length()<=PerceptionSetting.TargetPointMaxDistance)
			{
				WayHitResultDown_Valid.Add(MaxHeightHitResult_HighResult);
			}
			else
			{
				for (auto Hit:WayHitResultDown)
                {
                	if (Hit.IsValidBlockingHit()
                		&& Character->GetCharacterMovement()->IsWalkable(Hit)
                		&& (Hit.ImpactPoint-UpTrace_Start).Length()<=PerceptionSetting.TargetPointMaxDistance)
                	{
                		WayHitResultDown_Valid.Add(Hit);
                	}
                }
			}
			
			if (!WayHitResultDown_Valid.IsEmpty())
			{
				FHitResult WayHitResult = WayHitResultDown_Valid[WayHitResultDown_Valid.Num()/2];
				AlternatePointArr_Target.Add(WayHitResult.ImpactPoint + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));
				AlternatePointArr_Prepare.Add(TraceStart);
				AlternatePointArr_TargetActor.Add(WayHitResult.GetActor());
				AlternatePointArr_TargetPrimitive.Add(WayHitResult.GetComponent());

				float Distance = (AlternatePointArr_Target.Last()-UpTrace_Start).Z;
				if (Distance>=MaxDistance)
				{
					MaxDistance = Distance;
					MaxDistanceIndex = AlternatePointArr_Target.Num()-1;
				}
			}
		}
	}
	
	if (!AlternatePointArr_Target.IsEmpty())
	{
		FlowMoveScene.SceneType = PerceptionSetting.SuccessTag;
		FlowMoveScene.PrepareLocation = AlternatePointArr_Prepare[MaxDistanceIndex];
		FlowMoveScene.TargetLocation = AlternatePointArr_Target[MaxDistanceIndex];
		FlowMoveScene.TargetActor = AlternatePointArr_TargetActor[MaxDistanceIndex];
		FlowMoveScene.TargetPrimitive = AlternatePointArr_TargetPrimitive[MaxDistanceIndex];
					
		FlowMoveScene = MakeFinalFlowMoveScene(Character,FlowMoveScene,TraceDirection,PerceptionSetting);

		if (PerceptionSetting.SimpleDebug)
		{
			DrawDebugSphere(Character->GetWorld(),
				FlowMoveScene.TargetLocation,
				Character->GetCapsuleComponent()->GetScaledCapsuleRadius(),
				3,FColor::Green,false,0,0,5);
			DrawDebugSphere(Character->GetWorld(),
				FlowMoveScene.PrepareLocation,
				Character->GetCapsuleComponent()->GetScaledCapsuleRadius(),
				3,FColor::Red,false,0,0,5);
		}
					
		return true;
	}

	FlowMoveScene.SceneType = PerceptionSetting.FailedTag;
	FlowMoveScene.PrepareLocation = Character->GetActorLocation();
	FlowMoveScene.TargetLocation = Character->GetActorLocation();
	FlowMoveScene = MakeFinalFlowMoveScene(Character,FlowMoveScene,TraceDirection,PerceptionSetting);
	return true;
}

TArray<FVector> UGBWFlowMovePerceptron_FindTheBestFoothold::GenerateCrawlerDirection(FVector BeginTraceVector, int InterpCount)
{
	TArray<FVector> Result;
    	
	for (int i=0; i < InterpCount/2; i++)
	{
		Result.Add(UKismetMathLibrary::RotateAngleAxis(
			BeginTraceVector,
			360 / InterpCount * i,
			FVector(0,0,1)
		));
		Result.Add(UKismetMathLibrary::RotateAngleAxis(
			BeginTraceVector,
			i==0? 180 : -360 / InterpCount * i,
			FVector(0,0,1)
		));
	}
    
	return Result;
}

bool UGBWFlowMovePerceptron_FindTheBestFoothold::TestWay(FHitResult& TryHitResult, ACharacter* Character, FVector Start,
	FVector End, FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting) const
{
	FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
	CollisionQueryParams.bTraceComplex = false;
	CollisionQueryParams.AddIgnoredActor(Character);

	FHitResult ForwardTraceHit;
	static const FName ForwardTraceTag{FString::Format(TEXT("{0} (Forward Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};
	CollisionQueryParams.TraceTag = ForwardTraceTag;
	TArray<struct FHitResult> ForwardTraceHitArr;
	ForwardTraceHit = UGBWFlowMoveFuncLib::LineTrace(
		Character->GetWorld(),
		ForwardTraceHitArr,
		Character->GetCapsuleComponent()->GetComponentLocation(),
		Start,
		PerceptionSetting.TraceSetting,
		CollisionQueryParams
	);

	if (ForwardTraceHit.IsValidBlockingHit())
	{
		return false;
	}

	float FinalTraceZOffset = Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() - Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
	ForwardTraceHitArr.Empty();
	ForwardTraceHit = UGBWFlowMoveFuncLib::SweepMulti(
		Character->GetWorld(),
		ForwardTraceHitArr,
		Start + FVector(0,0, FinalTraceZOffset),
		End + FVector(0,0, FinalTraceZOffset),
		FQuat::Identity,
		PerceptionSetting.TraceSetting,
		FCollisionShape::MakeCapsule(
			Character->GetCapsuleComponent()->GetScaledCapsuleRadius(),
			Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()),
			CollisionQueryParams
	);

	TryHitResult = ForwardTraceHit;
	return true;
}

void UGBWFlowMovePerceptron_FindTheBestFoothold::FindBottleneck(ACharacter* Character, FVector Start, FVector End,
	FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting, TArray<FHitResult>& WayHitResultDown,
	TArray<FHitResult>& WayHitResultUp, float& MaxHeightHitResult_High, FHitResult& MaxHeightHitResult_HighResult,
	float& MaxHeightHitResult_Low, FHitResult& MaxHeightHitResult_LowResult, float& MinHeightHitResult_Low,
	FHitResult& MinHeightHitResult_LowResult, float& WayMinHeight, FHitResult& MinZoneHitResult_DownResult,
	FHitResult& MinZoneHitResult_UpResult) const
{
	WayMinHeight = -1.0f;
	MaxHeightHitResult_High = -1.0f;
	MaxHeightHitResult_Low = -1.0f;
	MinHeightHitResult_Low = -1.0f;

	float FootHeight = Character->GetCapsuleComponent()->GetComponentLocation().Z - Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	
	FVector TraceLocation;
	float StepCount = (Start-End).Length() / Character->GetCapsuleComponent()->GetScaledCapsuleRadius();
	for (int i=0; i<=StepCount; i++)
	{
		TraceLocation = FMath::Lerp(Start, End,
		i/StepCount
		);
		bool Floor; FHitResult OutHit_Floor; bool Roof; FHitResult OutHit_Roof;
		UGBWFlowMoveFuncLib::FindFloorAndRoof(Character, TraceLocation, 10000.0f, 10000.0f, PerceptionSetting.TraceSetting,
			Floor, OutHit_Floor, Roof, OutHit_Roof);

		WayHitResultDown.Add(OutHit_Floor);
		WayHitResultUp.Add(OutHit_Roof);

		if (Floor)
		{
			float Height = OutHit_Floor.ImpactPoint.Z - FootHeight;
			if (Height >= 0)
			{
				if (Height >= MaxHeightHitResult_High - 5)
				{
					MaxHeightHitResult_High = Height;
					MaxHeightHitResult_HighResult = OutHit_Floor;
				}
			}
			else
			{
				if (-Height <= MaxHeightHitResult_Low+5.0f || MaxHeightHitResult_Low < 0)
				{
					MaxHeightHitResult_Low = -Height;
					MaxHeightHitResult_LowResult = OutHit_Floor;
				}

				if (-Height >= MinHeightHitResult_Low)
				{
					MinHeightHitResult_Low = -Height;
					MinHeightHitResult_LowResult = OutHit_Floor;
				}
			}
		}

		if (Floor && Roof)
		{
			float WayHeight = (OutHit_Roof.ImpactPoint-OutHit_Floor.ImpactPoint).Z;
			if (WayMinHeight <= 0 || (WayMinHeight>0 && WayMinHeight >= WayHeight))
			{
				WayMinHeight = WayHeight;
				MinZoneHitResult_DownResult = OutHit_Floor;
				MinZoneHitResult_UpResult = OutHit_Roof;
			}
		}
	}
}

FGBWFlowMoveScene UGBWFlowMovePerceptron_FindTheBestFoothold::MakeFinalFlowMoveScene(ACharacter* Character,
	FGBWFlowMoveScene InFlowMoveScene, FVector TraceDirection,
	FGBWFlowMoveFindTheBestFootholdPerceptionSetting PerceptionSetting)
{
	FGBWFlowMoveScene Res = InFlowMoveScene;

	Res.MovementMode = Character->GetCharacterMovement()->MovementMode;

	bool bIsInAir = (Res.MovementMode==EMovementMode::MOVE_Falling || Res.MovementMode==EMovementMode::MOVE_Flying);
	
	FTransform T = FTransform();
	T.SetLocation(Character->GetCapsuleComponent()->GetComponentLocation()-FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));
	T.SetRotation(TraceDirection.Rotation().Quaternion());
	T.SetScale3D(Character->GetCapsuleComponent()->GetComponentScale());

	if ( Res.TargetLocation.Z - T.GetLocation().Z <= -PerceptionSetting.TargetPointMaxDistance)
	{
		Res.TargetLocation.Z = bIsInAir? Character->GetCapsuleComponent()->GetComponentLocation().Z : T.GetLocation().Z - PerceptionSetting.TargetPointMaxDistance;
	}
	
	FVector RelativeLocation = T.InverseTransformPosition(Res.TargetLocation);
	Res.SceneHeight = RelativeLocation.Z;
	Res.SceneRight = RelativeLocation.Y;
	Res.SceneForward = RelativeLocation.X;
	Res.SceneAngle = RelativeLocation.Rotation().Pitch;

	FVector A = UKismetMathLibrary::ProjectVectorOnToPlane(
		(bIsInAir? Res.PrepareLocation : Res.TargetLocation)-Character->GetCapsuleComponent()->GetComponentLocation(),TraceDirection);
	A.Normalize();
	FVector B = UKismetMathLibrary::ProjectVectorOnToPlane(Character->GetCapsuleComponent()->GetUpVector(),TraceDirection);
	B.Normalize();
	float DirectionAngle = UKismetMathLibrary::DegAcos(UKismetMathLibrary::Dot_VectorVector(A,B));
	
	T.SetLocation(Character->GetCapsuleComponent()->GetComponentLocation());
	FVector A2 = UKismetMathLibrary::InverseTransformDirection(T,A);
	FVector B2 = UKismetMathLibrary::InverseTransformDirection(T,B);
	bool bIsRight = UKismetMathLibrary::CrossProduct2D(
		FVector2D(A2.Y, A2.Z),
		FVector2D(B2.Y, B2.Z)
	)>=0;

	Res.SetSceneDirectionAndGenerateMark(DirectionAngle * (bIsRight? 1 : -1));

	Res.SetTargetLocationAndGenerateFloorAndRoof(Res.TargetLocation, Character, PerceptionSetting.TraceSetting);
	Res.SetLocationAndGenerateFloorAndRoof(Character->GetCapsuleComponent()->GetComponentLocation(), Character, PerceptionSetting.TraceSetting);
	Res.SetPrepareLocationAndGenerateFloorAndRoof(Res.PrepareLocation, Character, PerceptionSetting.TraceSetting);
	
	return Res;
}

UGBWFlowMovePerceptron_GetTargetPointByProjectile::UGBWFlowMovePerceptron_GetTargetPointByProjectile()
{
	ThePerceptionSetting.TraceSetting.TraceObjectTypes = {
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldStatic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldDynamic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_Destructible)
	};

	ThePerceptionSetting.TraceSetting.TraceChannels = {
		UCollisionProfile::Get()->ConvertToTraceType(ECC_Visibility)
	};
}

bool UGBWFlowMovePerceptron_GetTargetPointByProjectile::GetPerceptionResult_Implementation(
	FGBWFlowMoveScene& FlowMoveScene, EGBWFlowMoveEventType EventType, ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (FlowMoveComponent)
	{
		return GetFlowScene(
			FlowMoveScene,
			EventType,
			OwnerCharacter,
			ThePerceptionSetting,
			FlowMoveComponent->TaskState.MoveVector,
			FlowMoveComponent->TaskState.ControlVector,
			FlowMoveComponent);
	}
	return false;
}

bool UGBWFlowMovePerceptron_GetTargetPointByProjectile::GetFlowScene(
	FGBWFlowMoveScene& FlowMoveScene,
	EGBWFlowMoveEventType EventType,
	ACharacter* Character,
	FGBWFlowMoveGetTargetPointByProjectilePerceptionSetting PerceptionSetting,
	FVector InputVector,
	FVector ControlVector,
	UGBWFlowMoveComponent* FlowMoveComponent)
{
	FlowMoveScene.SceneType = ThePerceptionSetting.FailedTag;
	FlowMoveScene.SceneHeight = 0.0f;
	FlowMoveScene.SceneAngle = 0.0f;
	FlowMoveScene.MovementMode = Character->GetCharacterMovement()->MovementMode;
	
	if (!Character)
	{
		return false;
	}
	
	FGBWFlowMoveScene TheFlowMoveSceneCache;
	switch (EventType)
	{
	case EGBWFlowMoveEventType::Init:
		bIsFinished = false;
		ProjectileActorGUID = FGuid::NewGuid();
		ResetState(FlowMoveComponent);
		break;
	case EGBWFlowMoveEventType::Update:

		break;
	case EGBWFlowMoveEventType::End:
		bIsFinished = true;
		UpdateProjectileActor(FlowMoveComponent->TaskState.FrameDeltaTime, FlowMoveComponent);
		if (GetCache(TheFlowMoveSceneCache, true))
		{
			FlowMoveScene = TheFlowMoveSceneCache;
			ResetState(FlowMoveComponent);
			return true;
		}
		
		if (ThePerceptionSetting.GetLastProjectileLocationAsTargetWhenNotHit)
		{
			const FVector ActorLocation = Character->GetActorLocation();
			const FVector CapsuleBottomLocation{ActorLocation.X, ActorLocation.Y, ActorLocation.Z - Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()};
			
			FlowMoveScene.SceneType = ThePerceptionSetting.SuccessTag;
			FlowMoveScene.SceneAngle = (LastProjectileLocation - CapsuleBottomLocation).Rotation().Pitch;
			FlowMoveScene.SceneHeight = LastProjectileLocation.Z - CapsuleBottomLocation.Z;
			FlowMoveScene.TargetLocation = LastProjectileLocation;
			ResetState(FlowMoveComponent);
			SetCache(FlowMoveScene);
			return true;
		}
		ResetState(FlowMoveComponent);
		return false;
	case EGBWFlowMoveEventType::GetCache:
		if (GetCache(TheFlowMoveSceneCache, true))
		{
			FlowMoveScene = TheFlowMoveSceneCache;
			return true;
		}
		return false;
	}

	if(!bIsActive)
	{
		bIsActive = true;
	    FlyDirection = ControlVector;
	    LastProjectileLocation = GetLaunchLocation(Character);
	}
	else if (!bIsFinished)
	{
		Timer += FlowMoveComponent->TaskState.FrameDeltaTime;

		UpdateProjectileActor(FlowMoveComponent->TaskState.FrameDeltaTime, FlowMoveComponent);
		
		if (Timer < ThePerceptionSetting.DelayLaunch)
		{
			FlyDirection = ControlVector;
			LastProjectileLocation = GetLaunchLocation(Character);
			return false;
		}

		if (FlyDistance>=ThePerceptionSetting.ProjectileMaxFlyDistance)
		{
			bIsFinished = true;
			UpdateProjectileActor(FlowMoveComponent->TaskState.FrameDeltaTime, FlowMoveComponent);
			if (ThePerceptionSetting.GetLastProjectileLocationAsTargetWhenNotHit)
			{
				const FVector ActorLocation = Character->GetActorLocation();
				const FVector CapsuleBottomLocation{ActorLocation.X, ActorLocation.Y, ActorLocation.Z - Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()};
			
				FlowMoveScene.SceneType = ThePerceptionSetting.SuccessTag;
				FlowMoveScene.SceneAngle = (LastProjectileLocation - CapsuleBottomLocation).Rotation().Pitch;
				FlowMoveScene.SceneHeight = LastProjectileLocation.Z - CapsuleBottomLocation.Z;
				FlowMoveScene.TargetLocation = LastProjectileLocation;
				SetCache(FlowMoveScene);
				return true;
			}
			return false;
		}
		
		//Reusable parameters - start
		FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
		CollisionQueryParams.bTraceComplex = false;
		CollisionQueryParams.AddIgnoredActor(Character);
		//Reusable parameters - end
		
		FVector NewLocation = LastProjectileLocation + FlyDirection * ThePerceptionSetting.ProjectileSpeed * FlowMoveComponent->TaskState.FrameDeltaTime;

		static const FName ProjectileTraceTag{FString::Format(TEXT("{0} (Projectile Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};
		FHitResult ProjectileTraceHit;
		CollisionQueryParams.TraceTag = ProjectileTraceTag;
		TArray<struct FHitResult> ProjectileTraceHitArr;
		UGBWFlowMoveFuncLib::SweepMulti(
			Character->GetWorld(),
			ProjectileTraceHitArr,
			LastProjectileLocation,
			NewLocation,
			FQuat::Identity,
			ThePerceptionSetting.TraceSetting,
			FCollisionShape::MakeSphere(ThePerceptionSetting.ProjectileRadius),
			CollisionQueryParams
		);

		if (ThePerceptionSetting.TraceSetting.isDebug)
		{
			DrawDebugSphere(Character->GetWorld(),LastProjectileLocation,ThePerceptionSetting.ProjectileRadius,
				5,FColor::Purple,false,0.0f,0,1.0f);
			DrawDebugSphere(Character->GetWorld(),NewLocation,ThePerceptionSetting.ProjectileRadius,
				5,FColor::Red,false,0.0f,0,1.0f);
			DrawDebugLine(Character->GetWorld(),LastProjectileLocation,NewLocation,
				FColor::Red,false,0.0f,0,2.0f);
			DrawDebugString(Character->GetWorld(),NewLocation,
				FString::Printf(TEXT("Time:%.2fs, Distance:%.2fcm"),
					Timer
					,FlyDistance),
				nullptr,FColor::Green,0.0f,true,1.5f);
		}

		bool bIsHit = false;
		for (auto Hit:ProjectileTraceHitArr)
		{
			if (Hit.IsValidBlockingHit())
			{
				ProjectileTraceHit = Hit;
				bIsHit = true;
				break;
			}
		}
		if (bIsHit)
		{
			const FVector ActorLocation = Character->GetActorLocation();
			const FVector CapsuleBottomLocation{ActorLocation.X, ActorLocation.Y, ActorLocation.Z - Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()};
			
			FlyDistance += (ProjectileTraceHit.ImpactPoint - LastProjectileLocation).Length();
			FlowMoveScene.SceneType = ThePerceptionSetting.SuccessTag;
			FlowMoveScene.SceneAngle = (ProjectileTraceHit.ImpactPoint - CapsuleBottomLocation).Rotation().Pitch;
			FlowMoveScene.SceneHeight = ProjectileTraceHit.ImpactPoint.Z - CapsuleBottomLocation.Z;
			FlowMoveScene.TargetLocation = ProjectileTraceHit.ImpactPoint;
			
			bIsFinished = true;
			UpdateProjectileActor(FlowMoveComponent->TaskState.FrameDeltaTime, FlowMoveComponent);
			ResetState(FlowMoveComponent);
			
			if (ThePerceptionSetting.TraceSetting.isDebug)
			{
				DrawDebugSphere(Character->GetWorld(),ProjectileTraceHit.ImpactPoint,ThePerceptionSetting.ProjectileRadius,
					5,FColor::Red,false,1.0f,0,1.0f);
			}
			
			SetCache(FlowMoveScene);
			return true;
		}
		
		FlyDistance += (NewLocation - LastProjectileLocation).Length();
		LastProjectileLocation = NewLocation;
	}

	return false;
}

void UGBWFlowMovePerceptron_GetTargetPointByProjectile::ResetState(UGBWFlowMoveComponent* FlowMoveComponent)
{
	FlowMoveComponent->DestroyNetWorkActor(ProjectileActorGUID);
	bIsActive = false;
	LastProjectileLocation = FVector::ZeroVector;
	FlyDirection = FVector::ZeroVector;
	Timer = 0.0f;
	FlyDistance = 0.0f;
	bIsProjectileActorInited = false;
}

FVector UGBWFlowMovePerceptron_GetTargetPointByProjectile::GetLaunchLocation(const ACharacter* Character) const
{
	FVector Result = FVector::ZeroVector;
	if (Character)
	{
		const USceneComponent* LaunchComponent = nullptr;
		if (!ThePerceptionSetting.LaunchFromComponentTag.IsNone())
		{
			TArray<UActorComponent*> C =  Character->GetComponentsByTag(ThePerceptionSetting.LaunchFromComponentClass,ThePerceptionSetting.LaunchFromComponentTag);
			for (const auto Item:C)
			{
				if (const auto c = Cast<USceneComponent>(Item))
				{
					LaunchComponent = c;
					break;
				}
			}
		}

		if (LaunchComponent)
		{
			Result = LaunchComponent->GetSocketLocation(ThePerceptionSetting.LaunchFromComponentSocketName)
			+ UKismetMathLibrary::TransformDirection(
				LaunchComponent->GetSocketTransform(ThePerceptionSetting.LaunchFromComponentSocketName),
				ThePerceptionSetting.LaunchFromComponentOffset.GetLocation());
			
		}
		else
		{
			Result = Character->GetActorLocation()
			+ UKismetMathLibrary::TransformDirection(
				Character->GetTransform(),
				ThePerceptionSetting.LaunchFromComponentOffset.GetLocation());
		}
	}

	return Result;
}

void UGBWFlowMovePerceptron_GetTargetPointByProjectile::UpdateProjectileActor(float DeltaTime, UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (!FlowMoveComponent->IsInServer())
	{
		return;
	}
	
	if (Timer >= ThePerceptionSetting.DelayLaunch && !bIsFinished)
	{
		if (!bIsProjectileActorInited)
		{
			bIsProjectileActorInited = true;
			ProjectileActorGUID = FGuid::NewGuid();
			FTransform T;
			T.SetLocation(LastProjectileLocation + ThePerceptionSetting.LaunchFromComponentOffset.GetLocation());
			T.SetRotation(ThePerceptionSetting.LaunchFromComponentOffset.GetRotation());
			T.SetScale3D(ThePerceptionSetting.LaunchFromComponentOffset.GetScale3D());
			
			FlowMoveComponent->SpawnNetWorkActor(
				ProjectileActorGUID,
				ThePerceptionSetting.ProjectileActorClass,
				T
			);
		}

		FlowMoveComponent->SetNetWorkActorLocation(ProjectileActorGUID, LastProjectileLocation);
	}
	else if (bIsFinished)
	{
		FlowMoveComponent->DestroyNetWorkActor(ProjectileActorGUID);
	}
}

UGBWFlowMovePerceptron_FindTargetPointByActor::UGBWFlowMovePerceptron_FindTargetPointByActor()
{
	ThePerceptionSetting.TraceSetting.TraceObjectTypes = {
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldStatic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_WorldDynamic),
		UCollisionProfile::Get()->ConvertToObjectType(ECC_Destructible)
	};

	ThePerceptionSetting.TraceSetting.TraceChannels = {
		UCollisionProfile::Get()->ConvertToTraceType(ECC_Visibility)
	};
}

bool UGBWFlowMovePerceptron_FindTargetPointByActor::GetPerceptionResult_Implementation(FGBWFlowMoveScene& FlowMoveScene,
	EGBWFlowMoveEventType EventType, ACharacter* OwnerCharacter, UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (FlowMoveComponent)
	{
		CheckWidget(EventType,FlowMoveComponent);
		return  GetFlowScene(
			FlowMoveScene,
			OwnerCharacter,
			ThePerceptionSetting,
			FlowMoveComponent->TaskState.MoveVector,
			FlowMoveComponent->TaskState.ControlVector);
	}
	return false;
}

bool UGBWFlowMovePerceptron_FindTargetPointByActor::GetFlowScene(
	FGBWFlowMoveScene& FlowMoveScene,
	ACharacter* Character,
	FGBWFlowMoveFindTargetPointByActorPerceptionSetting PerceptionSetting,
	FVector InputVector,
	FVector ControlVector)
{

	FlowMoveScene.SceneType = ThePerceptionSetting.FailedTag;
	FlowMoveScene.SceneHeight = 0.0f;
	FlowMoveScene.SceneAngle = 0.0f;
	FlowMoveScene.MovementMode = Character->GetCharacterMovement()->MovementMode;
	
	if (!Character)
	{
		return false;
	}

	//Built-in parameters - start
	constexpr float TargetPrimitiveSpeedThreshold{10.0f};// If a dynamic object has a speed bigger than this value, then do not trace it.
	//Built-in parameters - end

	//Reusable parameters - start
	FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
	CollisionQueryParams.bTraceComplex = false;
	CollisionQueryParams.AddIgnoredActor(Character);
	//Reusable parameters - end

	const auto ActorLocation{Character->GetActorLocation()};
	const auto ActorYawAngle{UE_REAL_TO_FLOAT(FRotator::NormalizeAxis(Character->GetActorRotation().Yaw))};
	
	FVector ForwardVector = ControlVector;
	FVector ViewLocation;
	FRotator ViewRotation;
	UGBWRMSBPFuncLib::GBWRMS_GetCharacterViewInfo(Character,ViewLocation, ViewRotation, ForwardVector);
	
	ForwardVector.Z = 0.0f;
	if (!InputVector.IsNearlyZero())
	{
		ForwardVector = ForwardVector.Rotation().RotateVector(InputVector);
	}

	FlowMoveScene.TargetLocation = Character->GetActorLocation();
	
	const auto VelocityYawAngle = UGBWFlowMoveFuncLib::GetVelocityYawAngle(ForwardVector);
	
	float ForwardTraceAngle = VelocityYawAngle;

	const auto ForwardTraceDeltaAngle{FRotator3f::NormalizeAxis(ForwardTraceAngle - ActorYawAngle)};
	if (FMath::Abs(ForwardTraceDeltaAngle) > PerceptionSetting.TraceAngleThreshold)
	{
		return false;
	}
	
	const auto ForwardTraceDirection{ControlVector};

	const auto* Capsule{Character->GetCapsuleComponent()};

	const auto CapsuleScale{Capsule->GetComponentScale().Z};
	const auto CapsuleRadius{Capsule->GetScaledCapsuleRadius()};
	const auto CapsuleHalfHeight{Capsule->GetScaledCapsuleHalfHeight()};

	const FVector CapsuleBottomLocation{ActorLocation.X, ActorLocation.Y, ActorLocation.Z - CapsuleHalfHeight};

	const auto TraceCapsuleRadius{CapsuleRadius - 1.0f};

	// Trace Down to find Ground.
	static const FName GroundTraceTag{FString::Format(TEXT("{0} (Ground Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};

	auto GroundTraceStart{CapsuleBottomLocation};
	GroundTraceStart.Z += TraceCapsuleRadius;
	auto GroundTraceEnd{GroundTraceStart - FVector(0,0,10000000.0f)};
	
	FHitResult GroundTraceHit;
	CollisionQueryParams.TraceTag = GroundTraceTag;
	TArray<struct FHitResult> GroundTraceHitArr;
	GroundTraceHit = UGBWFlowMoveFuncLib::SweepMulti(
		Character->GetWorld(),
		GroundTraceHitArr,
		GroundTraceStart,
		GroundTraceEnd,
		FQuat::Identity,
		ThePerceptionSetting.TraceSetting,
		FCollisionShape::MakeSphere(TraceCapsuleRadius),
		CollisionQueryParams
	);
	
	if (GroundTraceHit.IsValidBlockingHit())
	{
		FlowMoveScene.HeightFromGround = CapsuleBottomLocation.Z - GroundTraceHit.ImpactPoint.Z;
	}
	else
	{
		FlowMoveScene.HeightFromGround = -1.0f;
	}

	// Trace forward to find an object the character cannot walk on.
	static const FName ForwardTraceTag{FString::Format(TEXT("{0} (Forward Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};
	
	auto ForwardTraceStart{ViewLocation+ForwardTraceDirection*CapsuleRadius*2.0f};
	auto ForwardTraceEnd{ForwardTraceStart + ForwardTraceDirection * (CapsuleRadius + (PerceptionSetting.PrejudgeDistance + 1.0f) * CapsuleScale)};

	FHitResult ForwardTraceHit;
	CollisionQueryParams.TraceTag = ForwardTraceTag;
	TArray<struct FHitResult> ForwardTraceHitArr;
	ForwardTraceHit = UGBWFlowMoveFuncLib::SweepMulti(
		Character->GetWorld(),
		ForwardTraceHitArr,
		ForwardTraceStart,
		ForwardTraceEnd,
		FQuat::Identity,
		ThePerceptionSetting.TraceSetting,
		FCollisionShape::MakeSphere(TraceCapsuleRadius),
		CollisionQueryParams
	);

	auto* TargetPrimitive{ForwardTraceHit.GetComponent()};
	
	if (ForwardTraceHit.IsValidBlockingHit())
	{
		FlowMoveScene.TargetPrimitive = TargetPrimitive;
		
		if (IsValid(TargetPrimitive) &&
	    TargetPrimitive->GetComponentVelocity().SizeSquared() <= FMath::Square(TargetPrimitiveSpeedThreshold))
		{
			FlowMoveScene.SceneType = ThePerceptionSetting.SuccessTag;
			FlowMoveScene.SceneAngle = (ForwardTraceHit.ImpactPoint - CapsuleBottomLocation).Rotation().Pitch;
			FlowMoveScene.SceneHeight = ForwardTraceHit.ImpactPoint.Z - CapsuleBottomLocation.Z;
			FlowMoveScene.TargetLocation = ForwardTraceHit.ImpactPoint;
			FlowMoveScene.TargetActor = ForwardTraceHit.GetActor();
			FlowMoveScene.TargetPrimitive = ForwardTraceHit.Component;
		}
	}

	return true;
}

void UGBWFlowMovePerceptron_FindTargetPointByActor::CheckWidget(
	EGBWFlowMoveEventType EventType,
	UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (FlowMoveComponent && FlowMoveComponent->IsLocalPlayer())
	{
		if (EventType != EGBWFlowMoveEventType::End)
		{
			if (!SightWidget_NoTarget && IsValid(ThePerceptionSetting.SightWidgetClass_NoTarget))
			{
				SightWidget_NoTarget = CreateWidget(FlowMoveComponent->TaskState.OwnerCharacter->GetWorld(), ThePerceptionSetting.SightWidgetClass_NoTarget);
			}
			if (!SightWidget_GetTarget && IsValid(ThePerceptionSetting.SightWidgetClass_GetTarget))
			{
				SightWidget_GetTarget = CreateWidget(FlowMoveComponent->TaskState.OwnerCharacter->GetWorld(), ThePerceptionSetting.SightWidgetClass_GetTarget);
			}
			if (!TargetWidget && IsValid(ThePerceptionSetting.TargetWidgetClass))
			{
				TargetWidget = CreateWidget(FlowMoveComponent->TaskState.OwnerCharacter->GetWorld(), ThePerceptionSetting.TargetWidgetClass);
			}
			
			if (FGBWFlowMoveScene Scene;
				TargetScene.GetTargetScene(FlowMoveComponent->TaskState,Scene,false))
			{
				if (Scene.SceneType == ThePerceptionSetting.SuccessTag)
				{
					if (SightWidget_NoTarget && SightWidget_NoTarget->IsInViewport())
					{
						SightWidget_NoTarget->RemoveFromParent();
					}
					if (SightWidget_GetTarget && !SightWidget_GetTarget->IsInViewport())
					{
						SightWidget_GetTarget->AddToViewport(1);
						if (ThePerceptionSetting.Sound_GetTarget)
						{
							UGameplayStatics::PlaySound2D(FlowMoveComponent,ThePerceptionSetting.Sound_GetTarget);
						}
					}
					
					if (TargetWidget && !TargetWidget->IsInViewport())
					{
						TargetWidget->AddToViewport();
					}

					if (const auto PC = UGameplayStatics::GetPlayerController(FlowMoveComponent,0))
					{
						if (FVector2D Translation;
							Scene.TargetActor && 
							UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(PC,Scene.TargetActor->GetActorLocation(),Translation,false))
						{
							TargetWidget->SetRenderTranslation(Translation);
						}
					}
				}
				else
				{
					if (SightWidget_NoTarget && !SightWidget_NoTarget->IsInViewport())
					{
						SightWidget_NoTarget->AddToViewport(1);
					}
					if (SightWidget_GetTarget && SightWidget_GetTarget->IsInViewport())
					{
						SightWidget_GetTarget->RemoveFromParent();
					}
					if (TargetWidget && TargetWidget->IsInViewport())
					{
						TargetWidget->RemoveFromParent();
					}
				}
			}
		}
		else
		{
			if (SightWidget_NoTarget && SightWidget_NoTarget->IsInViewport())
			{
				SightWidget_NoTarget->RemoveFromParent();
			}
			if (SightWidget_GetTarget && SightWidget_GetTarget->IsInViewport())
			{
				SightWidget_GetTarget->RemoveFromParent();
			}
			if (TargetWidget && TargetWidget->IsInViewport())
			{
				TargetWidget->RemoveFromParent();
			}
		}
	}
}

float UGBWFlowMoveRMSController_ControlledMove::GetTime() const
{
	return Timer;
}

bool UGBWFlowMoveRMSController_ControlledMove::CheckValid_Implementation(FGBWFlowMoveState FlowMoveState)
{
	return true;
}

bool UGBWFlowMoveRMSController_ControlledMove::OnInit_Implementation(
	FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo)
{
	State = Start;
	bIsStart = false;
	bIsBurst = false;
	bIsMoving = false;
	bIsEnd = false;
	LastInputVector = FVector::ZeroVector;
	LastControlVector = FVector::ZeroVector;
	Timer = 0.0f;
	RMSTimer = 0.0f;
	AccumulatedFallDistance = 0.0f;
		
	return true;
}

void UGBWFlowMoveRMSController_ControlledMove::OnUpdate_Implementation(EFlowMoveNetworkLocationType NetworkLocation,
                                                                       bool bIsLocalOwn, UGBWFlowMoveComponent* FlowMoveComponent)
{
	UpdateState(FlowMoveComponent->TaskState.OwnerCharacter, FlowMoveComponent, FlowMoveComponent->TaskState.FrameDeltaTime, FlowMoveComponent->TaskState);
	PostureAdjust(FlowMoveComponent->TaskState.FrameDeltaTime, FlowMoveComponent->TaskState);
	RMSDebug(
			FlowMoveComponent->TaskState.OwnerCharacter,
			GetTime(),
			LastInputVector
		);
}

bool UGBWFlowMoveRMSController_ControlledMove::GetRMSParam_Implementation(
	FTransform& Result,
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	switch (State) {
	case Start:
		return GetRMSParam_Action(
			Result,
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState,
			StartAction);
	case Burst:
		return GetRMSParam_Action(
			Result,
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState,
			BurstAction);
	case Moving:
		return GetRMSParam_Moving(
			Result,
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState);
	case End:
		return GetRMSParam_Action(
			Result,
			OwnerCharacter,
			FlowMoveComponent,
			DeltaTime,
			FlowMoveState,
			EndAction);
	case Finished:
		return false;
	default: return false;
	}
}

bool UGBWFlowMoveRMSController_ControlledMove::IsActive_Implementation(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	return State != EControlledMoveState::Finished;
}

bool UGBWFlowMoveRMSController_ControlledMove::OnEnd_Implementation(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	FGBWFlowMoveState FlowMoveState)
{
	if (State == EControlledMoveState::End || State == EControlledMoveState::Finished)
	{
		return true;
	}

	UAnimMontage* MontageToStop = nullptr;
	switch (State) {
	case Start:
		MontageToStop = StartAction.AnimSetting.Montage;
		break;
	case Burst:
		MontageToStop = BurstAction.AnimSetting.Montage;
		break;
	case Moving:
		MontageToStop = MovingAnim.Montage;
		break;
	case End:
		MontageToStop = EndAction.AnimSetting.Montage;
		break;
	case Finished: break;
	default: ;
	}
	if (MontageToStop)
	{
		FlowMoveComponent->StopMontage(MontageToStop,0.1f);
	}
	
	State = EControlledMoveState::End;
	AccumulatedFallDistance = 0.0f;
	RMSTimer = 0.0f;
	RecoveryPosture(FlowMoveState);
	return true;
}

void UGBWFlowMoveRMSController_ControlledMove::OnFlowMoveStop_Implementation(UGBWFlowMoveComponent* FlowMoveComponent)
{
	OnEnd_Implementation(FlowMoveComponent->TaskState.OwnerCharacter,FlowMoveComponent,FlowMoveComponent->TaskState);
}

float UGBWFlowMoveRMSController_ControlledMove::GetDuration_Implementation()
{
	float Res = 1000000;
	switch (State)
	{
	case EControlledMoveState::Start:
		if (InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->IsAnimActive(StartAction.AnimSetting.Montage))
		{
			Res = InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->ActionDurationCache;
		}
		break;
	case EControlledMoveState::Burst:
		if (InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->IsAnimActive(BurstAction.AnimSetting.Montage))
		{
			Res = InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->ActionDurationCache;
		}
		break;
	case EControlledMoveState::Moving:
		Res = 1000000;
		break;
	case EControlledMoveState::End:
		if (InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->IsAnimActive(EndAction.AnimSetting.Montage))
		{
			Res = InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->ActionDurationCache;
		}
		break;
	default: ;
	}
	
	return Res;
}

float UGBWFlowMoveRMSController_ControlledMove::GetExecutedTime_Implementation()
{return RMSTimer;}

bool UGBWFlowMoveRMSController_ControlledMove::GetRMSParam_Moving(
	FTransform& Result,
	const ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, 
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	if (OwnerCharacter && FlowMoveComponent && DeltaTime > SMALL_NUMBER)
	{
		float TheSpeed = MoveSpeed;
		FVector InputVector = FlowMoveComponent->GetMoveVector(true);
		InputVector.Z = 0;
		InputVector.Normalize();

		if (LastInputVector.IsNearlyZero())
		{
			LastInputVector = InputVector;
		}
		else
		{
			LastInputVector = FMath::VInterpTo(LastInputVector, InputVector, DeltaTime, InputVectorSmoothSpeed);
		}
		if (LastControlVector.IsNearlyZero())
		{
			LastControlVector = FlowMoveComponent->GetControlVector();
		}
		else
		{
			LastControlVector = FMath::VInterpTo(LastControlVector, FlowMoveComponent->GetControlVector(), DeltaTime, InputVectorSmoothSpeed);
		}
		
		FVector ForwardVector = LastControlVector;
		ForwardVector.Z = 0.0f;
		if (!LastInputVector.IsNearlyZero())
		{
			ForwardVector = ForwardVector.Rotation().RotateVector(LastInputVector);
		}
		else
		{
			TheSpeed = 0.0f;
		}
		
		float FallDistance = 0.0f;
		if (!IgnoresGravity)
		{
			FallDistance = OwnerCharacter->GetVelocity().Z * DeltaTime + 0.5f * GravitationalAcceleration_ms2 * 10000.0f * DeltaTime * DeltaTime;
		}
		
		FVector Force = ForwardVector * TheSpeed  + FVector(0,0,FallDistance) / DeltaTime;
		
		const FRotator CurrentRotation = OwnerCharacter->GetActorForwardVector().Rotation();
		const FRotator TargetRotation = OwnerCharacter->GetVelocity().Rotation();
		const float DeltaYaw = FMath::FindDeltaAngleDegrees(CurrentRotation.Yaw,TargetRotation.Yaw);
		const FRotator RotationDt = FRotator{
			0,
			FMath::FInterpTo(0, DeltaYaw, DeltaTime, RotationSmoothSpeed),
			0};

		if (Force.Size() > MaxForceSize)
		{
			Force.Normalize();
			Force *= MaxForceSize;
		}

		Timer += DeltaTime;
		RMSTimer += DeltaTime;
		
		Result = FTransform(RotationDt, Force);
		
		return true;
	}
	return false;
}

bool UGBWFlowMoveRMSController_ControlledMove::GetRMSParam_Action(
	FTransform& Result,
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState,
	FGBWFlowMoveSetting ActionSetting)
{
	if (OwnerCharacter && FlowMoveComponent && DeltaTime > SMALL_NUMBER)
	{
		FVector InputVector = FlowMoveComponent->GetMoveVector(true);
		InputVector.Normalize();

		if (LastInputVector.IsNearlyZero())
		{
			LastInputVector = InputVector;
		}
		else
		{
			LastInputVector = FMath::VInterpTo(LastInputVector, InputVector, DeltaTime, InputVectorSmoothSpeed);
		}
		if (LastControlVector.IsNearlyZero())
		{
			LastControlVector = FlowMoveComponent->GetControlVector();
		}
		else
		{
			LastControlVector = FMath::VInterpTo(LastControlVector, FlowMoveComponent->GetControlVector(), DeltaTime, InputVectorSmoothSpeed);
		}
		
		FVector ForwardVector = LastControlVector;
		ForwardVector.Z = 0.0f;
		if (!LastInputVector.IsNearlyZero())
		{
			ForwardVector = ForwardVector.Rotation().RotateVector(LastInputVector);
		}
		
		float MoveFraction = (RMSTimer + DeltaTime) / FlowMoveComponent->ActionDurationCache;
		MoveFraction = GetMoveRateValue(FlowMoveComponent, MoveFraction,ActionSetting);
		/**
		*Curve-x : Gravity curve
		*Curve-y : Rotation Control Rate curve
		*Curve-z : To TargetPoint Finish Curve
		*/
		const FVector MoveControl = GetMoveControlVector(FlowMoveComponent,MoveFraction, ActionSetting);
		const FVector PathOffset = GetPathOffsetVector(FlowMoveComponent, ForwardVector, MoveFraction, DeltaTime,ActionSetting);
		
		float FallDistance = 0.0f;
		if (!IgnoresGravity)
		{
			FallDistance = 0.5f * GravitationalAcceleration_ms2 * 10000.0f * MoveControl.X * DeltaTime * DeltaTime;
		}
		AccumulatedFallDistance += FallDistance;
		
		FVector Force = (PathOffset + FVector(0,0,FallDistance)) / DeltaTime;
		
		const FRotator CurrentRotation = OwnerCharacter->GetActorRotation();
		const FRotator TargetRotation = ForwardVector.Rotation();
		const float DeltaYaw = FMath::FindDeltaAngleDegrees(CurrentRotation.Yaw,TargetRotation.Yaw);
		const FRotator RotationDt = FRotator{
			0,
			ActionSetting.AllowRotationControl? FMath::FInterpTo(0, DeltaYaw, DeltaTime, RotationSmoothSpeed)*ActionSetting.RotationControlScale : 0,
			0};

		if (Force.Size() > MaxForceSize)
		{
			Force.Normalize();
			Force *= MaxForceSize;
		}

		Timer += DeltaTime;
		RMSTimer += DeltaTime;
		
		Result = FTransform(RotationDt, Force);
		PostureAdjust(DeltaTime,FlowMoveState);

		RMSDebug(
			OwnerCharacter,
			GetTime(),
			InputVector
		);
		
		return true;
	}
	return false;
}

float UGBWFlowMoveRMSController_ControlledMove::GetMoveRateValue(const UGBWFlowMoveComponent* FlowMoveComponent, float MoveFraction, FGBWFlowMoveSetting ActionSetting) const
{
	float Result(MoveFraction);
	switch (ActionSetting.FlowMoveCurveSetting.MoveRateCurveType) {
	case EGBWFlowMoveCurveType::CurveAsset:
		if (ActionSetting.FlowMoveCurveSetting.MoveRateCurve)
		{
			float min;
			float max;
			ActionSetting.FlowMoveCurveSetting.MoveRateCurve->GetTimeRange(min, max);
			Result = ActionSetting.FlowMoveCurveSetting.MoveRateCurve->GetFloatValue(FMath::GetRangePct(min,max,MoveFraction));
		}
		break;
	case EGBWFlowMoveCurveType::AnimMontageCurve:
		const float Position = FMath::Min(
			RMSTimer * FlowMoveComponent->AnimPlayRateCache + FlowMoveComponent->AnimPlayStartPositionCache,
			FlowMoveComponent->AnimPlayEndPositionCache
			);
		Result = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.MoveRateAnimCurveName,
			Position,
			MoveFraction);
		break;
	}
	
	return Result;
}

FVector UGBWFlowMoveRMSController_ControlledMove::GetMoveControlVector(
	const UGBWFlowMoveComponent* FlowMoveComponent, 
	float MoveFraction,
	FGBWFlowMoveSetting ActionSetting) const
{
	FVector Result(1,1,MoveFraction);
	switch (ActionSetting.FlowMoveCurveSetting.MoveControlCurveType) {
	case EGBWFlowMoveCurveType::CurveAsset:
		if (ActionSetting.FlowMoveCurveSetting.MoveControlCurve)
		{
			float min;
			float max;
			ActionSetting.FlowMoveCurveSetting.MoveControlCurve->GetTimeRange(min, max);
			Result = ActionSetting.FlowMoveCurveSetting.MoveControlCurve->GetVectorValue(FMath::GetRangePct(min,max,MoveFraction));
		}
		break;
	case EGBWFlowMoveCurveType::AnimMontageCurve:
		const float Position = FMath::Min(
			RMSTimer * FlowMoveComponent->AnimPlayRateCache + FlowMoveComponent->AnimPlayStartPositionCache,
			FlowMoveComponent->AnimPlayEndPositionCache
			);
		Result.X = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.GravityAnimCurveName,
			Position,
			1.0f);
		Result.Y = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.RotationControlAnimCurveName,
			Position,
			1.0f);
		Result.Z = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.TargetPointFinishAnimCurveName,
			Position,
			MoveFraction);
		break;
	}
	
	return Result;
}

FVector UGBWFlowMoveRMSController_ControlledMove::GetPathOffsetVector(const UGBWFlowMoveComponent* FlowMoveComponent, const FVector ForwardVector, float MoveFraction, float DeltaTime, FGBWFlowMoveSetting ActionSetting) const
{
	FVector Result(0.f);

	switch (ActionSetting.FlowMoveCurveSetting.PathOffsetCurveType) {
	case EGBWFlowMoveCurveType::CurveAsset:
		if (ActionSetting.FlowMoveCurveSetting.PathOffsetCurve)
		{
			float min;
			float max;
			ActionSetting.FlowMoveCurveSetting.PathOffsetCurve->GetTimeRange(min, max);
			Result = ActionSetting.FlowMoveCurveSetting.PathOffsetCurve->GetVectorValue(FMath::GetRangePct(min,max,MoveFraction))
			- ActionSetting.FlowMoveCurveSetting.PathOffsetCurve->GetVectorValue(FMath::GetRangePct(min,max,MoveFraction-DeltaTime));
		}
		break;
	case EGBWFlowMoveCurveType::AnimMontageCurve:
		const float Position = FMath::Min(
			RMSTimer * FlowMoveComponent->AnimPlayRateCache + FlowMoveComponent->AnimPlayStartPositionCache,
			FlowMoveComponent->AnimPlayEndPositionCache
			);
		Result.X = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_X,
			Position,
			0.0f)
			- UGBWFlowMoveFuncLib::GetAnimCurveValue(
				ActionSetting.AnimSetting.Montage,
				ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_X,
				Position-DeltaTime,
				0.0f);
		Result.Y = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_Y,
			Position,
			0.0f)
			-UGBWFlowMoveFuncLib::GetAnimCurveValue(
         			ActionSetting.AnimSetting.Montage,
         			ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_Y,
         			Position-DeltaTime,
         			0.0f);
		Result.Z = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_Z,
			Position,
			0.0f)
			-UGBWFlowMoveFuncLib::GetAnimCurveValue(
				ActionSetting.AnimSetting.Montage,
				ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_Z,
				Position-DeltaTime,
				0.0f);
		break;
	}

	Result = Result * ActionSetting.PathOffsetScale;
	Result = ForwardVector.Rotation().RotateVector(Result);
	
	return Result;
}

bool UGBWFlowMoveRMSController_ControlledMove::ExtractRotation(
	FRotator& OutRotation,
	const ACharacter* Character,
	FRotator InStartRotation,
	FRotator InTargetRotation, 
	float Fraction) const
{
	if (Character)
	{
		const float RotationFraction = Fraction;
		const float TargetYaw = InTargetRotation.Yaw < 0 ? InTargetRotation.Yaw + 360 : InTargetRotation.Yaw;
		const float StartYaw = InStartRotation.Yaw < 0 ? InStartRotation.Yaw + 360 : InStartRotation.Yaw;
		const float CurrentTargetYaw = StartYaw + FMath::Lerp<float, float>(0, FMath::FindDeltaAngleDegrees(StartYaw,TargetYaw), RotationFraction);

		const FRotator CurrentRotation = Character->GetActorRotation();
		OutRotation = FRotator{0, (CurrentTargetYaw - CurrentRotation.Yaw), 0};
		return true;
	}
	return false;
}

void UGBWFlowMoveRMSController_ControlledMove::PostureAdjust(float DeltaTime, FGBWFlowMoveState FlowMoveState) const
{
	FVector ForwardVector = FlowMoveState.ControlVector;
	ForwardVector.Z = 0.0f;
	if (!FlowMoveState.MoveVector.IsNearlyZero())
	{
		ForwardVector = ForwardVector.Rotation().RotateVector(FlowMoveState.MoveVector);
	}
	const FRotator CurrentRotation = FlowMoveState.OwnerCharacter->GetActorRotation();
	const FRotator TargetRotation = ForwardVector.Rotation();
	const float DeltaYaw = FMath::FindDeltaAngleDegrees(CurrentRotation.Yaw,TargetRotation.Yaw);
	const FRotator RotationNow = FlowMoveState.OwnerCharacter->GetCapsuleComponent()->GetRelativeRotation();
	FlowMoveState.OwnerCharacter->GetCapsuleComponent()->SetRelativeRotation(
		FRotator(
			RotationNow.Pitch,
			RotationNow.Yaw,
			FMath::Min(1.0f,FlowMoveState.OwnerCharacter->GetVelocity().Length() / MoveSpeed)
			* FMath::FInterpTo(
				RotationNow.Roll,
				FMath::ClampAngle(DeltaYaw,-30,30),
				DeltaTime,
				3.0f)));
}

void UGBWFlowMoveRMSController_ControlledMove::RecoveryPosture(FGBWFlowMoveState FlowMoveState)
{
	const FRotator RotationNow = FlowMoveState.OwnerCharacter->GetCapsuleComponent()->GetRelativeRotation();
	FlowMoveState.OwnerCharacter->GetCapsuleComponent()->SetRelativeRotation(
		FRotator(
			RotationNow.Pitch,
			RotationNow.Yaw,
			0));
}

void UGBWFlowMoveRMSController_ControlledMove::UpdateState(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	switch (State)
	{
	case EControlledMoveState::Start:
		if (!bIsStart)
		{
			if (SceneConditionSet.IsMet(OwnerCharacter,FlowMoveComponent,DeltaTime,FlowMoveState))
			{
				RMSTimer = 0.0f;
				PlayMontage(FlowMoveComponent,StartAction.AnimSetting,StartAction.DurationType,StartAction.Duration);
			}
			bIsStart = true;
		}
		else
		{
			if (!FlowMoveComponent->IsAnimActive(StartAction.AnimSetting.Montage))
			{
				State = EControlledMoveState::Burst;
			}
		}
		break;
	case EControlledMoveState::Burst:
		if (!bIsBurst)
		{
			RMSTimer = 0.0f;
			PlayMontage(FlowMoveComponent,BurstAction.AnimSetting,BurstAction.DurationType,BurstAction.Duration);
			bIsBurst = true;
		}
		else
		{
			if (!FlowMoveComponent->IsAnimActive(BurstAction.AnimSetting.Montage))
			{
				State = EControlledMoveState::Moving;
			}
		}
		break;
	case EControlledMoveState::Moving:
		if (!bIsMoving)
		{
			RMSTimer = 0.0f;
			PlayMontage(FlowMoveComponent,MovingAnim, EGBWFlowMoveActionDurationType::Infinite,0.0f);
			bIsMoving = true;
		}
		else
		{
			if (!FlowMoveComponent->IsAnimActive(MovingAnim.Montage))
			{
				PlayMontage(FlowMoveComponent,MovingAnim, EGBWFlowMoveActionDurationType::Infinite,0.0f);
			}
		}
		break;
	case EControlledMoveState::End:
		if (!bIsEnd)
		{
			RMSTimer = 0.0f;
			PlayMontage(FlowMoveComponent,EndAction.AnimSetting,EndAction.DurationType,EndAction.Duration);
			bIsEnd = true;
		}
		else
		{
			if (!FlowMoveComponent->IsAnimActive(EndAction.AnimSetting.Montage))
			{
				State = EControlledMoveState::Finished;
			}
		}
		break;
	default: ;
	}
}

bool UGBWFlowMoveRMSController_ControlledMove::PlayMontage(
	UGBWFlowMoveComponent* FlowMoveComponent,
	FGBWFlowMoveAnimSetting AnimSetting,
	EGBWFlowMoveActionDurationType DurationType,
	float Duration)
{
	if (FlowMoveComponent->IsInServer())
	{
		FlowMoveComponent->PlayMontage(
        				AnimSetting,
        				DurationType,
        				Duration,
        				true);
	}
	
	return true;
}

void UGBWFlowMoveRMSController_ControlledMove::RMSDebug(const ACharacter* Character, const float Time, const FVector InputVector) const
{
	if (isDebug)
	{
		FString StateStr = "";
		switch (State)
		{
		case EControlledMoveState::Start:
			StateStr = "Start";
			break;
		case EControlledMoveState::Burst:
			StateStr = "Burst";
			break;
		case EControlledMoveState::Moving:
			StateStr = "Moving";
			break;
		case EControlledMoveState::End:
			StateStr = "End";
			break;
		case Finished:
			StateStr = "Finished";
			break;
		}
		const FVector StartPoint = Character->GetActorLocation() + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
		DrawDebugString(
			Character->GetWorld(),
			StartPoint+FVector(0,0,-80.0f),
			FString::Printf(TEXT("ControlledMove : %s \n Character %s \n Time %f \n InputVector %s \n InputVectorNow %s"),
				*StateStr,
				*Character->GetName(),
				Time,
				*InputVector.ToString(),
				*LastInputVector.ToString()),
			nullptr,
			FColor::White,
			0.0f,
			true,
			1.2f
			);
	}
}

bool UGBWFlowMoveRMSController_TargetMove::CheckValid_Implementation(FGBWFlowMoveState FlowMoveState)
{
	if (Action.AnimSetting.Montage)
	{
		return true;
	}
	return false;
}

bool UGBWFlowMoveRMSController_TargetMove::OnInit_Implementation(FGBWFlowMoveRMSControllerInitInfo NewInitFlowMoveInfo)
{
	bIsExecuted = false;
	LastInputVector = FVector::ZeroVector;
	LastControlVector = FVector::ZeroVector;
	Timer = 0.0f;
	AccumulatedFallDistance = 0.0f;
	LastDtMove = FVector::ZeroVector;
	LastLocation = FVector::ZeroVector;
	AccumulatedLossesDtMove = FVector::ZeroVector;

	PlayMontage(
		InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent,
		Action.AnimSetting,
		Action.DurationType,
		Action.Duration
	);
		
	return true;
}

void UGBWFlowMoveRMSController_TargetMove::OnUpdate_Implementation(EFlowMoveNetworkLocationType NetworkLocation,
	bool bIsLocalOwn, UGBWFlowMoveComponent* FlowMoveComponent)
{
	UpdateState();
}

bool UGBWFlowMoveRMSController_TargetMove::GetRMSParam_Implementation(
	FTransform& Result,
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent, 
	float DeltaTime, 
	FGBWFlowMoveState FlowMoveState)
{
	if (DeltaTime > SMALL_NUMBER)
	{
		constexpr float FinishInPositionPercentage = 0.1f;

		if (!LastLocation.IsZero())
		{
			AccumulatedLossesDtMove += LastDtMove - (OwnerCharacter->GetActorLocation() - LastLocation);
		}
		LastLocation = OwnerCharacter->GetActorLocation();
		
		float MoveFraction = (GetTime() + DeltaTime) / FlowMoveComponent->ActionDurationCache;
		const float RotationFraction = FMath::Clamp(MoveFraction / (FinishInPositionPercentage>0.0f? FinishInPositionPercentage:1.0f),0,1);
		const FVector InputVector = FlowMoveState.MoveVector;

		MoveFraction = GetMoveRateValue(FlowMoveComponent,MoveFraction,Action);
		
		/**
		 *Curve-x : Gravity curve
		 *Curve-y : Rotation Control Rate curve
		 *Curve-z : To TargetPoint Finish Curve
		 */
		const FVector MoveControl = GetMoveControlVector(FlowMoveComponent,MoveFraction,Action);
		if (LastInputVector.IsNearlyZero())
		{
			LastInputVector = InputVector;
		}
		else
		{
			LastInputVector = FMath::VInterpTo(LastInputVector, InputVector, DeltaTime, InputVectorSmoothSpeed);
		}
		if (LastControlVector.IsNearlyZero())
		{
			LastControlVector = FlowMoveComponent->GetControlVector();
		}
		else
		{
			LastControlVector = FMath::VInterpTo(LastControlVector, FlowMoveComponent->GetControlVector(), DeltaTime, InputVectorSmoothSpeed);
		}
		
		FVector ForwardVector = LastControlVector;
		ForwardVector.Z = 0.0f;
		if (!LastInputVector.IsNearlyZero())
		{
			ForwardVector = ForwardVector.Rotation().RotateVector(LastInputVector);
		}
		
		if (Action.AllowRotationControl)
		{
			FVector ForwardVectorNow = InitFlowMoveInfo.BeginFlowMoveState.CurrentActionTargetScene.TargetLocation-InitFlowMoveInfo.BeginTransform.GetLocation();
			const float ForwardVectorNowLength = ForwardVectorNow.Length();
			ForwardVectorNow.Normalize();
			
			const FVector TargetLocationDirection =
				ForwardVectorNowLength *
					UKismetMathLibrary::VInterpTo(
						ForwardVectorNow,
						ForwardVector,
						DeltaTime,
						RotationSmoothSpeed*MoveControl.Y);

			InitFlowMoveInfo.BeginFlowMoveState.CurrentActionTargetScene.TargetLocation = InitFlowMoveInfo.BeginTransform.GetLocation() + TargetLocationDirection;
		}

		const FVector PathOffset = GetPathOffsetVector(
			FlowMoveComponent,
			InitFlowMoveInfo.BeginFlowMoveState.CurrentActionTargetScene.TargetLocation-InitFlowMoveInfo.BeginTransform.GetLocation(),
			MoveFraction,
			Action);
		const FVector CurrentTargetLocation = FMath::Lerp<FVector, float>(
			InitFlowMoveInfo.BeginTransform.GetLocation(),
			InitFlowMoveInfo.BeginFlowMoveState.CurrentActionTargetScene.TargetLocation,
			MoveControl.Z) + PathOffset;
		
		float FallDistance = 0.0f;
		if (!Action.IgnoreGravity)
		{
			FallDistance = 0.5f * Action.GravitationalAcceleration_MS2 * 10000.0f * MoveControl.X * DeltaTime * DeltaTime;
		}
		AccumulatedFallDistance += FallDistance;

		LastDtMove = CurrentTargetLocation - OwnerCharacter->GetActorLocation() + FVector(0,0,AccumulatedFallDistance) - AccumulatedLossesDtMove;
		FVector Force = LastDtMove / DeltaTime;
		FRotator RotationDt = FRotator::ZeroRotator;

		const FRotator TargetRotation = (InitFlowMoveInfo.BeginFlowMoveState.CurrentActionTargetScene.TargetLocation-InitFlowMoveInfo.BeginTransform.GetLocation()).Rotation();
		ExtractRotation(RotationDt, OwnerCharacter, InitFlowMoveInfo.BeginTransform.Rotator(), TargetRotation, RotationFraction);

		if (Force.Size() > MaxForceSize)
		{
			Force.Normalize();
			Force *= MaxForceSize;
		}
		
		Result = FTransform(RotationDt, Force);
		Timer += DeltaTime;
		
		RMSDebug(
			OwnerCharacter,
			GetTime(),
			MoveFraction,
			MoveControl,
			InputVector,
			PathOffset,
			CurrentTargetLocation - PathOffset,
			FallDistance,
			Result,
			Action
		);
		
		return true;
	}
	return false;
}

bool UGBWFlowMoveRMSController_TargetMove::IsActive_Implementation(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	return (bIsExecuted && FlowMoveComponent->IsAnimActive(Action.AnimSetting.Montage)) || !bIsExecuted;
}

bool UGBWFlowMoveRMSController_TargetMove::OnEnd_Implementation(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	FGBWFlowMoveState FlowMoveState)
{
	if (Action.AnimSetting.Montage)
	{
		FlowMoveComponent->StopMontage(Action.AnimSetting.Montage,0.1f);
	}
	return true;
}

float UGBWFlowMoveRMSController_TargetMove::GetDuration_Implementation()
{
	return bIsExecuted? InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->ActionDurationCache : 100000000.0f;
}

float UGBWFlowMoveRMSController_TargetMove::GetExecutedTime_Implementation()
{
	return Timer;
}

float UGBWFlowMoveRMSController_TargetMove::GetMoveRateValue(
	const UGBWFlowMoveComponent* FlowMoveComponent,
	float MoveFraction, 
	FGBWFlowMoveSetting ActionSetting) const
{
	float Result(MoveFraction);
	switch (ActionSetting.FlowMoveCurveSetting.MoveRateCurveType) {
	case EGBWFlowMoveCurveType::CurveAsset:
		if (ActionSetting.FlowMoveCurveSetting.MoveRateCurve)
		{
			float min;
			float max;
			ActionSetting.FlowMoveCurveSetting.MoveRateCurve->GetTimeRange(min, max);
			Result = ActionSetting.FlowMoveCurveSetting.MoveRateCurve->GetFloatValue(FMath::GetRangePct(min,max,MoveFraction));
		}
		break;
	case EGBWFlowMoveCurveType::AnimMontageCurve:
		const float Position = FMath::Min(
			GetTime() * FlowMoveComponent->AnimPlayRateCache + FlowMoveComponent->AnimPlayStartPositionCache,
			FlowMoveComponent->AnimPlayEndPositionCache
			);
		Result = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.MoveRateAnimCurveName,
			Position,
			MoveFraction);
		break;
	}
	
	return Result;
}

FVector UGBWFlowMoveRMSController_TargetMove::GetMoveControlVector(
	const UGBWFlowMoveComponent* FlowMoveComponent,
	float MoveFraction,
	FGBWFlowMoveSetting ActionSetting) const
{
	FVector Result(1,1,MoveFraction);
	switch (ActionSetting.FlowMoveCurveSetting.MoveControlCurveType) {
	case EGBWFlowMoveCurveType::CurveAsset:
		if (ActionSetting.FlowMoveCurveSetting.MoveControlCurve)
		{
			float min;
			float max;
			ActionSetting.FlowMoveCurveSetting.MoveControlCurve->GetTimeRange(min, max);
			Result = ActionSetting.FlowMoveCurveSetting.MoveControlCurve->GetVectorValue(FMath::GetRangePct(min,max,MoveFraction));
		}
		break;
	case EGBWFlowMoveCurveType::AnimMontageCurve:
		const float Position = FMath::Min(
			GetTime() * FlowMoveComponent->AnimPlayRateCache + FlowMoveComponent->AnimPlayStartPositionCache,
			FlowMoveComponent->AnimPlayEndPositionCache
			);
		Result.X = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.GravityAnimCurveName,
			Position,
			1.0f);
		Result.Y = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.RotationControlAnimCurveName,
			Position,
			1.0f);
		Result.Z = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.TargetPointFinishAnimCurveName,
			Position,
			MoveFraction);
		break;
	}
	
	return Result;
}

FVector UGBWFlowMoveRMSController_TargetMove::GetPathOffsetVector(
	const UGBWFlowMoveComponent* FlowMoveComponent,
	const FVector ForwardVector,
	float MoveFraction,
	FGBWFlowMoveSetting ActionSetting) const
{
	FVector Result(0.f);

	switch (ActionSetting.FlowMoveCurveSetting.PathOffsetCurveType) {
	case EGBWFlowMoveCurveType::CurveAsset:
		if (ActionSetting.FlowMoveCurveSetting.PathOffsetCurve)
		{
			float min;
			float max;
			ActionSetting.FlowMoveCurveSetting.PathOffsetCurve->GetTimeRange(min, max);
			Result = ActionSetting.FlowMoveCurveSetting.PathOffsetCurve->GetVectorValue(FMath::GetRangePct(min,max,MoveFraction));
		}
		break;
	case EGBWFlowMoveCurveType::AnimMontageCurve:
		const float Position = FMath::Min(
			GetTime() * FlowMoveComponent->AnimPlayRateCache + FlowMoveComponent->AnimPlayStartPositionCache,
			FlowMoveComponent->AnimPlayEndPositionCache
			);
		Result.X = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_X,
			Position,
			0.0f);
		Result.Y = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_Y,
			Position,
			0.0f);
		Result.Z = UGBWFlowMoveFuncLib::GetAnimCurveValue(
			ActionSetting.AnimSetting.Montage,
			ActionSetting.FlowMoveCurveSetting.PathOffsetAnimCurveName_Z,
			Position,
			0.0f);
		break;
	}

	Result = Result * ActionSetting.PathOffsetScale;
	FRotator FacingRotation(ForwardVector.Rotation());
	FacingRotation.Pitch = 0.f;
	Result = FacingRotation.RotateVector(Result);
	
	return Result;
}

bool UGBWFlowMoveRMSController_TargetMove::ExtractRotation(
	FRotator& OutRotation,
	const ACharacter* Character,
	FRotator InStartRotation,
	FRotator InTargetRotation,
	float Fraction) const
{
	if (Character)
	{
		const float RotationFraction = Fraction;
		const float TargetYaw = InTargetRotation.Yaw < 0 ? InTargetRotation.Yaw + 360 : InTargetRotation.Yaw;
		const float StartYaw = InStartRotation.Yaw < 0 ? InStartRotation.Yaw + 360 : InStartRotation.Yaw;
		const float CurrentTargetYaw = StartYaw + FMath::Lerp<float, float>(0, FMath::FindDeltaAngleDegrees(StartYaw,TargetYaw), RotationFraction);

		const FRotator CurrentRotation = Character->GetActorRotation();
		OutRotation = FRotator{0, (CurrentTargetYaw - CurrentRotation.Yaw), 0};
		return true;
	}
	return false;
}

void UGBWFlowMoveRMSController_TargetMove::UpdateState()
{
	if (Action.AnimSetting.Montage)
	{
		if (!bIsExecuted && !InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->IsAnimActive(Action.AnimSetting.Montage))
		{
			PlayMontage(
			InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent,
			Action.AnimSetting,
			Action.DurationType,
			Action.Duration
			);
		}
		if (InitFlowMoveInfo.BeginFlowMoveState.FlowMoveComponent->IsAnimActive(Action.AnimSetting.Montage))
		{
			bIsExecuted = true;
		}
	}
}

bool UGBWFlowMoveRMSController_TargetMove::PlayMontage(
	UGBWFlowMoveComponent* FlowMoveComponent,
	FGBWFlowMoveAnimSetting AnimSetting,
	EGBWFlowMoveActionDurationType DurationType,
	float Duration)
{
	if (FlowMoveComponent->IsInServer())
	{
		FlowMoveComponent->PlayMontage(
        		AnimSetting,
        		DurationType,
        		Duration,
        		true);
	}
	
	return true;
}

void UGBWFlowMoveRMSController_TargetMove::RMSDebug(
	ACharacter* Character,
	float Time,
	float MoveFraction,
	FVector MoveControl,
	FVector InputVector,
	FVector PathOffset,
	FVector CurrentTarget,
	float FallDistance,
	FTransform RootMotionParam,
	FGBWFlowMoveSetting ActionSetting) const
{
	if (isDebug)
	{
		const FVector StartPoint = Character->GetActorLocation() + FVector(0,0,Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
		DrawDebugString(
			Character->GetWorld(),
			StartPoint+FVector(0,0,-50.0f),
			FString::Printf(TEXT("RMSState : \n Character %s \n Time %f \n MoveFraction %f \n Gravity %f \n RotationControl %f \n TargetFinshRate %f \n InputVector %s \n PathOffset %s \n RootMotionParam %s \n FallDistance %f \n AccumulatedFallDistance %f"),
				*Character->GetName(),
				Time,
				MoveFraction,
				ActionSetting.IgnoreGravity? 0.0f : MoveControl.X * ActionSetting.GravitationalAcceleration_MS2,
				ActionSetting.AllowRotationControl? MoveControl.Y*RotationSmoothSpeed:0.0f,
				MoveControl.Z,
				*InputVector.ToString(),
				*PathOffset.ToString(),
				*RootMotionParam.ToString(),
				FallDistance,
				AccumulatedFallDistance),
			nullptr,
			FColor::White,
			0.0f,
			true,
			1.2f
			);

		DrawDebugSphere(
			Character->GetWorld(),
			CurrentTarget,
			3.0,
			3.0f,
			FColor::Black,
			false,
			1.0f,
			0,
			3.0f
		);

		DrawDebugSphere(
			Character->GetWorld(),
			CurrentTarget + PathOffset,
			3.0,
			3.0f,
			FColor::Orange,
			false,
			1.0f,
			0,
			3.0f
		);

		DrawDebugSphere(
			Character->GetWorld(),
			CurrentTarget + PathOffset + FVector(0,0, AccumulatedFallDistance),
			3.0,
			3.0f,
			FColor::Red,
			false,
			1.0f,
			0,
			3.0f
		);

		DrawDebugSphere(
			Character->GetWorld(),
			InitFlowMoveInfo.BeginFlowMoveState.CurrentActionTargetScene.PrepareLocation,
			30.0,
			3.0f,
			FColor::Orange,
			false,
			5.0f,
			0,
			3.0f
		);
		DrawDebugSphere(
			Character->GetWorld(),
			InitFlowMoveInfo.BeginFlowMoveState.CurrentActionTargetScene.TargetLocation,
			30.0,
			3.0f,
			FColor::Red,
			false,
			5.0,
			0,
			3.0f
		);
	}
}

bool UGBWFlowMoveSceneCondition_FlowMoveScene::IsConditionMet_Implementation(
	ACharacter* OwnerCharacter,
	UGBWFlowMoveComponent* FlowMoveComponent,
	float DeltaTime,
	FGBWFlowMoveState FlowMoveState)
{
	return SceneCondition.IsConditionMet(FlowMoveState);
}

TArray<FString> UGBWFlowMoveSceneCondition_FlowMoveScene::GetAttributeNameList() const
{
	TArray<FString> Res;
	
	UObject* Outer = this->GetOuter();
	bool bIsGet = false;
	while (Outer)
	{
		if (const UGBW_DA_FlowMoveScheme* Scheme = Cast<UGBW_DA_FlowMoveScheme>(Outer))
        {
        	Res = Scheme->GetFlowMoveAttributeNameList();
			bIsGet = true;
			break;
        }
		else
		{
			Outer = Outer->GetOuter();
		}
	}

	if (!bIsGet)
	{
		if (const UGBW_DA_FlowMoveConfig* Config = Cast<UGBW_DA_FlowMoveConfig>(this->GetOuter()))
        {
        	Res = Config->GetAttributeNameList();
        }
	}

	return Res;
}

void UGBWFlowMoveScript_Debug::OnUpdate_Implementation(EFlowMoveNetworkLocationType NetworkLocation, bool bIsLocalOwn,
                                                       UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (bIsLocalOwn && FlowMoveComponent)
	{
		FlowMoveDebug(FlowMoveComponent->TaskState);
	}
}

void UGBWFlowMoveScript_Debug::FlowMoveDebug(const FGBWFlowMoveState TaskState) const
{
	if (bIsDebug)
	{
		int KeyBase = TaskState.FlowMoveComponent->IsInServer()? 0:100;
		const FVector StartPoint = TaskState.OwnerCharacter->GetActorLocation() + FVector(0,0,TaskState.OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
		if (FlowMoveState)
		{
			GEngine->AddOnScreenDebugMessage(0+KeyBase,1,FColor::Blue,
			FString::Printf(
				TEXT(">>>>>>>FlowMoveState(%.2f)<<<<<<< \n OwnerCharacter : %s \n FlowMoveScheme : %s \n FrameDeltaTime : %.4f \n MoveVector : %s \n ControlVector : %s \n PerceptionVector : %s \n Speed : %f \n >>>>>>>FlowMoveState<<<<<<<"),
				TaskState.Timer,
				*TaskState.OwnerCharacter->GetName(),
				*TaskState.FlowMoveScheme->GetName(),
				TaskState.FrameDeltaTime,
				*TaskState.MoveVector.ToString(),
				*TaskState.ControlVector.ToString(),
				*TaskState.PerceptionVector.ToString(),
				TaskState.OwnerCharacter->GetVelocity().Length()
			));
		}

		if (FlowMoveAction)
		{
			GEngine->AddOnScreenDebugMessage(1+KeyBase,1,FColor::Green,
			FString::Printf(
				TEXT(">>>>>>>FlowMoveAction<<<<<<< \n RMSParam : %s \n LastFlowMoveAction : %s \n CurrentFlowMoveAction : (%.2f)%s \n ExpectedFlowMoveAction : %s \n >>>>>>>FlowMoveAction<<<<<<<"),
				*TaskState.RMSParamNow.ToString(),
				*TaskState.LastFlowMoveActionStr,
				TaskState.CurrentFlowMoveExecutedTime,
				*TaskState.CurrentFlowMoveActionStr,
				*TaskState.ExpectedFlowMoveActionStr
			));
		}

		if (FlowMoveScene)
		{
			GEngine->AddOnScreenDebugMessage(2+KeyBase,1,FColor::Yellow,
			FString::Printf(
				TEXT(">>>>>>>FlowMoveScene<<<<<<<"
					"\n SceneType : %s \n MovementMode : %s \n SceneHeight : %.2f \n SceneRight : %.2f \n SceneForward : %.2f "
					"\n SceneAngle : %.2f \n SceneDirection : %.2f (%s)"
					"\n TargetActor : %s \n TargetPrimitive : %s "
					"\n PrepareLocation : %s \n PrepareLocation_Floor : %s \n PrepareLocation_Roof : %s "
					"\n TargetLocation : %s \n TargetLocation_Floor : %s \n TargetLocation_Roof : %s "
					"\n Location_Floor : %s \n Location_Roof : %s"
					"\n HeightFromGround : %f \n HeightFromRoof : %f \n Slope : %f"
					"\n >>>>>>>FlowMoveScene<<<<<<<"),
				*TaskState.FlowMoveScene.SceneType.ToString(),
				*(StaticEnum<EMovementMode>()->GetNameStringByIndex( ( int32 ) TaskState.FlowMoveScene.MovementMode)),
				TaskState.FlowMoveScene.SceneHeight,
				TaskState.FlowMoveScene.SceneRight,
				TaskState.FlowMoveScene.SceneForward,
				TaskState.FlowMoveScene.SceneAngle,
				TaskState.FlowMoveScene.SceneDirection,
				*(StaticEnum<EGBWFlowMoveDirectionType>()->GetNameStringByIndex( static_cast<int32>(TaskState.FlowMoveScene.SceneDirectionMark))),
				*(TaskState.FlowMoveScene.TargetActor? TaskState.FlowMoveScene.TargetActor->GetName() : FString("None")),
				*(TaskState.FlowMoveScene.TargetPrimitive.IsValid()? TaskState.FlowMoveScene.TargetPrimitive->GetName() : FString("None")),
				*TaskState.FlowMoveScene.PrepareLocation.ToString(),
				*TaskState.FlowMoveScene.PrepareLocation_Floor.ToString(),
				*TaskState.FlowMoveScene.PrepareLocation_Roof.ToString(),
				*TaskState.FlowMoveScene.TargetLocation.ToString(),
				*TaskState.FlowMoveScene.TargetLocation_Floor.ToString(),
				*TaskState.FlowMoveScene.TargetLocation_Roof.ToString(),
				*TaskState.FlowMoveScene.Location_Floor.ToString(),
				*TaskState.FlowMoveScene.Location_Roof.ToString(),
				TaskState.FlowMoveScene.HeightFromGround,
				TaskState.FlowMoveScene.HeightFromRoof,
				TaskState.FlowMoveScene.Slope
			));
		}
		
		int i = 1;
		if (FlowMoveSupplementaryScene)
		{
			FString SupplementaryFlowMoveSceneStr = "";
			for (auto SScene:TaskState.SupplementaryFlowMoveScene)
			{
				SupplementaryFlowMoveSceneStr = SupplementaryFlowMoveSceneStr + "\n"
					+ FString::Printf(
						TEXT(">>>>>>>FlowMoveSupplementaryScene<<<<<<<"
							"\n SupplementarySlot : %s \n SceneType : %s \n TargetActor : %s"
							"\n >>>>>>>FlowMoveSupplementaryScene<<<<<<<"),
							*SScene.SupplementarySlot,
							*SScene.Scene.SceneType.ToString(),
							*(SScene.Scene.TargetActor? SScene.Scene.TargetActor->GetName():FString("None")));
			}
			GEngine->AddOnScreenDebugMessage(2+i+KeyBase,1,FColor::Orange,SupplementaryFlowMoveSceneStr);
		}

		if (FlowMoveEvent)
		{
			FString FlowMoveEventSetStr = ">>>>>>>FlowMoveEvent<<<<<<<";
			for (auto Event:TaskState.FlowMoveEventSet)
			{
				FlowMoveEventSetStr = FlowMoveEventSetStr + "\n" + Event;
			}
			FlowMoveEventSetStr = FlowMoveEventSetStr + "\n" + ">>>>>>>FlowMoveEvent<<<<<<<";
			i++;
			GEngine->AddOnScreenDebugMessage(2+i+KeyBase,0,FColor::Purple,FlowMoveEventSetStr);
		}

		if (FlowMoveAttribute)
		{
			FString FlowMoveAttributeStr = ">>>>>>>FlowMoveAttribute<<<<<<<";
			for  (auto Attribute:TaskState.AttributeSet)
			{
				FlowMoveAttributeStr = FlowMoveAttributeStr + "\n" + Attribute.Name + " : " + FString::SanitizeFloat(Attribute.Value);
			}
			FlowMoveAttributeStr = FlowMoveAttributeStr + "\n" + ">>>>>>>FlowMoveAttribute<<<<<<<";
			i++;
			GEngine->AddOnScreenDebugMessage(2+i+KeyBase,0,FColor::Emerald,FlowMoveAttributeStr);
		}
		
		DrawDebugDirectionalArrow(
			TaskState.OwnerCharacter->GetWorld(),
			StartPoint,
			StartPoint + TaskState.OwnerCharacter->GetCapsuleComponent()->GetForwardVector() *100.0f,
			50.0f,
			FColor::Silver,
			false,
			0.0f,
			0,
			3.0f
		);
		DrawDebugDirectionalArrow(
			TaskState.OwnerCharacter->GetWorld(),
			StartPoint,
			StartPoint + TaskState.ControlVector *100.0f,
			50.0f,
			FColor::Blue,
			false,
			0.0f,
			0,
			3.0f
		);
		DrawDebugDirectionalArrow(
			TaskState.OwnerCharacter->GetWorld(),
			StartPoint,
			StartPoint + FVector(TaskState.ControlVector.X,TaskState.ControlVector.Y,0)*100.0f,
			50.0f,
			FColor::Red,
			false,
			0.0f,
			0,
			3.0f
		);
		DrawDebugDirectionalArrow(
			TaskState.OwnerCharacter->GetWorld(),
			StartPoint,
			StartPoint + FVector(TaskState.ControlVector.X,TaskState.ControlVector.Y,0).Rotation().RotateVector(TaskState.MoveVector)*100.0f,
			50.0f,
			FColor::Yellow,
			false,
			0.0f,
			0,
			3.0f
		);
		
		DrawDebugDirectionalArrow(
			TaskState.OwnerCharacter->GetWorld(),
			StartPoint,
			StartPoint + (UKismetMathLibrary::TransformDirection(TaskState.OwnerCharacter->GetTransform(),TaskState.PerceptionVector))*100.0f,
			50.0f,
			FColor::Green,
			false,
			0.0f,
			0,
			3.0f
		);

		DrawDebugSphere(
			TaskState.OwnerCharacter->GetWorld(),
			TaskState.FlowMoveScene.TargetLocation,
			20.0f,
			2,
			FColor::Purple,
			false,
			0.0f,
			0,
			3.0f
		);
		DrawDebugString(
			TaskState.OwnerCharacter->GetWorld(),
			TaskState.FlowMoveScene.TargetLocation+FVector(0,0,10.0f),
			FString::Printf(TEXT("TargetPoint")),
			nullptr,
			FColor::Purple,
			0.0f,
			true,
			1.2f
			);

		DrawDebugSphere(
					TaskState.OwnerCharacter->GetWorld(),
					TaskState.FlowMoveScene.PrepareLocation,
					20.0f,
					2,
					FColor::Purple,
					false,
					0.0f,
					0,
					3.0f
				);
		DrawDebugString(
			TaskState.OwnerCharacter->GetWorld(),
			TaskState.FlowMoveScene.PrepareLocation+FVector(0,0,10.0f),
			FString::Printf(TEXT("PrepareLocation")),
			nullptr,
			FColor::Purple,
			0.0f,
			true,
			1.2f
			);
		
		DrawDebugCapsule(
			TaskState.OwnerCharacter->GetWorld(),
			TaskState.OwnerCharacter->GetCapsuleComponent()->GetComponentLocation(),
			TaskState.OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),
			TaskState.OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleRadius(),
			TaskState.OwnerCharacter->GetCapsuleComponent()->GetComponentRotation().Quaternion(),
			FColor::Orange,
			false,
			0.0f,
			0,
			3.0f
		);
	}
}

void UGBWFlowMoveScript_AdjustCapsule::OnUpdate_Implementation(
	EFlowMoveNetworkLocationType NetworkLocation,
	const bool bIsLocalOwn,
	UGBWFlowMoveComponent* FlowMoveComponent)
{
	if (NetworkLocation == EFlowMoveNetworkLocationType::Server && FlowMoveComponent)
	{
		float TargetHeight_Current = FlowMoveComponent->CapsuleHalfHeightCache * 2.0f;
		float TargetHeight_Target = FlowMoveComponent->CapsuleHalfHeightCache * 2.0f;
		float TargetHeight_InAction = FlowMoveComponent->CapsuleHalfHeightCache * 2.0f;

		if (ByCurrentLocation.Type == Always
			|| (ByCurrentLocation.Type == DuringActionActive && ActionNameContains(FlowMoveComponent->TaskState.CurrentFlowMoveActionStr,ByCurrentLocation.Actions))
			|| (ByCurrentLocation.Type == DuringActionNotActive && !ActionNameContains(FlowMoveComponent->TaskState.CurrentFlowMoveActionStr,ByCurrentLocation.Actions)))
		{
			if (!FlowMoveComponent->TaskState.FlowMoveScene.Location_Floor.IsNearlyZero() && !FlowMoveComponent->TaskState.FlowMoveScene.Location_Roof.IsNearlyZero())
			{
				TargetHeight_Current = (FlowMoveComponent->TaskState.FlowMoveScene.Location_Roof - FlowMoveComponent->TaskState.FlowMoveScene.Location_Floor).Z * ByCurrentLocation.AdjustToValidSpaceFraction/100.0;
			}
		}

		if (ByTargetLocation.Type == Always
			|| (ByTargetLocation.Type == DuringActionActive && ActionNameContains(FlowMoveComponent->TaskState.CurrentFlowMoveActionStr,ByTargetLocation.Actions))
			|| (ByTargetLocation.Type == DuringActionNotActive && !ActionNameContains(FlowMoveComponent->TaskState.CurrentFlowMoveActionStr,ByTargetLocation.Actions)))
		{
			if (!FlowMoveComponent->TaskState.CurrentFlowMoveActionStr.IsEmpty()
				&& FlowMoveComponent->TaskState.CurrentFlowMoveAction.MoveController)
			{
				const FGBWFlowMoveState BeginFlowMoveState = FlowMoveComponent->TaskState.CurrentFlowMoveAction.MoveController->InitFlowMoveInfo.BeginFlowMoveState;

				if (!BeginFlowMoveState.FlowMoveScene.TargetLocation_Floor.IsNearlyZero() && !BeginFlowMoveState.FlowMoveScene.TargetLocation_Roof.IsNearlyZero())
				{
					TargetHeight_Target = (BeginFlowMoveState.FlowMoveScene.TargetLocation_Roof - BeginFlowMoveState.FlowMoveScene.TargetLocation_Floor).Z * ByTargetLocation.AdjustToValidSpaceFraction/100.0f;
				}
			}
		}

		for (auto Item:DuringActionAdjustTo)
		{
			if (FlowMoveComponent->TaskState.CurrentFlowMoveActionStr.Contains(Item.Key))
			{
				TargetHeight_InAction = Item.Value;
				break;
			}
		}
		
		float TargetHeight = FMath::Min(FMath::Min(TargetHeight_Current, TargetHeight_Target),TargetHeight_InAction);
		TargetHeight = FMath::Max(TargetHeight, MinHeightCanAdjustTo);
		if (TargetHeight >= FlowMoveComponent->CapsuleHalfHeightCache * 2.0f
			&& TargetHeight>FlowMoveComponent->TaskState.OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight()*2)
		{
			FlowMoveComponent->ResetCapsuleAndMesh();
		}
		else
		{
			FlowMoveComponent->SetCapsuleAndKeepMesh(TargetHeight);
		}
	}
}

bool UGBWFlowMoveScript_AdjustCapsule::ActionNameContains(const FString InActionName, TArray<FString> ActionNameStrings)
{
	for (auto Item:ActionNameStrings)
	{
		if (InActionName.Contains(Item))
		{
			return true;
		}
	}

	return false;
}
