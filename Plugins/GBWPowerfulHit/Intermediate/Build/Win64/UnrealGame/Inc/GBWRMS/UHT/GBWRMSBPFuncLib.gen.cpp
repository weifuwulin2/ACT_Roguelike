// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWRMS/Public/RMS/GBWRMSBPFuncLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWRMSBPFuncLib() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	GBWRMS_API UClass* Z_Construct_UClass_UGBWRMSBPFuncLib();
	GBWRMS_API UClass* Z_Construct_UClass_UGBWRMSBPFuncLib_NoRegister();
	GBWRMS_API UClass* Z_Construct_UClass_UGBWRMSInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GBWRMS();
// End Cross Module References
	DEFINE_FUNCTION(UGBWRMSBPFuncLib::execGBWRMS_GetCharacterViewInfo)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ViewLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ViewRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWRMSBPFuncLib::GBWRMS_GetCharacterViewInfo(Z_Param_Character,Z_Param_Out_ViewLocation,Z_Param_Out_ViewRotation,Z_Param_Out_ForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWRMSBPFuncLib::execGBWRMS_IsRMSCommonActive)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWRMSBPFuncLib::GBWRMS_IsRMSCommonActive(Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWRMSBPFuncLib::execGBWRMS_StopRMSCommon)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWRMSBPFuncLib::GBWRMS_StopRMSCommon(Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWRMSBPFuncLib::execGBWRMS_Common)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InstanceName);
		P_GET_TINTERFACE(IGBWRMSInterface,Z_Param_RMSInterfaceObj);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_UBOOL(Z_Param_ClearOtherRMS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGBWRMSBPFuncLib::GBWRMS_Common(Z_Param_Out_InstanceName,Z_Param_RMSInterfaceObj,Z_Param_MovementComponent,Z_Param_ClearOtherRMS);
		P_NATIVE_END;
	}
	void UGBWRMSBPFuncLib::StaticRegisterNativesUGBWRMSBPFuncLib()
	{
		UClass* Class = UGBWRMSBPFuncLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GBWRMS_Common", &UGBWRMSBPFuncLib::execGBWRMS_Common },
			{ "GBWRMS_GetCharacterViewInfo", &UGBWRMSBPFuncLib::execGBWRMS_GetCharacterViewInfo },
			{ "GBWRMS_IsRMSCommonActive", &UGBWRMSBPFuncLib::execGBWRMS_IsRMSCommonActive },
			{ "GBWRMS_StopRMSCommon", &UGBWRMSBPFuncLib::execGBWRMS_StopRMSCommon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics
	{
		struct GBWRMSBPFuncLib_eventGBWRMS_Common_Parms
		{
			FName InstanceName;
			TScriptInterface<IGBWRMSInterface> RMSInterfaceObj;
			UCharacterMovementComponent* MovementComponent;
			bool ClearOtherRMS;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_RMSInterfaceObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static void NewProp_ClearOtherRMS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearOtherRMS;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_Common_Parms, InstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_RMSInterfaceObj = { "RMSInterfaceObj", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_Common_Parms, RMSInterfaceObj), Z_Construct_UClass_UGBWRMSInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_Common_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_MovementComponent_MetaData)) };
	void Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_ClearOtherRMS_SetBit(void* Obj)
	{
		((GBWRMSBPFuncLib_eventGBWRMS_Common_Parms*)Obj)->ClearOtherRMS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_ClearOtherRMS = { "ClearOtherRMS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWRMSBPFuncLib_eventGBWRMS_Common_Parms), &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_ClearOtherRMS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_Common_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_RMSInterfaceObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_ClearOtherRMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|RMS" },
		{ "CPP_Default_ClearOtherRMS", "true" },
		{ "ModuleRelativePath", "Public/RMS/GBWRMSBPFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWRMSBPFuncLib, nullptr, "GBWRMS_Common", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::GBWRMSBPFuncLib_eventGBWRMS_Common_Parms), Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics
	{
		struct GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms
		{
			ACharacter* Character;
			FVector ViewLocation;
			FRotator ViewRotation;
			FVector ForwardVector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms), &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ViewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|RMS" },
		{ "ModuleRelativePath", "Public/RMS/GBWRMSBPFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWRMSBPFuncLib, nullptr, "GBWRMS_GetCharacterViewInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::GBWRMSBPFuncLib_eventGBWRMS_GetCharacterViewInfo_Parms), Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics
	{
		struct GBWRMSBPFuncLib_eventGBWRMS_IsRMSCommonActive_Parms
		{
			UCharacterMovementComponent* MovementComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_IsRMSCommonActive_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_MovementComponent_MetaData)) };
	void Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWRMSBPFuncLib_eventGBWRMS_IsRMSCommonActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWRMSBPFuncLib_eventGBWRMS_IsRMSCommonActive_Parms), &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|RMS" },
		{ "ModuleRelativePath", "Public/RMS/GBWRMSBPFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWRMSBPFuncLib, nullptr, "GBWRMS_IsRMSCommonActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::GBWRMSBPFuncLib_eventGBWRMS_IsRMSCommonActive_Parms), Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics
	{
		struct GBWRMSBPFuncLib_eventGBWRMS_StopRMSCommon_Parms
		{
			UCharacterMovementComponent* MovementComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWRMSBPFuncLib_eventGBWRMS_StopRMSCommon_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_MovementComponent_MetaData)) };
	void Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWRMSBPFuncLib_eventGBWRMS_StopRMSCommon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWRMSBPFuncLib_eventGBWRMS_StopRMSCommon_Parms), &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|RMS" },
		{ "ModuleRelativePath", "Public/RMS/GBWRMSBPFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWRMSBPFuncLib, nullptr, "GBWRMS_StopRMSCommon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::GBWRMSBPFuncLib_eventGBWRMS_StopRMSCommon_Parms), Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWRMSBPFuncLib);
	UClass* Z_Construct_UClass_UGBWRMSBPFuncLib_NoRegister()
	{
		return UGBWRMSBPFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_UGBWRMSBPFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWRMS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_Common, "GBWRMS_Common" }, // 3496362165
		{ &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_GetCharacterViewInfo, "GBWRMS_GetCharacterViewInfo" }, // 1956993295
		{ &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_IsRMSCommonActive, "GBWRMS_IsRMSCommonActive" }, // 3599984810
		{ &Z_Construct_UFunction_UGBWRMSBPFuncLib_GBWRMS_StopRMSCommon, "GBWRMS_StopRMSCommon" }, // 216954376
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RMS/GBWRMSBPFuncLib.h" },
		{ "ModuleRelativePath", "Public/RMS/GBWRMSBPFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWRMSBPFuncLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::ClassParams = {
		&UGBWRMSBPFuncLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWRMSBPFuncLib()
	{
		if (!Z_Registration_Info_UClass_UGBWRMSBPFuncLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWRMSBPFuncLib.OuterSingleton, Z_Construct_UClass_UGBWRMSBPFuncLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWRMSBPFuncLib.OuterSingleton;
	}
	template<> GBWRMS_API UClass* StaticClass<UGBWRMSBPFuncLib>()
	{
		return UGBWRMSBPFuncLib::StaticClass();
	}
	UGBWRMSBPFuncLib::UGBWRMSBPFuncLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWRMSBPFuncLib);
	UGBWRMSBPFuncLib::~UGBWRMSBPFuncLib() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWRMSBPFuncLib, UGBWRMSBPFuncLib::StaticClass, TEXT("UGBWRMSBPFuncLib"), &Z_Registration_Info_UClass_UGBWRMSBPFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWRMSBPFuncLib), 2628033675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_3969781519(TEXT("/Script/GBWRMS"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWRMS_Public_RMS_GBWRMSBPFuncLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
