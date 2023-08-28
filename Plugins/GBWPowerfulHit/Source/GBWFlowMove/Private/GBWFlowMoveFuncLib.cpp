// Copyright GanBowen 2022-2023. All Rights Reserved.


#include "GBWFlowMoveFuncLib.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "Animation/Skeleton.h"
#include "RMS/GBWRMSBPFuncLib.h"

bool UGBWFlowMoveFuncLib::GetSKMeshByTag(
	USkeletalMeshComponent*& SKMeshComp,
	const ACharacter* Character,
	FName MeshTag, 
	TArray<FName> ExcludedMeshTag,
	const UAnimMontage* TargetMontage)
{
	SKMeshComp = nullptr;
	if (Character && TargetMontage)
	{
		auto SKMeshes = Character->GetComponentsByTag(USkeletalMeshComponent::StaticClass(),MeshTag);
		if (SKMeshes.IsEmpty())
		{
			Character->GetComponents(USkeletalMeshComponent::StaticClass(),SKMeshes);
		}

		for (const auto SKMeshItem:SKMeshes)
		{
			bool bIsExcluded = false;
			for (const auto ETag:ExcludedMeshTag)
			{
				if (SKMeshItem->ComponentHasTag(ETag))
				{
					bIsExcluded = true;
					break;
				}
			}

			if (!bIsExcluded)
			{
				USkeletalMeshComponent* SKMC = Cast<USkeletalMeshComponent>(SKMeshItem);
				USkeletalMesh* SKMS = nullptr;
				if (SKMC)
				{
					SKMS = SKMC->GetSkeletalMeshAsset();
				}

				if (SKMS && SKMS->GetSkeleton() && TargetMontage->GetSkeleton())
				{
					if (SKMS->GetSkeleton()->IsCompatible(TargetMontage->GetSkeleton()))
					{
						SKMeshComp = SKMC;
						return  true;
					}
				}
			}
		}
	}
	
	return false;
}

bool UGBWFlowMoveFuncLib::IsLocalOwn(AActor* Actor)
{
	bool bRes;

	if (Actor)
	{
		const ENetRole LocalRole = Actor->GetLocalRole();
		const ENetRole RemoteRole = Actor->GetRemoteRole();

		if (LocalRole == ENetRole::ROLE_Authority)
		{
			if (RemoteRole != ENetRole::ROLE_AutonomousProxy)
			{
				bRes = true;
			}
			else
			{
				bRes = false;
			}
		}
		else
		{
			if (LocalRole == ENetRole::ROLE_AutonomousProxy)
			{
				bRes = true;
			}
			else
			{
				bRes = false;
			}
		}
	}
	else
	{
		bRes = false;
	}
	
	return bRes;
}

bool UGBWFlowMoveFuncLib::IsAIPlayer(AActor* Actor)
{
	bool bRes;

	if (Actor)
	{
		const ENetRole LocalRole = Actor->GetLocalRole();
		const ENetRole RemoteRole = Actor->GetRemoteRole();
		
		bRes = LocalRole == ENetRole::ROLE_Authority
		&& RemoteRole != ENetRole::ROLE_AutonomousProxy
		&& Actor != UGameplayStatics::GetPlayerCharacter(Actor, 0);
	}
	else
	{
		bRes = false;
	}
	
	return bRes;
}

float UGBWFlowMoveFuncLib::GetAnimCurveValue(UAnimMontage* Montage, FName CurveName, float Position, float DefaultValue)
{
	if (Montage)
	{
		for (auto item:Montage->GetCurveData().FloatCurves)
		{
			if (item.Name.DisplayName == CurveName)
			{
				return item.Evaluate(Position);
			}
		}
	}

	return DefaultValue;
}

