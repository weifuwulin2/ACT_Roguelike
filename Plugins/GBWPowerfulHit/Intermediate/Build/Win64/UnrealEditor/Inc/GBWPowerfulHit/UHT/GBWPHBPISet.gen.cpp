// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPHBPISet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPHBPISet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHBPI_Anim();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHBPI_Anim_NoRegister();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData;
class UScriptStruct* FGBWPH_Anim_PostureAdjuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPH_Anim_PostureAdjuestData"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPH_Anim_PostureAdjuestData>()
{
	return FGBWPH_Anim_PostureAdjuestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostureRootBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PostureRootBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollAdjustRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollAdjustRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawAdjustRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawAdjustRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRollAdjust_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRollAdjust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseYawAdjust_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseYawAdjust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPH_Anim_PostureAdjuestData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_PostureRootBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_PostureRootBoneName = { "PostureRootBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_PostureAdjuestData, PostureRootBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_PostureRootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_PostureRootBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_TargetPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_PostureAdjuestData, TargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_TargetPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_TargetPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_RollAdjustRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_RollAdjustRange = { "RollAdjustRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_PostureAdjuestData, RollAdjustRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_RollAdjustRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_RollAdjustRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_YawAdjustRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_YawAdjustRange = { "YawAdjustRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_PostureAdjuestData, YawAdjustRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_YawAdjustRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_YawAdjustRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseRollAdjust_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseRollAdjust = { "BaseRollAdjust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_PostureAdjuestData, BaseRollAdjust), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseRollAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseRollAdjust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseYawAdjust_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseYawAdjust = { "BaseYawAdjust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_PostureAdjuestData, BaseYawAdjust), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseYawAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseYawAdjust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_AdjustRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_AdjustRate = { "AdjustRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_PostureAdjuestData, AdjustRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_AdjustRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_AdjustRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_PostureRootBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_TargetPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_RollAdjustRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_YawAdjustRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseRollAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_BaseYawAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewProp_AdjustRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPH_Anim_PostureAdjuestData",
		sizeof(FGBWPH_Anim_PostureAdjuestData),
		alignof(FGBWPH_Anim_PostureAdjuestData),
		Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData.InnerSingleton, Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData;
class UScriptStruct* FGBWPH_Anim_BodyShakeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPH_Anim_BodyShakeData"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPH_Anim_BodyShakeData>()
{
	return FGBWPH_Anim_BodyShakeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Degree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Degree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPH_Anim_BodyShakeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyShakeData, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Degree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Degree = { "Degree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyShakeData, Degree), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Degree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Degree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyShakeData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Degree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewProp_Duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPH_Anim_BodyShakeData",
		sizeof(FGBWPH_Anim_BodyShakeData),
		alignof(FGBWPH_Anim_BodyShakeData),
		Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData.InnerSingleton, Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData;
class UScriptStruct* FGBWPH_Anim_BodyTwistData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPH_Anim_BodyTwistData"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPH_Anim_BodyTwistData>()
{
	return FGBWPH_Anim_BodyTwistData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPH_Anim_BodyTwistData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyTwistData, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyTwistData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_InTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyTwistData, InTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_InTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_InTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_HoldTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_HoldTime = { "HoldTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyTwistData, HoldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_HoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_HoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_OutTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_OutTime = { "OutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_Anim_BodyTwistData, OutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_OutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_OutTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_HoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewProp_OutTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPH_Anim_BodyTwistData",
		sizeof(FGBWPH_Anim_BodyTwistData),
		alignof(FGBWPH_Anim_BodyTwistData),
		Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData.InnerSingleton, Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData.InnerSingleton;
	}
	DEFINE_FUNCTION(IGBWPHBPI_Anim::execGetBodyTwistData)
	{
		P_GET_UBOOL(Z_Param_ClearData);
		P_GET_STRUCT_REF(FGBWPH_Anim_BodyTwistData,Z_Param_Out_BodyTwistData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBodyTwistData_Implementation(Z_Param_ClearData,Z_Param_Out_BodyTwistData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGBWPHBPI_Anim::execGetBodyShakeData)
	{
		P_GET_UBOOL(Z_Param_ClearData);
		P_GET_STRUCT_REF(FGBWPH_Anim_BodyShakeData,Z_Param_Out_BodyShakeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBodyShakeData_Implementation(Z_Param_ClearData,Z_Param_Out_BodyShakeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGBWPHBPI_Anim::execGetPostureAdjustData)
	{
		P_GET_STRUCT_REF(FGBWPH_Anim_PostureAdjuestData,Z_Param_Out_PostureAdjuestData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPostureAdjustData_Implementation(Z_Param_Out_PostureAdjuestData);
		P_NATIVE_END;
	}
	struct GBWPHBPI_Anim_eventGetBodyShakeData_Parms
	{
		bool ClearData;
		FGBWPH_Anim_BodyShakeData BodyShakeData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPHBPI_Anim_eventGetBodyShakeData_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GBWPHBPI_Anim_eventGetBodyTwistData_Parms
	{
		bool ClearData;
		FGBWPH_Anim_BodyTwistData BodyTwistData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPHBPI_Anim_eventGetBodyTwistData_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GBWPHBPI_Anim_eventGetPostureAdjustData_Parms
	{
		FGBWPH_Anim_PostureAdjuestData PostureAdjuestData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWPHBPI_Anim_eventGetPostureAdjustData_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IGBWPHBPI_Anim::GetBodyShakeData(bool ClearData, FGBWPH_Anim_BodyShakeData& BodyShakeData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyShakeData instead.");
		GBWPHBPI_Anim_eventGetBodyShakeData_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IGBWPHBPI_Anim::GetBodyTwistData(bool ClearData, FGBWPH_Anim_BodyTwistData& BodyTwistData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyTwistData instead.");
		GBWPHBPI_Anim_eventGetBodyTwistData_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IGBWPHBPI_Anim::GetPostureAdjustData(FGBWPH_Anim_PostureAdjuestData& PostureAdjuestData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPostureAdjustData instead.");
		GBWPHBPI_Anim_eventGetPostureAdjustData_Parms Parms;
		return Parms.ReturnValue;
	}
	void UGBWPHBPI_Anim::StaticRegisterNativesUGBWPHBPI_Anim()
	{
		UClass* Class = UGBWPHBPI_Anim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBodyShakeData", &IGBWPHBPI_Anim::execGetBodyShakeData },
			{ "GetBodyTwistData", &IGBWPHBPI_Anim::execGetBodyTwistData },
			{ "GetPostureAdjustData", &IGBWPHBPI_Anim::execGetPostureAdjustData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics
	{
		static void NewProp_ClearData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyShakeData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ClearData_SetBit(void* Obj)
	{
		((GBWPHBPI_Anim_eventGetBodyShakeData_Parms*)Obj)->ClearData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ClearData = { "ClearData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHBPI_Anim_eventGetBodyShakeData_Parms), &Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ClearData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_BodyShakeData = { "BodyShakeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHBPI_Anim_eventGetBodyShakeData_Parms, BodyShakeData), Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData, METADATA_PARAMS(nullptr, 0) }; // 3814108344
	void Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPHBPI_Anim_eventGetBodyShakeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHBPI_Anim_eventGetBodyShakeData_Parms), &Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ClearData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_BodyShakeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Anim" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHBPI_Anim, nullptr, "GetBodyShakeData", nullptr, nullptr, sizeof(GBWPHBPI_Anim_eventGetBodyShakeData_Parms), Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics
	{
		static void NewProp_ClearData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyTwistData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ClearData_SetBit(void* Obj)
	{
		((GBWPHBPI_Anim_eventGetBodyTwistData_Parms*)Obj)->ClearData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ClearData = { "ClearData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHBPI_Anim_eventGetBodyTwistData_Parms), &Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ClearData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_BodyTwistData = { "BodyTwistData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHBPI_Anim_eventGetBodyTwistData_Parms, BodyTwistData), Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData, METADATA_PARAMS(nullptr, 0) }; // 2203716223
	void Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPHBPI_Anim_eventGetBodyTwistData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHBPI_Anim_eventGetBodyTwistData_Parms), &Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ClearData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_BodyTwistData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Anim" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHBPI_Anim, nullptr, "GetBodyTwistData", nullptr, nullptr, sizeof(GBWPHBPI_Anim_eventGetBodyTwistData_Parms), Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostureAdjuestData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::NewProp_PostureAdjuestData = { "PostureAdjuestData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHBPI_Anim_eventGetPostureAdjustData_Parms, PostureAdjuestData), Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData, METADATA_PARAMS(nullptr, 0) }; // 89759198
	void Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPHBPI_Anim_eventGetPostureAdjustData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHBPI_Anim_eventGetPostureAdjustData_Parms), &Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::NewProp_PostureAdjuestData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Anim" },
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHBPI_Anim, nullptr, "GetPostureAdjustData", nullptr, nullptr, sizeof(GBWPHBPI_Anim_eventGetPostureAdjustData_Parms), Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPHBPI_Anim);
	UClass* Z_Construct_UClass_UGBWPHBPI_Anim_NoRegister()
	{
		return UGBWPHBPI_Anim::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPHBPI_Anim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPHBPI_Anim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPHBPI_Anim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyShakeData, "GetBodyShakeData" }, // 3889855710
		{ &Z_Construct_UFunction_UGBWPHBPI_Anim_GetBodyTwistData, "GetBodyTwistData" }, // 2438271365
		{ &Z_Construct_UFunction_UGBWPHBPI_Anim_GetPostureAdjustData, "GetPostureAdjustData" }, // 364414611
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHBPI_Anim_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHBPISet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPHBPI_Anim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGBWPHBPI_Anim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPHBPI_Anim_Statics::ClassParams = {
		&UGBWPHBPI_Anim::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPHBPI_Anim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHBPI_Anim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPHBPI_Anim()
	{
		if (!Z_Registration_Info_UClass_UGBWPHBPI_Anim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPHBPI_Anim.OuterSingleton, Z_Construct_UClass_UGBWPHBPI_Anim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPHBPI_Anim.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPHBPI_Anim>()
	{
		return UGBWPHBPI_Anim::StaticClass();
	}
	UGBWPHBPI_Anim::UGBWPHBPI_Anim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPHBPI_Anim);
	UGBWPHBPI_Anim::~UGBWPHBPI_Anim() {}
	static FName NAME_UGBWPHBPI_Anim_GetBodyShakeData = FName(TEXT("GetBodyShakeData"));
	bool IGBWPHBPI_Anim::Execute_GetBodyShakeData(UObject* O, bool ClearData, FGBWPH_Anim_BodyShakeData& BodyShakeData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGBWPHBPI_Anim::StaticClass()));
		GBWPHBPI_Anim_eventGetBodyShakeData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGBWPHBPI_Anim_GetBodyShakeData);
		if (Func)
		{
			Parms.ClearData=ClearData;
			Parms.BodyShakeData=BodyShakeData;
			O->ProcessEvent(Func, &Parms);
			BodyShakeData=Parms.BodyShakeData;
		}
		else if (auto I = (IGBWPHBPI_Anim*)(O->GetNativeInterfaceAddress(UGBWPHBPI_Anim::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyShakeData_Implementation(ClearData,BodyShakeData);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGBWPHBPI_Anim_GetBodyTwistData = FName(TEXT("GetBodyTwistData"));
	bool IGBWPHBPI_Anim::Execute_GetBodyTwistData(UObject* O, bool ClearData, FGBWPH_Anim_BodyTwistData& BodyTwistData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGBWPHBPI_Anim::StaticClass()));
		GBWPHBPI_Anim_eventGetBodyTwistData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGBWPHBPI_Anim_GetBodyTwistData);
		if (Func)
		{
			Parms.ClearData=ClearData;
			Parms.BodyTwistData=BodyTwistData;
			O->ProcessEvent(Func, &Parms);
			BodyTwistData=Parms.BodyTwistData;
		}
		else if (auto I = (IGBWPHBPI_Anim*)(O->GetNativeInterfaceAddress(UGBWPHBPI_Anim::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyTwistData_Implementation(ClearData,BodyTwistData);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGBWPHBPI_Anim_GetPostureAdjustData = FName(TEXT("GetPostureAdjustData"));
	bool IGBWPHBPI_Anim::Execute_GetPostureAdjustData(UObject* O, FGBWPH_Anim_PostureAdjuestData& PostureAdjuestData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGBWPHBPI_Anim::StaticClass()));
		GBWPHBPI_Anim_eventGetPostureAdjustData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGBWPHBPI_Anim_GetPostureAdjustData);
		if (Func)
		{
			Parms.PostureAdjuestData=PostureAdjuestData;
			O->ProcessEvent(Func, &Parms);
			PostureAdjuestData=Parms.PostureAdjuestData;
		}
		else if (auto I = (IGBWPHBPI_Anim*)(O->GetNativeInterfaceAddress(UGBWPHBPI_Anim::StaticClass())))
		{
			Parms.ReturnValue = I->GetPostureAdjustData_Implementation(PostureAdjuestData);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_Statics::ScriptStructInfo[] = {
		{ FGBWPH_Anim_PostureAdjuestData::StaticStruct, Z_Construct_UScriptStruct_FGBWPH_Anim_PostureAdjuestData_Statics::NewStructOps, TEXT("GBWPH_Anim_PostureAdjuestData"), &Z_Registration_Info_UScriptStruct_GBWPH_Anim_PostureAdjuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPH_Anim_PostureAdjuestData), 89759198U) },
		{ FGBWPH_Anim_BodyShakeData::StaticStruct, Z_Construct_UScriptStruct_FGBWPH_Anim_BodyShakeData_Statics::NewStructOps, TEXT("GBWPH_Anim_BodyShakeData"), &Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyShakeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPH_Anim_BodyShakeData), 3814108344U) },
		{ FGBWPH_Anim_BodyTwistData::StaticStruct, Z_Construct_UScriptStruct_FGBWPH_Anim_BodyTwistData_Statics::NewStructOps, TEXT("GBWPH_Anim_BodyTwistData"), &Z_Registration_Info_UScriptStruct_GBWPH_Anim_BodyTwistData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPH_Anim_BodyTwistData), 2203716223U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWPHBPI_Anim, UGBWPHBPI_Anim::StaticClass, TEXT("UGBWPHBPI_Anim"), &Z_Registration_Info_UClass_UGBWPHBPI_Anim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPHBPI_Anim), 3853838662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_900301610(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHBPISet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
