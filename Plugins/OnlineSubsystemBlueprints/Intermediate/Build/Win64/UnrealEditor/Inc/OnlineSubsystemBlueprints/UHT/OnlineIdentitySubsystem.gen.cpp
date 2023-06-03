// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineAccountCredential.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineIdentitySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogin();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogin_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogout();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogout_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UUserOnlineAccountRef_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineUserPrivilege();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountCredential();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventIdentity_LoginChanged_BP_Parms
		{
			int32 LocalUserNum;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginChanged_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Identity_LoginChanged_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventIdentity_LoginChanged_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventIdentity_LoginStatusChanged_BP_Parms
		{
			int32 LocalUserNum;
			EOnlineLoginStatus OldStatus;
			EOnlineLoginStatus NewStatus;
			FUniqueNetIdRepl NewId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OldStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OldStatus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginStatusChanged_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_OldStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_OldStatus = { "OldStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginStatusChanged_BP_Parms, OldStatus), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus, METADATA_PARAMS(nullptr, 0) }; // 281306772
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginStatusChanged_BP_Parms, NewStatus), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus, METADATA_PARAMS(nullptr, 0) }; // 281306772
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_NewId = { "NewId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginStatusChanged_BP_Parms, NewId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_OldStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_OldStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_NewStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_NewStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::NewProp_NewId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Identity_LoginStatusChanged_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventIdentity_LoginStatusChanged_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventIdentity_LoginComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString Error;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventIdentity_LoginComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginComplete_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginComplete_BP_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// @parameters-not-compatible\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIdentity_ControllerPairingChanged_BP, int, LocalUserNum, FControllerPairingChangedUserInfo, PreviousUser, FControllerPairingChangedUserInfo, NewUser);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ToolTip", "@parameters-not-compatible\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIdentity_ControllerPairingChanged_BP, int, LocalUserNum, FControllerPairingChangedUserInfo, PreviousUser, FControllerPairingChangedUserInfo, NewUser);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Identity_LoginComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventIdentity_LoginComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventIdentity_LogoutComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LogoutComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventIdentity_LogoutComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventIdentity_LogoutComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Identity_LogoutComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventIdentity_LogoutComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventIdentity_LoginFlowLogout_BP_Parms
		{
			TArray<FString> LoginDomains;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_LoginDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoginDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoginDomains;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::NewProp_LoginDomains_Inner = { "LoginDomains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::NewProp_LoginDomains_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::NewProp_LoginDomains = { "LoginDomains", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventIdentity_LoginFlowLogout_BP_Parms, LoginDomains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::NewProp_LoginDomains_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::NewProp_LoginDomains_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::NewProp_LoginDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::NewProp_LoginDomains,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Identity_LoginFlowLogout_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventIdentity_LoginFlowLogout_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetAuthType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAuthType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetPlatformUserIdFromUniqueNetId)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlatformUserIdFromUniqueNetId(Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execClearCachedAuthToken)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCachedAuthToken(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetAuthToken)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAuthToken(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetPlayerNickname)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayerNickname(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetLoginStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineLoginStatus*)Z_Param__Result=P_THIS->GetLoginStatus(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execCreateUniquePlayerId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->CreateUniquePlayerId(Z_Param_Str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetSponsorUniquePlayerId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetSponsorUniquePlayerId(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetUniquePlayerId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetUniquePlayerId(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetAllUserAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUserOnlineAccountRef*>*)Z_Param__Result=P_THIS->GetAllUserAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execGetUserAccount)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserOnlineAccountRef**)Z_Param__Result=P_THIS->GetUserAccount(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineIdentitySubsystem::StaticRegisterNativesUOnlineIdentitySubsystem()
	{
		UClass* Class = UOnlineIdentitySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCachedAuthToken", &UOnlineIdentitySubsystem::execClearCachedAuthToken },
			{ "CreateUniquePlayerId", &UOnlineIdentitySubsystem::execCreateUniquePlayerId },
			{ "GetAllUserAccounts", &UOnlineIdentitySubsystem::execGetAllUserAccounts },
			{ "GetAuthToken", &UOnlineIdentitySubsystem::execGetAuthToken },
			{ "GetAuthType", &UOnlineIdentitySubsystem::execGetAuthType },
			{ "GetLoginStatus", &UOnlineIdentitySubsystem::execGetLoginStatus },
			{ "GetPlatformUserIdFromUniqueNetId", &UOnlineIdentitySubsystem::execGetPlatformUserIdFromUniqueNetId },
			{ "GetPlayerNickname", &UOnlineIdentitySubsystem::execGetPlayerNickname },
			{ "GetSponsorUniquePlayerId", &UOnlineIdentitySubsystem::execGetSponsorUniquePlayerId },
			{ "GetUniquePlayerId", &UOnlineIdentitySubsystem::execGetUniquePlayerId },
			{ "GetUserAccount", &UOnlineIdentitySubsystem::execGetUserAccount },
			{ "IsSubsystemAvailable", &UOnlineIdentitySubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics
	{
		struct OnlineIdentitySubsystem_eventClearCachedAuthToken_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventClearCachedAuthToken_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "ClearCachedAuthToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::OnlineIdentitySubsystem_eventClearCachedAuthToken_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics
	{
		struct OnlineIdentitySubsystem_eventCreateUniquePlayerId_Parms
		{
			FString Str;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventCreateUniquePlayerId_Parms, Str), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventCreateUniquePlayerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::NewProp_Str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "CreateUniquePlayerId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::OnlineIdentitySubsystem_eventCreateUniquePlayerId_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics
	{
		struct OnlineIdentitySubsystem_eventGetAllUserAccounts_Parms
		{
			TArray<UUserOnlineAccountRef*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserOnlineAccountRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetAllUserAccounts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetAllUserAccounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::OnlineIdentitySubsystem_eventGetAllUserAccounts_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics
	{
		struct OnlineIdentitySubsystem_eventGetAuthToken_Parms
		{
			int32 LocalUserNum;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetAuthToken_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetAuthToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetAuthToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::OnlineIdentitySubsystem_eventGetAuthToken_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics
	{
		struct OnlineIdentitySubsystem_eventGetAuthType_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetAuthType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetAuthType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::OnlineIdentitySubsystem_eventGetAuthType_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics
	{
		struct OnlineIdentitySubsystem_eventGetLoginStatus_Parms
		{
			int32 LocalUserNum;
			EOnlineLoginStatus ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetLoginStatus_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus, METADATA_PARAMS(nullptr, 0) }; // 281306772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetLoginStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::OnlineIdentitySubsystem_eventGetLoginStatus_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics
	{
		struct OnlineIdentitySubsystem_eventGetPlatformUserIdFromUniqueNetId_Parms
		{
			FUniqueNetIdRepl UniqueNetId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetPlatformUserIdFromUniqueNetId_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetPlatformUserIdFromUniqueNetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::NewProp_UniqueNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetPlatformUserIdFromUniqueNetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::OnlineIdentitySubsystem_eventGetPlatformUserIdFromUniqueNetId_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics
	{
		struct OnlineIdentitySubsystem_eventGetPlayerNickname_Parms
		{
			FUniqueNetIdRepl UserId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetPlayerNickname_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "Comment", "// @generator-excluded-with-pick\n// FString GetPlayerNickname(int32 LocalUserNum);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ToolTip", "@generator-excluded-with-pick\nFString GetPlayerNickname(int32 LocalUserNum);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetPlayerNickname", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::OnlineIdentitySubsystem_eventGetPlayerNickname_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics
	{
		struct OnlineIdentitySubsystem_eventGetSponsorUniquePlayerId_Parms
		{
			int32 LocalUserNum;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetSponsorUniquePlayerId_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetSponsorUniquePlayerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetSponsorUniquePlayerId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::OnlineIdentitySubsystem_eventGetSponsorUniquePlayerId_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics
	{
		struct OnlineIdentitySubsystem_eventGetUniquePlayerId_Parms
		{
			int32 LocalUserNum;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetUniquePlayerId_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetUniquePlayerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetUniquePlayerId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::OnlineIdentitySubsystem_eventGetUniquePlayerId_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics
	{
		struct OnlineIdentitySubsystem_eventGetUserAccount_Parms
		{
			FUniqueNetIdRepl UserId;
			UUserOnlineAccountRef* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetUserAccount_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystem_eventGetUserAccount_Parms, ReturnValue), Z_Construct_UClass_UUserOnlineAccountRef_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "GetUserAccount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::OnlineIdentitySubsystem_eventGetUserAccount_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineIdentitySubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineIdentitySubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineIdentitySubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::OnlineIdentitySubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineIdentitySubsystem);
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister()
	{
		return UOnlineIdentitySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineIdentitySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginStatusChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginStatusChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLogoutComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLogoutComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginFlowLogout_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginFlowLogout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_ClearCachedAuthToken, "ClearCachedAuthToken" }, // 3575562882
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_CreateUniquePlayerId, "CreateUniquePlayerId" }, // 429558347
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAllUserAccounts, "GetAllUserAccounts" }, // 959475490
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthToken, "GetAuthToken" }, // 1941249313
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetAuthType, "GetAuthType" }, // 1738208287
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetLoginStatus, "GetLoginStatus" }, // 2670462533
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId, "GetPlatformUserIdFromUniqueNetId" }, // 2937631336
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetPlayerNickname, "GetPlayerNickname" }, // 3249529522
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetSponsorUniquePlayerId, "GetSponsorUniquePlayerId" }, // 3506022202
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUniquePlayerId, "GetUniquePlayerId" }, // 1434569357
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_GetUserAccount, "GetUserAccount" }, // 4172036042
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3406550845
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginChanged_MetaData[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginChanged = { "OnLoginChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystem, OnLoginChanged), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginChanged_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginChanged_MetaData)) }; // 2016012884
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginStatusChanged_MetaData[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginStatusChanged = { "OnLoginStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystem, OnLoginStatusChanged), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginStatusChanged_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginStatusChanged_MetaData)) }; // 3090620018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginComplete_MetaData[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginComplete = { "OnLoginComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystem, OnLoginComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginComplete_MetaData)) }; // 4017699142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLogoutComplete_MetaData[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLogoutComplete = { "OnLogoutComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystem, OnLogoutComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LogoutComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLogoutComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLogoutComplete_MetaData)) }; // 2925410282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginFlowLogout_MetaData[] = {
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginFlowLogout = { "OnLoginFlowLogout", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystem, OnLoginFlowLogout), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Identity_LoginFlowLogout_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginFlowLogout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginFlowLogout_MetaData)) }; // 1103542309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginStatusChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLogoutComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::NewProp_OnLoginFlowLogout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineIdentitySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::ClassParams = {
		&UOnlineIdentitySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineIdentitySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineIdentitySubsystem.OuterSingleton, Z_Construct_UClass_UOnlineIdentitySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineIdentitySubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineIdentitySubsystem>()
	{
		return UOnlineIdentitySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineIdentitySubsystem);
	UOnlineIdentitySubsystem::~UOnlineIdentitySubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLoginCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLoginCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLoginCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLoginCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLoginCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLoginCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystemLogin::execLogin)
	{
		P_GET_OBJECT(UOnlineIdentitySubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT(FOnlineAccountCredential,Z_Param_AccountCredentials);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineIdentitySubsystemLogin**)Z_Param__Result=UOnlineIdentitySubsystemLogin::Login(Z_Param_Subsystem,Z_Param_LocalUserNum,Z_Param_AccountCredentials);
		P_NATIVE_END;
	}
	void UOnlineIdentitySubsystemLogin::StaticRegisterNativesUOnlineIdentitySubsystemLogin()
	{
		UClass* Class = UOnlineIdentitySubsystemLogin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Login", &UOnlineIdentitySubsystemLogin::execLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics
	{
		struct OnlineIdentitySubsystemLogin_eventLogin_Parms
		{
			UOnlineIdentitySubsystem* Subsystem;
			int32 LocalUserNum;
			FOnlineAccountCredential AccountCredentials;
			UOnlineIdentitySubsystemLogin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccountCredentials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemLogin_eventLogin_Parms, Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemLogin_eventLogin_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_AccountCredentials = { "AccountCredentials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemLogin_eventLogin_Parms, AccountCredentials), Z_Construct_UScriptStruct_FOnlineAccountCredential, METADATA_PARAMS(nullptr, 0) }; // 3131143017
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemLogin_eventLogin_Parms, ReturnValue), Z_Construct_UClass_UOnlineIdentitySubsystemLogin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_AccountCredentials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystemLogin, nullptr, "Login", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::OnlineIdentitySubsystemLogin_eventLogin_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineIdentitySubsystemLogin);
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogin_NoRegister()
	{
		return UOnlineIdentitySubsystemLogin::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginComplete;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__AccountCredentials_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__AccountCredentials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystemLogin_Login, "Login" }, // 1883595093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogin, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnCallFailed_MetaData)) }; // 663639265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnLoginComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnLoginComplete = { "OnLoginComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogin, OnLoginComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLoginCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnLoginComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnLoginComplete_MetaData)) }; // 663639265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogin, __Store__Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogin, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogin, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__LocalUserNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__AccountCredentials_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__AccountCredentials = { "__Store__AccountCredentials", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogin, __Store__AccountCredentials), Z_Construct_UScriptStruct_FOnlineAccountCredential, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__AccountCredentials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__AccountCredentials_MetaData)) }; // 3131143017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp_OnLoginComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::NewProp___Store__AccountCredentials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineIdentitySubsystemLogin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::ClassParams = {
		&UOnlineIdentitySubsystemLogin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogin()
	{
		if (!Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogin.OuterSingleton, Z_Construct_UClass_UOnlineIdentitySubsystemLogin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogin.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineIdentitySubsystemLogin>()
	{
		return UOnlineIdentitySubsystemLogin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineIdentitySubsystemLogin);
	UOnlineIdentitySubsystemLogin::~UOnlineIdentitySubsystemLogin() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLogoutCallbackPin_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLogoutCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLogoutCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemLogoutCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystemLogout::execLogout)
	{
		P_GET_OBJECT(UOnlineIdentitySubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineIdentitySubsystemLogout**)Z_Param__Result=UOnlineIdentitySubsystemLogout::Logout(Z_Param_Subsystem,Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	void UOnlineIdentitySubsystemLogout::StaticRegisterNativesUOnlineIdentitySubsystemLogout()
	{
		UClass* Class = UOnlineIdentitySubsystemLogout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Logout", &UOnlineIdentitySubsystemLogout::execLogout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics
	{
		struct OnlineIdentitySubsystemLogout_eventLogout_Parms
		{
			UOnlineIdentitySubsystem* Subsystem;
			int32 LocalUserNum;
			UOnlineIdentitySubsystemLogout* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemLogout_eventLogout_Parms, Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemLogout_eventLogout_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemLogout_eventLogout_Parms, ReturnValue), Z_Construct_UClass_UOnlineIdentitySubsystemLogout_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystemLogout, nullptr, "Logout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::OnlineIdentitySubsystemLogout_eventLogout_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineIdentitySubsystemLogout);
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogout_NoRegister()
	{
		return UOnlineIdentitySubsystemLogout::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLogoutComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLogoutComplete;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystemLogout_Logout, "Logout" }, // 2317506650
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogout, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnCallFailed_MetaData)) }; // 289678712
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnLogoutComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnLogoutComplete = { "OnLogoutComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogout, OnLogoutComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemLogoutCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnLogoutComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnLogoutComplete_MetaData)) }; // 289678712
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogout, __Store__Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogout, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemLogout, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__LocalUserNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp_OnLogoutComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::NewProp___Store__LocalUserNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineIdentitySubsystemLogout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::ClassParams = {
		&UOnlineIdentitySubsystemLogout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemLogout()
	{
		if (!Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogout.OuterSingleton, Z_Construct_UClass_UOnlineIdentitySubsystemLogout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogout.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineIdentitySubsystemLogout>()
	{
		return UOnlineIdentitySubsystemLogout::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineIdentitySubsystemLogout);
	UOnlineIdentitySubsystemLogout::~UOnlineIdentitySubsystemLogout() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemAutoLoginCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemAutoLoginCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemAutoLoginCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemAutoLoginCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemAutoLoginCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemAutoLoginCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystemAutoLogin::execAutoLogin)
	{
		P_GET_OBJECT(UOnlineIdentitySubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineIdentitySubsystemAutoLogin**)Z_Param__Result=UOnlineIdentitySubsystemAutoLogin::AutoLogin(Z_Param_Subsystem,Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	void UOnlineIdentitySubsystemAutoLogin::StaticRegisterNativesUOnlineIdentitySubsystemAutoLogin()
	{
		UClass* Class = UOnlineIdentitySubsystemAutoLogin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoLogin", &UOnlineIdentitySubsystemAutoLogin::execAutoLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics
	{
		struct OnlineIdentitySubsystemAutoLogin_eventAutoLogin_Parms
		{
			UOnlineIdentitySubsystem* Subsystem;
			int32 LocalUserNum;
			UOnlineIdentitySubsystemAutoLogin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemAutoLogin_eventAutoLogin_Parms, Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemAutoLogin_eventAutoLogin_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemAutoLogin_eventAutoLogin_Parms, ReturnValue), Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin, nullptr, "AutoLogin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::OnlineIdentitySubsystemAutoLogin_eventAutoLogin_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineIdentitySubsystemAutoLogin);
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_NoRegister()
	{
		return UOnlineIdentitySubsystemAutoLogin::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginComplete;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystemAutoLogin_AutoLogin, "AutoLogin" }, // 2497752503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemAutoLogin, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnCallFailed_MetaData)) }; // 2026823730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnLoginComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnLoginComplete = { "OnLoginComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemAutoLogin, OnLoginComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemAutoLoginCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnLoginComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnLoginComplete_MetaData)) }; // 2026823730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemAutoLogin, __Store__Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemAutoLogin, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemAutoLogin, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__LocalUserNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp_OnLoginComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::NewProp___Store__LocalUserNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineIdentitySubsystemAutoLogin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::ClassParams = {
		&UOnlineIdentitySubsystemAutoLogin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin()
	{
		if (!Z_Registration_Info_UClass_UOnlineIdentitySubsystemAutoLogin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineIdentitySubsystemAutoLogin.OuterSingleton, Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineIdentitySubsystemAutoLogin.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineIdentitySubsystemAutoLogin>()
	{
		return UOnlineIdentitySubsystemAutoLogin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineIdentitySubsystemAutoLogin);
	UOnlineIdentitySubsystemAutoLogin::~UOnlineIdentitySubsystemAutoLogin() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemRevokeAuthTokenCallbackPin_Parms
		{
			FUniqueNetIdRepl UserId;
			FOnlineErrorInfo OnlineError;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnlineError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemRevokeAuthTokenCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::NewProp_OnlineError = { "OnlineError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemRevokeAuthTokenCallbackPin_Parms, OnlineError), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::NewProp_OnlineError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemRevokeAuthTokenCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystemRevokeAuthToken::execRevokeAuthToken)
	{
		P_GET_OBJECT(UOnlineIdentitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineIdentitySubsystemRevokeAuthToken**)Z_Param__Result=UOnlineIdentitySubsystemRevokeAuthToken::RevokeAuthToken(Z_Param_Subsystem,Z_Param_LocalUserId);
		P_NATIVE_END;
	}
	void UOnlineIdentitySubsystemRevokeAuthToken::StaticRegisterNativesUOnlineIdentitySubsystemRevokeAuthToken()
	{
		UClass* Class = UOnlineIdentitySubsystemRevokeAuthToken::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RevokeAuthToken", &UOnlineIdentitySubsystemRevokeAuthToken::execRevokeAuthToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics
	{
		struct OnlineIdentitySubsystemRevokeAuthToken_eventRevokeAuthToken_Parms
		{
			UOnlineIdentitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			UOnlineIdentitySubsystemRevokeAuthToken* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemRevokeAuthToken_eventRevokeAuthToken_Parms, Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemRevokeAuthToken_eventRevokeAuthToken_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemRevokeAuthToken_eventRevokeAuthToken_Parms, ReturnValue), Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken, nullptr, "RevokeAuthToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::OnlineIdentitySubsystemRevokeAuthToken_eventRevokeAuthToken_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineIdentitySubsystemRevokeAuthToken);
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_NoRegister()
	{
		return UOnlineIdentitySubsystemRevokeAuthToken::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRevokeAuthTokenComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRevokeAuthTokenComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken, "RevokeAuthToken" }, // 2485100559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemRevokeAuthToken, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnCallFailed_MetaData)) }; // 2113928790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnRevokeAuthTokenComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnRevokeAuthTokenComplete = { "OnRevokeAuthTokenComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemRevokeAuthToken, OnRevokeAuthTokenComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemRevokeAuthTokenCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnRevokeAuthTokenComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnRevokeAuthTokenComplete_MetaData)) }; // 2113928790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemRevokeAuthToken, __Store__Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemRevokeAuthToken, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemRevokeAuthToken, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp_OnRevokeAuthTokenComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::NewProp___Store__LocalUserId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineIdentitySubsystemRevokeAuthToken>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::ClassParams = {
		&UOnlineIdentitySubsystemRevokeAuthToken::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken()
	{
		if (!Z_Registration_Info_UClass_UOnlineIdentitySubsystemRevokeAuthToken.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineIdentitySubsystemRevokeAuthToken.OuterSingleton, Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineIdentitySubsystemRevokeAuthToken.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineIdentitySubsystemRevokeAuthToken>()
	{
		return UOnlineIdentitySubsystemRevokeAuthToken::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineIdentitySubsystemRevokeAuthToken);
	UOnlineIdentitySubsystemRevokeAuthToken::~UOnlineIdentitySubsystemRevokeAuthToken() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemGetUserPrivilegeCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			EOnlineUserPrivilege Privilege;
			int64 PrivilegeResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PrivilegeResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemGetUserPrivilegeCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemGetUserPrivilegeCallbackPin_Parms, Privilege), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 1355701679
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_PrivilegeResult = { "PrivilegeResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemGetUserPrivilegeCallbackPin_Parms, PrivilegeResult), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_Privilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_Privilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::NewProp_PrivilegeResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineIdentitySubsystemGetUserPrivilegeCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineIdentitySubsystemGetUserPrivilege::execGetUserPrivilege)
	{
		P_GET_OBJECT(UOnlineIdentitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_ENUM(EOnlineUserPrivilege,Z_Param_Privilege);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineIdentitySubsystemGetUserPrivilege**)Z_Param__Result=UOnlineIdentitySubsystemGetUserPrivilege::GetUserPrivilege(Z_Param_Subsystem,Z_Param_LocalUserId,EOnlineUserPrivilege(Z_Param_Privilege));
		P_NATIVE_END;
	}
	void UOnlineIdentitySubsystemGetUserPrivilege::StaticRegisterNativesUOnlineIdentitySubsystemGetUserPrivilege()
	{
		UClass* Class = UOnlineIdentitySubsystemGetUserPrivilege::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserPrivilege", &UOnlineIdentitySubsystemGetUserPrivilege::execGetUserPrivilege },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics
	{
		struct OnlineIdentitySubsystemGetUserPrivilege_eventGetUserPrivilege_Parms
		{
			UOnlineIdentitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			EOnlineUserPrivilege Privilege;
			UOnlineIdentitySubsystemGetUserPrivilege* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemGetUserPrivilege_eventGetUserPrivilege_Parms, Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemGetUserPrivilege_eventGetUserPrivilege_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemGetUserPrivilege_eventGetUserPrivilege_Parms, Privilege), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 1355701679
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineIdentitySubsystemGetUserPrivilege_eventGetUserPrivilege_Parms, ReturnValue), Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_Privilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_Privilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Identity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege, nullptr, "GetUserPrivilege", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::OnlineIdentitySubsystemGetUserPrivilege_eventGetUserPrivilege_Parms), Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineIdentitySubsystemGetUserPrivilege);
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_NoRegister()
	{
		return UOnlineIdentitySubsystemGetUserPrivilege::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetUserPrivilegeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetUserPrivilegeComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp___Store__Privilege_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Privilege_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp___Store__Privilege;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege, "GetUserPrivilege" }, // 639718191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemGetUserPrivilege, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnCallFailed_MetaData)) }; // 4037772650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnGetUserPrivilegeComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnGetUserPrivilegeComplete = { "OnGetUserPrivilegeComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemGetUserPrivilege, OnGetUserPrivilegeComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineIdentitySubsystemGetUserPrivilegeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnGetUserPrivilegeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnGetUserPrivilegeComplete_MetaData)) }; // 4037772650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemGetUserPrivilege, __Store__Subsystem), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemGetUserPrivilege, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemGetUserPrivilege, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Privilege_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineIdentitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Privilege = { "__Store__Privilege", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineIdentitySubsystemGetUserPrivilege, __Store__Privilege), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineUserPrivilege, METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Privilege_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Privilege_MetaData)) }; // 1355701679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp_OnGetUserPrivilegeComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Privilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::NewProp___Store__Privilege,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineIdentitySubsystemGetUserPrivilege>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::ClassParams = {
		&UOnlineIdentitySubsystemGetUserPrivilege::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege()
	{
		if (!Z_Registration_Info_UClass_UOnlineIdentitySubsystemGetUserPrivilege.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineIdentitySubsystemGetUserPrivilege.OuterSingleton, Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineIdentitySubsystemGetUserPrivilege.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineIdentitySubsystemGetUserPrivilege>()
	{
		return UOnlineIdentitySubsystemGetUserPrivilege::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineIdentitySubsystemGetUserPrivilege);
	UOnlineIdentitySubsystemGetUserPrivilege::~UOnlineIdentitySubsystemGetUserPrivilege() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineIdentitySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineIdentitySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineIdentitySubsystem, UOnlineIdentitySubsystem::StaticClass, TEXT("UOnlineIdentitySubsystem"), &Z_Registration_Info_UClass_UOnlineIdentitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineIdentitySubsystem), 1699390128U) },
		{ Z_Construct_UClass_UOnlineIdentitySubsystemLogin, UOnlineIdentitySubsystemLogin::StaticClass, TEXT("UOnlineIdentitySubsystemLogin"), &Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineIdentitySubsystemLogin), 3614910033U) },
		{ Z_Construct_UClass_UOnlineIdentitySubsystemLogout, UOnlineIdentitySubsystemLogout::StaticClass, TEXT("UOnlineIdentitySubsystemLogout"), &Z_Registration_Info_UClass_UOnlineIdentitySubsystemLogout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineIdentitySubsystemLogout), 1985729062U) },
		{ Z_Construct_UClass_UOnlineIdentitySubsystemAutoLogin, UOnlineIdentitySubsystemAutoLogin::StaticClass, TEXT("UOnlineIdentitySubsystemAutoLogin"), &Z_Registration_Info_UClass_UOnlineIdentitySubsystemAutoLogin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineIdentitySubsystemAutoLogin), 371093514U) },
		{ Z_Construct_UClass_UOnlineIdentitySubsystemRevokeAuthToken, UOnlineIdentitySubsystemRevokeAuthToken::StaticClass, TEXT("UOnlineIdentitySubsystemRevokeAuthToken"), &Z_Registration_Info_UClass_UOnlineIdentitySubsystemRevokeAuthToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineIdentitySubsystemRevokeAuthToken), 3180621717U) },
		{ Z_Construct_UClass_UOnlineIdentitySubsystemGetUserPrivilege, UOnlineIdentitySubsystemGetUserPrivilege::StaticClass, TEXT("UOnlineIdentitySubsystemGetUserPrivilege"), &Z_Registration_Info_UClass_UOnlineIdentitySubsystemGetUserPrivilege, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineIdentitySubsystemGetUserPrivilege), 493714969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineIdentitySubsystem_h_3974386554(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineIdentitySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineIdentitySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
