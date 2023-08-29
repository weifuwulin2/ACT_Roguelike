// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPowerfulHitFuncLib.h"
#include "GameplayTagContainer.h"
#include "GBWPowerfulHit/Public/GBWPowerfulHitNetWorkObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPowerfulHitFuncLib() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionMode();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_AGBWPH_HitTrace_Base_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib_NoRegister();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo;
class UScriptStruct* FGBWPHSerializationObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHSerializationObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHSerializationObjectInfo>()
{
	return FGBWPHSerializationObjectInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "PH_SerializationObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHSerializationObjectInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfo, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfo, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectBytes_Inner = { "ObjectBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectBytes_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectBytes = { "ObjectBytes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfo, ObjectBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectBytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewProp_ObjectBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHSerializationObjectInfo",
		sizeof(FGBWPHSerializationObjectInfo),
		alignof(FGBWPHSerializationObjectInfo),
		Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment;
class UScriptStruct* FGBWPHSerializationObjectInfoFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHSerializationObjectInfoFragment"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHSerializationObjectInfoFragment>()
{
	return FGBWPHSerializationObjectInfoFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "PH_SerializationObjectInfo_Fragment" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHSerializationObjectInfoFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfoFragment, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfoFragment, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectBytes_Inner = { "ObjectBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectBytes_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectBytes = { "ObjectBytes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfoFragment, ObjectBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectBytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewProp_ObjectBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHSerializationObjectInfoFragment",
		sizeof(FGBWPHSerializationObjectInfoFragment),
		alignof(FGBWPHSerializationObjectInfoFragment),
		Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet;
class UScriptStruct* FGBWPHSerializationObjectInfoFragmentSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHSerializationObjectInfoFragmentSet"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHSerializationObjectInfoFragmentSet>()
{
	return FGBWPHSerializationObjectInfoFragmentSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalLength_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectInfoFragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectInfoFragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectInfoFragments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "PH_SerializationObjectInfo_FragmentSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHSerializationObjectInfoFragmentSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfoFragmentSet, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfoFragmentSet, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_TotalLength_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_TotalLength = { "TotalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfoFragmentSet, TotalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_TotalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_TotalLength_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectInfoFragments_Inner = { "ObjectInfoFragments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment, METADATA_PARAMS(nullptr, 0) }; // 1650587120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectInfoFragments_MetaData[] = {
		{ "Category", "ObjectInfo" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectInfoFragments = { "ObjectInfoFragments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHSerializationObjectInfoFragmentSet, ObjectInfoFragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectInfoFragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectInfoFragments_MetaData)) }; // 1650587120
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_TotalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectInfoFragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewProp_ObjectInfoFragments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPHSerializationObjectInfoFragmentSet",
		sizeof(FGBWPHSerializationObjectInfoFragmentSet),
		alignof(FGBWPHSerializationObjectInfoFragmentSet),
		Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet.InnerSingleton;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execAddSkeletalMeshComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBaseName);
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSkelMesh);
		P_GET_OBJECT(USceneComponent,Z_Param_ParentComponentAttachTo);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketNameAttachTo);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MasterPoseComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_ComponentTagToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=UGBWPowerfulHitFuncLib::AddSkeletalMeshComponent(Z_Param_Actor,Z_Param_InBaseName,Z_Param_InSkelMesh,Z_Param_ParentComponentAttachTo,Z_Param_SocketNameAttachTo,Z_Param_MasterPoseComponent,Z_Param_ComponentTagToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGetComponentSpaceTransformRefPose)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UGBWPowerfulHitFuncLib::GetComponentSpaceTransformRefPose(Z_Param_MeshComponent,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWDeserializeObjectFromFragmentSet)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_STRUCT(FGBWPHSerializationObjectInfoFragmentSet,Z_Param_SerializationObjectInfoFragmentSet);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWDeserializeObjectFromFragmentSet(Z_Param_Outer,Z_Param_SerializationObjectInfoFragmentSet,Z_Param_Out_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWSerializeObjectToFragmentSet)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_FragmentLength);
		P_GET_STRUCT_REF(FGBWPHSerializationObjectInfoFragmentSet,Z_Param_Out_SerializationObjectInfoFragmentSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWSerializeObjectToFragmentSet(Z_Param_ObjectIn,Z_Param_FragmentLength,Z_Param_Out_SerializationObjectInfoFragmentSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWRebuildSerializationObject)
	{
		P_GET_STRUCT(FGBWPHSerializationObjectInfoFragmentSet,Z_Param_SerializationObjectInfoFragmentSet);
		P_GET_STRUCT_REF(FGBWPHSerializationObjectInfo,Z_Param_Out_SerializationObjectInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWRebuildSerializationObject(Z_Param_SerializationObjectInfoFragmentSet,Z_Param_Out_SerializationObjectInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWDivideSerializationObject)
	{
		P_GET_STRUCT(FGBWPHSerializationObjectInfo,Z_Param_SerializationObjectInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_FragmentLength);
		P_GET_STRUCT_REF(FGBWPHSerializationObjectInfoFragmentSet,Z_Param_Out_SerializationObjectInfoFragmentSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWDivideSerializationObject(Z_Param_SerializationObjectInfo,Z_Param_FragmentLength,Z_Param_Out_SerializationObjectInfoFragmentSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWDeserializeObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_STRUCT(FGBWPHSerializationObjectInfo,Z_Param_SerializationObjectInfo);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWDeserializeObject(Z_Param_Outer,Z_Param_SerializationObjectInfo,Z_Param_Out_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWSerializeObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectIn);
		P_GET_STRUCT_REF(FGBWPHSerializationObjectInfo,Z_Param_Out_SerializationObjectInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWSerializeObject(Z_Param_ObjectIn,Z_Param_Out_SerializationObjectInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWCloneObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectIn);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGBWPowerfulHitFuncLib::GBWCloneObject(Z_Param_ObjectIn,Z_Param_Out_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWSetAnimRootMotionTranslationScale)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAnimRootMotionTranslationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWSetAnimRootMotionTranslationScale(Z_Param_Character,Z_Param_InAnimRootMotionTranslationScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWSetSkeletalMeshAndAnimInstance)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_STRUCT(FTransform,Z_Param_MeshTransform);
		P_GET_OBJECT(UClass,Z_Param_AnimInstance);
		P_GET_UBOOL(Z_Param_bReinitPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWSetSkeletalMeshAndAnimInstance(Z_Param_SkeletalMeshComponent,Z_Param_SkeletalMesh,Z_Param_MeshTransform,Z_Param_AnimInstance,Z_Param_bReinitPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWSetAnimInstanceClass)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_GET_OBJECT(UClass,Z_Param_NewClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWSetAnimInstanceClass(Z_Param_Mesh,Z_Param_NewClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWIsSKMCompatibleWithMontage)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWIsSKMCompatibleWithMontage(Z_Param_Mesh,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWGetRootMotionMode)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_RootMotionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWGetRootMotionMode(Z_Param_AnimInstance,(TEnumAsByte<ERootMotionMode::Type>&)(Z_Param_Out_RootMotionMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWGetRootMotionDataFormMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimationMontage);
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInterval);
		P_GET_TARRAY_REF(float,Z_Param_Out_TimeArr);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_TransformArr);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TotalTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWGetRootMotionDataFormMontage(Z_Param_AnimationMontage,Z_Param_SectionName,Z_Param_TimeInterval,Z_Param_Out_TimeArr,Z_Param_Out_TransformArr,Z_Param_Out_TotalTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWGetRootMotionDeltaTransform)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SKMComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWGetRootMotionDeltaTransform(Z_Param_SKMComponent,Z_Param_DeltaTime,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWGetSectionNameFromMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWGetSectionNameFromMontage(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWMakeHitTraceActor)
	{
		P_GET_OBJECT(UClass,Z_Param_HitTraceActorClass);
		P_GET_STRUCT(FGBWPH_HitTraceParameter,Z_Param_HitTraceParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGBWPH_HitTrace_Base**)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWMakeHitTraceActor(Z_Param_HitTraceActorClass,Z_Param_HitTraceParameter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execIsLocalOwn)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::IsLocalOwn(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execForceDestroyComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPowerfulHitFuncLib::ForceDestroyComponent(Z_Param_ActorComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGetChildTagsRecurse)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UGBWPowerfulHitFuncLib::GetChildTagsRecurse(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGetDirectChildTags)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UGBWPowerfulHitFuncLib::GetDirectChildTags(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	void UGBWPowerfulHitFuncLib::StaticRegisterNativesUGBWPowerfulHitFuncLib()
	{
		UClass* Class = UGBWPowerfulHitFuncLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSkeletalMeshComponent", &UGBWPowerfulHitFuncLib::execAddSkeletalMeshComponent },
			{ "ForceDestroyComponent", &UGBWPowerfulHitFuncLib::execForceDestroyComponent },
			{ "GBWCloneObject", &UGBWPowerfulHitFuncLib::execGBWCloneObject },
			{ "GBWDeserializeObject", &UGBWPowerfulHitFuncLib::execGBWDeserializeObject },
			{ "GBWDeserializeObjectFromFragmentSet", &UGBWPowerfulHitFuncLib::execGBWDeserializeObjectFromFragmentSet },
			{ "GBWDivideSerializationObject", &UGBWPowerfulHitFuncLib::execGBWDivideSerializationObject },
			{ "GBWGetRootMotionDataFormMontage", &UGBWPowerfulHitFuncLib::execGBWGetRootMotionDataFormMontage },
			{ "GBWGetRootMotionDeltaTransform", &UGBWPowerfulHitFuncLib::execGBWGetRootMotionDeltaTransform },
			{ "GBWGetRootMotionMode", &UGBWPowerfulHitFuncLib::execGBWGetRootMotionMode },
			{ "GBWGetSectionNameFromMontage", &UGBWPowerfulHitFuncLib::execGBWGetSectionNameFromMontage },
			{ "GBWIsSKMCompatibleWithMontage", &UGBWPowerfulHitFuncLib::execGBWIsSKMCompatibleWithMontage },
			{ "GBWMakeHitTraceActor", &UGBWPowerfulHitFuncLib::execGBWMakeHitTraceActor },
			{ "GBWRebuildSerializationObject", &UGBWPowerfulHitFuncLib::execGBWRebuildSerializationObject },
			{ "GBWSerializeObject", &UGBWPowerfulHitFuncLib::execGBWSerializeObject },
			{ "GBWSerializeObjectToFragmentSet", &UGBWPowerfulHitFuncLib::execGBWSerializeObjectToFragmentSet },
			{ "GBWSetAnimInstanceClass", &UGBWPowerfulHitFuncLib::execGBWSetAnimInstanceClass },
			{ "GBWSetAnimRootMotionTranslationScale", &UGBWPowerfulHitFuncLib::execGBWSetAnimRootMotionTranslationScale },
			{ "GBWSetSkeletalMeshAndAnimInstance", &UGBWPowerfulHitFuncLib::execGBWSetSkeletalMeshAndAnimInstance },
			{ "GetChildTagsRecurse", &UGBWPowerfulHitFuncLib::execGetChildTagsRecurse },
			{ "GetComponentSpaceTransformRefPose", &UGBWPowerfulHitFuncLib::execGetComponentSpaceTransformRefPose },
			{ "GetDirectChildTags", &UGBWPowerfulHitFuncLib::execGetDirectChildTags },
			{ "IsLocalOwn", &UGBWPowerfulHitFuncLib::execIsLocalOwn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics
	{
		struct GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms
		{
			AActor* Actor;
			FName InBaseName;
			USkeletalMesh* InSkelMesh;
			USceneComponent* ParentComponentAttachTo;
			FName SocketNameAttachTo;
			USkeletalMeshComponent* MasterPoseComponent;
			FName ComponentTagToAdd;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBaseName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkelMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentAttachTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentComponentAttachTo;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNameAttachTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterPoseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterPoseComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTagToAdd;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_InBaseName = { "InBaseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, InBaseName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_InSkelMesh = { "InSkelMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, InSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ParentComponentAttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ParentComponentAttachTo = { "ParentComponentAttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, ParentComponentAttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ParentComponentAttachTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ParentComponentAttachTo_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_SocketNameAttachTo = { "SocketNameAttachTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, SocketNameAttachTo), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_MasterPoseComponent = { "MasterPoseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, MasterPoseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_MasterPoseComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ComponentTagToAdd = { "ComponentTagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, ComponentTagToAdd), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_InBaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_InSkelMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ParentComponentAttachTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_SocketNameAttachTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_MasterPoseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ComponentTagToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Scratch|Tools" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "AddSkeletalMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::GBWPowerfulHitFuncLib_eventAddSkeletalMeshComponent_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics
	{
		struct GBWPowerfulHitFuncLib_eventForceDestroyComponent_Parms
		{
			UActorComponent* ActorComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventForceDestroyComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ActorComponent_MetaData)) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventForceDestroyComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventForceDestroyComponent_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ActorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "ForceDestroyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::GBWPowerfulHitFuncLib_eventForceDestroyComponent_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWCloneObject_Parms
		{
			UObject* ObjectIn;
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::NewProp_ObjectIn = { "ObjectIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWCloneObject_Parms, ObjectIn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWCloneObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::NewProp_ObjectIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Tools" },
		{ "Comment", "//For Object Start\n" },
		{ "DeterminesOutputType", "Class" },
		{ "DisplayName", "CloneObject" },
		{ "DynamicOutputParam", "Object" },
		{ "Keywords", "CloneObject" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
		{ "ToolTip", "For Object Start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWCloneObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::GBWPowerfulHitFuncLib_eventGBWCloneObject_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWDeserializeObject_Parms
		{
			UObject* Outer;
			FGBWPHSerializationObjectInfo SerializationObjectInfo;
			UObject* Object;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDeserializeObject_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_SerializationObjectInfo = { "SerializationObjectInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDeserializeObject_Parms, SerializationObjectInfo), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo, METADATA_PARAMS(nullptr, 0) }; // 2908093081
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDeserializeObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWDeserializeObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWDeserializeObject_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_SerializationObjectInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Tools" },
		{ "DisplayName", "DeserializeObject" },
		{ "Keywords", "DeserializeObject" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWDeserializeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::GBWPowerfulHitFuncLib_eventGBWDeserializeObject_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWDeserializeObjectFromFragmentSet_Parms
		{
			UObject* Outer;
			FGBWPHSerializationObjectInfoFragmentSet SerializationObjectInfoFragmentSet;
			UObject* Object;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfoFragmentSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDeserializeObjectFromFragmentSet_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_SerializationObjectInfoFragmentSet = { "SerializationObjectInfoFragmentSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDeserializeObjectFromFragmentSet_Parms, SerializationObjectInfoFragmentSet), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet, METADATA_PARAMS(nullptr, 0) }; // 3408677144
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDeserializeObjectFromFragmentSet_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWDeserializeObjectFromFragmentSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWDeserializeObjectFromFragmentSet_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_SerializationObjectInfoFragmentSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Tools" },
		{ "DisplayName", "DeserializeObjectFromFragmentSet" },
		{ "Keywords", "DeserializeObjectFromFragmentSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWDeserializeObjectFromFragmentSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::GBWPowerfulHitFuncLib_eventGBWDeserializeObjectFromFragmentSet_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWDivideSerializationObject_Parms
		{
			FGBWPHSerializationObjectInfo SerializationObjectInfo;
			int32 FragmentLength;
			FGBWPHSerializationObjectInfoFragmentSet SerializationObjectInfoFragmentSet;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FragmentLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfoFragmentSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_SerializationObjectInfo = { "SerializationObjectInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDivideSerializationObject_Parms, SerializationObjectInfo), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo, METADATA_PARAMS(nullptr, 0) }; // 2908093081
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_FragmentLength = { "FragmentLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDivideSerializationObject_Parms, FragmentLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_SerializationObjectInfoFragmentSet = { "SerializationObjectInfoFragmentSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWDivideSerializationObject_Parms, SerializationObjectInfoFragmentSet), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet, METADATA_PARAMS(nullptr, 0) }; // 3408677144
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWDivideSerializationObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWDivideSerializationObject_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_SerializationObjectInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_FragmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_SerializationObjectInfoFragmentSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Tools" },
		{ "DisplayName", "DivideSerializationObject" },
		{ "Keywords", "DivideSerializationObject" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWDivideSerializationObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::GBWPowerfulHitFuncLib_eventGBWDivideSerializationObject_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms
		{
			UAnimMontage* AnimationMontage;
			FName SectionName;
			float TimeInterval;
			TArray<float> TimeArr;
			TArray<FTransform> TransformArr;
			float TotalTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInterval;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeArr_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeArr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformArr_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformArr;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_AnimationMontage = { "AnimationMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms, AnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_SectionName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TimeInterval = { "TimeInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms, TimeInterval), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TimeArr_Inner = { "TimeArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TimeArr = { "TimeArr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms, TimeArr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TransformArr_Inner = { "TransformArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TransformArr = { "TransformArr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms, TransformArr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms, TotalTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_AnimationMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TimeInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TimeArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TimeArr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TransformArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TransformArr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_TotalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "DisplayName", "GetRootMotionDataFormMontage" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWGetRootMotionDataFormMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::GBWPowerfulHitFuncLib_eventGBWGetRootMotionDataFormMontage_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWGetRootMotionDeltaTransform_Parms
		{
			USkeletalMeshComponent* SKMComponent;
			float DeltaTime;
			FTransform Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SKMComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SKMComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_SKMComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_SKMComponent = { "SKMComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDeltaTransform_Parms, SKMComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_SKMComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_SKMComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDeltaTransform_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDeltaTransform_Parms, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWGetRootMotionDeltaTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWGetRootMotionDeltaTransform_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_SKMComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "DisplayName", "GetRootMotionDeltaTransform" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWGetRootMotionDeltaTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::GBWPowerfulHitFuncLib_eventGBWGetRootMotionDeltaTransform_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWGetRootMotionMode_Parms
		{
			UAnimInstance* AnimInstance;
			TEnumAsByte<ERootMotionMode::Type> RootMotionMode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionMode_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_RootMotionMode = { "RootMotionMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetRootMotionMode_Parms, RootMotionMode), Z_Construct_UEnum_Engine_ERootMotionMode, METADATA_PARAMS(nullptr, 0) }; // 359971998
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWGetRootMotionMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWGetRootMotionMode_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_RootMotionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "DisplayName", "GetRootMotionMode" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWGetRootMotionMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::GBWPowerfulHitFuncLib_eventGBWGetRootMotionMode_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms
		{
			UAnimMontage* Montage;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "Comment", "//For Anim Start\n" },
		{ "DisplayName", "GetSectionNameFromMontage" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
		{ "ToolTip", "For Anim Start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWGetSectionNameFromMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWIsSKMCompatibleWithMontage_Parms
		{
			USkeletalMeshComponent* Mesh;
			UAnimMontage* Montage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWIsSKMCompatibleWithMontage_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWIsSKMCompatibleWithMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWIsSKMCompatibleWithMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWIsSKMCompatibleWithMontage_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "DisplayName", "IsSKMCompatibleWithMontage" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWIsSKMCompatibleWithMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::GBWPowerfulHitFuncLib_eventGBWIsSKMCompatibleWithMontage_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWMakeHitTraceActor_Parms
		{
			const TSubclassOf<AGBWPH_HitTrace_Base>  HitTraceActorClass;
			FGBWPH_HitTraceParameter HitTraceParameter;
			AGBWPH_HitTrace_Base* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTraceActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HitTraceActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitTraceParameter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_HitTraceActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_HitTraceActorClass = { "HitTraceActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWMakeHitTraceActor_Parms, HitTraceActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGBWPH_HitTrace_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_HitTraceActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_HitTraceActorClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_HitTraceParameter = { "HitTraceParameter", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWMakeHitTraceActor_Parms, HitTraceParameter), Z_Construct_UScriptStruct_FGBWPH_HitTraceParameter, METADATA_PARAMS(nullptr, 0) }; // 519615884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWMakeHitTraceActor_Parms, ReturnValue), Z_Construct_UClass_AGBWPH_HitTrace_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_HitTraceActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_HitTraceParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|HitTrace" },
		{ "Comment", "//For HitTrace Start\n" },
		{ "DisplayName", "MakeHitTraceActor" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
		{ "ToolTip", "For HitTrace Start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWMakeHitTraceActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::GBWPowerfulHitFuncLib_eventGBWMakeHitTraceActor_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWRebuildSerializationObject_Parms
		{
			FGBWPHSerializationObjectInfoFragmentSet SerializationObjectInfoFragmentSet;
			FGBWPHSerializationObjectInfo SerializationObjectInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfoFragmentSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_SerializationObjectInfoFragmentSet = { "SerializationObjectInfoFragmentSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWRebuildSerializationObject_Parms, SerializationObjectInfoFragmentSet), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet, METADATA_PARAMS(nullptr, 0) }; // 3408677144
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_SerializationObjectInfo = { "SerializationObjectInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWRebuildSerializationObject_Parms, SerializationObjectInfo), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo, METADATA_PARAMS(nullptr, 0) }; // 2908093081
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWRebuildSerializationObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWRebuildSerializationObject_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_SerializationObjectInfoFragmentSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_SerializationObjectInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Tools" },
		{ "DisplayName", "RebuildSerializationObject" },
		{ "Keywords", "RebuildSerializationObject" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWRebuildSerializationObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::GBWPowerfulHitFuncLib_eventGBWRebuildSerializationObject_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWSerializeObject_Parms
		{
			UObject* ObjectIn;
			FGBWPHSerializationObjectInfo SerializationObjectInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_ObjectIn = { "ObjectIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSerializeObject_Parms, ObjectIn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_SerializationObjectInfo = { "SerializationObjectInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSerializeObject_Parms, SerializationObjectInfo), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo, METADATA_PARAMS(nullptr, 0) }; // 2908093081
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWSerializeObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWSerializeObject_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_ObjectIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_SerializationObjectInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Tools" },
		{ "DisplayName", "SerializeObject" },
		{ "Keywords", "SerializeObject" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWSerializeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::GBWPowerfulHitFuncLib_eventGBWSerializeObject_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWSerializeObjectToFragmentSet_Parms
		{
			UObject* ObjectIn;
			int32 FragmentLength;
			FGBWPHSerializationObjectInfoFragmentSet SerializationObjectInfoFragmentSet;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FragmentLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializationObjectInfoFragmentSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_ObjectIn = { "ObjectIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSerializeObjectToFragmentSet_Parms, ObjectIn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_FragmentLength = { "FragmentLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSerializeObjectToFragmentSet_Parms, FragmentLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_SerializationObjectInfoFragmentSet = { "SerializationObjectInfoFragmentSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSerializeObjectToFragmentSet_Parms, SerializationObjectInfoFragmentSet), Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet, METADATA_PARAMS(nullptr, 0) }; // 3408677144
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWSerializeObjectToFragmentSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWSerializeObjectToFragmentSet_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_ObjectIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_FragmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_SerializationObjectInfoFragmentSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Tools" },
		{ "DisplayName", "SerializeObjectToFragmentSet" },
		{ "Keywords", "SerializeObjectToFragmentSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWSerializeObjectToFragmentSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::GBWPowerfulHitFuncLib_eventGBWSerializeObjectToFragmentSet_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWSetAnimInstanceClass_Parms
		{
			USkeletalMeshComponent* Mesh;
			UClass* NewClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetAnimInstanceClass_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetAnimInstanceClass_Parms, NewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWSetAnimInstanceClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWSetAnimInstanceClass_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_NewClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "DisplayName", "SetAnimInstanceClass" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWSetAnimInstanceClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::GBWPowerfulHitFuncLib_eventGBWSetAnimInstanceClass_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWSetAnimRootMotionTranslationScale_Parms
		{
			ACharacter* Character;
			float InAnimRootMotionTranslationScale;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAnimRootMotionTranslationScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetAnimRootMotionTranslationScale_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_InAnimRootMotionTranslationScale = { "InAnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetAnimRootMotionTranslationScale_Parms, InAnimRootMotionTranslationScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWSetAnimRootMotionTranslationScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWSetAnimRootMotionTranslationScale_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_InAnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "CPP_Default_InAnimRootMotionTranslationScale", "1.000000" },
		{ "DisplayName", "SetAnimRootMotionTranslationScale" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWSetAnimRootMotionTranslationScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::GBWPowerfulHitFuncLib_eventGBWSetAnimRootMotionTranslationScale_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			USkeletalMesh* SkeletalMesh;
			FTransform MeshTransform;
			UClass* AnimInstance;
			bool bReinitPose;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimInstance;
		static void NewProp_bReinitPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitPose;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_MeshTransform = { "MeshTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms, AnimInstance), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_bReinitPose_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms*)Obj)->bReinitPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_bReinitPose = { "bReinitPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_bReinitPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_MeshTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_bReinitPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Animation" },
		{ "CPP_Default_bReinitPose", "false" },
		{ "DisplayName", "SetSkeletalMeshAndAnimInstance" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWSetSkeletalMeshAndAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::GBWPowerfulHitFuncLib_eventGBWSetSkeletalMeshAndAnimInstance_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGetChildTagsRecurse_Parms
		{
			FGameplayTag Tag;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGetChildTagsRecurse_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGetChildTagsRecurse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "GBW|PowerfulHit|GameplayTag" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GetChildTagsRecurse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::GBWPowerfulHitFuncLib_eventGetChildTagsRecurse_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGetComponentSpaceTransformRefPose_Parms
		{
			USkeletalMeshComponent* MeshComponent;
			FName BoneName;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGetComponentSpaceTransformRefPose_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGetComponentSpaceTransformRefPose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGetComponentSpaceTransformRefPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Scratch|Tools" },
		{ "Comment", "//For Scratch Start\n" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
		{ "ToolTip", "For Scratch Start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GetComponentSpaceTransformRefPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::GBWPowerfulHitFuncLib_eventGetComponentSpaceTransformRefPose_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGetDirectChildTags_Parms
		{
			FGameplayTag Tag;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGetDirectChildTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGetDirectChildTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "GBW|PowerfulHit|GameplayTag" },
		{ "Comment", "//For CommonTools Start\n" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
		{ "ToolTip", "For CommonTools Start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GetDirectChildTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::GBWPowerfulHitFuncLib_eventGetDirectChildTags_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics
	{
		struct GBWPowerfulHitFuncLib_eventIsLocalOwn_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventIsLocalOwn_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPowerfulHitFuncLib_eventIsLocalOwn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPowerfulHitFuncLib_eventIsLocalOwn_Parms), &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|PowerfulHit|Net" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "IsLocalOwn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::GBWPowerfulHitFuncLib_eventIsLocalOwn_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPowerfulHitFuncLib);
	UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib_NoRegister()
	{
		return UGBWPowerfulHitFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_AddSkeletalMeshComponent, "AddSkeletalMeshComponent" }, // 3653658332
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_ForceDestroyComponent, "ForceDestroyComponent" }, // 466950742
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWCloneObject, "GBWCloneObject" }, // 3729293911
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObject, "GBWDeserializeObject" }, // 2829514069
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDeserializeObjectFromFragmentSet, "GBWDeserializeObjectFromFragmentSet" }, // 1777820683
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWDivideSerializationObject, "GBWDivideSerializationObject" }, // 297782500
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDataFormMontage, "GBWGetRootMotionDataFormMontage" }, // 3521176055
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionDeltaTransform, "GBWGetRootMotionDeltaTransform" }, // 4026564059
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetRootMotionMode, "GBWGetRootMotionMode" }, // 90457882
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage, "GBWGetSectionNameFromMontage" }, // 3737121289
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWIsSKMCompatibleWithMontage, "GBWIsSKMCompatibleWithMontage" }, // 3963359757
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWMakeHitTraceActor, "GBWMakeHitTraceActor" }, // 4133120358
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWRebuildSerializationObject, "GBWRebuildSerializationObject" }, // 4149485693
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObject, "GBWSerializeObject" }, // 1250181204
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSerializeObjectToFragmentSet, "GBWSerializeObjectToFragmentSet" }, // 1848220697
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimInstanceClass, "GBWSetAnimInstanceClass" }, // 3994849381
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetAnimRootMotionTranslationScale, "GBWSetAnimRootMotionTranslationScale" }, // 3526632310
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWSetSkeletalMeshAndAnimInstance, "GBWSetSkeletalMeshAndAnimInstance" }, // 1128244300
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetChildTagsRecurse, "GetChildTagsRecurse" }, // 3123330952
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetComponentSpaceTransformRefPose, "GetComponentSpaceTransformRefPose" }, // 3703442664
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GetDirectChildTags, "GetDirectChildTags" }, // 3622087564
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_IsLocalOwn, "IsLocalOwn" }, // 3681839432
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GBWPowerfulHitFuncLib.h" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPowerfulHitFuncLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::ClassParams = {
		&UGBWPowerfulHitFuncLib::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib()
	{
		if (!Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib.OuterSingleton, Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPowerfulHitFuncLib>()
	{
		return UGBWPowerfulHitFuncLib::StaticClass();
	}
	UGBWPowerfulHitFuncLib::UGBWPowerfulHitFuncLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPowerfulHitFuncLib);
	UGBWPowerfulHitFuncLib::~UGBWPowerfulHitFuncLib() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ScriptStructInfo[] = {
		{ FGBWPHSerializationObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfo_Statics::NewStructOps, TEXT("GBWPHSerializationObjectInfo"), &Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHSerializationObjectInfo), 2908093081U) },
		{ FGBWPHSerializationObjectInfoFragment::StaticStruct, Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragment_Statics::NewStructOps, TEXT("GBWPHSerializationObjectInfoFragment"), &Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHSerializationObjectInfoFragment), 1650587120U) },
		{ FGBWPHSerializationObjectInfoFragmentSet::StaticStruct, Z_Construct_UScriptStruct_FGBWPHSerializationObjectInfoFragmentSet_Statics::NewStructOps, TEXT("GBWPHSerializationObjectInfoFragmentSet"), &Z_Registration_Info_UScriptStruct_GBWPHSerializationObjectInfoFragmentSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHSerializationObjectInfoFragmentSet), 3408677144U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWPowerfulHitFuncLib, UGBWPowerfulHitFuncLib::StaticClass, TEXT("UGBWPowerfulHitFuncLib"), &Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPowerfulHitFuncLib), 1216291119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_135101935(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
