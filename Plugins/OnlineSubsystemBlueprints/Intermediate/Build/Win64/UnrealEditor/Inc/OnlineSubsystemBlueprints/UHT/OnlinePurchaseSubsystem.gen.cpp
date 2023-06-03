// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBEntitlementTypes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBPurchaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePurchaseSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UPurchaseReceipt_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FRedeemCodeRequestBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventPurchase_UnexpectedPurchaseReceipt_BP_Parms
		{
			FUniqueNetIdRepl UserId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPurchase_UnexpectedPurchaseReceipt_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventPurchase_UnexpectedPurchaseReceipt_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystem::execGetReceipts)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_TARRAY_REF(UPurchaseReceipt*,Z_Param_Out_OutReceipts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetReceipts(Z_Param_UserId,Z_Param_Out_OutReceipts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystem::execFinalizePurchase)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiptId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiptInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizePurchase(Z_Param_UserId,Z_Param_ReceiptId,Z_Param_ReceiptInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystem::execIsAllowedToPurchase)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllowedToPurchase(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlinePurchaseSubsystem::StaticRegisterNativesUOnlinePurchaseSubsystem()
	{
		UClass* Class = UOnlinePurchaseSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinalizePurchase", &UOnlinePurchaseSubsystem::execFinalizePurchase },
			{ "GetReceipts", &UOnlinePurchaseSubsystem::execGetReceipts },
			{ "IsAllowedToPurchase", &UOnlinePurchaseSubsystem::execIsAllowedToPurchase },
			{ "IsSubsystemAvailable", &UOnlinePurchaseSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics
	{
		struct OnlinePurchaseSubsystem_eventFinalizePurchase_Parms
		{
			FUniqueNetIdRepl UserId;
			FString ReceiptId;
			FString ReceiptInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiptId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiptInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystem_eventFinalizePurchase_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::NewProp_ReceiptId = { "ReceiptId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystem_eventFinalizePurchase_Parms, ReceiptId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::NewProp_ReceiptInfo = { "ReceiptInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystem_eventFinalizePurchase_Parms, ReceiptInfo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::NewProp_ReceiptId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::NewProp_ReceiptInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Purchase" },
		{ "Comment", "// @generator-excluded-with-pick\n// void FinalizePurchase(const FUniqueNetId& UserId, const FString& ReceiptId);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
		{ "ToolTip", "@generator-excluded-with-pick\nvoid FinalizePurchase(const FUniqueNetId& UserId, const FString& ReceiptId);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystem, nullptr, "FinalizePurchase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::OnlinePurchaseSubsystem_eventFinalizePurchase_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics
	{
		struct OnlinePurchaseSubsystem_eventGetReceipts_Parms
		{
			FUniqueNetIdRepl UserId;
			TArray<UPurchaseReceipt*> OutReceipts;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutReceipts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutReceipts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystem_eventGetReceipts_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::NewProp_OutReceipts_Inner = { "OutReceipts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPurchaseReceipt_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::NewProp_OutReceipts = { "OutReceipts", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystem_eventGetReceipts_Parms, OutReceipts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::NewProp_OutReceipts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::NewProp_OutReceipts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystem, nullptr, "GetReceipts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::OnlinePurchaseSubsystem_eventGetReceipts_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics
	{
		struct OnlinePurchaseSubsystem_eventIsAllowedToPurchase_Parms
		{
			FUniqueNetIdRepl UserId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystem_eventIsAllowedToPurchase_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePurchaseSubsystem_eventIsAllowedToPurchase_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePurchaseSubsystem_eventIsAllowedToPurchase_Parms), &Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystem, nullptr, "IsAllowedToPurchase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::OnlinePurchaseSubsystem_eventIsAllowedToPurchase_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlinePurchaseSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePurchaseSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePurchaseSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::OnlinePurchaseSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePurchaseSubsystem);
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister()
	{
		return UOnlinePurchaseSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnexpectedPurchaseReceipt_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnexpectedPurchaseReceipt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystem_FinalizePurchase, "FinalizePurchase" }, // 203044946
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystem_GetReceipts, "GetReceipts" }, // 2532445833
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsAllowedToPurchase, "IsAllowedToPurchase" }, // 2687174579
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3693813263
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::NewProp_OnUnexpectedPurchaseReceipt_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::NewProp_OnUnexpectedPurchaseReceipt = { "OnUnexpectedPurchaseReceipt", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystem, OnUnexpectedPurchaseReceipt), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Purchase_UnexpectedPurchaseReceipt_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::NewProp_OnUnexpectedPurchaseReceipt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::NewProp_OnUnexpectedPurchaseReceipt_MetaData)) }; // 3463232757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::NewProp_OnUnexpectedPurchaseReceipt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePurchaseSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::ClassParams = {
		&UOnlinePurchaseSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlinePurchaseSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePurchaseSubsystem.OuterSingleton, Z_Construct_UClass_UOnlinePurchaseSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePurchaseSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePurchaseSubsystem>()
	{
		return UOnlinePurchaseSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePurchaseSubsystem);
	UOnlinePurchaseSubsystem::~UOnlinePurchaseSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemCheckoutCallbackPin_Parms
		{
			FOnlineErrorInfo Result;
			UPurchaseReceipt* Receipt;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Receipt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemCheckoutCallbackPin_Parms, Result), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::NewProp_Receipt = { "Receipt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemCheckoutCallbackPin_Parms, Receipt), Z_Construct_UClass_UPurchaseReceipt_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::NewProp_Receipt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemCheckoutCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystemCheckout::execCheckout)
	{
		P_GET_OBJECT(UOnlinePurchaseSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FPurchaseCheckoutRequestBP,Z_Param_CheckoutRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePurchaseSubsystemCheckout**)Z_Param__Result=UOnlinePurchaseSubsystemCheckout::Checkout(Z_Param_Subsystem,Z_Param_UserId,Z_Param_CheckoutRequest);
		P_NATIVE_END;
	}
	void UOnlinePurchaseSubsystemCheckout::StaticRegisterNativesUOnlinePurchaseSubsystemCheckout()
	{
		UClass* Class = UOnlinePurchaseSubsystemCheckout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Checkout", &UOnlinePurchaseSubsystemCheckout::execCheckout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics
	{
		struct OnlinePurchaseSubsystemCheckout_eventCheckout_Parms
		{
			UOnlinePurchaseSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FPurchaseCheckoutRequestBP CheckoutRequest;
			UOnlinePurchaseSubsystemCheckout* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckoutRequest;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemCheckout_eventCheckout_Parms, Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemCheckout_eventCheckout_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_CheckoutRequest = { "CheckoutRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemCheckout_eventCheckout_Parms, CheckoutRequest), Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP, METADATA_PARAMS(nullptr, 0) }; // 2762426904
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemCheckout_eventCheckout_Parms, ReturnValue), Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_CheckoutRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout, nullptr, "Checkout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::OnlinePurchaseSubsystemCheckout_eventCheckout_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePurchaseSubsystemCheckout);
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_NoRegister()
	{
		return UOnlinePurchaseSubsystemCheckout::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPurchaseCheckoutComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPurchaseCheckoutComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CheckoutRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__CheckoutRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystemCheckout_Checkout, "Checkout" }, // 4283991309
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemCheckout, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnCallFailed_MetaData)) }; // 1901132668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnPurchaseCheckoutComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnPurchaseCheckoutComplete = { "OnPurchaseCheckoutComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemCheckout, OnPurchaseCheckoutComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemCheckoutCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnPurchaseCheckoutComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnPurchaseCheckoutComplete_MetaData)) }; // 1901132668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemCheckout, __Store__Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemCheckout, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemCheckout, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CheckoutRequest_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CheckoutRequest = { "__Store__CheckoutRequest", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemCheckout, __Store__CheckoutRequest), Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CheckoutRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CheckoutRequest_MetaData)) }; // 2762426904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp_OnPurchaseCheckoutComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::NewProp___Store__CheckoutRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePurchaseSubsystemCheckout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::ClassParams = {
		&UOnlinePurchaseSubsystemCheckout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout()
	{
		if (!Z_Registration_Info_UClass_UOnlinePurchaseSubsystemCheckout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePurchaseSubsystemCheckout.OuterSingleton, Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePurchaseSubsystemCheckout.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePurchaseSubsystemCheckout>()
	{
		return UOnlinePurchaseSubsystemCheckout::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePurchaseSubsystemCheckout);
	UOnlinePurchaseSubsystemCheckout::~UOnlinePurchaseSubsystemCheckout() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemRedeemCodeCallbackPin_Parms
		{
			FOnlineErrorInfo Result;
			UPurchaseReceipt* Receipt;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Receipt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemRedeemCodeCallbackPin_Parms, Result), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::NewProp_Receipt = { "Receipt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemRedeemCodeCallbackPin_Parms, Receipt), Z_Construct_UClass_UPurchaseReceipt_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::NewProp_Receipt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemRedeemCodeCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystemRedeemCode::execRedeemCode)
	{
		P_GET_OBJECT(UOnlinePurchaseSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FRedeemCodeRequestBP,Z_Param_RedeemCodeRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePurchaseSubsystemRedeemCode**)Z_Param__Result=UOnlinePurchaseSubsystemRedeemCode::RedeemCode(Z_Param_Subsystem,Z_Param_UserId,Z_Param_RedeemCodeRequest);
		P_NATIVE_END;
	}
	void UOnlinePurchaseSubsystemRedeemCode::StaticRegisterNativesUOnlinePurchaseSubsystemRedeemCode()
	{
		UClass* Class = UOnlinePurchaseSubsystemRedeemCode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RedeemCode", &UOnlinePurchaseSubsystemRedeemCode::execRedeemCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics
	{
		struct OnlinePurchaseSubsystemRedeemCode_eventRedeemCode_Parms
		{
			UOnlinePurchaseSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FRedeemCodeRequestBP RedeemCodeRequest;
			UOnlinePurchaseSubsystemRedeemCode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedeemCodeRequest;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemRedeemCode_eventRedeemCode_Parms, Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemRedeemCode_eventRedeemCode_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_RedeemCodeRequest = { "RedeemCodeRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemRedeemCode_eventRedeemCode_Parms, RedeemCodeRequest), Z_Construct_UScriptStruct_FRedeemCodeRequestBP, METADATA_PARAMS(nullptr, 0) }; // 1921124768
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemRedeemCode_eventRedeemCode_Parms, ReturnValue), Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_RedeemCodeRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode, nullptr, "RedeemCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::OnlinePurchaseSubsystemRedeemCode_eventRedeemCode_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePurchaseSubsystemRedeemCode);
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_NoRegister()
	{
		return UOnlinePurchaseSubsystemRedeemCode::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPurchaseRedeemCodeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPurchaseRedeemCodeComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__RedeemCodeRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__RedeemCodeRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystemRedeemCode_RedeemCode, "RedeemCode" }, // 606149191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemRedeemCode, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnCallFailed_MetaData)) }; // 3606596387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnPurchaseRedeemCodeComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnPurchaseRedeemCodeComplete = { "OnPurchaseRedeemCodeComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemRedeemCode, OnPurchaseRedeemCodeComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemRedeemCodeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnPurchaseRedeemCodeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnPurchaseRedeemCodeComplete_MetaData)) }; // 3606596387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemRedeemCode, __Store__Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemRedeemCode, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemRedeemCode, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__RedeemCodeRequest_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__RedeemCodeRequest = { "__Store__RedeemCodeRequest", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemRedeemCode, __Store__RedeemCodeRequest), Z_Construct_UScriptStruct_FRedeemCodeRequestBP, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__RedeemCodeRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__RedeemCodeRequest_MetaData)) }; // 1921124768
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp_OnPurchaseRedeemCodeComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::NewProp___Store__RedeemCodeRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePurchaseSubsystemRedeemCode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::ClassParams = {
		&UOnlinePurchaseSubsystemRedeemCode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode()
	{
		if (!Z_Registration_Info_UClass_UOnlinePurchaseSubsystemRedeemCode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePurchaseSubsystemRedeemCode.OuterSingleton, Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePurchaseSubsystemRedeemCode.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePurchaseSubsystemRedeemCode>()
	{
		return UOnlinePurchaseSubsystemRedeemCode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePurchaseSubsystemRedeemCode);
	UOnlinePurchaseSubsystemRedeemCode::~UOnlinePurchaseSubsystemRedeemCode() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemQueryReceiptsCallbackPin_Parms
		{
			FOnlineErrorInfo Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemQueryReceiptsCallbackPin_Parms, Result), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemQueryReceiptsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystemQueryReceipts::execQueryReceipts)
	{
		P_GET_OBJECT(UOnlinePurchaseSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_UBOOL(Z_Param_bRestoreReceipts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePurchaseSubsystemQueryReceipts**)Z_Param__Result=UOnlinePurchaseSubsystemQueryReceipts::QueryReceipts(Z_Param_Subsystem,Z_Param_UserId,Z_Param_bRestoreReceipts);
		P_NATIVE_END;
	}
	void UOnlinePurchaseSubsystemQueryReceipts::StaticRegisterNativesUOnlinePurchaseSubsystemQueryReceipts()
	{
		UClass* Class = UOnlinePurchaseSubsystemQueryReceipts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryReceipts", &UOnlinePurchaseSubsystemQueryReceipts::execQueryReceipts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics
	{
		struct OnlinePurchaseSubsystemQueryReceipts_eventQueryReceipts_Parms
		{
			UOnlinePurchaseSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			bool bRestoreReceipts;
			UOnlinePurchaseSubsystemQueryReceipts* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_bRestoreReceipts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreReceipts;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemQueryReceipts_eventQueryReceipts_Parms, Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemQueryReceipts_eventQueryReceipts_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_bRestoreReceipts_SetBit(void* Obj)
	{
		((OnlinePurchaseSubsystemQueryReceipts_eventQueryReceipts_Parms*)Obj)->bRestoreReceipts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_bRestoreReceipts = { "bRestoreReceipts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePurchaseSubsystemQueryReceipts_eventQueryReceipts_Parms), &Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_bRestoreReceipts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemQueryReceipts_eventQueryReceipts_Parms, ReturnValue), Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_bRestoreReceipts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts, nullptr, "QueryReceipts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::OnlinePurchaseSubsystemQueryReceipts_eventQueryReceipts_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePurchaseSubsystemQueryReceipts);
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_NoRegister()
	{
		return UOnlinePurchaseSubsystemQueryReceipts::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryReceiptsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryReceiptsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bRestoreReceipts_MetaData[];
#endif
		static void NewProp___Store__bRestoreReceipts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bRestoreReceipts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts, "QueryReceipts" }, // 1588639870
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemQueryReceipts, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnCallFailed_MetaData)) }; // 1193907003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnQueryReceiptsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnQueryReceiptsComplete = { "OnQueryReceiptsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemQueryReceipts, OnQueryReceiptsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemQueryReceiptsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnQueryReceiptsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnQueryReceiptsComplete_MetaData)) }; // 1193907003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemQueryReceipts, __Store__Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemQueryReceipts, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemQueryReceipts, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__bRestoreReceipts_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__bRestoreReceipts_SetBit(void* Obj)
	{
		((UOnlinePurchaseSubsystemQueryReceipts*)Obj)->__Store__bRestoreReceipts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__bRestoreReceipts = { "__Store__bRestoreReceipts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlinePurchaseSubsystemQueryReceipts), &Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__bRestoreReceipts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__bRestoreReceipts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__bRestoreReceipts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp_OnQueryReceiptsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::NewProp___Store__bRestoreReceipts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePurchaseSubsystemQueryReceipts>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::ClassParams = {
		&UOnlinePurchaseSubsystemQueryReceipts::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts()
	{
		if (!Z_Registration_Info_UClass_UOnlinePurchaseSubsystemQueryReceipts.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePurchaseSubsystemQueryReceipts.OuterSingleton, Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePurchaseSubsystemQueryReceipts.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePurchaseSubsystemQueryReceipts>()
	{
		return UOnlinePurchaseSubsystemQueryReceipts::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePurchaseSubsystemQueryReceipts);
	UOnlinePurchaseSubsystemQueryReceipts::~UOnlinePurchaseSubsystemQueryReceipts() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin_Parms
		{
			FOnlineErrorInfo Result;
			FString ValidationInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValidationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin_Parms, Result), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::NewProp_ValidationInfo = { "ValidationInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin_Parms, ValidationInfo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::NewProp_ValidationInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::execFinalizeReceiptValidationInfo)
	{
		P_GET_OBJECT(UOnlinePurchaseSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_InReceiptValidationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo**)Z_Param__Result=UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::FinalizeReceiptValidationInfo(Z_Param_Subsystem,Z_Param_UserId,Z_Param_InReceiptValidationInfo);
		P_NATIVE_END;
	}
	void UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::StaticRegisterNativesUOnlinePurchaseSubsystemFinalizeReceiptValidationInfo()
	{
		UClass* Class = UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinalizeReceiptValidationInfo", &UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::execFinalizeReceiptValidationInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics
	{
		struct OnlinePurchaseSubsystemFinalizeReceiptValidationInfo_eventFinalizeReceiptValidationInfo_Parms
		{
			UOnlinePurchaseSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FString InReceiptValidationInfo;
			UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InReceiptValidationInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemFinalizeReceiptValidationInfo_eventFinalizeReceiptValidationInfo_Parms, Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemFinalizeReceiptValidationInfo_eventFinalizeReceiptValidationInfo_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_InReceiptValidationInfo = { "InReceiptValidationInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemFinalizeReceiptValidationInfo_eventFinalizeReceiptValidationInfo_Parms, InReceiptValidationInfo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePurchaseSubsystemFinalizeReceiptValidationInfo_eventFinalizeReceiptValidationInfo_Parms, ReturnValue), Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_InReceiptValidationInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, nullptr, "FinalizeReceiptValidationInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::OnlinePurchaseSubsystemFinalizeReceiptValidationInfo_eventFinalizeReceiptValidationInfo_Parms), Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo);
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_NoRegister()
	{
		return UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinalizeReceiptValidationInfoComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinalizeReceiptValidationInfoComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__InReceiptValidationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__InReceiptValidationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo, "FinalizeReceiptValidationInfo" }, // 4129677466
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnCallFailed_MetaData)) }; // 1713053089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnFinalizeReceiptValidationInfoComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnFinalizeReceiptValidationInfoComplete = { "OnFinalizeReceiptValidationInfoComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, OnFinalizeReceiptValidationInfoComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnFinalizeReceiptValidationInfoComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnFinalizeReceiptValidationInfoComplete_MetaData)) }; // 1713053089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__Subsystem), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__InReceiptValidationInfo_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePurchaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__InReceiptValidationInfo = { "__Store__InReceiptValidationInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__InReceiptValidationInfo), METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__InReceiptValidationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__InReceiptValidationInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp_OnFinalizeReceiptValidationInfoComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::NewProp___Store__InReceiptValidationInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::ClassParams = {
		&UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo()
	{
		if (!Z_Registration_Info_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo.OuterSingleton, Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo>()
	{
		return UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo);
	UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::~UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePurchaseSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePurchaseSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePurchaseSubsystem, UOnlinePurchaseSubsystem::StaticClass, TEXT("UOnlinePurchaseSubsystem"), &Z_Registration_Info_UClass_UOnlinePurchaseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePurchaseSubsystem), 3623771772U) },
		{ Z_Construct_UClass_UOnlinePurchaseSubsystemCheckout, UOnlinePurchaseSubsystemCheckout::StaticClass, TEXT("UOnlinePurchaseSubsystemCheckout"), &Z_Registration_Info_UClass_UOnlinePurchaseSubsystemCheckout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePurchaseSubsystemCheckout), 2979773830U) },
		{ Z_Construct_UClass_UOnlinePurchaseSubsystemRedeemCode, UOnlinePurchaseSubsystemRedeemCode::StaticClass, TEXT("UOnlinePurchaseSubsystemRedeemCode"), &Z_Registration_Info_UClass_UOnlinePurchaseSubsystemRedeemCode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePurchaseSubsystemRedeemCode), 2489149303U) },
		{ Z_Construct_UClass_UOnlinePurchaseSubsystemQueryReceipts, UOnlinePurchaseSubsystemQueryReceipts::StaticClass, TEXT("UOnlinePurchaseSubsystemQueryReceipts"), &Z_Registration_Info_UClass_UOnlinePurchaseSubsystemQueryReceipts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePurchaseSubsystemQueryReceipts), 543991914U) },
		{ Z_Construct_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::StaticClass, TEXT("UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo"), &Z_Registration_Info_UClass_UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo), 1104163559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePurchaseSubsystem_h_3926040661(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePurchaseSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePurchaseSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