FHitResult UGBWFlowMoveFuncLib::SweepMulti(
	const UWorld* World,
	TArray<FHitResult>& OutHits,
	const FVector& Start,
	const FVector& End,
	const FQuat& Rot,
	FGBWFlowMoveTraceSetting TraceSetting,
	const FCollisionShape& CollisionShape,
	const FCollisionQueryParams& Params)
{
	FHitResult Res = FHitResult();
	if (!World)
	{
		return Res;
	}

	if (TraceSetting.TraceObjectTypes.IsEmpty() && TraceSetting.TraceChannels.IsEmpty())
	{
		return Res;
	}
	
	TArray<FHitResult> ObjectTypeOutHits;
	FCollisionObjectQueryParams ObjectQueryParameters;
	for (const auto ObjectType : TraceSetting.TraceObjectTypes)
	{
		ObjectQueryParameters.AddObjectTypesToQuery(UCollisionProfile::Get()->ConvertToCollisionChannel(false, ObjectType));
	}
	World->SweepMultiByObjectType(
		ObjectTypeOutHits,
		Start,
		End,
		Rot,
		ObjectQueryParameters,
		CollisionShape,
		Params);
	
	TArray<FHitResult> ChannelOutHits;
	for (const auto Channel:TraceSetting.TraceChannels)
	{
		TArray<FHitResult> TempChannelOutHits;
        	World->SweepMultiByChannel(
        	TempChannelOutHits,
        	Start,
        	End,
        	Rot,
        	UEngineTypes::ConvertToCollisionChannel(Channel),
        	CollisionShape,
        	Params
        	);

		ChannelOutHits.Append(TempChannelOutHits);
	}

	TArray<AActor*> ResultOutHits;
	OutHits.Empty();
	for (auto Item:ObjectTypeOutHits)
	{
   		if (!ResultOutHits.Contains(Item.GetActor()))
		{
			OutHits.Add(Item);
			ResultOutHits.Add(Item.GetActor());
		}
	}
	for (auto Item:ChannelOutHits)
	{
		if (Item.IsValidBlockingHit() && !ResultOutHits.Contains(Item.GetActor()))
		{
			OutHits.Add(Item);
			ResultOutHits.Add(Item.GetActor());
		}
	}

	if (TraceSetting.isDebug && TraceSetting.DebugTime>=0)
	{
		if (TraceSetting.DrawTraceShape)
		{
			DrawDebugShape(World,Start,FQuat::Identity,CollisionShape,
            			!OutHits.IsEmpty()? FColor::Red : FColor::White,
            			TraceSetting.DebugTime,1);
			DrawDebugShape(World,End,FQuat::Identity,CollisionShape,
						!OutHits.IsEmpty()? FColor::Red : FColor::White,
						TraceSetting.DebugTime,1);
		}
		
		if (!OutHits.IsEmpty())
		{
			DrawDebugSphere(World,OutHits[0].ImpactPoint,5,1,
				FColor::Green,
				false,TraceSetting.DebugTime,0,10);
		}

		if (TraceSetting.DrawTraceLine)
		{
			DrawDebugLine(World, Start, End,
			              !OutHits.IsEmpty()? FColor::Red : FColor::White,
			              false,TraceSetting.DebugTime,0,1);
		}
	}

	if (!OutHits.IsEmpty())
	{
		Res = OutHits[0];
	}
	else
	{
		Res.TraceStart = Start;
		Res.TraceEnd = End;
	}
	for (auto Hit:OutHits)
	{
		if (Hit.IsValidBlockingHit())
		{
			Res = Hit;
			break;
		}
	}
	
	if (Res.GetActor() && !TraceSetting.IsMetScreeningConditions(Res.GetActor()))
	{
		Res = FHitResult();
	}
	
	return Res;
}

bool UGBWFlowMoveFuncLib::OverlapAnyTest(
	const UWorld* World,
	const FVector& Pos,
	const FQuat& Rot,
	FGBWFlowMoveTraceSetting TraceSetting,
	const FCollisionShape& CollisionShape,
	const FCollisionQueryParams& Params)
{
	if (!World)
	{
		return false;
	}

	if (TraceSetting.TraceObjectTypes.IsEmpty() && TraceSetting.TraceChannels.IsEmpty())
	{
		return false;
	}
	
	FCollisionObjectQueryParams ObjectQueryParameters;
	for (const auto ObjectType : TraceSetting.TraceObjectTypes)
	{
		ObjectQueryParameters.AddObjectTypesToQuery(UCollisionProfile::Get()->ConvertToCollisionChannel(false, ObjectType));
	}
	if (World->OverlapAnyTestByObjectType(
		Pos,
		Rot,
		ObjectQueryParameters,
		CollisionShape,
		Params))
	{
		return true;
	}

	for (auto Item:TraceSetting.TraceChannels)
	{
		if (World->OverlapAnyTestByChannel(
			Pos,
			Rot,
			UEngineTypes::ConvertToCollisionChannel(Item),
			CollisionShape,
			Params
		))
		{
			return true;
		}
	}

	return false;
}

