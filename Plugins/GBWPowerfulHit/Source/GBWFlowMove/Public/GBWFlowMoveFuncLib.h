// Copyright GanBowen 2022-2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GBWFlowMoveObjects.h"
#include "GameFramework/Character.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollisionShape.h"
#include "CollisionQueryParams.h"
#include "GBWFlowMoveFuncLib.generated.h"

UCLASS()
class GBWFLOWMOVE_API UGBWFlowMoveFuncLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GBW|FlowMove")
	static bool GetSKMeshByTag(
		USkeletalMeshComponent*& SKMeshComp,
		const ACharacter* Character,
		FName MeshTag,
		TArray<FName> ExcludedMeshTag,
		const UAnimMontage* TargetMontage);

	UFUNCTION(BlueprintCallable, Category = "GBW|Net")
	static bool IsLocalOwn(AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "GBW|Net")
	static bool IsAIPlayer(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category="GBW|Anim")
	static float GetAnimCurveValue(UAnimMontage* Montage, FName CurveName, float Position = 0.0f, float DefaultValue=0.0f);

	static FHitResult SweepMulti(
		const UWorld* World,
		TArray<struct FHitResult>& OutHits,
		const FVector& Start,
		const FVector& End,
		const FQuat& Rot,
		FGBWFlowMoveTraceSetting TraceSetting,
		const FCollisionShape& CollisionShape,
		const FCollisionQueryParams& Params = FCollisionQueryParams::DefaultQueryParam);

	static bool OverlapAnyTest(
		const UWorld* World,
		const FVector& Pos,
		const FQuat& Rot,
		FGBWFlowMoveTraceSetting TraceSetting,
		const FCollisionShape& CollisionShape,
		const FCollisionQueryParams& Params = FCollisionQueryParams::DefaultQueryParam);

	static FHitResult LineTrace(
		const UWorld* World,
		TArray<struct FHitResult>& OutHits,
		const FVector& Start,
		const FVector& End,
		FGBWFlowMoveTraceSetting TraceSetting,
		const FCollisionQueryParams& Params = FCollisionQueryParams::DefaultQueryParam);

	static bool GetTheLastValidHitResult(TArray<FHitResult> HitResultArr, FHitResult& Result);
	static void FindFloorAndRoof(
		ACharacter* Character,
		FVector FromLocation,
		float FloorTraceDistance,
		float RoofTraceDistance,
		FGBWFlowMoveTraceSetting TraceSetting,
		bool& Floor,
		FHitResult& OutHit_Floor,
		bool& Roof,
		FHitResult& OutHit_Roof);

	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddBool(FGBWPerceptionResult PerceptionResult, FName Key, bool Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddFloat(FGBWPerceptionResult PerceptionResult, FName Key, float Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddVector(FGBWPerceptionResult PerceptionResult, FName Key, FVector Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddTransform(FGBWPerceptionResult PerceptionResult, FName Key, FTransform Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddString(FGBWPerceptionResult PerceptionResult, FName Key, FString Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddGameplayTag(FGBWPerceptionResult PerceptionResult, FName Key, FGameplayTag Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddActor(FGBWPerceptionResult PerceptionResult, FName Key, AActor* Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddObject(FGBWPerceptionResult PerceptionResult, FName Key, UObject* Value);
	UFUNCTION(BlueprintCallable, Category="GBW|FlowMove|Perception")
	static void AddMovementMode(FGBWPerceptionResult PerceptionResult, FName Key, EMovementMode Value);

	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetBool(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, bool& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetFloat(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, float& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetVector(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, FVector& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetTransform(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, FTransform& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetString(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, FString& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetGameplayTag(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, FGameplayTag& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetActor(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, AActor*& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetObject(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, UObject*& Value);
	UFUNCTION(BlueprintPure, Category="GBW|FlowMove|Perception")
	static void GetMovementMode(FGBWPerceptionResult PerceptionResult, FName Key, bool& IsGet, TEnumAsByte<EMovementMode>& Value);
	
	//Math - start
	UFUNCTION(BlueprintPure, Category = "GBW|FlowMove|Math")
	static FVector RadianToDirectionXY(float Radian);
	UFUNCTION(BlueprintPure, Category = "GBW|FlowMove|Math")
	static FVector AngleToDirectionXY(float Angle);
	UFUNCTION(BlueprintPure, Category = "GBW|FlowMove|Math")
	static float GetVelocityYawAngle(FVector Velocity);
	UFUNCTION(BlueprintPure, Category = "GBW|FlowMove|Math")
	static float GetInputYawAngle(FVector InputDirection);
	UFUNCTION(BlueprintPure, Category = "GBW|FlowMove|Math")
	static float GetPointToLineDistance(FVector LineStart, FVector LineEnd, FVector Point);
	//Math - end

	//Debug - start
	static void DrawDebugShape(
		const UObject* WorldContext,
		const FVector Location,
		const FQuat Rotation,
		const FCollisionShape CollisionShape,
		const FColor Color,
		float Duration = 0.0f,
		float Thickness = 1.0f);
	static void PrintDebugString(TArray<FString> DebugStrArr, FName Key = NAME_None,const FColor Color = FColor::Red, float Duration = 1.0f);
	static void PrintDebugStringNet(
		const AActor* WorldActor,
		TArray<FString> DebugStrArr, 
		FName Key = NAME_None,
		const FColor ServerColor = FColor::Red,
		const FColor ClientColor = FColor::Green,
		float Duration = 1.0f);
	//Debug - end
};
