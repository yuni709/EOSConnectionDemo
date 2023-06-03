// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBFileTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineEntitlementsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlement_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FPagedQueryBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventEntitlements_QueryEntitlementsComplete_BP_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString Namespace;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventEntitlements_QueryEntitlementsComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventEntitlements_QueryEntitlementsComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventEntitlements_QueryEntitlementsComplete_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventEntitlements_QueryEntitlementsComplete_BP_Parms, Namespace), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventEntitlements_QueryEntitlementsComplete_BP_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Entitlements_QueryEntitlementsComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventEntitlements_QueryEntitlementsComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineEntitlementsSubsystem::execGetAllEntitlements)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
		P_GET_TARRAY_REF(UOnlineEntitlement*,Z_Param_Out_OutUserEntitlements);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllEntitlements(Z_Param_UserId,Z_Param_Namespace,Z_Param_Out_OutUserEntitlements);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlementsSubsystem::execGetItemEntitlement)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineEntitlement**)Z_Param__Result=P_THIS->GetItemEntitlement(Z_Param_UserId,Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlementsSubsystem::execGetEntitlement)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineEntitlement**)Z_Param__Result=P_THIS->GetEntitlement(Z_Param_UserId,Z_Param_EntitlementId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlementsSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineEntitlementsSubsystem::StaticRegisterNativesUOnlineEntitlementsSubsystem()
	{
		UClass* Class = UOnlineEntitlementsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllEntitlements", &UOnlineEntitlementsSubsystem::execGetAllEntitlements },
			{ "GetEntitlement", &UOnlineEntitlementsSubsystem::execGetEntitlement },
			{ "GetItemEntitlement", &UOnlineEntitlementsSubsystem::execGetItemEntitlement },
			{ "IsSubsystemAvailable", &UOnlineEntitlementsSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics
	{
		struct OnlineEntitlementsSubsystem_eventGetAllEntitlements_Parms
		{
			FUniqueNetIdRepl UserId;
			FString Namespace;
			TArray<UOnlineEntitlement*> OutUserEntitlements;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutUserEntitlements_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUserEntitlements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetAllEntitlements_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetAllEntitlements_Parms, Namespace), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_OutUserEntitlements_Inner = { "OutUserEntitlements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOnlineEntitlement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_OutUserEntitlements = { "OutUserEntitlements", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetAllEntitlements_Parms, OutUserEntitlements), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_OutUserEntitlements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::NewProp_OutUserEntitlements,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlementsSubsystem, nullptr, "GetAllEntitlements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::OnlineEntitlementsSubsystem_eventGetAllEntitlements_Parms), Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics
	{
		struct OnlineEntitlementsSubsystem_eventGetEntitlement_Parms
		{
			FUniqueNetIdRepl UserId;
			FString EntitlementId;
			UOnlineEntitlement* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetEntitlement_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetEntitlement_Parms, EntitlementId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetEntitlement_Parms, ReturnValue), Z_Construct_UClass_UOnlineEntitlement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::NewProp_EntitlementId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlementsSubsystem, nullptr, "GetEntitlement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::OnlineEntitlementsSubsystem_eventGetEntitlement_Parms), Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics
	{
		struct OnlineEntitlementsSubsystem_eventGetItemEntitlement_Parms
		{
			FUniqueNetIdRepl UserId;
			FString ItemId;
			UOnlineEntitlement* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetItemEntitlement_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetItemEntitlement_Parms, ItemId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystem_eventGetItemEntitlement_Parms, ReturnValue), Z_Construct_UClass_UOnlineEntitlement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlementsSubsystem, nullptr, "GetItemEntitlement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::OnlineEntitlementsSubsystem_eventGetItemEntitlement_Parms), Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineEntitlementsSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineEntitlementsSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineEntitlementsSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlementsSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::OnlineEntitlementsSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineEntitlementsSubsystem);
	UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystem_NoRegister()
	{
		return UOnlineEntitlementsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryEntitlementsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryEntitlementsComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetAllEntitlements, "GetAllEntitlements" }, // 1927332592
		{ &Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetEntitlement, "GetEntitlement" }, // 1426874809
		{ &Z_Construct_UFunction_UOnlineEntitlementsSubsystem_GetItemEntitlement, "GetItemEntitlement" }, // 2842042176
		{ &Z_Construct_UFunction_UOnlineEntitlementsSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3486514031
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::NewProp_OnQueryEntitlementsComplete_MetaData[] = {
		{ "Category", "Online|Entitlements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::NewProp_OnQueryEntitlementsComplete = { "OnQueryEntitlementsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystem, OnQueryEntitlementsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Entitlements_QueryEntitlementsComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::NewProp_OnQueryEntitlementsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::NewProp_OnQueryEntitlementsComplete_MetaData)) }; // 448745838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::NewProp_OnQueryEntitlementsComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEntitlementsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::ClassParams = {
		&UOnlineEntitlementsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineEntitlementsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineEntitlementsSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineEntitlementsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineEntitlementsSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineEntitlementsSubsystem>()
	{
		return UOnlineEntitlementsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEntitlementsSubsystem);
	UOnlineEntitlementsSubsystem::~UOnlineEntitlementsSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineEntitlementsSubsystemQueryEntitlementsCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString Namespace;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineEntitlementsSubsystemQueryEntitlementsCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineEntitlementsSubsystemQueryEntitlementsCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineEntitlementsSubsystemQueryEntitlementsCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineEntitlementsSubsystemQueryEntitlementsCallbackPin_Parms, Namespace), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineEntitlementsSubsystemQueryEntitlementsCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineEntitlementsSubsystemQueryEntitlementsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineEntitlementsSubsystemQueryEntitlements::execQueryEntitlements)
	{
		P_GET_OBJECT(UOnlineEntitlementsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
		P_GET_STRUCT(FPagedQueryBP,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineEntitlementsSubsystemQueryEntitlements**)Z_Param__Result=UOnlineEntitlementsSubsystemQueryEntitlements::QueryEntitlements(Z_Param_Subsystem,Z_Param_UserId,Z_Param_Namespace,Z_Param_Page);
		P_NATIVE_END;
	}
	void UOnlineEntitlementsSubsystemQueryEntitlements::StaticRegisterNativesUOnlineEntitlementsSubsystemQueryEntitlements()
	{
		UClass* Class = UOnlineEntitlementsSubsystemQueryEntitlements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryEntitlements", &UOnlineEntitlementsSubsystemQueryEntitlements::execQueryEntitlements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics
	{
		struct OnlineEntitlementsSubsystemQueryEntitlements_eventQueryEntitlements_Parms
		{
			UOnlineEntitlementsSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FString Namespace;
			FPagedQueryBP Page;
			UOnlineEntitlementsSubsystemQueryEntitlements* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Page;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystemQueryEntitlements_eventQueryEntitlements_Parms, Subsystem), Z_Construct_UClass_UOnlineEntitlementsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystemQueryEntitlements_eventQueryEntitlements_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystemQueryEntitlements_eventQueryEntitlements_Parms, Namespace), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystemQueryEntitlements_eventQueryEntitlements_Parms, Page), Z_Construct_UScriptStruct_FPagedQueryBP, METADATA_PARAMS(nullptr, 0) }; // 2694390678
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlementsSubsystemQueryEntitlements_eventQueryEntitlements_Parms, ReturnValue), Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Entitlements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements, nullptr, "QueryEntitlements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::OnlineEntitlementsSubsystemQueryEntitlements_eventQueryEntitlements_Parms), Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineEntitlementsSubsystemQueryEntitlements);
	UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_NoRegister()
	{
		return UOnlineEntitlementsSubsystemQueryEntitlements::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryEntitlementsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryEntitlementsComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Namespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__Namespace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Page_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Page;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements, "QueryEntitlements" }, // 3074259974
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystemQueryEntitlements, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnCallFailed_MetaData)) }; // 3114948963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnQueryEntitlementsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnQueryEntitlementsComplete = { "OnQueryEntitlementsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystemQueryEntitlements, OnQueryEntitlementsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnQueryEntitlementsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnQueryEntitlementsComplete_MetaData)) }; // 3114948963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__Subsystem), Z_Construct_UClass_UOnlineEntitlementsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Namespace_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Namespace = { "__Store__Namespace", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__Namespace), METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Namespace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Page_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineEntitlementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Page = { "__Store__Page", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__Page), Z_Construct_UScriptStruct_FPagedQueryBP, METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Page_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Page_MetaData)) }; // 2694390678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp_OnQueryEntitlementsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::NewProp___Store__Page,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEntitlementsSubsystemQueryEntitlements>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::ClassParams = {
		&UOnlineEntitlementsSubsystemQueryEntitlements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements()
	{
		if (!Z_Registration_Info_UClass_UOnlineEntitlementsSubsystemQueryEntitlements.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineEntitlementsSubsystemQueryEntitlements.OuterSingleton, Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineEntitlementsSubsystemQueryEntitlements.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineEntitlementsSubsystemQueryEntitlements>()
	{
		return UOnlineEntitlementsSubsystemQueryEntitlements::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEntitlementsSubsystemQueryEntitlements);
	UOnlineEntitlementsSubsystemQueryEntitlements::~UOnlineEntitlementsSubsystemQueryEntitlements() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineEntitlementsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineEntitlementsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineEntitlementsSubsystem, UOnlineEntitlementsSubsystem::StaticClass, TEXT("UOnlineEntitlementsSubsystem"), &Z_Registration_Info_UClass_UOnlineEntitlementsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineEntitlementsSubsystem), 3437891905U) },
		{ Z_Construct_UClass_UOnlineEntitlementsSubsystemQueryEntitlements, UOnlineEntitlementsSubsystemQueryEntitlements::StaticClass, TEXT("UOnlineEntitlementsSubsystemQueryEntitlements"), &Z_Registration_Info_UClass_UOnlineEntitlementsSubsystemQueryEntitlements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineEntitlementsSubsystemQueryEntitlements), 2138685813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineEntitlementsSubsystem_h_2096003393(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineEntitlementsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineEntitlementsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