FHitResult UGBWFlowMoveFuncLib::LineTrace(
		const UWorld* World,
		TArray<struct FHitResult>& OutHits,
		const FVector& Start,
		const FVector& End,
		FGBWFlowMoveTraceSetting TraceSetting,
		const FCollisionQueryParams& Params)
{
	FHitResult Res = FHitResult();
	if (!World)
	{
		return Res;
	}

	if (TraceSetting.TraceObjectTypes.IsEmpty() && TraceSetting.TraceChannels.IsEmpty())
	{
		return Res;
	}

	TArray<FHitResult> ObjectTypeOutHits;
	FCollisionObjectQueryParams ObjectQueryParameters;
	for (const auto ObjectType : TraceSetting.TraceObjectTypes)
	{
		ObjectQueryParameters.AddObjectTypesToQuery(UCollisionProfile::Get()->ConvertToCollisionChannel(false, ObjectType));
	}
	World->LineTraceMultiByObjectType(
		ObjectTypeOutHits,
		Start,
		End,
		ObjectQueryParameters,
		Params
	);
	
	TArray<FHitResult> ChannelOutHits;
	for (const auto Channel:TraceSetting.TraceChannels)
	{
		TArray<FHitResult> TempChannelOutHits;
		World->LineTraceMultiByChannel(
		ChannelOutHits,
		Start,
		End,
		UEngineTypes::ConvertToCollisionChannel(Channel),
		Params
		);

		ChannelOutHits.Append(TempChannelOutHits);
	}

	TArray<AActor*> ResultOutHits;
	OutHits.Empty();
	for (auto Item:ObjectTypeOutHits)
	{
		if (!ResultOutHits.Contains(Item.GetActor()))
		{
			OutHits.Add(Item);
			ResultOutHits.Add(Item.GetActor());
		}
	}
	for (auto Item:ChannelOutHits)
	{
		if (Item.IsValidBlockingHit() && !ResultOutHits.Contains(Item.GetActor()))
		{
			OutHits.Add(Item);
			ResultOutHits.Add(Item.GetActor());
		}
	}

	if (!OutHits.IsEmpty())
	{
		Res = OutHits[0];
	}
	else
	{
		Res.TraceStart = Start;
		Res.TraceEnd = End;
	}
	for (auto Hit:OutHits)
	{
		if (Hit.IsValidBlockingHit())
		{
			Res = Hit;
			break;
		}
	}

	if (!TraceSetting.IsMetScreeningConditions(Res.GetActor()))
	{
		Res = FHitResult();
	}

	if (TraceSetting.isDebug && TraceSetting.DebugTime>=0)
	{
		DrawDebugLine(World,Start,End,FColor::Orange,false,TraceSetting.DebugTime,0,2);
		if (!OutHits.IsEmpty())
		{
			DrawDebugSphere(World,OutHits[0].ImpactPoint,5,3,FColor::Green,false,TraceSetting.DebugTime,0,10);
		}
	}
	
	return Res;
}

bool UGBWFlowMoveFuncLib::GetTheLastValidHitResult(TArray<FHitResult> HitResultArr, FHitResult& Result)
{
	for (int i=HitResultArr.Num()-1; i>=0; i--)
	{
		if (HitResultArr[i].IsValidBlockingHit())
		{
			Result = HitResultArr[i];
			return true;
		}
	}
	return false;
}

