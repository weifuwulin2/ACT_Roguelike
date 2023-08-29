// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPHAsyncTaskBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPHAsyncTaskBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionAccumulateMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWBPI_MontagePlay();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWBPI_MontagePlay_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHAsync_SetTimer();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHAsync_SetTimer_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHAsyncActionObject();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHAsyncActionObject_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHAsyncTaskBase();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPHAsyncTaskBase_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPlayMontageCallbackProxy();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPlayMontageCallbackProxy_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject();
	GBWPOWERFULHIT_API UFunction* Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature();
	GBWPOWERFULHIT_API UFunction* Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature();
	GBWPOWERFULHIT_API UFunction* Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_MontagePlayState();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics
	{
		struct _Script_GBWPowerfulHit_eventAsyncTaskDelegate_Parms
		{
			UGBWPHAsyncActionObject* ActionObj;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionObj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::NewProp_ActionObj_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::NewProp_ActionObj = { "ActionObj", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GBWPowerfulHit_eventAsyncTaskDelegate_Parms, ActionObj), Z_Construct_UClass_UGBWPHAsyncActionObject_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::NewProp_ActionObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::NewProp_ActionObj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::NewProp_ActionObj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit, nullptr, "AsyncTaskDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::_Script_GBWPowerfulHit_eventAsyncTaskDelegate_Parms), Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskDelegate, UGBWPHAsyncActionObject* ActionObj)
{
	struct _Script_GBWPowerfulHit_eventAsyncTaskDelegate_Parms
	{
		UGBWPHAsyncActionObject* ActionObj;
	};
	_Script_GBWPowerfulHit_eventAsyncTaskDelegate_Parms Parms;
	Parms.ActionObj=ActionObj;
	AsyncTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGBWPHAsyncActionObject::execAction_ExecutableStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Action_ExecutableStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPHAsyncActionObject::execAction_IsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Action_IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPHAsyncActionObject::execOnActionFinishd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionFinishd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPHAsyncActionObject::execOnActionUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPHAsyncActionObject::execOnActionAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionAbort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPHAsyncActionObject::execOnActionStart)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ResultStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnActionStart(Z_Param_Out_ResultStr);
		P_NATIVE_END;
	}
	void UGBWPHAsyncActionObject::StaticRegisterNativesUGBWPHAsyncActionObject()
	{
		UClass* Class = UGBWPHAsyncActionObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Action_ExecutableStart", &UGBWPHAsyncActionObject::execAction_ExecutableStart },
			{ "Action_IsRunning", &UGBWPHAsyncActionObject::execAction_IsRunning },
			{ "OnActionAbort", &UGBWPHAsyncActionObject::execOnActionAbort },
			{ "OnActionFinishd", &UGBWPHAsyncActionObject::execOnActionFinishd },
			{ "OnActionStart", &UGBWPHAsyncActionObject::execOnActionStart },
			{ "OnActionUpdate", &UGBWPHAsyncActionObject::execOnActionUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics
	{
		struct GBWPHAsyncActionObject_eventAction_ExecutableStart_Parms
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
	void Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPHAsyncActionObject_eventAction_ExecutableStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHAsyncActionObject_eventAction_ExecutableStart_Parms), &Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsyncActionObject, nullptr, "Action_ExecutableStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::GBWPHAsyncActionObject_eventAction_ExecutableStart_Parms), Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics
	{
		struct GBWPHAsyncActionObject_eventAction_IsRunning_Parms
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
	void Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPHAsyncActionObject_eventAction_IsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHAsyncActionObject_eventAction_IsRunning_Parms), &Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "Comment", "// Action status (BP Executable function)\n" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
		{ "ToolTip", "Action status (BP Executable function)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsyncActionObject, nullptr, "Action_IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::GBWPHAsyncActionObject_eventAction_IsRunning_Parms), Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsyncActionObject, nullptr, "OnActionAbort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsyncActionObject, nullptr, "OnActionFinishd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics
	{
		struct GBWPHAsyncActionObject_eventOnActionStart_Parms
		{
			FString ResultStr;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResultStr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsyncActionObject_eventOnActionStart_Parms, ResultStr), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPHAsyncActionObject_eventOnActionStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHAsyncActionObject_eventOnActionStart_Parms), &Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::NewProp_ResultStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsyncActionObject, nullptr, "OnActionStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::GBWPHAsyncActionObject_eventOnActionStart_Parms), Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsyncActionObject, nullptr, "OnActionUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPHAsyncActionObject);
	UClass* Z_Construct_UClass_UGBWPHAsyncActionObject_NoRegister()
	{
		return UGBWPHAsyncActionObject::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPHAsyncActionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGBWPowerfulHitNetWorkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_ExecutableStart, "Action_ExecutableStart" }, // 3526632641
		{ &Z_Construct_UFunction_UGBWPHAsyncActionObject_Action_IsRunning, "Action_IsRunning" }, // 824282252
		{ &Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionAbort, "OnActionAbort" }, // 3776349558
		{ &Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionFinishd, "OnActionFinishd" }, // 80629163
		{ &Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionStart, "OnActionStart" }, // 2815855862
		{ &Z_Construct_UFunction_UGBWPHAsyncActionObject_OnActionUpdate, "OnActionUpdate" }, // 1949275999
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GBWPHAsyncTaskBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPHAsyncActionObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::ClassParams = {
		&UGBWPHAsyncActionObject::StaticClass,
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
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPHAsyncActionObject()
	{
		if (!Z_Registration_Info_UClass_UGBWPHAsyncActionObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPHAsyncActionObject.OuterSingleton, Z_Construct_UClass_UGBWPHAsyncActionObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPHAsyncActionObject.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPHAsyncActionObject>()
	{
		return UGBWPHAsyncActionObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPHAsyncActionObject);
	UGBWPHAsyncActionObject::~UGBWPHAsyncActionObject() {}
	DEFINE_FUNCTION(UGBWPHAsyncTaskBase::execCreateGBWPHAsyncTask)
	{
		P_GET_OBJECT(UGBWPHAsyncActionObject,Z_Param_ActionObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGBWPHAsyncTaskBase**)Z_Param__Result=UGBWPHAsyncTaskBase::CreateGBWPHAsyncTask(Z_Param_ActionObj);
		P_NATIVE_END;
	}
	void UGBWPHAsyncTaskBase::StaticRegisterNativesUGBWPHAsyncTaskBase()
	{
		UClass* Class = UGBWPHAsyncTaskBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGBWPHAsyncTask", &UGBWPHAsyncTaskBase::execCreateGBWPHAsyncTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics
	{
		struct GBWPHAsyncTaskBase_eventCreateGBWPHAsyncTask_Parms
		{
			UGBWPHAsyncActionObject* ActionObj;
			UGBWPHAsyncTaskBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionObj;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::NewProp_ActionObj_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::NewProp_ActionObj = { "ActionObj", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsyncTaskBase_eventCreateGBWPHAsyncTask_Parms, ActionObj), Z_Construct_UClass_UGBWPHAsyncActionObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::NewProp_ActionObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::NewProp_ActionObj_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsyncTaskBase_eventCreateGBWPHAsyncTask_Parms, ReturnValue), Z_Construct_UClass_UGBWPHAsyncTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::NewProp_ActionObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsyncTaskBase, nullptr, "CreateGBWPHAsyncTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::GBWPHAsyncTaskBase_eventCreateGBWPHAsyncTask_Parms), Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPHAsyncTaskBase);
	UClass* Z_Construct_UClass_UGBWPHAsyncTaskBase_NoRegister()
	{
		return UGBWPHAsyncTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbort_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPHAsyncTaskBase_CreateGBWPHAsyncTask, "CreateGBWPHAsyncTask" }, // 67543157
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GBWPHAsyncTaskBase.h" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnStart = { "OnStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAsyncTaskBase, OnStart), Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnStart_MetaData)) }; // 1564443830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnAbort_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnAbort = { "OnAbort", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAsyncTaskBase, OnAbort), Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnAbort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnAbort_MetaData)) }; // 1564443830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnUpdate = { "OnUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAsyncTaskBase, OnUpdate), Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnUpdate_MetaData)) }; // 1564443830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnFinishd_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnFinishd = { "OnFinishd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAsyncTaskBase, OnFinishd), Z_Construct_UDelegateFunction_GBWPowerfulHit_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnFinishd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnFinishd_MetaData)) }; // 1564443830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnAbort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::NewProp_OnFinishd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPHAsyncTaskBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::ClassParams = {
		&UGBWPHAsyncTaskBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPHAsyncTaskBase()
	{
		if (!Z_Registration_Info_UClass_UGBWPHAsyncTaskBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPHAsyncTaskBase.OuterSingleton, Z_Construct_UClass_UGBWPHAsyncTaskBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPHAsyncTaskBase.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPHAsyncTaskBase>()
	{
		return UGBWPHAsyncTaskBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPHAsyncTaskBase);
	UGBWPHAsyncTaskBase::~UGBWPHAsyncTaskBase() {}
	struct Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics
	{
		struct GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms
		{
			FTimerHandle TimerHandle;
			UObject* ParameterObject;
			float Time;
			float DeltaTime;
			UGBWPHAsync_SetTimer* TimerTask;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimerTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) }; // 3633724737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_ParameterObject = { "ParameterObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms, ParameterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_TimerTask = { "TimerTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms, TimerTask), Z_Construct_UClass_UGBWPHAsync_SetTimer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_TimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_ParameterObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::NewProp_TimerTask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimerHandleDelegate, FTimerHandle, TimerHandle);\n" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimerHandleDelegate, FTimerHandle, TimerHandle);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsync_SetTimer, nullptr, "TimerHandleDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms), Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGBWPHAsync_SetTimer::FTimerHandleDelegate_DelegateWrapper(const FMulticastScriptDelegate& TimerHandleDelegate, FTimerHandle TimerHandle, UObject* ParameterObject, float Time, float DeltaTime, UGBWPHAsync_SetTimer* TimerTask)
{
	struct GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms
	{
		FTimerHandle TimerHandle;
		UObject* ParameterObject;
		float Time;
		float DeltaTime;
		UGBWPHAsync_SetTimer* TimerTask;
	};
	GBWPHAsync_SetTimer_eventTimerHandleDelegate_Parms Parms;
	Parms.TimerHandle=TimerHandle;
	Parms.ParameterObject=ParameterObject;
	Parms.Time=Time;
	Parms.DeltaTime=DeltaTime;
	Parms.TimerTask=TimerTask;
	TimerHandleDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGBWPHAsync_SetTimer::execCompletedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompletedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPHAsync_SetTimer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPHAsync_SetTimer::execSetTimer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bLooping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InitialStartDelay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InitialStartDelayVariance);
		P_GET_OBJECT(UObject,Z_Param_ParameterObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGBWPHAsync_SetTimer**)Z_Param__Result=UGBWPHAsync_SetTimer::SetTimer(Z_Param_WorldContextObject,Z_Param_Time,Z_Param_bLooping,Z_Param_InitialStartDelay,Z_Param_InitialStartDelayVariance,Z_Param_ParameterObject);
		P_NATIVE_END;
	}
	void UGBWPHAsync_SetTimer::StaticRegisterNativesUGBWPHAsync_SetTimer()
	{
		UClass* Class = UGBWPHAsync_SetTimer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompletedEvent", &UGBWPHAsync_SetTimer::execCompletedEvent },
			{ "SetTimer", &UGBWPHAsync_SetTimer::execSetTimer },
			{ "Stop", &UGBWPHAsync_SetTimer::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsync_SetTimer, nullptr, "CompletedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics
	{
		struct GBWPHAsync_SetTimer_eventSetTimer_Parms
		{
			const UObject* WorldContextObject;
			float Time;
			bool bLooping;
			float InitialStartDelay;
			float InitialStartDelayVariance;
			UObject* ParameterObject;
			UGBWPHAsync_SetTimer* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialStartDelay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialStartDelayVariance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventSetTimer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventSetTimer_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((GBWPHAsync_SetTimer_eventSetTimer_Parms*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPHAsync_SetTimer_eventSetTimer_Parms), &Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_InitialStartDelay = { "InitialStartDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventSetTimer_Parms, InitialStartDelay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_InitialStartDelayVariance = { "InitialStartDelayVariance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventSetTimer_Parms, InitialStartDelayVariance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_ParameterObject = { "ParameterObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventSetTimer_Parms, ParameterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPHAsync_SetTimer_eventSetTimer_Parms, ReturnValue), Z_Construct_UClass_UGBWPHAsync_SetTimer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_InitialStartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_InitialStartDelayVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_ParameterObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InitialStartDelay, InitialStartDelayVariance" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GBW|Async" },
		{ "CPP_Default_InitialStartDelay", "0.000000" },
		{ "CPP_Default_InitialStartDelayVariance", "0.000000" },
		{ "CPP_Default_ParameterObject", "None" },
		{ "DisplayName", "SetTimerPro" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
		{ "ScriptName", "SetTimerPro" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsync_SetTimer, nullptr, "SetTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::GBWPHAsync_SetTimer_eventSetTimer_Parms), Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "SetTimer" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPHAsync_SetTimer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPHAsync_SetTimer);
	UClass* Z_Construct_UClass_UGBWPHAsync_SetTimer_NoRegister()
	{
		return UGBWPHAsync_SetTimer::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Then_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Then;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Update;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPHAsync_SetTimer_CompletedEvent, "CompletedEvent" }, // 3023965438
		{ &Z_Construct_UFunction_UGBWPHAsync_SetTimer_SetTimer, "SetTimer" }, // 1719342624
		{ &Z_Construct_UFunction_UGBWPHAsync_SetTimer_Stop, "Stop" }, // 772559413
		{ &Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature, "TimerHandleDelegate__DelegateSignature" }, // 3004715641
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "GBWPHAsyncTaskBase.h" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Then_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Then = { "Then", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAsync_SetTimer, Then), Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Then_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Then_MetaData)) }; // 3004715641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Update_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAsync_SetTimer, Update), Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Update_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Update_MetaData)) }; // 3004715641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPHAsync_SetTimer, Completed), Z_Construct_UDelegateFunction_UGBWPHAsync_SetTimer_TimerHandleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Completed_MetaData)) }; // 3004715641
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Then,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Update,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPHAsync_SetTimer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::ClassParams = {
		&UGBWPHAsync_SetTimer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPHAsync_SetTimer()
	{
		if (!Z_Registration_Info_UClass_UGBWPHAsync_SetTimer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPHAsync_SetTimer.OuterSingleton, Z_Construct_UClass_UGBWPHAsync_SetTimer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPHAsync_SetTimer.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPHAsync_SetTimer>()
	{
		return UGBWPHAsync_SetTimer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPHAsync_SetTimer);
	DEFINE_FUNCTION(IGBWBPI_MontagePlay::execGetRootMotionScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RootMotionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRootMotionScale_Implementation(Z_Param_Out_RootMotionScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGBWBPI_MontagePlay::execGetRootMotionGravitySetting)
	{
		P_GET_UBOOL_REF(Z_Param_Out_InRootMotionIgnoresGravity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InGravitationalAcceleration_MS2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRootMotionGravitySetting_Implementation(Z_Param_Out_InRootMotionIgnoresGravity,Z_Param_Out_InGravitationalAcceleration_MS2);
		P_NATIVE_END;
	}
	struct GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms
	{
		bool InRootMotionIgnoresGravity;
		float InGravitationalAcceleration_MS2;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GBWBPI_MontagePlay_eventGetRootMotionScale_Parms
	{
		float RootMotionScale;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GBWBPI_MontagePlay_eventGetRootMotionScale_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IGBWBPI_MontagePlay::GetRootMotionGravitySetting(bool& InRootMotionIgnoresGravity, float& InGravitationalAcceleration_MS2)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRootMotionGravitySetting instead.");
		GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IGBWBPI_MontagePlay::GetRootMotionScale(float& RootMotionScale)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRootMotionScale instead.");
		GBWBPI_MontagePlay_eventGetRootMotionScale_Parms Parms;
		return Parms.ReturnValue;
	}
	void UGBWBPI_MontagePlay::StaticRegisterNativesUGBWBPI_MontagePlay()
	{
		UClass* Class = UGBWBPI_MontagePlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRootMotionGravitySetting", &IGBWBPI_MontagePlay::execGetRootMotionGravitySetting },
			{ "GetRootMotionScale", &IGBWBPI_MontagePlay::execGetRootMotionScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics
	{
		static void NewProp_InRootMotionIgnoresGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InRootMotionIgnoresGravity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InGravitationalAcceleration_MS2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_InRootMotionIgnoresGravity_SetBit(void* Obj)
	{
		((GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms*)Obj)->InRootMotionIgnoresGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_InRootMotionIgnoresGravity = { "InRootMotionIgnoresGravity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms), &Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_InRootMotionIgnoresGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_InGravitationalAcceleration_MS2 = { "InGravitationalAcceleration_MS2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms, InGravitationalAcceleration_MS2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms), &Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_InRootMotionIgnoresGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_InGravitationalAcceleration_MS2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|Anim" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWBPI_MontagePlay, nullptr, "GetRootMotionGravitySetting", nullptr, nullptr, sizeof(GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms), Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootMotionScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::NewProp_RootMotionScale = { "RootMotionScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWBPI_MontagePlay_eventGetRootMotionScale_Parms, RootMotionScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWBPI_MontagePlay_eventGetRootMotionScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWBPI_MontagePlay_eventGetRootMotionScale_Parms), &Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::NewProp_RootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|Anim" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWBPI_MontagePlay, nullptr, "GetRootMotionScale", nullptr, nullptr, sizeof(GBWBPI_MontagePlay_eventGetRootMotionScale_Parms), Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWBPI_MontagePlay);
	UClass* Z_Construct_UClass_UGBWBPI_MontagePlay_NoRegister()
	{
		return UGBWBPI_MontagePlay::StaticClass();
	}
	struct Z_Construct_UClass_UGBWBPI_MontagePlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionGravitySetting, "GetRootMotionGravitySetting" }, // 1060403874
		{ &Z_Construct_UFunction_UGBWBPI_MontagePlay_GetRootMotionScale, "GetRootMotionScale" }, // 1685402980
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGBWBPI_MontagePlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::ClassParams = {
		&UGBWBPI_MontagePlay::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWBPI_MontagePlay()
	{
		if (!Z_Registration_Info_UClass_UGBWBPI_MontagePlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWBPI_MontagePlay.OuterSingleton, Z_Construct_UClass_UGBWBPI_MontagePlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWBPI_MontagePlay.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWBPI_MontagePlay>()
	{
		return UGBWBPI_MontagePlay::StaticClass();
	}
	UGBWBPI_MontagePlay::UGBWBPI_MontagePlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWBPI_MontagePlay);
	UGBWBPI_MontagePlay::~UGBWBPI_MontagePlay() {}
	static FName NAME_UGBWBPI_MontagePlay_GetRootMotionGravitySetting = FName(TEXT("GetRootMotionGravitySetting"));
	bool IGBWBPI_MontagePlay::Execute_GetRootMotionGravitySetting(UObject* O, bool& InRootMotionIgnoresGravity, float& InGravitationalAcceleration_MS2)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGBWBPI_MontagePlay::StaticClass()));
		GBWBPI_MontagePlay_eventGetRootMotionGravitySetting_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGBWBPI_MontagePlay_GetRootMotionGravitySetting);
		if (Func)
		{
			Parms.InRootMotionIgnoresGravity=InRootMotionIgnoresGravity;
			Parms.InGravitationalAcceleration_MS2=InGravitationalAcceleration_MS2;
			O->ProcessEvent(Func, &Parms);
			InRootMotionIgnoresGravity=Parms.InRootMotionIgnoresGravity;
			InGravitationalAcceleration_MS2=Parms.InGravitationalAcceleration_MS2;
		}
		else if (auto I = (IGBWBPI_MontagePlay*)(O->GetNativeInterfaceAddress(UGBWBPI_MontagePlay::StaticClass())))
		{
			Parms.ReturnValue = I->GetRootMotionGravitySetting_Implementation(InRootMotionIgnoresGravity,InGravitationalAcceleration_MS2);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGBWBPI_MontagePlay_GetRootMotionScale = FName(TEXT("GetRootMotionScale"));
	bool IGBWBPI_MontagePlay::Execute_GetRootMotionScale(UObject* O, float& RootMotionScale)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGBWBPI_MontagePlay::StaticClass()));
		GBWBPI_MontagePlay_eventGetRootMotionScale_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGBWBPI_MontagePlay_GetRootMotionScale);
		if (Func)
		{
			Parms.RootMotionScale=RootMotionScale;
			O->ProcessEvent(Func, &Parms);
			RootMotionScale=Parms.RootMotionScale;
		}
		else if (auto I = (IGBWBPI_MontagePlay*)(O->GetNativeInterfaceAddress(UGBWBPI_MontagePlay::StaticClass())))
		{
			Parms.ReturnValue = I->GetRootMotionScale_Implementation(RootMotionScale);
		}
		return Parms.ReturnValue;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState;
class UScriptStruct* FGBWPH_MontagePlayState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPH_MontagePlayState"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPH_MontagePlayState>()
{
	return FGBWPH_MontagePlayState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontagePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMainAnimInstance_MetaData[];
#endif
		static void NewProp_IsMainAnimInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMainAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPH_MontagePlayState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_MontagePlayState, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontagePosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontagePosition = { "MontagePosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_MontagePlayState, MontagePosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontagePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontagePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_MontagePlayState, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_IsMainAnimInstance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_IsMainAnimInstance_SetBit(void* Obj)
	{
		((FGBWPH_MontagePlayState*)Obj)->IsMainAnimInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_IsMainAnimInstance = { "IsMainAnimInstance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGBWPH_MontagePlayState), &Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_IsMainAnimInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_IsMainAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_IsMainAnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_MontagePlayState, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontageToPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_MontagePlayState, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontageToPlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontagePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_IsMainAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewProp_MontageToPlay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPH_MontagePlayState",
		sizeof(FGBWPH_MontagePlayState),
		alignof(FGBWPH_MontagePlayState),
		Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_MontagePlayState()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState.InnerSingleton, Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh;
class UScriptStruct* FGBWPH_RMSInfo_FromMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPH_RMSInfo_FromMesh"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPH_RMSInfo_FromMesh>()
{
	return FGBWPH_RMSInfo_FromMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionAccumulateMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionAccumulateMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RootMotionAccumulateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootMotionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionIgnoresGravity_MetaData[];
#endif
		static void NewProp_RootMotionIgnoresGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RootMotionIgnoresGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravitationalAcceleration_ms2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravitationalAcceleration_ms2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPH_RMSInfo_FromMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_CharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_CharacterMovement_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionAccumulateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionAccumulateMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionAccumulateMode = { "RootMotionAccumulateMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, RootMotionAccumulateMode), Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionAccumulateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionAccumulateMode_MetaData)) }; // 1746877885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionScale = { "RootMotionScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, RootMotionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionIgnoresGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionIgnoresGravity_SetBit(void* Obj)
	{
		((FGBWPH_RMSInfo_FromMesh*)Obj)->RootMotionIgnoresGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionIgnoresGravity = { "RootMotionIgnoresGravity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGBWPH_RMSInfo_FromMesh), &Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionIgnoresGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionIgnoresGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionIgnoresGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_GravitationalAcceleration_ms2_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_GravitationalAcceleration_ms2 = { "GravitationalAcceleration_ms2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPH_RMSInfo_FromMesh, GravitationalAcceleration_ms2), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_GravitationalAcceleration_ms2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_GravitationalAcceleration_ms2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_CharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionAccumulateMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionAccumulateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_RootMotionIgnoresGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewProp_GravitationalAcceleration_ms2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPH_RMSInfo_FromMesh",
		sizeof(FGBWPH_RMSInfo_FromMesh),
		alignof(FGBWPH_RMSInfo_FromMesh),
		Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh.InnerSingleton, Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGBWPHRootMotionSource_FromSKMesh>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FGBWPHRootMotionSource_FromSKMesh cannot be polymorphic unless super FRootMotionSource is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh;
class UScriptStruct* FGBWPHRootMotionSource_FromSKMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh, (UObject*)Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPHRootMotionSource_FromSKMesh"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPHRootMotionSource_FromSKMesh>()
{
	return FGBWPHRootMotionSource_FromSKMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PHAnimInterfaceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PHAnimInterfaceComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SKMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SKMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheRootMotionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TheRootMotionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionIgnoresGravity_MetaData[];
#endif
		static void NewProp_RootMotionIgnoresGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RootMotionIgnoresGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravitationalAcceleration_ms2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravitationalAcceleration_ms2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPHRootMotionSource_FromSKMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_PHAnimInterfaceComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_PHAnimInterfaceComponent = { "PHAnimInterfaceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, PHAnimInterfaceComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_PHAnimInterfaceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_PHAnimInterfaceComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_SKMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_SKMesh = { "SKMesh", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, SKMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_SKMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_SKMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimStartTime = { "AnimStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, AnimStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimEndTime = { "AnimEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, AnimEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimEndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_TheRootMotionScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_TheRootMotionScale = { "TheRootMotionScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, TheRootMotionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_TheRootMotionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_TheRootMotionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_RootMotionIgnoresGravity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_RootMotionIgnoresGravity_SetBit(void* Obj)
	{
		((FGBWPHRootMotionSource_FromSKMesh*)Obj)->RootMotionIgnoresGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_RootMotionIgnoresGravity = { "RootMotionIgnoresGravity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGBWPHRootMotionSource_FromSKMesh), &Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_RootMotionIgnoresGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_RootMotionIgnoresGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_RootMotionIgnoresGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_GravitationalAcceleration_ms2_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_GravitationalAcceleration_ms2 = { "GravitationalAcceleration_ms2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, GravitationalAcceleration_ms2), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_GravitationalAcceleration_ms2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_GravitationalAcceleration_ms2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedRotation = { "CachedRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, CachedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedTarget = { "CachedTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, CachedTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedEndTime = { "CachedEndTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGBWPHRootMotionSource_FromSKMesh, CachedEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedEndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_PHAnimInterfaceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_SKMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_StartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_AnimEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_TheRootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_RootMotionIgnoresGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_GravitationalAcceleration_ms2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewProp_CachedEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"GBWPHRootMotionSource_FromSKMesh",
		sizeof(FGBWPHRootMotionSource_FromSKMesh),
		alignof(FGBWPHRootMotionSource_FromSKMesh),
		Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh.InnerSingleton, Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics
	{
		struct _Script_GBWPowerfulHit_eventOnMontagePlayDelegate_Parms
		{
			FName NotifyName;
			FGBWPH_MontagePlayState MontagePlayState;
			UObject* ParameterObject;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontagePlayState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GBWPowerfulHit_eventOnMontagePlayDelegate_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_MontagePlayState = { "MontagePlayState", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GBWPowerfulHit_eventOnMontagePlayDelegate_Parms, MontagePlayState), Z_Construct_UScriptStruct_FGBWPH_MontagePlayState, METADATA_PARAMS(nullptr, 0) }; // 1544490411
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_ParameterObject = { "ParameterObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GBWPowerfulHit_eventOnMontagePlayDelegate_Parms, ParameterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_MontagePlayState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_ParameterObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GBWPowerfulHit, nullptr, "OnMontagePlayDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::_Script_GBWPowerfulHit_eventOnMontagePlayDelegate_Parms), Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMontagePlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontagePlayDelegate, FName NotifyName, FGBWPH_MontagePlayState MontagePlayState, UObject* ParameterObject)
{
	struct _Script_GBWPowerfulHit_eventOnMontagePlayDelegate_Parms
	{
		FName NotifyName;
		FGBWPH_MontagePlayState MontagePlayState;
		UObject* ParameterObject;
	};
	_Script_GBWPowerfulHit_eventOnMontagePlayDelegate_Parms Parms;
	Parms.NotifyName=NotifyName;
	Parms.MontagePlayState=MontagePlayState;
	Parms.ParameterObject=ParameterObject;
	OnMontagePlayDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGBWPlayMontageCallbackProxy::execOnNotifyEndReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyEndReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPlayMontageCallbackProxy::execOnNotifyBeginReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPlayMontageCallbackProxy::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPlayMontageCallbackProxy::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPlayMontageCallbackProxy::execDisableRMS_BySKMesh)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SKMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPlayMontageCallbackProxy::DisableRMS_BySKMesh(Z_Param_MovementComponent,Z_Param_SKMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPlayMontageCallbackProxy::execApplyRMS_BySKMesh)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SKMesh);
		P_GET_ENUM(ERootMotionAccumulateMode,Z_Param_RootMotionAccumulateMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TheRootMotionScale);
		P_GET_UBOOL(Z_Param_RootMotionIgnoresGravity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravitationalAcceleration_ms2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGBWPlayMontageCallbackProxy::ApplyRMS_BySKMesh(Z_Param_MovementComponent,Z_Param_SKMesh,ERootMotionAccumulateMode(Z_Param_RootMotionAccumulateMode),Z_Param_StartTime,Z_Param_EndTime,Z_Param_Rate,Z_Param_TheRootMotionScale,Z_Param_RootMotionIgnoresGravity,Z_Param_GravitationalAcceleration_ms2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGBWPlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingPosition);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartingSection);
		P_GET_UBOOL(Z_Param_ApplyRootMotion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RootMotionScale);
		P_GET_ENUM(ERootMotionAccumulateMode,Z_Param_RootMotionAccumulateMode);
		P_GET_UBOOL(Z_Param_RootMotionIgnoresGravity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravitationalAcceleration_ms2);
		P_GET_OBJECT(UObject,Z_Param_ParameterObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGBWPlayMontageCallbackProxy**)Z_Param__Result=UGBWPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(Z_Param_InSkeletalMeshComponent,Z_Param_MontageToPlay,Z_Param_PlayRate,Z_Param_StartingPosition,Z_Param_StartingSection,Z_Param_ApplyRootMotion,Z_Param_RootMotionScale,ERootMotionAccumulateMode(Z_Param_RootMotionAccumulateMode),Z_Param_RootMotionIgnoresGravity,Z_Param_GravitationalAcceleration_ms2,Z_Param_ParameterObject);
		P_NATIVE_END;
	}
	void UGBWPlayMontageCallbackProxy::StaticRegisterNativesUGBWPlayMontageCallbackProxy()
	{
		UClass* Class = UGBWPlayMontageCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRMS_BySKMesh", &UGBWPlayMontageCallbackProxy::execApplyRMS_BySKMesh },
			{ "CreateProxyObjectForPlayMontage", &UGBWPlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage },
			{ "DisableRMS_BySKMesh", &UGBWPlayMontageCallbackProxy::execDisableRMS_BySKMesh },
			{ "OnMontageBlendingOut", &UGBWPlayMontageCallbackProxy::execOnMontageBlendingOut },
			{ "OnMontageEnded", &UGBWPlayMontageCallbackProxy::execOnMontageEnded },
			{ "OnNotifyBeginReceived", &UGBWPlayMontageCallbackProxy::execOnNotifyBeginReceived },
			{ "OnNotifyEndReceived", &UGBWPlayMontageCallbackProxy::execOnNotifyEndReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics
	{
		struct GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms
		{
			UCharacterMovementComponent* MovementComponent;
			USkeletalMeshComponent* SKMesh;
			ERootMotionAccumulateMode RootMotionAccumulateMode;
			float StartTime;
			float EndTime;
			float Rate;
			float TheRootMotionScale;
			bool RootMotionIgnoresGravity;
			float GravitationalAcceleration_ms2;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SKMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SKMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionAccumulateMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RootMotionAccumulateMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TheRootMotionScale;
		static void NewProp_RootMotionIgnoresGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RootMotionIgnoresGravity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravitationalAcceleration_ms2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_SKMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_SKMesh = { "SKMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, SKMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_SKMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_SKMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionAccumulateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionAccumulateMode = { "RootMotionAccumulateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, RootMotionAccumulateMode), Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, METADATA_PARAMS(nullptr, 0) }; // 1746877885
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_TheRootMotionScale = { "TheRootMotionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, TheRootMotionScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionIgnoresGravity_SetBit(void* Obj)
	{
		((GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms*)Obj)->RootMotionIgnoresGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionIgnoresGravity = { "RootMotionIgnoresGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms), &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionIgnoresGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_GravitationalAcceleration_ms2 = { "GravitationalAcceleration_ms2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms, GravitationalAcceleration_ms2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms), &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_SKMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionAccumulateMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionAccumulateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_TheRootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_RootMotionIgnoresGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_GravitationalAcceleration_ms2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|Anim|RMS" },
		{ "CPP_Default_EndTime", "-1.000000" },
		{ "CPP_Default_GravitationalAcceleration_ms2", "-9.800000" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_RootMotionAccumulateMode", "Additive" },
		{ "CPP_Default_RootMotionIgnoresGravity", "false" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_TheRootMotionScale", "1.000000" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPlayMontageCallbackProxy, nullptr, "ApplyRMS_BySKMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::GBWPlayMontageCallbackProxy_eventApplyRMS_BySKMesh_Parms), Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics
	{
		struct GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms
		{
			USkeletalMeshComponent* InSkeletalMeshComponent;
			UAnimMontage* MontageToPlay;
			float PlayRate;
			float StartingPosition;
			FName StartingSection;
			bool ApplyRootMotion;
			float RootMotionScale;
			ERootMotionAccumulateMode RootMotionAccumulateMode;
			bool RootMotionIgnoresGravity;
			float GravitationalAcceleration_ms2;
			UObject* ParameterObject;
			UGBWPlayMontageCallbackProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingPosition;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartingSection;
		static void NewProp_ApplyRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyRootMotion;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootMotionScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionAccumulateMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RootMotionAccumulateMode;
		static void NewProp_RootMotionIgnoresGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RootMotionIgnoresGravity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravitationalAcceleration_ms2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent = { "InSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartingPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingSection = { "StartingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartingSection), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ApplyRootMotion_SetBit(void* Obj)
	{
		((GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms*)Obj)->ApplyRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ApplyRootMotion = { "ApplyRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ApplyRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionScale = { "RootMotionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, RootMotionScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionAccumulateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionAccumulateMode = { "RootMotionAccumulateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, RootMotionAccumulateMode), Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, METADATA_PARAMS(nullptr, 0) }; // 1746877885
	void Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionIgnoresGravity_SetBit(void* Obj)
	{
		((GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms*)Obj)->RootMotionIgnoresGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionIgnoresGravity = { "RootMotionIgnoresGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionIgnoresGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_GravitationalAcceleration_ms2 = { "GravitationalAcceleration_ms2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, GravitationalAcceleration_ms2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ParameterObject = { "ParameterObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, ParameterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, ReturnValue), Z_Construct_UClass_UGBWPlayMontageCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_InSkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ApplyRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionAccumulateMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionAccumulateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_RootMotionIgnoresGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_GravitationalAcceleration_ms2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ParameterObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_ApplyRootMotion", "true" },
		{ "CPP_Default_GravitationalAcceleration_ms2", "-9.800000" },
		{ "CPP_Default_ParameterObject", "None" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_RootMotionAccumulateMode", "Additive" },
		{ "CPP_Default_RootMotionIgnoresGravity", "false" },
		{ "CPP_Default_RootMotionScale", "1.000000" },
		{ "CPP_Default_StartingPosition", "0.000000" },
		{ "CPP_Default_StartingSection", "None" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPlayMontageCallbackProxy, nullptr, "CreateProxyObjectForPlayMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::GBWPlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics
	{
		struct GBWPlayMontageCallbackProxy_eventDisableRMS_BySKMesh_Parms
		{
			UCharacterMovementComponent* MovementComponent;
			USkeletalMeshComponent* SKMesh;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SKMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SKMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventDisableRMS_BySKMesh_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_SKMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_SKMesh = { "SKMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventDisableRMS_BySKMesh_Parms, SKMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_SKMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_SKMesh_MetaData)) };
	void Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GBWPlayMontageCallbackProxy_eventDisableRMS_BySKMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPlayMontageCallbackProxy_eventDisableRMS_BySKMesh_Parms), &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_SKMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBW|Anim|RMS" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPlayMontageCallbackProxy, nullptr, "DisableRMS_BySKMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::GBWPlayMontageCallbackProxy_eventDisableRMS_BySKMesh_Parms), Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics
	{
		struct GBWPlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((GBWPlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPlayMontageCallbackProxy, nullptr, "OnMontageBlendingOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::GBWPlayMontageCallbackProxy_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics
	{
		struct GBWPlayMontageCallbackProxy_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((GBWPlayMontageCallbackProxy_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GBWPlayMontageCallbackProxy_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPlayMontageCallbackProxy, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::GBWPlayMontageCallbackProxy_eventOnMontageEnded_Parms), Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics
	{
		struct GBWPlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) }; // 3465490004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPlayMontageCallbackProxy, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::GBWPlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms), Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics
	{
		struct GBWPlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GBWPlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) }; // 3465490004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPlayMontageCallbackProxy, nullptr, "OnNotifyEndReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::GBWPlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms), Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPlayMontageCallbackProxy);
	UClass* Z_Construct_UClass_UGBWPlayMontageCallbackProxy_NoRegister()
	{
		return UGBWPlayMontageCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_ApplyRMS_BySKMesh, "ApplyRMS_BySKMesh" }, // 3406074133
		{ &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage, "CreateProxyObjectForPlayMontage" }, // 2979180663
		{ &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_DisableRMS_BySKMesh, "DisableRMS_BySKMesh" }, // 1937971557
		{ &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 3520824836
		{ &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnMontageEnded, "OnMontageEnded" }, // 840491400
		{ &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 2899372183
		{ &Z_Construct_UFunction_UGBWPlayMontageCallbackProxy_OnNotifyEndReceived, "OnNotifyEndReceived" }, // 2521194633
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GBWPHAsyncTaskBase.h" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnTick_MetaData[] = {
		{ "Comment", "// FTickableGameObject End\n" },
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
		{ "ToolTip", "FTickableGameObject End" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPlayMontageCallbackProxy, OnTick), Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnTick_MetaData)) }; // 2720664472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPlayMontageCallbackProxy, OnCompleted), Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnCompleted_MetaData)) }; // 2720664472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPlayMontageCallbackProxy, OnBlendOut), Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_MetaData)) }; // 2720664472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPlayMontageCallbackProxy, OnInterrupted), Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_MetaData)) }; // 2720664472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin = { "OnNotifyBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPlayMontageCallbackProxy, OnNotifyBegin), Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_MetaData)) }; // 2720664472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/GBWPHAsyncTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd = { "OnNotifyEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGBWPlayMontageCallbackProxy, OnNotifyEnd), Z_Construct_UDelegateFunction_GBWPowerfulHit_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_MetaData)) }; // 2720664472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPlayMontageCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::ClassParams = {
		&UGBWPlayMontageCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPlayMontageCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UGBWPlayMontageCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPlayMontageCallbackProxy.OuterSingleton, Z_Construct_UClass_UGBWPlayMontageCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPlayMontageCallbackProxy.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPlayMontageCallbackProxy>()
	{
		return UGBWPlayMontageCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPlayMontageCallbackProxy);
	UGBWPlayMontageCallbackProxy::~UGBWPlayMontageCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_Statics::ScriptStructInfo[] = {
		{ FGBWPH_MontagePlayState::StaticStruct, Z_Construct_UScriptStruct_FGBWPH_MontagePlayState_Statics::NewStructOps, TEXT("GBWPH_MontagePlayState"), &Z_Registration_Info_UScriptStruct_GBWPH_MontagePlayState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPH_MontagePlayState), 1544490411U) },
		{ FGBWPH_RMSInfo_FromMesh::StaticStruct, Z_Construct_UScriptStruct_FGBWPH_RMSInfo_FromMesh_Statics::NewStructOps, TEXT("GBWPH_RMSInfo_FromMesh"), &Z_Registration_Info_UScriptStruct_GBWPH_RMSInfo_FromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPH_RMSInfo_FromMesh), 3539458883U) },
		{ FGBWPHRootMotionSource_FromSKMesh::StaticStruct, Z_Construct_UScriptStruct_FGBWPHRootMotionSource_FromSKMesh_Statics::NewStructOps, TEXT("GBWPHRootMotionSource_FromSKMesh"), &Z_Registration_Info_UScriptStruct_GBWPHRootMotionSource_FromSKMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPHRootMotionSource_FromSKMesh), 2031906530U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWPHAsyncActionObject, UGBWPHAsyncActionObject::StaticClass, TEXT("UGBWPHAsyncActionObject"), &Z_Registration_Info_UClass_UGBWPHAsyncActionObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPHAsyncActionObject), 3516862533U) },
		{ Z_Construct_UClass_UGBWPHAsyncTaskBase, UGBWPHAsyncTaskBase::StaticClass, TEXT("UGBWPHAsyncTaskBase"), &Z_Registration_Info_UClass_UGBWPHAsyncTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPHAsyncTaskBase), 2423221954U) },
		{ Z_Construct_UClass_UGBWPHAsync_SetTimer, UGBWPHAsync_SetTimer::StaticClass, TEXT("UGBWPHAsync_SetTimer"), &Z_Registration_Info_UClass_UGBWPHAsync_SetTimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPHAsync_SetTimer), 1000364351U) },
		{ Z_Construct_UClass_UGBWBPI_MontagePlay, UGBWBPI_MontagePlay::StaticClass, TEXT("UGBWBPI_MontagePlay"), &Z_Registration_Info_UClass_UGBWBPI_MontagePlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWBPI_MontagePlay), 1491613476U) },
		{ Z_Construct_UClass_UGBWPlayMontageCallbackProxy, UGBWPlayMontageCallbackProxy::StaticClass, TEXT("UGBWPlayMontageCallbackProxy"), &Z_Registration_Info_UClass_UGBWPlayMontageCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPlayMontageCallbackProxy), 2514462783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_999829261(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPHAsyncTaskBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
