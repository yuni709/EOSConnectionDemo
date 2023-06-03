// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineUserRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineUserSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserRef_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventUser_QueryUserInfoComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool bWasSuccessful;
			TArray<FUniqueNetIdRepl> UserIds;
			FString ErrorStr;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUser_QueryUserInfoComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventUser_QueryUserInfoComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventUser_QueryUserInfoComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUser_QueryUserInfoComplete_BP_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_UserIds_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_ErrorStr = { "ErrorStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUser_QueryUserInfoComplete_BP_Parms, ErrorStr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_UserIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_UserIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::NewProp_ErrorStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "User_QueryUserInfoComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventUser_QueryUserInfoComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystem::execGetExternalIdMapping)
	{
		P_GET_STRUCT(FExternalIdQueryOptionsBP,Z_Param_QueryOptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetExternalIdMapping(Z_Param_QueryOptions,Z_Param_ExternalId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystem::execGetExternalIdMappings)
	{
		P_GET_STRUCT(FExternalIdQueryOptionsBP,Z_Param_QueryOptions);
		P_GET_TARRAY(FString,Z_Param_ExternalIds);
		P_GET_TARRAY_REF(FUniqueNetIdRepl,Z_Param_Out_OutIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetExternalIdMappings(Z_Param_QueryOptions,Z_Param_ExternalIds,Z_Param_Out_OutIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystem::execGetUserInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserRef**)Z_Param__Result=P_THIS->GetUserInfo(Z_Param_LocalUserNum,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystem::execGetAllUserInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_TARRAY_REF(UOnlineUserRef*,Z_Param_Out_OutUsers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllUserInfo(Z_Param_LocalUserNum,Z_Param_Out_OutUsers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineUserSubsystem::StaticRegisterNativesUOnlineUserSubsystem()
	{
		UClass* Class = UOnlineUserSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllUserInfo", &UOnlineUserSubsystem::execGetAllUserInfo },
			{ "GetExternalIdMapping", &UOnlineUserSubsystem::execGetExternalIdMapping },
			{ "GetExternalIdMappings", &UOnlineUserSubsystem::execGetExternalIdMappings },
			{ "GetUserInfo", &UOnlineUserSubsystem::execGetUserInfo },
			{ "IsSubsystemAvailable", &UOnlineUserSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics
	{
		struct OnlineUserSubsystem_eventGetAllUserInfo_Parms
		{
			int32 LocalUserNum;
			TArray<UOnlineUserRef*> OutUsers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutUsers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUsers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetAllUserInfo_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_OutUsers_Inner = { "OutUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOnlineUserRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_OutUsers = { "OutUsers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetAllUserInfo_Parms, OutUsers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineUserSubsystem_eventGetAllUserInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserSubsystem_eventGetAllUserInfo_Parms), &Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_OutUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_OutUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystem, nullptr, "GetAllUserInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::OnlineUserSubsystem_eventGetAllUserInfo_Parms), Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics
	{
		struct OnlineUserSubsystem_eventGetExternalIdMapping_Parms
		{
			FExternalIdQueryOptionsBP QueryOptions;
			FString ExternalId;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::NewProp_QueryOptions = { "QueryOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetExternalIdMapping_Parms, QueryOptions), Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP, METADATA_PARAMS(nullptr, 0) }; // 358778272
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::NewProp_ExternalId = { "ExternalId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetExternalIdMapping_Parms, ExternalId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetExternalIdMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::NewProp_QueryOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::NewProp_ExternalId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystem, nullptr, "GetExternalIdMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::OnlineUserSubsystem_eventGetExternalIdMapping_Parms), Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics
	{
		struct OnlineUserSubsystem_eventGetExternalIdMappings_Parms
		{
			FExternalIdQueryOptionsBP QueryOptions;
			TArray<FString> ExternalIds;
			TArray<FUniqueNetIdRepl> OutIds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_QueryOptions = { "QueryOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetExternalIdMappings_Parms, QueryOptions), Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP, METADATA_PARAMS(nullptr, 0) }; // 358778272
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_ExternalIds_Inner = { "ExternalIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_ExternalIds = { "ExternalIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetExternalIdMappings_Parms, ExternalIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_OutIds_Inner = { "OutIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_OutIds = { "OutIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetExternalIdMappings_Parms, OutIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_QueryOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_ExternalIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_ExternalIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_OutIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::NewProp_OutIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystem, nullptr, "GetExternalIdMappings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::OnlineUserSubsystem_eventGetExternalIdMappings_Parms), Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics
	{
		struct OnlineUserSubsystem_eventGetUserInfo_Parms
		{
			int32 LocalUserNum;
			FUniqueNetIdRepl UserId;
			UOnlineUserRef* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetUserInfo_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetUserInfo_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystem_eventGetUserInfo_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystem, nullptr, "GetUserInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::OnlineUserSubsystem_eventGetUserInfo_Parms), Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineUserSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineUserSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::OnlineUserSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserSubsystem);
	UClass* Z_Construct_UClass_UOnlineUserSubsystem_NoRegister()
	{
		return UOnlineUserSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserInfoComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryUserInfoComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserSubsystem_GetAllUserInfo, "GetAllUserInfo" }, // 754622662
		{ &Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMapping, "GetExternalIdMapping" }, // 47476472
		{ &Z_Construct_UFunction_UOnlineUserSubsystem_GetExternalIdMappings, "GetExternalIdMappings" }, // 403953908
		{ &Z_Construct_UFunction_UOnlineUserSubsystem_GetUserInfo, "GetUserInfo" }, // 3965217526
		{ &Z_Construct_UFunction_UOnlineUserSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 4220188159
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystem_Statics::NewProp_OnQueryUserInfoComplete_MetaData[] = {
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserSubsystem_Statics::NewProp_OnQueryUserInfoComplete = { "OnQueryUserInfoComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystem, OnQueryUserInfoComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_User_QueryUserInfoComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystem_Statics::NewProp_OnQueryUserInfoComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystem_Statics::NewProp_OnQueryUserInfoComplete_MetaData)) }; // 3394738645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystem_Statics::NewProp_OnQueryUserInfoComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserSubsystem_Statics::ClassParams = {
		&UOnlineUserSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineUserSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserSubsystem>()
	{
		return UOnlineUserSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserSubsystem);
	UOnlineUserSubsystem::~UOnlineUserSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserInfoCallbackPin_Parms
		{
			bool bWasSuccessful;
			TArray<FUniqueNetIdRepl> UserIds;
			FString ErrorStr;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserInfoCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserInfoCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserInfoCallbackPin_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_UserIds_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_ErrorStr = { "ErrorStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserInfoCallbackPin_Parms, ErrorStr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_UserIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_UserIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::NewProp_ErrorStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserInfoCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystemQueryUserInfo::execQueryUserInfo)
	{
		P_GET_OBJECT(UOnlineUserSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_TARRAY(FUniqueNetIdRepl,Z_Param_UserIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserSubsystemQueryUserInfo**)Z_Param__Result=UOnlineUserSubsystemQueryUserInfo::QueryUserInfo(Z_Param_Subsystem,Z_Param_LocalUserNum,Z_Param_UserIds);
		P_NATIVE_END;
	}
	void UOnlineUserSubsystemQueryUserInfo::StaticRegisterNativesUOnlineUserSubsystemQueryUserInfo()
	{
		UClass* Class = UOnlineUserSubsystemQueryUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryUserInfo", &UOnlineUserSubsystemQueryUserInfo::execQueryUserInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics
	{
		struct OnlineUserSubsystemQueryUserInfo_eventQueryUserInfo_Parms
		{
			UOnlineUserSubsystem* Subsystem;
			int32 LocalUserNum;
			TArray<FUniqueNetIdRepl> UserIds;
			UOnlineUserSubsystemQueryUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserInfo_eventQueryUserInfo_Parms, Subsystem), Z_Construct_UClass_UOnlineUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserInfo_eventQueryUserInfo_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserInfo_eventQueryUserInfo_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserInfo_eventQueryUserInfo_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_UserIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_UserIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo, nullptr, "QueryUserInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::OnlineUserSubsystemQueryUserInfo_eventQueryUserInfo_Parms), Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserSubsystemQueryUserInfo);
	UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_NoRegister()
	{
		return UOnlineUserSubsystemQueryUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserInfoComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryUserInfoComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp___Store__LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__UserIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserSubsystemQueryUserInfo_QueryUserInfo, "QueryUserInfo" }, // 1265376436
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserInfo, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnCallFailed_MetaData)) }; // 1137796296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnQueryUserInfoComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnQueryUserInfoComplete = { "OnQueryUserInfoComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserInfo, OnQueryUserInfoComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserInfoCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnQueryUserInfoComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnQueryUserInfoComplete_MetaData)) }; // 1137796296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserInfo, __Store__Subsystem), Z_Construct_UClass_UOnlineUserSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserInfo, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserInfo, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__LocalUserNum_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__UserIds_Inner = { "__Store__UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__UserIds_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__UserIds = { "__Store__UserIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserInfo, __Store__UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__UserIds_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp_OnQueryUserInfoComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__UserIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::NewProp___Store__UserIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserSubsystemQueryUserInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::ClassParams = {
		&UOnlineUserSubsystemQueryUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserInfo.OuterSingleton, Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserInfo.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserSubsystemQueryUserInfo>()
	{
		return UOnlineUserSubsystemQueryUserInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserSubsystemQueryUserInfo);
	UOnlineUserSubsystemQueryUserInfo::~UOnlineUserSubsystemQueryUserInfo() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString DisplayNameOrEmail;
			FUniqueNetIdRepl FoundUserId;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayNameOrEmail;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_DisplayNameOrEmail = { "DisplayNameOrEmail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms, DisplayNameOrEmail), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_FoundUserId = { "FoundUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms, FoundUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_DisplayNameOrEmail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_FoundUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryUserIdMappingCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystemQueryUserIdMapping::execQueryUserIdMapping)
	{
		P_GET_OBJECT(UOnlineUserSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayNameOrEmail);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserSubsystemQueryUserIdMapping**)Z_Param__Result=UOnlineUserSubsystemQueryUserIdMapping::QueryUserIdMapping(Z_Param_Subsystem,Z_Param_UserId,Z_Param_DisplayNameOrEmail);
		P_NATIVE_END;
	}
	void UOnlineUserSubsystemQueryUserIdMapping::StaticRegisterNativesUOnlineUserSubsystemQueryUserIdMapping()
	{
		UClass* Class = UOnlineUserSubsystemQueryUserIdMapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryUserIdMapping", &UOnlineUserSubsystemQueryUserIdMapping::execQueryUserIdMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics
	{
		struct OnlineUserSubsystemQueryUserIdMapping_eventQueryUserIdMapping_Parms
		{
			UOnlineUserSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FString DisplayNameOrEmail;
			UOnlineUserSubsystemQueryUserIdMapping* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayNameOrEmail;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserIdMapping_eventQueryUserIdMapping_Parms, Subsystem), Z_Construct_UClass_UOnlineUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserIdMapping_eventQueryUserIdMapping_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_DisplayNameOrEmail = { "DisplayNameOrEmail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserIdMapping_eventQueryUserIdMapping_Parms, DisplayNameOrEmail), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryUserIdMapping_eventQueryUserIdMapping_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_DisplayNameOrEmail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping, nullptr, "QueryUserIdMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::OnlineUserSubsystemQueryUserIdMapping_eventQueryUserIdMapping_Parms), Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserSubsystemQueryUserIdMapping);
	UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_NoRegister()
	{
		return UOnlineUserSubsystemQueryUserIdMapping::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserMappingComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryUserMappingComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__DisplayNameOrEmail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__DisplayNameOrEmail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping, "QueryUserIdMapping" }, // 493723266
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserIdMapping, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnCallFailed_MetaData)) }; // 3308980362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnQueryUserMappingComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnQueryUserMappingComplete = { "OnQueryUserMappingComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserIdMapping, OnQueryUserMappingComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryUserIdMappingCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnQueryUserMappingComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnQueryUserMappingComplete_MetaData)) }; // 3308980362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserIdMapping, __Store__Subsystem), Z_Construct_UClass_UOnlineUserSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserIdMapping, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserIdMapping, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__DisplayNameOrEmail_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__DisplayNameOrEmail = { "__Store__DisplayNameOrEmail", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryUserIdMapping, __Store__DisplayNameOrEmail), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__DisplayNameOrEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__DisplayNameOrEmail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp_OnQueryUserMappingComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::NewProp___Store__DisplayNameOrEmail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserSubsystemQueryUserIdMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::ClassParams = {
		&UOnlineUserSubsystemQueryUserIdMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserIdMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserIdMapping.OuterSingleton, Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserIdMapping.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserSubsystemQueryUserIdMapping>()
	{
		return UOnlineUserSubsystemQueryUserIdMapping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserSubsystemQueryUserIdMapping);
	UOnlineUserSubsystemQueryUserIdMapping::~UOnlineUserSubsystemQueryUserIdMapping() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FExternalIdQueryOptionsBP QueryOptions;
			TArray<FString> ExternalIds;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_QueryOptions = { "QueryOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms, QueryOptions), Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP, METADATA_PARAMS(nullptr, 0) }; // 358778272
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_ExternalIds_Inner = { "ExternalIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_ExternalIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_ExternalIds = { "ExternalIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms, ExternalIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_ExternalIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_ExternalIds_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_QueryOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_ExternalIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_ExternalIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineUserSubsystemQueryExternalIdMappingsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserSubsystemQueryExternalIdMappings::execQueryExternalIdMappings)
	{
		P_GET_OBJECT(UOnlineUserSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FExternalIdQueryOptionsBP,Z_Param_QueryOptions);
		P_GET_TARRAY(FString,Z_Param_ExternalIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserSubsystemQueryExternalIdMappings**)Z_Param__Result=UOnlineUserSubsystemQueryExternalIdMappings::QueryExternalIdMappings(Z_Param_Subsystem,Z_Param_UserId,Z_Param_QueryOptions,Z_Param_ExternalIds);
		P_NATIVE_END;
	}
	void UOnlineUserSubsystemQueryExternalIdMappings::StaticRegisterNativesUOnlineUserSubsystemQueryExternalIdMappings()
	{
		UClass* Class = UOnlineUserSubsystemQueryExternalIdMappings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryExternalIdMappings", &UOnlineUserSubsystemQueryExternalIdMappings::execQueryExternalIdMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics
	{
		struct OnlineUserSubsystemQueryExternalIdMappings_eventQueryExternalIdMappings_Parms
		{
			UOnlineUserSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FExternalIdQueryOptionsBP QueryOptions;
			TArray<FString> ExternalIds;
			UOnlineUserSubsystemQueryExternalIdMappings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryOptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryExternalIdMappings_eventQueryExternalIdMappings_Parms, Subsystem), Z_Construct_UClass_UOnlineUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryExternalIdMappings_eventQueryExternalIdMappings_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_QueryOptions = { "QueryOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryExternalIdMappings_eventQueryExternalIdMappings_Parms, QueryOptions), Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP, METADATA_PARAMS(nullptr, 0) }; // 358778272
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_ExternalIds_Inner = { "ExternalIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_ExternalIds = { "ExternalIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryExternalIdMappings_eventQueryExternalIdMappings_Parms, ExternalIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserSubsystemQueryExternalIdMappings_eventQueryExternalIdMappings_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_QueryOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_ExternalIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_ExternalIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|User" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings, nullptr, "QueryExternalIdMappings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::OnlineUserSubsystemQueryExternalIdMappings_eventQueryExternalIdMappings_Parms), Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserSubsystemQueryExternalIdMappings);
	UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_NoRegister()
	{
		return UOnlineUserSubsystemQueryExternalIdMappings::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryExternalIdMappingsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryExternalIdMappingsComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__QueryOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__QueryOptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ExternalIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ExternalIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__ExternalIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings, "QueryExternalIdMappings" }, // 1975704782
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryExternalIdMappings, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnCallFailed_MetaData)) }; // 3381846930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnQueryExternalIdMappingsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnQueryExternalIdMappingsComplete = { "OnQueryExternalIdMappingsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryExternalIdMappings, OnQueryExternalIdMappingsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserSubsystemQueryExternalIdMappingsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnQueryExternalIdMappingsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnQueryExternalIdMappingsComplete_MetaData)) }; // 3381846930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryExternalIdMappings, __Store__Subsystem), Z_Construct_UClass_UOnlineUserSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryExternalIdMappings, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryExternalIdMappings, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__QueryOptions_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__QueryOptions = { "__Store__QueryOptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryExternalIdMappings, __Store__QueryOptions), Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__QueryOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__QueryOptions_MetaData)) }; // 358778272
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__ExternalIds_Inner = { "__Store__ExternalIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__ExternalIds_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__ExternalIds = { "__Store__ExternalIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserSubsystemQueryExternalIdMappings, __Store__ExternalIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__ExternalIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__ExternalIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp_OnQueryExternalIdMappingsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__QueryOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__ExternalIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::NewProp___Store__ExternalIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserSubsystemQueryExternalIdMappings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::ClassParams = {
		&UOnlineUserSubsystemQueryExternalIdMappings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserSubsystemQueryExternalIdMappings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserSubsystemQueryExternalIdMappings.OuterSingleton, Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserSubsystemQueryExternalIdMappings.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserSubsystemQueryExternalIdMappings>()
	{
		return UOnlineUserSubsystemQueryExternalIdMappings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserSubsystemQueryExternalIdMappings);
	UOnlineUserSubsystemQueryExternalIdMappings::~UOnlineUserSubsystemQueryExternalIdMappings() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineUserSubsystem, UOnlineUserSubsystem::StaticClass, TEXT("UOnlineUserSubsystem"), &Z_Registration_Info_UClass_UOnlineUserSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserSubsystem), 1965664700U) },
		{ Z_Construct_UClass_UOnlineUserSubsystemQueryUserInfo, UOnlineUserSubsystemQueryUserInfo::StaticClass, TEXT("UOnlineUserSubsystemQueryUserInfo"), &Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserSubsystemQueryUserInfo), 3941727808U) },
		{ Z_Construct_UClass_UOnlineUserSubsystemQueryUserIdMapping, UOnlineUserSubsystemQueryUserIdMapping::StaticClass, TEXT("UOnlineUserSubsystemQueryUserIdMapping"), &Z_Registration_Info_UClass_UOnlineUserSubsystemQueryUserIdMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserSubsystemQueryUserIdMapping), 306242312U) },
		{ Z_Construct_UClass_UOnlineUserSubsystemQueryExternalIdMappings, UOnlineUserSubsystemQueryExternalIdMappings::StaticClass, TEXT("UOnlineUserSubsystemQueryExternalIdMappings"), &Z_Registration_Info_UClass_UOnlineUserSubsystemQueryExternalIdMappings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserSubsystemQueryExternalIdMappings), 2441259555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserSubsystem_h_4478075(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