void UGBWFlowMoveFuncLib::FindFloorAndRoof(ACharacter* Character, FVector FromLocation, float FloorTraceDistance,
	float RoofTraceDistance, FGBWFlowMoveTraceSetting TraceSetting, bool& Floor, FHitResult& OutHit_Floor, bool& Roof,
	FHitResult& OutHit_Roof)
{
	Floor = false;
	Roof = false;
	OutHit_Floor = FHitResult();
	OutHit_Roof = FHitResult();
	if (Character)
	{
		FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
		CollisionQueryParams.bTraceComplex = false;
		CollisionQueryParams.AddIgnoredActor(Character);

		FHitResult TraceHit;
		static const FName ForwardTraceTag{FString::Format(TEXT("{0} (Trace)"), {ANSI_TO_TCHAR(__FUNCTION__)})};
		CollisionQueryParams.TraceTag = ForwardTraceTag;
		TArray<struct FHitResult> TraceHitArr;
		TraceHit = SweepMulti(
			Character->GetWorld(),
			TraceHitArr,
			FromLocation,
			FromLocation - FVector(0,0, FloorTraceDistance),
			FQuat::Identity,
			TraceSetting,
			FCollisionShape::MakeSphere(Character->GetCapsuleComponent()->GetScaledCapsuleRadius()),
			CollisionQueryParams
		);
		if (TraceHit.IsValidBlockingHit())
		{
			Floor = true;
			OutHit_Floor = TraceHit;
		}
		else
		{
			Floor = false;
		}

		TraceHitArr.Empty();
		TraceHit = SweepMulti(
			Character->GetWorld(),
			TraceHitArr,
			FromLocation,
			FromLocation + FVector(0,0, FloorTraceDistance),
			FQuat::Identity,
			TraceSetting,
			FCollisionShape::MakeSphere(Character->GetCapsuleComponent()->GetScaledCapsuleRadius()),
			CollisionQueryParams
		);
		if (TraceHit.IsValidBlockingHit())
		{
			Roof = true;
			OutHit_Roof = TraceHit;
		}
		else
		{
			Roof = false;
		}
	}
}

void UGBWFlowMoveFuncLib::AddBool(FGBWPerceptionResult PerceptionResult, FName Key, bool Value)
{
	PerceptionResult.AddBool(Key,Value);
}

void UGBWFlowMoveFuncLib::AddFloat(FGBWPerceptionResult PerceptionResult, FName Key, float Value)
{
	PerceptionResult.AddFloat(Key,Value);
}

void UGBWFlowMoveFuncLib::AddVector(FGBWPerceptionResult PerceptionResult, FName Key, FVector Value)
{
	PerceptionResult.AddVector(Key,Value);
}

void UGBWFlowMoveFuncLib::AddTransform(FGBWPerceptionResult PerceptionResult, FName Key, FTransform Value)
{
	PerceptionResult.AddTransform(Key,Value);
}

void UGBWFlowMoveFuncLib::AddString(FGBWPerceptionResult PerceptionResult, FName Key, FString Value)
{
	PerceptionResult.AddString(Key,Value);
}

void UGBWFlowMoveFuncLib::AddGameplayTag(FGBWPerceptionResult PerceptionResult, FName Key, FGameplayTag Value)
{
	PerceptionResult.AddGameplayTag(Key,Value);
}

void UGBWFlowMoveFuncLib::AddActor(FGBWPerceptionResult PerceptionResult, FName Key, AActor* Value)
{
	PerceptionResult.AddActor(Key,Value);
}

void UGBWFlowMoveFuncLib::AddObject(FGBWPerceptionResult PerceptionResult, FName Key, UObject* Value)
{
	PerceptionResult.AddObject(Key,Value);
}

void UGBWFlowMoveFuncLib::AddMovementMode(FGBWPerceptionResult PerceptionResult, FName Key, EMovementMode Value)
{
	PerceptionResult.AddMovementMode(Key,Value);
}

