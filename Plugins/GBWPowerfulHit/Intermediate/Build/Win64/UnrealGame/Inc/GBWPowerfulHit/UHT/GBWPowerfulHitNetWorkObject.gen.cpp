// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPowerfulHitNetWorkObject.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPowerfulHitNetWorkObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_AGBWPH_HitTrace_Base();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_AGBWPH_HitTrace_Base_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBW_HitBoxComponent_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_AdditionalItem();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_AdditionalItem_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_ConditionGeneration();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_ConditionGeneration_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_Feature_Base();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_Feature_Base_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_FeatureConfig_Base();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_FeatureConfig_Base_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_HitTraceConfig_Base();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_Script_Base();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPH_Script_Base_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister();
	GBWPOWERFULHIT_API UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType();
	GBWPOWERFULHIT_API UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode();
	GBWPOWERFULHIT_API UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType();
	GBWPOWERFULHIT_API UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType();
	GBWPOWERFULHIT_API UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType();
	GBWPOWERFULHIT_API UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_HitTraceResult();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHAttachSettings();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHConditionSet();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHScriptSet();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHTextTagSettings();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGBWPHTargetType;
	static UEnum* EGBWPHTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGBWPHTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGBWPHTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("EGBWPHTargetType"));
		}
		return Z_Registration_Info_UEnum_EGBWPHTargetType.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UEnum* StaticEnum<EGBWPHTargetType>()
	{
		return EGBWPHTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::Enumerators[] = {
		{ "EGBWPHTargetType::Self", (int64)EGBWPHTargetType::Self },
		{ "EGBWPHTargetType::Opponent", (int64)EGBWPHTargetType::Opponent },
		{ "EGBWPHTargetType::Both", (int64)EGBWPHTargetType::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.DisplayName", "Both" },
		{ "Both.Name", "EGBWPHTargetType::Both" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
		{ "Opponent.DisplayName", "Opponent" },
		{ "Opponent.Name", "EGBWPHTargetType::Opponent" },
		{ "Self.DisplayName", "Self" },
		{ "Self.Name", "EGBWPHTargetType::Self" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		"EGBWPHTargetType",
		"EGBWPHTargetType",
		Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType()
	{
		if (!Z_Registration_Info_UEnum_EGBWPHTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGBWPHTargetType.InnerSingleton, Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGBWPHTargetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGBWTrailWidthMode;
	static UEnum* EGBWTrailWidthMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGBWTrailWidthMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGBWTrailWidthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("EGBWTrailWidthMode"));
		}
		return Z_Registration_Info_UEnum_EGBWTrailWidthMode.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UEnum* StaticEnum<EGBWTrailWidthMode>()
	{
		return EGBWTrailWidthMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::Enumerators[] = {
		{ "EGBWTrailWidthMode::FromCentre", (int64)EGBWTrailWidthMode::FromCentre },
		{ "EGBWTrailWidthMode::FromFirst", (int64)EGBWTrailWidthMode::FromFirst },
		{ "EGBWTrailWidthMode::FromSecond", (int64)EGBWTrailWidthMode::FromSecond },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FromCentre.DisplayName", "From Centre" },
		{ "FromCentre.Name", "EGBWTrailWidthMode::FromCentre" },
		{ "FromFirst.DisplayName", "From First Socket" },
		{ "FromFirst.Name", "EGBWTrailWidthMode::FromFirst" },
		{ "FromSecond.DisplayName", "From Second Socket" },
		{ "FromSecond.Name", "EGBWTrailWidthMode::FromSecond" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		"EGBWTrailWidthMode",
		"EGBWTrailWidthMode",
		Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode()
	{
		if (!Z_Registration_Info_UEnum_EGBWTrailWidthMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGBWTrailWidthMode.InnerSingleton, Z_Construct_UEnum_GBWPowerfulHit_EGBWTrailWidthMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGBWTrailWidthMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGBWMoveType;
	static UEnum* EGBWMoveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGBWMoveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGBWMoveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("EGBWMoveType"));
		}
		return Z_Registration_Info_UEnum_EGBWMoveType.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UEnum* StaticEnum<EGBWMoveType>()
	{
		return EGBWMoveType_StaticEnum();
	}
	struct Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::Enumerators[] = {
		{ "EGBWMoveType::AwayFromOpponent", (int64)EGBWMoveType::AwayFromOpponent },
		{ "EGBWMoveType::CloseToOppnent", (int64)EGBWMoveType::CloseToOppnent },
		{ "EGBWMoveType::UP", (int64)EGBWMoveType::UP },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::Enum_MetaDataParams[] = {
		{ "AwayFromOpponent.DisplayName", "AwayFromOpponent" },
		{ "AwayFromOpponent.Name", "EGBWMoveType::AwayFromOpponent" },
		{ "BlueprintType", "true" },
		{ "CloseToOppnent.DisplayName", "CloseToOppnent" },
		{ "CloseToOppnent.Name", "EGBWMoveType::CloseToOppnent" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
		{ "UP.DisplayName", "UP" },
		{ "UP.Name", "EGBWMoveType::UP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		"EGBWMoveType",
		"EGBWMoveType",
		Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType()
	{
		if (!Z_Registration_Info_UEnum_EGBWMoveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGBWMoveType.InnerSingleton, Z_Construct_UEnum_GBWPowerfulHit_EGBWMoveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGBWMoveType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGBWApplyType;
	static UEnum* EGBWApplyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGBWApplyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGBWApplyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("EGBWApplyType"));
		}
		return Z_Registration_Info_UEnum_EGBWApplyType.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UEnum* StaticEnum<EGBWApplyType>()
	{
		return EGBWApplyType_StaticEnum();
	}
	struct Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::Enumerators[] = {
		{ "EGBWApplyType::Overlap", (int64)EGBWApplyType::Overlap },
		{ "EGBWApplyType::Accrual", (int64)EGBWApplyType::Accrual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::Enum_MetaDataParams[] = {
		{ "Accrual.DisplayName", "Accrual" },
		{ "Accrual.Name", "EGBWApplyType::Accrual" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
		{ "Overlap.DisplayName", "Overlap" },
		{ "Overlap.Name", "EGBWApplyType::Overlap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		"EGBWApplyType",
		"EGBWApplyType",
		Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType()
	{
		if (!Z_Registration_Info_UEnum_EGBWApplyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGBWApplyType.InnerSingleton, Z_Construct_UEnum_GBWPowerfulHit_EGBWApplyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGBWApplyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode;
	static UEnum* EGBWConditionSetEvaluationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("EGBWConditionSetEvaluationMode"));
		}
		return Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UEnum* StaticEnum<EGBWConditionSetEvaluationMode>()
	{
		return EGBWConditionSetEvaluationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::Enumerators[] = {
		{ "EGBWConditionSetEvaluationMode::AllMatch", (int64)EGBWConditionSetEvaluationMode::AllMatch },
		{ "EGBWConditionSetEvaluationMode::AnyMatch", (int64)EGBWConditionSetEvaluationMode::AnyMatch },
		{ "EGBWConditionSetEvaluationMode::AllNotMatch", (int64)EGBWConditionSetEvaluationMode::AllNotMatch },
		{ "EGBWConditionSetEvaluationMode::AnyNotMatch", (int64)EGBWConditionSetEvaluationMode::AnyNotMatch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::Enum_MetaDataParams[] = {
		{ "AllMatch.DisplayName", "AllMatch" },
		{ "AllMatch.Name", "EGBWConditionSetEvaluationMode::AllMatch" },
		{ "AllNotMatch.DisplayName", "AllNotMatch" },
		{ "AllNotMatch.Name", "EGBWConditionSetEvaluationMode::AllNotMatch" },
		{ "AnyMatch.DisplayName", "AnyMatch" },
		{ "AnyMatch.Name", "EGBWConditionSetEvaluationMode::AnyMatch" },
		{ "AnyNotMatch.DisplayName", "AnyNotMatch" },
		{ "AnyNotMatch.Name", "EGBWConditionSetEvaluationMode::AnyNotMatch" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		"EGBWConditionSetEvaluationMode",
		"EGBWConditionSetEvaluationMode",
		Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode()
	{
		if (!Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode.InnerSingleton, Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHConditionSet;
class UScriptStruct* FGBWPHConditionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHConditionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHConditionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHConditionSet, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHConditionSet"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHConditionSet.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHConditionSet>()
{
	return FGBWPHConditionSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionSet_ValueProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConditionSet_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConditionSet_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionSet_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ConditionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "PH_ConditionSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHConditionSet>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_EvaluationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_EvaluationMode_MetaData[] = {
		{ "Category", "ConditionSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_EvaluationMode = { "EvaluationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHConditionSet, EvaluationMode), Z_Construct_UEnum_GBWPowerfulHit_EGBWConditionSetEvaluationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_EvaluationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_EvaluationMode_MetaData)) }; // 465725205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_ValueProp_MetaData[] = {
		{ "Category", "ConditionSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
		{ "MustImplement", "GBWPHInterface_Condition" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_ValueProp = { "ConditionSet", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UGBWPH_ConditionGeneration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_ValueProp_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_Key_KeyProp = { "ConditionSet_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_MetaData[] = {
		{ "Category", "ConditionSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
		{ "MustImplement", "GBWPHInterface_Condition" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet = { "ConditionSet", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHConditionSet, ConditionSet), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_EvaluationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_EvaluationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewProp_ConditionSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHConditionSet",
		sizeof(FGBWPHConditionSet),
		alignof(FGBWPHConditionSet),
		Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHConditionSet()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHConditionSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHConditionSet.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHConditionSet.InnerSingleton;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitNetWorkObject::execGetWorldContextObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetWorldContextObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitNetWorkObject::execSetWorldContext)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldContext(Z_Param_NewWorldContext);
		P_NATIVE_END;
	}
	void UGBWPowerfulHitNetWorkObject::StaticRegisterNativesUGBWPowerfulHitNetWorkObject()
	{
		UClass* Class = UGBWPowerfulHitNetWorkObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorldContextObject", &UGBWPowerfulHitNetWorkObject::execGetWorldContextObject },
			{ "SetWorldContext", &UGBWPowerfulHitNetWorkObject::execSetWorldContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics
	{
		struct GBWPowerfulHitNetWorkObject_eventGetWorldContextObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitNetWorkObject_eventGetWorldContextObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldContext" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject, nullptr, "GetWorldContextObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::GBWPowerfulHitNetWorkObject_eventGetWorldContextObject_Parms), Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics
	{
		struct GBWPowerfulHitNetWorkObject_eventSetWorldContext_Parms
		{
			UObject* NewWorldContext;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWorldContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::NewProp_NewWorldContext = { "NewWorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitNetWorkObject_eventSetWorldContext_Parms, NewWorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::NewProp_NewWorldContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldContext" },
		{ "Comment", "// Allows the Object to use BP_Functions\n" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
		{ "ToolTip", "Allows the Object to use BP_Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject, nullptr, "SetWorldContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::GBWPowerfulHitNetWorkObject_eventSetWorldContext_Parms), Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPowerfulHitNetWorkObject);
	UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister()
	{
		return UGBWPowerfulHitNetWorkObject::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_GetWorldContextObject, "GetWorldContextObject" }, // 3483842058
		{ &Z_Construct_UFunction_UGBWPowerfulHitNetWorkObject_SetWorldContext, "SetWorldContext" }, // 239280336
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBW_PowerfulHitNetWorkObject" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPowerfulHitNetWorkObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::ClassParams = {
		&UGBWPowerfulHitNetWorkObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject()
	{
		if (!Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject.OuterSingleton, Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPowerfulHitNetWorkObject>()
	{
		return UGBWPowerfulHitNetWorkObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPowerfulHitNetWorkObject);
	UGBWPowerfulHitNetWorkObject::~UGBWPowerfulHitNetWorkObject() {}
	DEFINE_FUNCTION(UGBWPH_ConditionGeneration::execGetConditionGenerationResult)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetConditionGenerationResult(Z_Param_SelfActor,Z_Param_OpponentActor,Z_Param_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_ConditionGeneration::execGBW_GetConditionGenerationResult)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GBW_GetConditionGenerationResult_Implementation(Z_Param_SelfActor,Z_Param_OpponentActor,Z_Param_HitResult);
		P_NATIVE_END;
	}
	struct GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms
	{
		AActor* SelfActor;
		AActor* OpponentActor;
		FHitResult HitResult;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult = FName(TEXT("GBW_GetConditionGenerationResult"));
	bool UGBWPH_ConditionGeneration::GBW_GetConditionGenerationResult(AActor* SelfActor, AActor* OpponentActor, const FHitResult HitResult) const
	{
		GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms Parms;
		Parms.SelfActor=SelfActor;
		Parms.OpponentActor=OpponentActor;
		Parms.HitResult=HitResult;
		const_cast<UGBWPH_ConditionGeneration*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGBWPH_ConditionGeneration::StaticRegisterNativesUGBWPH_ConditionGeneration()
	{
		UClass* Class = UGBWPH_ConditionGeneration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GBW_GetConditionGenerationResult", &UGBWPH_ConditionGeneration::execGBW_GetConditionGenerationResult },
			{ "GetConditionGenerationResult", &UGBWPH_ConditionGeneration::execGetConditionGenerationResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	void Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms), &Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Condition" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_ConditionGeneration, nullptr, "GBW_GetConditionGenerationResult", nullptr, nullptr, sizeof(GBWPH_ConditionGeneration_eventGBW_GetConditionGenerationResult_Parms), Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics
	{
		struct GBWPH_ConditionGeneration_eventGetConditionGenerationResult_Parms
		{
			AActor* SelfActor;
			AActor* OpponentActor;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_ConditionGeneration_eventGetConditionGenerationResult_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_ConditionGeneration_eventGetConditionGenerationResult_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_ConditionGeneration_eventGetConditionGenerationResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	void Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_ConditionGeneration_eventGetConditionGenerationResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_ConditionGeneration_eventGetConditionGenerationResult_Parms), &Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Condition" },
		{ "DisplayName", "GetConditionResult" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_ConditionGeneration, nullptr, "GetConditionGenerationResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::GBWPH_ConditionGeneration_eventGetConditionGenerationResult_Parms), Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPH_ConditionGeneration);
	UClass* Z_Construct_UClass_UGBWPH_ConditionGeneration_NoRegister()
	{
		return UGBWPH_ConditionGeneration::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPH_ConditionGeneration_GBW_GetConditionGenerationResult, "GBW_GetConditionGenerationResult" }, // 3642057581
		{ &Z_Construct_UFunction_UGBWPH_ConditionGeneration_GetConditionGenerationResult, "GetConditionGenerationResult" }, // 263801913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_ConditionGeneration_Base" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPH_ConditionGeneration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::ClassParams = {
		&UGBWPH_ConditionGeneration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPH_ConditionGeneration()
	{
		if (!Z_Registration_Info_UClass_UGBWPH_ConditionGeneration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPH_ConditionGeneration.OuterSingleton, Z_Construct_UClass_UGBWPH_ConditionGeneration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPH_ConditionGeneration.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPH_ConditionGeneration>()
	{
		return UGBWPH_ConditionGeneration::StaticClass();
	}
	UGBWPH_ConditionGeneration::UGBWPH_ConditionGeneration() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPH_ConditionGeneration);
	UGBWPH_ConditionGeneration::~UGBWPH_ConditionGeneration() {}
	DEFINE_FUNCTION(UGBWPH_FeatureConfig_Base::execExecuteFeature)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_OBJECT(UGBWPH_Feature_Base,Z_Param_ExtantPHFExecutor);
		P_GET_OBJECT_REF(UGBWPH_Feature_Base,Z_Param_Out_PHFExecutor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteFeature(Z_Param_OwnerActor,Z_Param_SelfActor,Z_Param_OpponentActor,Z_Param_HitResult,Z_Param_ExtantPHFExecutor,Z_Param_Out_PHFExecutor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_FeatureConfig_Base::execGBW_ExecuteFeature)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_OBJECT(UGBWPH_Feature_Base,Z_Param_ExtantPHFExecutor);
		P_GET_OBJECT_REF(UGBWPH_Feature_Base,Z_Param_Out_PHFExecutor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GBW_ExecuteFeature_Implementation(Z_Param_OwnerActor,Z_Param_SelfActor,Z_Param_OpponentActor,Z_Param_HitResult,Z_Param_ExtantPHFExecutor,Z_Param_Out_PHFExecutor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_FeatureConfig_Base::execGetSingletonMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSingletonMode();
		P_NATIVE_END;
	}
	struct GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms
	{
		AActor* OwnerActor;
		AActor* SelfActor;
		AActor* OpponentActor;
		FHitResult HitResult;
		UGBWPH_Feature_Base* ExtantPHFExecutor;
		UGBWPH_Feature_Base* PHFExecutor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature = FName(TEXT("GBW_ExecuteFeature"));
	bool UGBWPH_FeatureConfig_Base::GBW_ExecuteFeature(AActor* OwnerActor, AActor* SelfActor, AActor* OpponentActor, FHitResult HitResult, UGBWPH_Feature_Base* ExtantPHFExecutor, UGBWPH_Feature_Base*& PHFExecutor)
	{
		GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.SelfActor=SelfActor;
		Parms.OpponentActor=OpponentActor;
		Parms.HitResult=HitResult;
		Parms.ExtantPHFExecutor=ExtantPHFExecutor;
		Parms.PHFExecutor=PHFExecutor;
		ProcessEvent(FindFunctionChecked(NAME_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature),&Parms);
		PHFExecutor=Parms.PHFExecutor;
		return !!Parms.ReturnValue;
	}
	void UGBWPH_FeatureConfig_Base::StaticRegisterNativesUGBWPH_FeatureConfig_Base()
	{
		UClass* Class = UGBWPH_FeatureConfig_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteFeature", &UGBWPH_FeatureConfig_Base::execExecuteFeature },
			{ "GBW_ExecuteFeature", &UGBWPH_FeatureConfig_Base::execGBW_ExecuteFeature },
			{ "GetSingletonMode", &UGBWPH_FeatureConfig_Base::execGetSingletonMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics
	{
		struct GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms
		{
			AActor* OwnerActor;
			AActor* SelfActor;
			AActor* OpponentActor;
			FHitResult HitResult;
			UGBWPH_Feature_Base* ExtantPHFExecutor;
			UGBWPH_Feature_Base* PHFExecutor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtantPHFExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtantPHFExecutor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PHFExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PHFExecutor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor = { "ExtantPHFExecutor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms, ExtantPHFExecutor), Z_Construct_UClass_UGBWPH_Feature_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_PHFExecutor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_PHFExecutor = { "PHFExecutor", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms, PHFExecutor), Z_Construct_UClass_UGBWPH_Feature_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_PHFExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_PHFExecutor_MetaData)) };
	void Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms), &Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_PHFExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Feature" },
		{ "DisplayName", "ExecuteFeature" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_FeatureConfig_Base, nullptr, "ExecuteFeature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::GBWPH_FeatureConfig_Base_eventExecuteFeature_Parms), Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtantPHFExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtantPHFExecutor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PHFExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PHFExecutor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor = { "ExtantPHFExecutor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms, ExtantPHFExecutor), Z_Construct_UClass_UGBWPH_Feature_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_PHFExecutor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_PHFExecutor = { "PHFExecutor", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms, PHFExecutor), Z_Construct_UClass_UGBWPH_Feature_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_PHFExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_PHFExecutor_MetaData)) };
	void Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms), &Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ExtantPHFExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_PHFExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Feature" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_FeatureConfig_Base, nullptr, "GBW_ExecuteFeature", nullptr, nullptr, sizeof(GBWPH_FeatureConfig_Base_eventGBW_ExecuteFeature_Parms), Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics
	{
		struct GBWPH_FeatureConfig_Base_eventGetSingletonMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_FeatureConfig_Base_eventGetSingletonMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_FeatureConfig_Base_eventGetSingletonMode_Parms), &Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Feature" },
		{ "DisplayName", "IsSingletonMode" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_FeatureConfig_Base, nullptr, "GetSingletonMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::GBWPH_FeatureConfig_Base_eventGetSingletonMode_Parms), Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPH_FeatureConfig_Base);
	UClass* Z_Construct_UClass_UGBWPH_FeatureConfig_Base_NoRegister()
	{
		return UGBWPH_FeatureConfig_Base::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetActor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSingletonMode_MetaData[];
#endif
		static void NewProp_IsSingletonMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSingletonMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_ExecuteFeature, "ExecuteFeature" }, // 3470221360
		{ &Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GBW_ExecuteFeature, "GBW_ExecuteFeature" }, // 3653046661
		{ &Z_Construct_UFunction_UGBWPH_FeatureConfig_Base_GetSingletonMode, "GetSingletonMode" }, // 123487044
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_FeatureConfig_Base" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_TargetActor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_FeatureConfig_Base, TargetActor), Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_TargetActor_MetaData)) }; // 2134162384
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_IsSingletonMode_MetaData[] = {
		{ "Category", "InstanceMode" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_IsSingletonMode_SetBit(void* Obj)
	{
		((UGBWPH_FeatureConfig_Base*)Obj)->IsSingletonMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_IsSingletonMode = { "IsSingletonMode", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGBWPH_FeatureConfig_Base), &Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_IsSingletonMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_IsSingletonMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_IsSingletonMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_TargetActor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::NewProp_IsSingletonMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPH_FeatureConfig_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::ClassParams = {
		&UGBWPH_FeatureConfig_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPH_FeatureConfig_Base()
	{
		if (!Z_Registration_Info_UClass_UGBWPH_FeatureConfig_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPH_FeatureConfig_Base.OuterSingleton, Z_Construct_UClass_UGBWPH_FeatureConfig_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPH_FeatureConfig_Base.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPH_FeatureConfig_Base>()
	{
		return UGBWPH_FeatureConfig_Base::StaticClass();
	}
	UGBWPH_FeatureConfig_Base::UGBWPH_FeatureConfig_Base() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPH_FeatureConfig_Base);
	UGBWPH_FeatureConfig_Base::~UGBWPH_FeatureConfig_Base() {}
	DEFINE_FUNCTION(UGBWPH_Feature_Base::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_Feature_Base::execExecuteFeature)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_ENUM(EGBWPHTargetType,Z_Param_TargetActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_OBJECT(UGBWPH_FeatureConfig_Base,Z_Param_TheParamObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteFeature(Z_Param_OwnerActor,Z_Param_SelfActor,Z_Param_OpponentActor,EGBWPHTargetType(Z_Param_TargetActor),Z_Param_HitResult,Z_Param_TheParamObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_Feature_Base::execGBW_ExecuteFeature)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_ENUM(EGBWPHTargetType,Z_Param_TargetActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_OBJECT(UGBWPH_FeatureConfig_Base,Z_Param_TheParamObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GBW_ExecuteFeature_Implementation(Z_Param_OwnerActor,Z_Param_SelfActor,Z_Param_OpponentActor,EGBWPHTargetType(Z_Param_TargetActor),Z_Param_HitResult,Z_Param_TheParamObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_Feature_Base::execGetParamObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGBWPH_FeatureConfig_Base**)Z_Param__Result=P_THIS->GetParamObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_Feature_Base::execSetParamObject)
	{
		P_GET_OBJECT(UGBWPH_FeatureConfig_Base,Z_Param_TheParamObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParamObject(Z_Param_TheParamObject);
		P_NATIVE_END;
	}
	struct GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms
	{
		AActor* OwnerActor;
		AActor* SelfActor;
		AActor* OpponentActor;
		EGBWPHTargetType TargetActor;
		FHitResult HitResult;
		UGBWPH_FeatureConfig_Base* TheParamObject;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UGBWPH_Feature_Base_GBW_ExecuteFeature = FName(TEXT("GBW_ExecuteFeature"));
	bool UGBWPH_Feature_Base::GBW_ExecuteFeature(AActor* OwnerActor, AActor* SelfActor, AActor* OpponentActor, EGBWPHTargetType TargetActor, FHitResult HitResult, UGBWPH_FeatureConfig_Base* TheParamObject)
	{
		GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.SelfActor=SelfActor;
		Parms.OpponentActor=OpponentActor;
		Parms.TargetActor=TargetActor;
		Parms.HitResult=HitResult;
		Parms.TheParamObject=TheParamObject;
		ProcessEvent(FindFunctionChecked(NAME_UGBWPH_Feature_Base_GBW_ExecuteFeature),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGBWPH_Feature_Base::StaticRegisterNativesUGBWPH_Feature_Base()
	{
		UClass* Class = UGBWPH_Feature_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destroy", &UGBWPH_Feature_Base::execDestroy },
			{ "ExecuteFeature", &UGBWPH_Feature_Base::execExecuteFeature },
			{ "GBW_ExecuteFeature", &UGBWPH_Feature_Base::execGBW_ExecuteFeature },
			{ "GetParamObject", &UGBWPH_Feature_Base::execGetParamObject },
			{ "SetParamObject", &UGBWPH_Feature_Base::execSetParamObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBox|PH|Feature" },
		{ "DisplayName", "Destroy" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Feature_Base, nullptr, "Destroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics
	{
		struct GBWPH_Feature_Base_eventExecuteFeature_Parms
		{
			AActor* OwnerActor;
			AActor* SelfActor;
			AActor* OpponentActor;
			EGBWPHTargetType TargetActor;
			FHitResult HitResult;
			UGBWPH_FeatureConfig_Base* TheParamObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetActor_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheParamObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheParamObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventExecuteFeature_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventExecuteFeature_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventExecuteFeature_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TargetActor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventExecuteFeature_Parms, TargetActor), Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType, METADATA_PARAMS(nullptr, 0) }; // 2134162384
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventExecuteFeature_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TheParamObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TheParamObject = { "TheParamObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventExecuteFeature_Parms, TheParamObject), Z_Construct_UClass_UGBWPH_FeatureConfig_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TheParamObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TheParamObject_MetaData)) };
	void Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_Feature_Base_eventExecuteFeature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_Feature_Base_eventExecuteFeature_Parms), &Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TargetActor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_TheParamObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Feature" },
		{ "DisplayName", "ExecuteFeature" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Feature_Base, nullptr, "ExecuteFeature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::GBWPH_Feature_Base_eventExecuteFeature_Parms), Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetActor_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheParamObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheParamObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TargetActor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms, TargetActor), Z_Construct_UEnum_GBWPowerfulHit_EGBWPHTargetType, METADATA_PARAMS(nullptr, 0) }; // 2134162384
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TheParamObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TheParamObject = { "TheParamObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms, TheParamObject), Z_Construct_UClass_UGBWPH_FeatureConfig_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TheParamObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TheParamObject_MetaData)) };
	void Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms), &Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TargetActor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_TheParamObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Feature" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Feature_Base, nullptr, "GBW_ExecuteFeature", nullptr, nullptr, sizeof(GBWPH_Feature_Base_eventGBW_ExecuteFeature_Parms), Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics
	{
		struct GBWPH_Feature_Base_eventGetParamObject_Parms
		{
			UGBWPH_FeatureConfig_Base* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventGetParamObject_Parms, ReturnValue), Z_Construct_UClass_UGBWPH_FeatureConfig_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Feature" },
		{ "DisplayName", "GetParamObject" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Feature_Base, nullptr, "GetParamObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::GBWPH_Feature_Base_eventGetParamObject_Parms), Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics
	{
		struct GBWPH_Feature_Base_eventSetParamObject_Parms
		{
			UGBWPH_FeatureConfig_Base* TheParamObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheParamObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheParamObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::NewProp_TheParamObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::NewProp_TheParamObject = { "TheParamObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Feature_Base_eventSetParamObject_Parms, TheParamObject), Z_Construct_UClass_UGBWPH_FeatureConfig_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::NewProp_TheParamObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::NewProp_TheParamObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::NewProp_TheParamObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Feature" },
		{ "DisplayName", "SetParamObject" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Feature_Base, nullptr, "SetParamObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::GBWPH_Feature_Base_eventSetParamObject_Parms), Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPH_Feature_Base);
	UClass* Z_Construct_UClass_UGBWPH_Feature_Base_NoRegister()
	{
		return UGBWPH_Feature_Base::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPH_Feature_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPH_Feature_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPH_Feature_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPH_Feature_Base_Destroy, "Destroy" }, // 2303376914
		{ &Z_Construct_UFunction_UGBWPH_Feature_Base_ExecuteFeature, "ExecuteFeature" }, // 2578094474
		{ &Z_Construct_UFunction_UGBWPH_Feature_Base_GBW_ExecuteFeature, "GBW_ExecuteFeature" }, // 3647299106
		{ &Z_Construct_UFunction_UGBWPH_Feature_Base_GetParamObject, "GetParamObject" }, // 323917371
		{ &Z_Construct_UFunction_UGBWPH_Feature_Base_SetParamObject, "SetParamObject" }, // 2758681552
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_Feature_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_Feature_Base" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPH_Feature_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPH_Feature_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPH_Feature_Base_Statics::ClassParams = {
		&UGBWPH_Feature_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPH_Feature_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_Feature_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPH_Feature_Base()
	{
		if (!Z_Registration_Info_UClass_UGBWPH_Feature_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPH_Feature_Base.OuterSingleton, Z_Construct_UClass_UGBWPH_Feature_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPH_Feature_Base.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPH_Feature_Base>()
	{
		return UGBWPH_Feature_Base::StaticClass();
	}
	UGBWPH_Feature_Base::UGBWPH_Feature_Base() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPH_Feature_Base);
	UGBWPH_Feature_Base::~UGBWPH_Feature_Base() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet;
class UScriptStruct* FGBWPowerfulHitFeatureSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPowerfulHitFeatureSet"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPowerfulHitFeatureSet>()
{
	return FGBWPowerfulHitFeatureSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureSet_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FeatureSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FeatureSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBW_PowerfulHitFeatureSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPowerfulHitFeatureSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData[] = {
		{ "Category", "FeatureSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner = { "FeatureSet", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGBWPH_FeatureConfig_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData[] = {
		{ "Category", "FeatureSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet = { "FeatureSet", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPowerfulHitFeatureSet, FeatureSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPowerfulHitFeatureSet",
		sizeof(FGBWPowerfulHitFeatureSet),
		alignof(FGBWPowerfulHitFeatureSet),
		Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.InnerSingleton, Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.InnerSingleton;
	}
	DEFINE_FUNCTION(UGBWPH_Script_Base::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_Script_Base::execExecuteScript)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_UBOOL(Z_Param_TargetActorIsSelf);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreScriptIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NextScriptIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteScript(Z_Param_TargetActor,Z_Param_SelfActor,Z_Param_OpponentActor,Z_Param_HitResult,Z_Param_TargetActorIsSelf,Z_Param_PreScriptIndex,Z_Param_Out_NextScriptIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPH_Script_Base::execExecute)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OpponentActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_UBOOL(Z_Param_TargetActorIsSelf);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreScriptIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NextScriptIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute_Implementation(Z_Param_TargetActor,Z_Param_SelfActor,Z_Param_OpponentActor,Z_Param_HitResult,Z_Param_TargetActorIsSelf,Z_Param_PreScriptIndex,Z_Param_Out_NextScriptIndex);
		P_NATIVE_END;
	}
	struct GBWPH_Script_Base_eventExecute_Parms
	{
		AActor* TargetActor;
		AActor* SelfActor;
		AActor* OpponentActor;
		FHitResult HitResult;
		bool TargetActorIsSelf;
		int32 PreScriptIndex;
		int32 NextScriptIndex;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_Script_Base_eventExecute_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UGBWPH_Script_Base_Execute = FName(TEXT("Execute"));
	bool UGBWPH_Script_Base::Execute(AActor* TargetActor, AActor* SelfActor, AActor* OpponentActor, FHitResult HitResult, bool TargetActorIsSelf, int32 PreScriptIndex, int32& NextScriptIndex)
	{
		GBWPH_Script_Base_eventExecute_Parms Parms;
		Parms.TargetActor=TargetActor;
		Parms.SelfActor=SelfActor;
		Parms.OpponentActor=OpponentActor;
		Parms.HitResult=HitResult;
		Parms.TargetActorIsSelf=TargetActorIsSelf ? true : false;
		Parms.PreScriptIndex=PreScriptIndex;
		Parms.NextScriptIndex=NextScriptIndex;
		ProcessEvent(FindFunctionChecked(NAME_UGBWPH_Script_Base_Execute),&Parms);
		NextScriptIndex=Parms.NextScriptIndex;
		return !!Parms.ReturnValue;
	}
	void UGBWPH_Script_Base::StaticRegisterNativesUGBWPH_Script_Base()
	{
		UClass* Class = UGBWPH_Script_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destroy", &UGBWPH_Script_Base::execDestroy },
			{ "Execute", &UGBWPH_Script_Base::execExecute },
			{ "ExecuteScript", &UGBWPH_Script_Base::execExecuteScript },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPH_Script_Base_Destroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Script_Base_Destroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBox|PH|Script" },
		{ "DisplayName", "Destroy" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Script_Base_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Script_Base, nullptr, "Destroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Script_Base_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Script_Base_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Script_Base_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Script_Base_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_TargetActorIsSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TargetActorIsSelf;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PreScriptIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NextScriptIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecute_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecute_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecute_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecute_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_TargetActorIsSelf_SetBit(void* Obj)
	{
		((GBWPH_Script_Base_eventExecute_Parms*)Obj)->TargetActorIsSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_TargetActorIsSelf = { "TargetActorIsSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_Script_Base_eventExecute_Parms), &Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_TargetActorIsSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_PreScriptIndex = { "PreScriptIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecute_Parms, PreScriptIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_NextScriptIndex = { "NextScriptIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecute_Parms, NextScriptIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_Script_Base_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_Script_Base_eventExecute_Parms), &Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_TargetActorIsSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_PreScriptIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_NextScriptIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Script" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Script_Base, nullptr, "Execute", nullptr, nullptr, sizeof(GBWPH_Script_Base_eventExecute_Parms), Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Script_Base_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Script_Base_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics
	{
		struct GBWPH_Script_Base_eventExecuteScript_Parms
		{
			AActor* TargetActor;
			AActor* SelfActor;
			AActor* OpponentActor;
			FHitResult HitResult;
			bool TargetActorIsSelf;
			int32 PreScriptIndex;
			int32 NextScriptIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_TargetActorIsSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TargetActorIsSelf;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PreScriptIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NextScriptIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecuteScript_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecuteScript_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_OpponentActor = { "OpponentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecuteScript_Parms, OpponentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecuteScript_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_TargetActorIsSelf_SetBit(void* Obj)
	{
		((GBWPH_Script_Base_eventExecuteScript_Parms*)Obj)->TargetActorIsSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_TargetActorIsSelf = { "TargetActorIsSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_Script_Base_eventExecuteScript_Parms), &Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_TargetActorIsSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_PreScriptIndex = { "PreScriptIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecuteScript_Parms, PreScriptIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_NextScriptIndex = { "NextScriptIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_Script_Base_eventExecuteScript_Parms, NextScriptIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_Script_Base_eventExecuteScript_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_Script_Base_eventExecuteScript_Parms), &Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_OpponentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_TargetActorIsSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_PreScriptIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_NextScriptIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|Script" },
		{ "DisplayName", "ExecuteScript" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPH_Script_Base, nullptr, "ExecuteScript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::GBWPH_Script_Base_eventExecuteScript_Parms), Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPH_Script_Base);
	UClass* Z_Construct_UClass_UGBWPH_Script_Base_NoRegister()
	{
		return UGBWPH_Script_Base::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPH_Script_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPH_Script_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPH_Script_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPH_Script_Base_Destroy, "Destroy" }, // 214144430
		{ &Z_Construct_UFunction_UGBWPH_Script_Base_Execute, "Execute" }, // 2857013160
		{ &Z_Construct_UFunction_UGBWPH_Script_Base_ExecuteScript, "ExecuteScript" }, // 403319506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_Script_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_Script_Base" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPH_Script_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPH_Script_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPH_Script_Base_Statics::ClassParams = {
		&UGBWPH_Script_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPH_Script_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_Script_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPH_Script_Base()
	{
		if (!Z_Registration_Info_UClass_UGBWPH_Script_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPH_Script_Base.OuterSingleton, Z_Construct_UClass_UGBWPH_Script_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPH_Script_Base.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPH_Script_Base>()
	{
		return UGBWPH_Script_Base::StaticClass();
	}
	UGBWPH_Script_Base::UGBWPH_Script_Base() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPH_Script_Base);
	UGBWPH_Script_Base::~UGBWPH_Script_Base() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHScriptSet;
class UScriptStruct* FGBWPHScriptSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHScriptSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHScriptSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHScriptSet, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHScriptSet"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHScriptSet.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHScriptSet>()
{
	return FGBWPHScriptSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptSet_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_ScriptSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHScriptSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_Inner_MetaData[] = {
		{ "Category", "ScriptSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_Inner = { "ScriptSet", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGBWPH_Script_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_MetaData[] = {
		{ "Category", "ScriptSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet = { "ScriptSet", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHScriptSet, ScriptSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewProp_ScriptSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHScriptSet",
		sizeof(FGBWPHScriptSet),
		alignof(FGBWPHScriptSet),
		Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHScriptSet()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHScriptSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHScriptSet.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHScriptSet.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGBWPHAdditionalItemType;
	static UEnum* EGBWPHAdditionalItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGBWPHAdditionalItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGBWPHAdditionalItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("EGBWPHAdditionalItemType"));
		}
		return Z_Registration_Info_UEnum_EGBWPHAdditionalItemType.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UEnum* StaticEnum<EGBWPHAdditionalItemType>()
	{
		return EGBWPHAdditionalItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::Enumerators[] = {
		{ "EGBWPHAdditionalItemType::None", (int64)EGBWPHAdditionalItemType::None },
		{ "EGBWPHAdditionalItemType::SkeletalMesh", (int64)EGBWPHAdditionalItemType::SkeletalMesh },
		{ "EGBWPHAdditionalItemType::StaticMesh", (int64)EGBWPHAdditionalItemType::StaticMesh },
		{ "EGBWPHAdditionalItemType::Actor", (int64)EGBWPHAdditionalItemType::Actor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.DisplayName", "Actor" },
		{ "Actor.Name", "EGBWPHAdditionalItemType::Actor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGBWPHAdditionalItemType::None" },
		{ "SkeletalMesh.DisplayName", "SkeletalMesh" },
		{ "SkeletalMesh.Name", "EGBWPHAdditionalItemType::SkeletalMesh" },
		{ "StaticMesh.DisplayName", "StaticMesh" },
		{ "StaticMesh.Name", "EGBWPHAdditionalItemType::StaticMesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		"EGBWPHAdditionalItemType",
		"EGBWPHAdditionalItemType",
		Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType()
	{
		if (!Z_Registration_Info_UEnum_EGBWPHAdditionalItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGBWPHAdditionalItemType.InnerSingleton, Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGBWPHAdditionalItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet;
class UScriptStruct* FGBWPHAdditionalItemSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHAdditionalItemSet"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHAdditionalItemSet>()
{
	return FGBWPHAdditionalItemSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalItemSet_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalItemSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalItemSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalItemSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_AdditionalItemSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHAdditionalItemSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_Inner_MetaData[] = {
		{ "Category", "AdditionalItemSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_Inner = { "AdditionalItemSet", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGBWPH_AdditionalItem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_MetaData[] = {
		{ "Category", "AdditionalItemSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet = { "AdditionalItemSet", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHAdditionalItemSet, AdditionalItemSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewProp_AdditionalItemSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHAdditionalItemSet",
		sizeof(FGBWPHAdditionalItemSet),
		alignof(FGBWPHAdditionalItemSet),
		Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHAttachSettings;
class UScriptStruct* FGBWPHAttachSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHAttachSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHAttachSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHAttachSettings, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHAttachSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHAttachSettings.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHAttachSettings>()
{
	return FGBWPHAttachSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeldSimulatedBodies_MetaData[];
#endif
		static void NewProp_WeldSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WeldSimulatedBodies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_AttachSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHAttachSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ItemTransform_MetaData[] = {
		{ "Category", "Settings|AttachSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ItemTransform = { "ItemTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHAttachSettings, ItemTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ItemTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ItemTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Settings|AttachSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHAttachSettings, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_LocationRule_MetaData[] = {
		{ "Category", "Settings|AttachSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHAttachSettings, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_LocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_LocationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_RotationRule_MetaData[] = {
		{ "Category", "Settings|AttachSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHAttachSettings, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_RotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_RotationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ScaleRule_MetaData[] = {
		{ "Category", "Settings|AttachSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHAttachSettings, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ScaleRule_MetaData)) }; // 1532071077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_WeldSimulatedBodies_MetaData[] = {
		{ "Category", "Settings|AttachSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_WeldSimulatedBodies_SetBit(void* Obj)
	{
		((FGBWPHAttachSettings*)Obj)->WeldSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_WeldSimulatedBodies = { "WeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGBWPHAttachSettings), &Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_WeldSimulatedBodies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_WeldSimulatedBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_WeldSimulatedBodies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ItemTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_LocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_LocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_RotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_RotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_ScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewProp_WeldSimulatedBodies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHAttachSettings",
		sizeof(FGBWPHAttachSettings),
		alignof(FGBWPHAttachSettings),
		Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHAttachSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHAttachSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHAttachSettings.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHAttachSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings;
class UScriptStruct* FGBWPHTextTagSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHTextTagSettings, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHTextTagSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHTextTagSettings>()
{
	return FGBWPHTextTagSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RealTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_TextTagSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHTextTagSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_SocketTag_MetaData[] = {
		{ "Category", "Settings|TextTagSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHTextTagSettings, SocketTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_SocketTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_SocketTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_RealTag_MetaData[] = {
		{ "Category", "Settings|TextTagSettings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_RealTag = { "RealTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHTextTagSettings, RealTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_RealTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_RealTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_SocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewProp_RealTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHTextTagSettings",
		sizeof(FGBWPHTextTagSettings),
		alignof(FGBWPHTextTagSettings),
		Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHTextTagSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings.InnerSingleton;
	}
	void UGBWPH_AdditionalItem::StaticRegisterNativesUGBWPH_AdditionalItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPH_AdditionalItem);
	UClass* Z_Construct_UClass_UGBWPH_AdditionalItem_NoRegister()
	{
		return UGBWPH_AdditionalItem::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPH_AdditionalItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimInstanceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReinitPose_MetaData[];
#endif
		static void NewProp_ReinitPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReinitPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TryActiveHitBox_MetaData[];
#endif
		static void NewProp_TryActiveHitBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TryActiveHitBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WithTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WithTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildItemSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildItemSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildItemSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "AdditionalItem" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, ItemType), Z_Construct_UEnum_GBWPowerfulHit_EGBWPHAdditionalItemType, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ItemType_MetaData)) }; // 2951208391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType == EGBWPHAdditionalItemType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AnimInstanceClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType == EGBWPHAdditionalItemType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AnimInstanceClass = { "AnimInstanceClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, AnimInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AnimInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AnimInstanceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ReinitPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType == EGBWPHAdditionalItemType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ReinitPose_SetBit(void* Obj)
	{
		((UGBWPH_AdditionalItem*)Obj)->ReinitPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ReinitPose = { "ReinitPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGBWPH_AdditionalItem), &Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ReinitPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ReinitPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ReinitPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType == EGBWPHAdditionalItemType::StaticMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType == EGBWPHAdditionalItemType::Actor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_TryActiveHitBox_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType == EGBWPHAdditionalItemType::Actor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_TryActiveHitBox_SetBit(void* Obj)
	{
		((UGBWPH_AdditionalItem*)Obj)->TryActiveHitBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_TryActiveHitBox = { "TryActiveHitBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGBWPH_AdditionalItem), &Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_TryActiveHitBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_TryActiveHitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_TryActiveHitBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AttachSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType != EGBWPHAdditionalItemType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AttachSettings = { "AttachSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, AttachSettings), Z_Construct_UScriptStruct_FGBWPHAttachSettings, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AttachSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AttachSettings_MetaData)) }; // 1740749712
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_WithTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType != EGBWPHAdditionalItemType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_WithTag = { "WithTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, WithTag), METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_WithTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_WithTag_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AdditionalTags_Inner = { "AdditionalTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGBWPHTextTagSettings, METADATA_PARAMS(nullptr, 0) }; // 1256078458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AdditionalTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType != EGBWPHAdditionalItemType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AdditionalTags = { "AdditionalTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, AdditionalTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AdditionalTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AdditionalTags_MetaData)) }; // 1256078458
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ChildItemSet_Inner = { "ChildItemSet", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet, METADATA_PARAMS(nullptr, 0) }; // 2666630508
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ChildItemSet_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ItemType != EGBWPHAdditionalItemType::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ChildItemSet = { "ChildItemSet", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_AdditionalItem, ChildItemSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ChildItemSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ChildItemSet_MetaData)) }; // 2666630508
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AnimInstanceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ReinitPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_TryActiveHitBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AttachSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_WithTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AdditionalTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_AdditionalTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ChildItemSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::NewProp_ChildItemSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPH_AdditionalItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::ClassParams = {
		&UGBWPH_AdditionalItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPH_AdditionalItem()
	{
		if (!Z_Registration_Info_UClass_UGBWPH_AdditionalItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPH_AdditionalItem.OuterSingleton, Z_Construct_UClass_UGBWPH_AdditionalItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPH_AdditionalItem.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPH_AdditionalItem>()
	{
		return UGBWPH_AdditionalItem::StaticClass();
	}
	UGBWPH_AdditionalItem::UGBWPH_AdditionalItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPH_AdditionalItem);
	UGBWPH_AdditionalItem::~UGBWPH_AdditionalItem() {}
	void UGBWPH_HitTraceConfig_Base::StaticRegisterNativesUGBWPH_HitTraceConfig_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPH_HitTraceConfig_Base);
	UClass* Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_NoRegister()
	{
		return UGBWPH_HitTraceConfig_Base::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTraceActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HitTraceActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_HitTraceConfig_Base" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::NewProp_HitTraceActorClass_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::NewProp_HitTraceActorClass = { "HitTraceActorClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPH_HitTraceConfig_Base, HitTraceActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGBWPH_HitTrace_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::NewProp_HitTraceActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::NewProp_HitTraceActorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::NewProp_HitTraceActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPH_HitTraceConfig_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::ClassParams = {
		&UGBWPH_HitTraceConfig_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPH_HitTraceConfig_Base()
	{
		if (!Z_Registration_Info_UClass_UGBWPH_HitTraceConfig_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPH_HitTraceConfig_Base.OuterSingleton, Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPH_HitTraceConfig_Base.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPH_HitTraceConfig_Base>()
	{
		return UGBWPH_HitTraceConfig_Base::StaticClass();
	}
	UGBWPH_HitTraceConfig_Base::UGBWPH_HitTraceConfig_Base() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPH_HitTraceConfig_Base);
	UGBWPH_HitTraceConfig_Base::~UGBWPH_HitTraceConfig_Base() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct;
class UScriptStruct* FGBWPHHitTraceConfigStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHHitTraceConfigStruct"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHHitTraceConfigStruct>()
{
	return FGBWPHHitTraceConfigStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTraceConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitTraceConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_HitTraceConfigStruct" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHHitTraceConfigStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::NewProp_HitTraceConfig_MetaData[] = {
		{ "Category", "HitTraceConfig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::NewProp_HitTraceConfig = { "HitTraceConfig", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHHitTraceConfigStruct, HitTraceConfig), Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::NewProp_HitTraceConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::NewProp_HitTraceConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::NewProp_HitTraceConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHHitTraceConfigStruct",
		sizeof(FGBWPHHitTraceConfigStruct),
		alignof(FGBWPHHitTraceConfigStruct),
		Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter;
class UScriptStruct* FGBWPH_HitTraceParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPH_HitTraceParameter"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPH_HitTraceParameter>()
{
	return FGBWPH_HitTraceParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hitter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBox;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitConditionSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitConditionSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_HitTraceParameter" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPH_HitTraceParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Hitter_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Hitter = { "Hitter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceParameter, Hitter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Hitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Hitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitBox_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitBox = { "HitBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceParameter, HitBox), Z_Construct_UClass_UGBW_HitBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitBox_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceParameter, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceObjectTypes_MetaData)) }; // 3629342158
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceChannels_Inner = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceChannels_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceParameter, TraceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceChannels_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitConditionSet_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitConditionSet = { "HitConditionSet", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceParameter, HitConditionSet), Z_Construct_UScriptStruct_FGBWPHConditionSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitConditionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitConditionSet_MetaData)) }; // 2303106175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceParameter, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_ParameterObject_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_ParameterObject = { "ParameterObject", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceParameter, ParameterObject), Z_Construct_UClass_UGBWPH_HitTraceConfig_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_ParameterObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_ParameterObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Hitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_TraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_HitConditionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewProp_ParameterObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPH_HitTraceParameter",
		sizeof(FGBWPH_HitTraceParameter),
		alignof(FGBWPH_HitTraceParameter),
		Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter.InnerSingleton, Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult;
class UScriptStruct* FGBWPH_HitTraceResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPH_HitTraceResult"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPH_HitTraceResult>()
{
	return FGBWPH_HitTraceResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendHitResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendHitResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtendHitResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_HitTraceResult" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPH_HitTraceResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_HitResults_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceResult, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_HitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_HitResults_MetaData)) }; // 1287526515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ExtendHitResults_Inner = { "ExtendHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ExtendHitResults_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ExtendHitResults = { "ExtendHitResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceResult, ExtendHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ExtendHitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ExtendHitResults_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ParameterObject_MetaData[] = {
		{ "Category", "HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ParameterObject = { "ParameterObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_HitTraceResult, ParameterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ParameterObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ParameterObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_HitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_HitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ExtendHitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ExtendHitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewProp_ParameterObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPH_HitTraceResult",
		sizeof(FGBWPH_HitTraceResult),
		alignof(FGBWPH_HitTraceResult),
		Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_HitTraceResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult.InnerSingleton, Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult.InnerSingleton;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execUpdateHitTrace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT(FGBWPH_HitTraceParameter,Z_Param_HitTraceParameter);
		P_GET_STRUCT_REF(FGBWPH_HitTraceResult,Z_Param_Out_HitTraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateHitTrace(Z_Param_DeltaTime,Z_Param_HitTraceParameter,Z_Param_Out_HitTraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execGBW_UpdateHitTrace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT(FGBWPH_HitTraceParameter,Z_Param_HitTraceParameter);
		P_GET_STRUCT_REF(FGBWPH_HitTraceResult,Z_Param_Out_HitTraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GBW_UpdateHitTrace_Implementation(Z_Param_DeltaTime,Z_Param_HitTraceParameter,Z_Param_Out_HitTraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execStopHitTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopHitTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execGBW_StopHitTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GBW_StopHitTrace_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execGBW_IsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GBW_IsValid_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execInitHitTrace)
	{
		P_GET_STRUCT(FGBWPH_HitTraceParameter,Z_Param_HitTraceParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitHitTrace(Z_Param_HitTraceParameter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGBWPH_HitTrace_Base::execGBW_InitHitTrace)
	{
		P_GET_STRUCT(FGBWPH_HitTraceParameter,Z_Param_HitTraceParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GBW_InitHitTrace_Implementation(Z_Param_HitTraceParameter);
		P_NATIVE_END;
	}
	struct GBWPH_HitTrace_Base_eventGBW_InitHitTrace_Parms
	{
		FGBWPH_HitTraceParameter HitTraceParameter;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_HitTrace_Base_eventGBW_InitHitTrace_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GBWPH_HitTrace_Base_eventGBW_IsValid_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_HitTrace_Base_eventGBW_IsValid_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GBWPH_HitTrace_Base_eventGBW_StopHitTrace_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_HitTrace_Base_eventGBW_StopHitTrace_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms
	{
		float DeltaTime;
		FGBWPH_HitTraceParameter HitTraceParameter;
		FGBWPH_HitTraceResult HitTraceResult;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AGBWPH_HitTrace_Base_GBW_InitHitTrace = FName(TEXT("GBW_InitHitTrace"));
	bool AGBWPH_HitTrace_Base::GBW_InitHitTrace(FGBWPH_HitTraceParameter HitTraceParameter)
	{
		GBWPH_HitTrace_Base_eventGBW_InitHitTrace_Parms Parms;
		Parms.HitTraceParameter=HitTraceParameter;
		ProcessEvent(FindFunctionChecked(NAME_AGBWPH_HitTrace_Base_GBW_InitHitTrace),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGBWPH_HitTrace_Base_GBW_IsValid = FName(TEXT("GBW_IsValid"));
	bool AGBWPH_HitTrace_Base::GBW_IsValid()
	{
		GBWPH_HitTrace_Base_eventGBW_IsValid_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGBWPH_HitTrace_Base_GBW_IsValid),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGBWPH_HitTrace_Base_GBW_StopHitTrace = FName(TEXT("GBW_StopHitTrace"));
	bool AGBWPH_HitTrace_Base::GBW_StopHitTrace()
	{
		GBWPH_HitTrace_Base_eventGBW_StopHitTrace_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGBWPH_HitTrace_Base_GBW_StopHitTrace),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace = FName(TEXT("GBW_UpdateHitTrace"));
	bool AGBWPH_HitTrace_Base::GBW_UpdateHitTrace(float DeltaTime, FGBWPH_HitTraceParameter HitTraceParameter, FGBWPH_HitTraceResult& HitTraceResult)
	{
		GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.HitTraceParameter=HitTraceParameter;
		Parms.HitTraceResult=HitTraceResult;
		ProcessEvent(FindFunctionChecked(NAME_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace),&Parms);
		HitTraceResult=Parms.HitTraceResult;
		return !!Parms.ReturnValue;
	}
	void AGBWPH_HitTrace_Base::StaticRegisterNativesAGBWPH_HitTrace_Base()
	{
		UClass* Class = AGBWPH_HitTrace_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GBW_InitHitTrace", &AGBWPH_HitTrace_Base::execGBW_InitHitTrace },
			{ "GBW_IsValid", &AGBWPH_HitTrace_Base::execGBW_IsValid },
			{ "GBW_StopHitTrace", &AGBWPH_HitTrace_Base::execGBW_StopHitTrace },
			{ "GBW_UpdateHitTrace", &AGBWPH_HitTrace_Base::execGBW_UpdateHitTrace },
			{ "InitHitTrace", &AGBWPH_HitTrace_Base::execInitHitTrace },
			{ "IsValid", &AGBWPH_HitTrace_Base::execIsValid },
			{ "StopHitTrace", &AGBWPH_HitTrace_Base::execStopHitTrace },
			{ "UpdateHitTrace", &AGBWPH_HitTrace_Base::execUpdateHitTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitTraceParameter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::NewProp_HitTraceParameter = { "HitTraceParameter", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventGBW_InitHitTrace_Parms, HitTraceParameter), Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter, METADATA_PARAMS(nullptr, 0) }; // 519615884
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventGBW_InitHitTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventGBW_InitHitTrace_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::NewProp_HitTraceParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "GBW_InitHitTrace", nullptr, nullptr, sizeof(GBWPH_HitTrace_Base_eventGBW_InitHitTrace_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventGBW_IsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventGBW_IsValid_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "GBW_IsValid", nullptr, nullptr, sizeof(GBWPH_HitTrace_Base_eventGBW_IsValid_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventGBW_StopHitTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventGBW_StopHitTrace_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "GBW_StopHitTrace", nullptr, nullptr, sizeof(GBWPH_HitTrace_Base_eventGBW_StopHitTrace_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitTraceParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitTraceResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_HitTraceParameter = { "HitTraceParameter", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms, HitTraceParameter), Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter, METADATA_PARAMS(nullptr, 0) }; // 519615884
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_HitTraceResult = { "HitTraceResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms, HitTraceResult), Z_Construct_UScriptStruct_FGBWPH_HitTraceResult, METADATA_PARAMS(nullptr, 0) }; // 3615309841
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_HitTraceParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_HitTraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "GBW_UpdateHitTrace", nullptr, nullptr, sizeof(GBWPH_HitTrace_Base_eventGBW_UpdateHitTrace_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics
	{
		struct GBWPH_HitTrace_Base_eventInitHitTrace_Parms
		{
			FGBWPH_HitTraceParameter HitTraceParameter;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitTraceParameter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::NewProp_HitTraceParameter = { "HitTraceParameter", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventInitHitTrace_Parms, HitTraceParameter), Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter, METADATA_PARAMS(nullptr, 0) }; // 519615884
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventInitHitTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventInitHitTrace_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::NewProp_HitTraceParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "DisplayName", "InitHitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "InitHitTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::GBWPH_HitTrace_Base_eventInitHitTrace_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics
	{
		struct GBWPH_HitTrace_Base_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventIsValid_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "DisplayName", "IsValid" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::GBWPH_HitTrace_Base_eventIsValid_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics
	{
		struct GBWPH_HitTrace_Base_eventStopHitTrace_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventStopHitTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventStopHitTrace_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "DisplayName", "StopHitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "StopHitTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::GBWPH_HitTrace_Base_eventStopHitTrace_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics
	{
		struct GBWPH_HitTrace_Base_eventUpdateHitTrace_Parms
		{
			float DeltaTime;
			FGBWPH_HitTraceParameter HitTraceParameter;
			FGBWPH_HitTraceResult HitTraceResult;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitTraceParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitTraceResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventUpdateHitTrace_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_HitTraceParameter = { "HitTraceParameter", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventUpdateHitTrace_Parms, HitTraceParameter), Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter, METADATA_PARAMS(nullptr, 0) }; // 519615884
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_HitTraceResult = { "HitTraceResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPH_HitTrace_Base_eventUpdateHitTrace_Parms, HitTraceResult), Z_Construct_UScriptStruct_FGBWPH_HitTraceResult, METADATA_PARAMS(nullptr, 0) }; // 3615309841
	void Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPH_HitTrace_Base_eventUpdateHitTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPH_HitTrace_Base_eventUpdateHitTrace_Parms), &Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_HitTraceParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_HitTraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PH|HitTrace" },
		{ "DisplayName", "UpdateHitTrace" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGBWPH_HitTrace_Base, nullptr, "UpdateHitTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::GBWPH_HitTrace_Base_eventUpdateHitTrace_Parms), Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGBWPH_HitTrace_Base);
	UClass* Z_Construct_UClass_AGBWPH_HitTrace_Base_NoRegister()
	{
		return AGBWPH_HitTrace_Base::StaticClass();
	}
	struct Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_InitHitTrace, "GBW_InitHitTrace" }, // 363391132
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_IsValid, "GBW_IsValid" }, // 1077966554
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_StopHitTrace, "GBW_StopHitTrace" }, // 218343884
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_GBW_UpdateHitTrace, "GBW_UpdateHitTrace" }, // 2610587020
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_InitHitTrace, "InitHitTrace" }, // 2668701464
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_IsValid, "IsValid" }, // 2397926300
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_StopHitTrace, "StopHitTrace" }, // 655106709
		{ &Z_Construct_UFunction_AGBWPH_HitTrace_Base_UpdateHitTrace, "UpdateHitTrace" }, // 2401490954
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBWPH_HitTrace_Base" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGBWPH_HitTrace_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::ClassParams = {
		&AGBWPH_HitTrace_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGBWPH_HitTrace_Base()
	{
		if (!Z_Registration_Info_UClass_AGBWPH_HitTrace_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGBWPH_HitTrace_Base.OuterSingleton, Z_Construct_UClass_AGBWPH_HitTrace_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGBWPH_HitTrace_Base.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<AGBWPH_HitTrace_Base>()
	{
		return AGBWPH_HitTrace_Base::StaticClass();
	}
	AGBWPH_HitTrace_Base::AGBWPH_HitTrace_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGBWPH_HitTrace_Base);
	AGBWPH_HitTrace_Base::~AGBWPH_HitTrace_Base() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::EnumInfo[] = {
		{ EGBWPHTargetType_StaticEnum, TEXT("EGBWPHTargetType"), &Z_Registration_Info_UEnum_EGBWPHTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2134162384U) },
		{ EGBWTrailWidthMode_StaticEnum, TEXT("EGBWTrailWidthMode"), &Z_Registration_Info_UEnum_EGBWTrailWidthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1872382352U) },
		{ EGBWMoveType_StaticEnum, TEXT("EGBWMoveType"), &Z_Registration_Info_UEnum_EGBWMoveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2636427480U) },
		{ EGBWApplyType_StaticEnum, TEXT("EGBWApplyType"), &Z_Registration_Info_UEnum_EGBWApplyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1149396217U) },
		{ EGBWConditionSetEvaluationMode_StaticEnum, TEXT("EGBWConditionSetEvaluationMode"), &Z_Registration_Info_UEnum_EGBWConditionSetEvaluationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 465725205U) },
		{ EGBWPHAdditionalItemType_StaticEnum, TEXT("EGBWPHAdditionalItemType"), &Z_Registration_Info_UEnum_EGBWPHAdditionalItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2951208391U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ScriptStructInfo[] = {
		{ FGBWPHConditionSet::StaticStruct, Z_Construct_UScriptStruct_FGBWPHConditionSet_Statics::NewStructOps, TEXT("GBWPHConditionSet"), &Z_Registration_Info_UScriptStruct_GBWPHConditionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHConditionSet), 2303106175U) },
		{ FGBWPowerfulHitFeatureSet::StaticStruct, Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewStructOps, TEXT("GBWPowerfulHitFeatureSet"), &Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPowerfulHitFeatureSet), 3980229272U) },
		{ FGBWPHScriptSet::StaticStruct, Z_Construct_UScriptStruct_FGBWPHScriptSet_Statics::NewStructOps, TEXT("GBWPHScriptSet"), &Z_Registration_Info_UScriptStruct_GBWPHScriptSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHScriptSet), 3138520946U) },
		{ FGBWPHAdditionalItemSet::StaticStruct, Z_Construct_UScriptStruct_FGBWPHAdditionalItemSet_Statics::NewStructOps, TEXT("GBWPHAdditionalItemSet"), &Z_Registration_Info_UScriptStruct_GBWPHAdditionalItemSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHAdditionalItemSet), 2666630508U) },
		{ FGBWPHAttachSettings::StaticStruct, Z_Construct_UScriptStruct_FGBWPHAttachSettings_Statics::NewStructOps, TEXT("GBWPHAttachSettings"), &Z_Registration_Info_UScriptStruct_GBWPHAttachSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHAttachSettings), 1740749712U) },
		{ FGBWPHTextTagSettings::StaticStruct, Z_Construct_UScriptStruct_FGBWPHTextTagSettings_Statics::NewStructOps, TEXT("GBWPHTextTagSettings"), &Z_Registration_Info_UScriptStruct_GBWPHTextTagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHTextTagSettings), 1256078458U) },
		{ FGBWPHHitTraceConfigStruct::StaticStruct, Z_Construct_UScriptStruct_FGBWPHHitTraceConfigStruct_Statics::NewStructOps, TEXT("GBWPHHitTraceConfigStruct"), &Z_Registration_Info_UScriptStruct_GBWPHHitTraceConfigStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHHitTraceConfigStruct), 4139618695U) },
		{ FGBWPH_HitTraceParameter::StaticStruct, Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter_Statics::NewStructOps, TEXT("GBWPH_HitTraceParameter"), &Z_Registration_Info_UScriptStruct_GBWPH_HitTraceParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPH_HitTraceParameter), 519615884U) },
		{ FGBWPH_HitTraceResult::StaticStruct, Z_Construct_UScriptStruct_FGBWPH_HitTraceResult_Statics::NewStructOps, TEXT("GBWPH_HitTraceResult"), &Z_Registration_Info_UScriptStruct_GBWPH_HitTraceResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPH_HitTraceResult), 3615309841U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWPowerfulHitNetWorkObject, UGBWPowerfulHitNetWorkObject::StaticClass, TEXT("UGBWPowerfulHitNetWorkObject"), &Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPowerfulHitNetWorkObject), 84593016U) },
		{ Z_Construct_UClass_UGBWPH_ConditionGeneration, UGBWPH_ConditionGeneration::StaticClass, TEXT("UGBWPH_ConditionGeneration"), &Z_Registration_Info_UClass_UGBWPH_ConditionGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPH_ConditionGeneration), 2066466418U) },
		{ Z_Construct_UClass_UGBWPH_FeatureConfig_Base, UGBWPH_FeatureConfig_Base::StaticClass, TEXT("UGBWPH_FeatureConfig_Base"), &Z_Registration_Info_UClass_UGBWPH_FeatureConfig_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPH_FeatureConfig_Base), 2717350238U) },
		{ Z_Construct_UClass_UGBWPH_Feature_Base, UGBWPH_Feature_Base::StaticClass, TEXT("UGBWPH_Feature_Base"), &Z_Registration_Info_UClass_UGBWPH_Feature_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPH_Feature_Base), 2903415666U) },
		{ Z_Construct_UClass_UGBWPH_Script_Base, UGBWPH_Script_Base::StaticClass, TEXT("UGBWPH_Script_Base"), &Z_Registration_Info_UClass_UGBWPH_Script_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPH_Script_Base), 3983453889U) },
		{ Z_Construct_UClass_UGBWPH_AdditionalItem, UGBWPH_AdditionalItem::StaticClass, TEXT("UGBWPH_AdditionalItem"), &Z_Registration_Info_UClass_UGBWPH_AdditionalItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPH_AdditionalItem), 1424485347U) },
		{ Z_Construct_UClass_UGBWPH_HitTraceConfig_Base, UGBWPH_HitTraceConfig_Base::StaticClass, TEXT("UGBWPH_HitTraceConfig_Base"), &Z_Registration_Info_UClass_UGBWPH_HitTraceConfig_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPH_HitTraceConfig_Base), 1769870474U) },
		{ Z_Construct_UClass_AGBWPH_HitTrace_Base, AGBWPH_HitTrace_Base::StaticClass, TEXT("AGBWPH_HitTrace_Base"), &Z_Registration_Info_UClass_AGBWPH_HitTrace_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGBWPH_HitTrace_Base), 1234842086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_1838781541(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