void UGBWFlowMoveFuncLib::GetBool(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, bool& Value)
{
	PerceptionResult.GetBool(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetFloat(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, float& Value)
{
	PerceptionResult.GetFloat(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetVector(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, FVector& Value)
{
	PerceptionResult.GetVector(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetTransform(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet,
	FTransform& Value)
{
	PerceptionResult.GetTransform(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetString(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, FString& Value)
{
	PerceptionResult.GetString(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetGameplayTag(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet,
	FGameplayTag& Value)
{
	PerceptionResult.GetGameplayTag(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetActor(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, AActor*& Value)
{
	PerceptionResult.GetActor(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetObject(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, UObject*& Value)
{
	PerceptionResult.GetObject(Key,IsGet,Value);
}

void UGBWFlowMoveFuncLib::GetMovementMode(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet,
	TEnumAsByte<EMovementMode>& Value)
{
	PerceptionResult.GetMovementMode(Key,IsGet,Value);
}

FVector UGBWFlowMoveFuncLib::RadianToDirectionXY(float Radian)
{
	float Sin, Cos;
	FMath::SinCos(&Sin, &Cos, Radian);

	return {Cos, Sin, 0.0f};
}

FVector UGBWFlowMoveFuncLib::AngleToDirectionXY(float Angle)
{
	return RadianToDirectionXY(FMath::DegreesToRadians(Angle));
}

float UGBWFlowMoveFuncLib::GetVelocityYawAngle(FVector Velocity)
{
	return UE_REAL_TO_FLOAT(FMath::RadiansToDegrees(FMath::Atan2(Velocity.Y, Velocity.X)));
}

float UGBWFlowMoveFuncLib::GetInputYawAngle(FVector InputDirection)
{
	const FVector_NetQuantizeNormal TheInputDirection = InputDirection.GetSafeNormal();
	return UE_REAL_TO_FLOAT(FMath::RadiansToDegrees(FMath::Atan2(TheInputDirection.Y, TheInputDirection.X)));
}

float UGBWFlowMoveFuncLib::GetPointToLineDistance(const FVector LineStart, const FVector LineEnd, const FVector Point)
{
	const float A = (LineStart - LineEnd).Length();
	const float B = (LineStart - Point).Length();
	const float C = (LineEnd - Point).Length();

	return FMath::Sqrt((A+B+C)*(A+B-C)*(A+C-B)*(B+C-A))/2/A;
}

void UGBWFlowMoveFuncLib::DrawDebugShape(
	const UObject* WorldContext,
	const FVector Location,
	const FQuat Rotation,
	const FCollisionShape CollisionShape,
	const FColor Color,
	float Duration, 
	float Thickness)
{
	if (CollisionShape.IsBox())
	{
		DrawDebugBox(
			WorldContext->GetWorld(),
			Location,
			CollisionShape.GetExtent(),
			Color,
			false,
			Duration,
			0,
			Thickness
		);
	}

	if (CollisionShape.IsCapsule())
	{
		DrawDebugCapsule(
			WorldContext->GetWorld(),
			Location,
			CollisionShape.GetCapsuleHalfHeight(),
			CollisionShape.GetCapsuleRadius(),
			Rotation,
			Color,
			false,
			Duration,
			0,
			Thickness
		);
	}

	if (CollisionShape.IsSphere())
	{
		DrawDebugSphere(
			WorldContext->GetWorld(),
			Location,
			CollisionShape.GetSphereRadius(),
			3,
			Color,
			false,
			Duration,
			0,
			Thickness
		);
	}
}

void UGBWFlowMoveFuncLib::PrintDebugString(TArray<FString> DebugStrArr, const FName Key, const FColor Color, const float Duration)
{
	uint8 Index = 0;
	for (auto S:DebugStrArr)
	{
		Index++;
		uint64 InnerKey = -1;
		if (Key != NAME_None)
		{
			InnerKey = GetTypeHash(FName(Key.ToString().Append(FString::SanitizeFloat(Index))));
		}
		GEngine->AddOnScreenDebugMessage(
			InnerKey,Duration,Color,S
		);
	}
}

void UGBWFlowMoveFuncLib::PrintDebugStringNet(
	const AActor* WorldActor, TArray<FString> DebugStrArr, FName Key,
	const FColor ServerColor, const FColor ClientColor, float Duration)
{
	if (!WorldActor)
	{
		return;
	}
	const bool bIsServer = WorldActor->HasAuthority();

	PrintDebugString(DebugStrArr,
	FName(Key.IsValid()?
	(bIsServer? Key.ToString().Append("_Server") : Key.ToString().Append("_Client"))
	: (bIsServer? FString("_Server") : FString("_Client"))),
		bIsServer? ServerColor : ClientColor,
		Duration
		);
}
