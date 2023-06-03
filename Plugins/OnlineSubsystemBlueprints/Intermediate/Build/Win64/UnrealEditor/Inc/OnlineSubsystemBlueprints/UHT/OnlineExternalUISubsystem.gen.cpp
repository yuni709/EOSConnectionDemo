// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBExternalUITypes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineAccountCredential.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineExternalUISubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UExternalUIFlowHandler_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType_();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FLoginFlowResultBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountCredential();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FShowSendMessageParameters();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FShowStoreParameters();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FShowWebUrlParameters();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventExternalUI_ExternalUIChange_BP_Parms
		{
			bool Param1;
		};
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventExternalUI_ExternalUIChange_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventExternalUI_ExternalUIChange_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::NewProp_Param1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "ExternalUI_ExternalUIChange_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventExternalUI_ExternalUIChange_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execReportExitInGameStoreUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportExitInGameStoreUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execReportEnterInGameStoreUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportEnterInGameStoreUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execShowPlatformMessageBox)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_ENUM(EPlatformMessageType_,Z_Param_MessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowPlatformMessageBox(Z_Param_UserId,EPlatformMessageType_(Z_Param_MessageType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execShowAccountUpgradeUI)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowAccountUpgradeUI(Z_Param_UniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execCloseWebURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseWebURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execShowLeaderboardUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowLeaderboardUI(Z_Param_LeaderboardName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execShowAchievementsUI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowAchievementsUI(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execShowInviteUI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowInviteUI(Z_Param_LocalUserNum,Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execShowFriendsUI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowFriendsUI(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execLoginFlowComplete)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RequestID);
		P_GET_STRUCT(FLoginFlowResultBP,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginFlowComplete(Z_Param_RequestID,Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execNotifyLoginRedirectURL)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RequestID);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLoginFlowResultBP*)Z_Param__Result=P_THIS->NotifyLoginRedirectURL(Z_Param_RequestID,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execRemoveLoginFlowHandler)
	{
		P_GET_TINTERFACE_REF(IExternalUIFlowHandler,Z_Param_Out_Handler);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLoginFlowHandler(Z_Param_Out_Handler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execAddLoginFlowHandler)
	{
		P_GET_TINTERFACE_REF(IExternalUIFlowHandler,Z_Param_Out_Handler);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLoginFlowHandler(Z_Param_Out_Handler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystem::StaticRegisterNativesUOnlineExternalUISubsystem()
	{
		UClass* Class = UOnlineExternalUISubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLoginFlowHandler", &UOnlineExternalUISubsystem::execAddLoginFlowHandler },
			{ "CloseWebURL", &UOnlineExternalUISubsystem::execCloseWebURL },
			{ "IsSubsystemAvailable", &UOnlineExternalUISubsystem::execIsSubsystemAvailable },
			{ "LoginFlowComplete", &UOnlineExternalUISubsystem::execLoginFlowComplete },
			{ "NotifyLoginRedirectURL", &UOnlineExternalUISubsystem::execNotifyLoginRedirectURL },
			{ "RemoveLoginFlowHandler", &UOnlineExternalUISubsystem::execRemoveLoginFlowHandler },
			{ "ReportEnterInGameStoreUI", &UOnlineExternalUISubsystem::execReportEnterInGameStoreUI },
			{ "ReportExitInGameStoreUI", &UOnlineExternalUISubsystem::execReportExitInGameStoreUI },
			{ "ShowAccountUpgradeUI", &UOnlineExternalUISubsystem::execShowAccountUpgradeUI },
			{ "ShowAchievementsUI", &UOnlineExternalUISubsystem::execShowAchievementsUI },
			{ "ShowFriendsUI", &UOnlineExternalUISubsystem::execShowFriendsUI },
			{ "ShowInviteUI", &UOnlineExternalUISubsystem::execShowInviteUI },
			{ "ShowLeaderboardUI", &UOnlineExternalUISubsystem::execShowLeaderboardUI },
			{ "ShowPlatformMessageBox", &UOnlineExternalUISubsystem::execShowPlatformMessageBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics
	{
		struct OnlineExternalUISubsystem_eventAddLoginFlowHandler_Parms
		{
			TScriptInterface<IExternalUIFlowHandler> Handler;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handler_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Handler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::NewProp_Handler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::NewProp_Handler = { "Handler", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventAddLoginFlowHandler_Parms, Handler), Z_Construct_UClass_UExternalUIFlowHandler_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::NewProp_Handler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::NewProp_Handler_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::NewProp_Handler,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "AddLoginFlowHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::OnlineExternalUISubsystem_eventAddLoginFlowHandler_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics
	{
		struct OnlineExternalUISubsystem_eventCloseWebURL_Parms
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
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventCloseWebURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventCloseWebURL_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "CloseWebURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::OnlineExternalUISubsystem_eventCloseWebURL_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineExternalUISubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::OnlineExternalUISubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics
	{
		struct OnlineExternalUISubsystem_eventLoginFlowComplete_Parms
		{
			int32 RequestID;
			FLoginFlowResultBP Result;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RequestID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventLoginFlowComplete_Parms, RequestID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventLoginFlowComplete_Parms, Result), Z_Construct_UScriptStruct_FLoginFlowResultBP, METADATA_PARAMS(nullptr, 0) }; // 3139023351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::NewProp_RequestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "LoginFlowComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::OnlineExternalUISubsystem_eventLoginFlowComplete_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics
	{
		struct OnlineExternalUISubsystem_eventNotifyLoginRedirectURL_Parms
		{
			int32 RequestID;
			FString URL;
			FLoginFlowResultBP ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RequestID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventNotifyLoginRedirectURL_Parms, RequestID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventNotifyLoginRedirectURL_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventNotifyLoginRedirectURL_Parms, ReturnValue), Z_Construct_UScriptStruct_FLoginFlowResultBP, METADATA_PARAMS(nullptr, 0) }; // 3139023351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_RequestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "NotifyLoginRedirectURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::OnlineExternalUISubsystem_eventNotifyLoginRedirectURL_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics
	{
		struct OnlineExternalUISubsystem_eventRemoveLoginFlowHandler_Parms
		{
			TScriptInterface<IExternalUIFlowHandler> Handler;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handler_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Handler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::NewProp_Handler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::NewProp_Handler = { "Handler", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventRemoveLoginFlowHandler_Parms, Handler), Z_Construct_UClass_UExternalUIFlowHandler_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::NewProp_Handler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::NewProp_Handler_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::NewProp_Handler,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "RemoveLoginFlowHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::OnlineExternalUISubsystem_eventRemoveLoginFlowHandler_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ReportEnterInGameStoreUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ReportExitInGameStoreUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics
	{
		struct OnlineExternalUISubsystem_eventShowAccountUpgradeUI_Parms
		{
			FUniqueNetIdRepl UniqueId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowAccountUpgradeUI_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventShowAccountUpgradeUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventShowAccountUpgradeUI_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ShowAccountUpgradeUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::OnlineExternalUISubsystem_eventShowAccountUpgradeUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics
	{
		struct OnlineExternalUISubsystem_eventShowAchievementsUI_Parms
		{
			int32 LocalUserNum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowAchievementsUI_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventShowAchievementsUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventShowAchievementsUI_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ShowAchievementsUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::OnlineExternalUISubsystem_eventShowAchievementsUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics
	{
		struct OnlineExternalUISubsystem_eventShowFriendsUI_Parms
		{
			int32 LocalUserNum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowFriendsUI_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventShowFriendsUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventShowFriendsUI_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ShowFriendsUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::OnlineExternalUISubsystem_eventShowFriendsUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics
	{
		struct OnlineExternalUISubsystem_eventShowInviteUI_Parms
		{
			int32 LocalUserNum;
			FName SessionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowInviteUI_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowInviteUI_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventShowInviteUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventShowInviteUI_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ShowInviteUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::OnlineExternalUISubsystem_eventShowInviteUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics
	{
		struct OnlineExternalUISubsystem_eventShowLeaderboardUI_Parms
		{
			FString LeaderboardName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowLeaderboardUI_Parms, LeaderboardName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventShowLeaderboardUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventShowLeaderboardUI_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::NewProp_LeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ShowLeaderboardUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::OnlineExternalUISubsystem_eventShowLeaderboardUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics
	{
		struct OnlineExternalUISubsystem_eventShowPlatformMessageBox_Parms
		{
			FUniqueNetIdRepl UserId;
			EPlatformMessageType_ MessageType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowPlatformMessageBox_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_MessageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystem_eventShowPlatformMessageBox_Parms, MessageType), Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType_, METADATA_PARAMS(nullptr, 0) }; // 1307388547
	void Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystem_eventShowPlatformMessageBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystem_eventShowPlatformMessageBox_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_MessageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystem, nullptr, "ShowPlatformMessageBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::OnlineExternalUISubsystem_eventShowPlatformMessageBox_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystem);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister()
	{
		return UOnlineExternalUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlowHandlers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowHandlers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FlowHandlers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExternalUIChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExternalUIChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_AddLoginFlowHandler, "AddLoginFlowHandler" }, // 2986596159
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_CloseWebURL, "CloseWebURL" }, // 4000948322
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 826174365
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_LoginFlowComplete, "LoginFlowComplete" }, // 867894384
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_NotifyLoginRedirectURL, "NotifyLoginRedirectURL" }, // 3081718064
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_RemoveLoginFlowHandler, "RemoveLoginFlowHandler" }, // 4134480022
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportEnterInGameStoreUI, "ReportEnterInGameStoreUI" }, // 86956811
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ReportExitInGameStoreUI, "ReportExitInGameStoreUI" }, // 3534526387
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAccountUpgradeUI, "ShowAccountUpgradeUI" }, // 3914036402
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowAchievementsUI, "ShowAchievementsUI" }, // 3622608404
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowFriendsUI, "ShowFriendsUI" }, // 1789817495
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowInviteUI, "ShowInviteUI" }, // 3452220755
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowLeaderboardUI, "ShowLeaderboardUI" }, // 3442919755
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystem_ShowPlatformMessageBox, "ShowPlatformMessageBox" }, // 3513267065
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// @parameters-not-compatible\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FExternalUI_CreateAccountFlowUIRequired_BP, const FString&, RequestedURL, const FOnLoginRedirectURL&, OnRedirectURL, const FOnLoginFlowComplete&, OnLoginFlowComplete, bool&, bOutShouldContinueLogin);\n" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ToolTip", "@parameters-not-compatible\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FExternalUI_CreateAccountFlowUIRequired_BP, const FString&, RequestedURL, const FOnLoginRedirectURL&, OnRedirectURL, const FOnLoginFlowComplete&, OnLoginFlowComplete, bool&, bOutShouldContinueLogin);" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_FlowHandlers_Inner = { "FlowHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration, METADATA_PARAMS(nullptr, 0) }; // 3692060841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_FlowHandlers_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_FlowHandlers = { "FlowHandlers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystem, FlowHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_FlowHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_FlowHandlers_MetaData)) }; // 3692060841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_OnExternalUIChange_MetaData[] = {
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_OnExternalUIChange = { "OnExternalUIChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystem, OnExternalUIChange), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_ExternalUI_ExternalUIChange_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_OnExternalUIChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_OnExternalUIChange_MetaData)) }; // 3195395010
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_FlowHandlers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_FlowHandlers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::NewProp_OnExternalUIChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::ClassParams = {
		&UOnlineExternalUISubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystem.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystem>()
	{
		return UOnlineExternalUISubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystem);
	UOnlineExternalUISubsystem::~UOnlineExternalUISubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowLoginUICallbackPin_Parms
		{
			FUniqueNetIdRepl UniqueId;
			int32 ControllerIndex;
			FOnlineErrorInfo Error;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowLoginUICallbackPin_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowLoginUICallbackPin_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowLoginUICallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowLoginUICallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystemShowLoginUI::execShowLoginUI)
	{
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_GET_UBOOL(Z_Param_bShowOnlineOnly);
		P_GET_UBOOL(Z_Param_bShowSkipButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystemShowLoginUI**)Z_Param__Result=UOnlineExternalUISubsystemShowLoginUI::ShowLoginUI(Z_Param_Subsystem,Z_Param_ControllerIndex,Z_Param_bShowOnlineOnly,Z_Param_bShowSkipButton);
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystemShowLoginUI::StaticRegisterNativesUOnlineExternalUISubsystemShowLoginUI()
	{
		UClass* Class = UOnlineExternalUISubsystemShowLoginUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowLoginUI", &UOnlineExternalUISubsystemShowLoginUI::execShowLoginUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics
	{
		struct OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms
		{
			UOnlineExternalUISubsystem* Subsystem;
			int32 ControllerIndex;
			bool bShowOnlineOnly;
			bool bShowSkipButton;
			UOnlineExternalUISubsystemShowLoginUI* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerIndex;
		static void NewProp_bShowOnlineOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlineOnly;
		static void NewProp_bShowSkipButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSkipButton;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms, Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowOnlineOnly_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms*)Obj)->bShowOnlineOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowOnlineOnly = { "bShowOnlineOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowOnlineOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowSkipButton_SetBit(void* Obj)
	{
		((OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms*)Obj)->bShowSkipButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowSkipButton = { "bShowSkipButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms), &Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowSkipButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowOnlineOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_bShowSkipButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI, nullptr, "ShowLoginUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::OnlineExternalUISubsystemShowLoginUI_eventShowLoginUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystemShowLoginUI);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_NoRegister()
	{
		return UOnlineExternalUISubsystemShowLoginUI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginUIClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginUIClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp___Store__ControllerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bShowOnlineOnly_MetaData[];
#endif
		static void NewProp___Store__bShowOnlineOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bShowOnlineOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bShowSkipButton_MetaData[];
#endif
		static void NewProp___Store__bShowSkipButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bShowSkipButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI, "ShowLoginUI" }, // 3750685191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowLoginUI, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnCallFailed_MetaData)) }; // 3628151561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnLoginUIClosed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnLoginUIClosed = { "OnLoginUIClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowLoginUI, OnLoginUIClosed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowLoginUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnLoginUIClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnLoginUIClosed_MetaData)) }; // 3628151561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowLoginUI, __Store__Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowLoginUI, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__ControllerIndex_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__ControllerIndex = { "__Store__ControllerIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowLoginUI, __Store__ControllerIndex), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__ControllerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowOnlineOnly_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowOnlineOnly_SetBit(void* Obj)
	{
		((UOnlineExternalUISubsystemShowLoginUI*)Obj)->__Store__bShowOnlineOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowOnlineOnly = { "__Store__bShowOnlineOnly", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineExternalUISubsystemShowLoginUI), &Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowOnlineOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowOnlineOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowOnlineOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowSkipButton_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowSkipButton_SetBit(void* Obj)
	{
		((UOnlineExternalUISubsystemShowLoginUI*)Obj)->__Store__bShowSkipButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowSkipButton = { "__Store__bShowSkipButton", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineExternalUISubsystemShowLoginUI), &Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowSkipButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowSkipButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowSkipButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp_OnLoginUIClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowOnlineOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::NewProp___Store__bShowSkipButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystemShowLoginUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::ClassParams = {
		&UOnlineExternalUISubsystemShowLoginUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowLoginUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowLoginUI.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowLoginUI.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystemShowLoginUI>()
	{
		return UOnlineExternalUISubsystemShowLoginUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystemShowLoginUI);
	UOnlineExternalUISubsystemShowLoginUI::~UOnlineExternalUISubsystemShowLoginUI() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowAccountCreationUICallbackPin_Parms
		{
			int32 ControllerIndex;
			FOnlineAccountCredential AccountCredentials;
			FOnlineErrorInfo Error;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccountCredentials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowAccountCreationUICallbackPin_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::NewProp_AccountCredentials = { "AccountCredentials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowAccountCreationUICallbackPin_Parms, AccountCredentials), Z_Construct_UScriptStruct_FOnlineAccountCredential, METADATA_PARAMS(nullptr, 0) }; // 3131143017
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowAccountCreationUICallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::NewProp_AccountCredentials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowAccountCreationUICallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystemShowAccountCreationUI::execShowAccountCreationUI)
	{
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystemShowAccountCreationUI**)Z_Param__Result=UOnlineExternalUISubsystemShowAccountCreationUI::ShowAccountCreationUI(Z_Param_Subsystem,Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystemShowAccountCreationUI::StaticRegisterNativesUOnlineExternalUISubsystemShowAccountCreationUI()
	{
		UClass* Class = UOnlineExternalUISubsystemShowAccountCreationUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowAccountCreationUI", &UOnlineExternalUISubsystemShowAccountCreationUI::execShowAccountCreationUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics
	{
		struct OnlineExternalUISubsystemShowAccountCreationUI_eventShowAccountCreationUI_Parms
		{
			UOnlineExternalUISubsystem* Subsystem;
			int32 ControllerIndex;
			UOnlineExternalUISubsystemShowAccountCreationUI* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowAccountCreationUI_eventShowAccountCreationUI_Parms, Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowAccountCreationUI_eventShowAccountCreationUI_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowAccountCreationUI_eventShowAccountCreationUI_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI, nullptr, "ShowAccountCreationUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::OnlineExternalUISubsystemShowAccountCreationUI_eventShowAccountCreationUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystemShowAccountCreationUI);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_NoRegister()
	{
		return UOnlineExternalUISubsystemShowAccountCreationUI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccountCreationUIClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccountCreationUIClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp___Store__ControllerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI, "ShowAccountCreationUI" }, // 2961124018
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowAccountCreationUI, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnCallFailed_MetaData)) }; // 812554265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnAccountCreationUIClosed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnAccountCreationUIClosed = { "OnAccountCreationUIClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowAccountCreationUI, OnAccountCreationUIClosed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowAccountCreationUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnAccountCreationUIClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnAccountCreationUIClosed_MetaData)) }; // 812554265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowAccountCreationUI, __Store__Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowAccountCreationUI, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__ControllerIndex_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__ControllerIndex = { "__Store__ControllerIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowAccountCreationUI, __Store__ControllerIndex), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__ControllerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp_OnAccountCreationUIClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::NewProp___Store__ControllerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystemShowAccountCreationUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::ClassParams = {
		&UOnlineExternalUISubsystemShowAccountCreationUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowAccountCreationUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowAccountCreationUI.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowAccountCreationUI.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystemShowAccountCreationUI>()
	{
		return UOnlineExternalUISubsystemShowAccountCreationUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystemShowAccountCreationUI);
	UOnlineExternalUISubsystemShowAccountCreationUI::~UOnlineExternalUISubsystemShowAccountCreationUI() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowWebURLCallbackPin_Parms
		{
			FString FinalUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FinalUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::NewProp_FinalUrl = { "FinalUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowWebURLCallbackPin_Parms, FinalUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::NewProp_FinalUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowWebURLCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystemShowWebURL::execShowWebURL)
	{
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_STRUCT(FShowWebUrlParameters,Z_Param_ShowParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystemShowWebURL**)Z_Param__Result=UOnlineExternalUISubsystemShowWebURL::ShowWebURL(Z_Param_Subsystem,Z_Param_Url,Z_Param_ShowParams);
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystemShowWebURL::StaticRegisterNativesUOnlineExternalUISubsystemShowWebURL()
	{
		UClass* Class = UOnlineExternalUISubsystemShowWebURL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowWebURL", &UOnlineExternalUISubsystemShowWebURL::execShowWebURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics
	{
		struct OnlineExternalUISubsystemShowWebURL_eventShowWebURL_Parms
		{
			UOnlineExternalUISubsystem* Subsystem;
			FString Url;
			FShowWebUrlParameters ShowParams;
			UOnlineExternalUISubsystemShowWebURL* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowWebURL_eventShowWebURL_Parms, Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowWebURL_eventShowWebURL_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_ShowParams = { "ShowParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowWebURL_eventShowWebURL_Parms, ShowParams), Z_Construct_UScriptStruct_FShowWebUrlParameters, METADATA_PARAMS(nullptr, 0) }; // 1160417119
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowWebURL_eventShowWebURL_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_ShowParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL, nullptr, "ShowWebURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::OnlineExternalUISubsystemShowWebURL_eventShowWebURL_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystemShowWebURL);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_NoRegister()
	{
		return UOnlineExternalUISubsystemShowWebURL::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShowWebUrlClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowWebUrlClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__Url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ShowParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__ShowParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystemShowWebURL_ShowWebURL, "ShowWebURL" }, // 1657603671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowWebURL, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnCallFailed_MetaData)) }; // 2840975072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnShowWebUrlClosed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnShowWebUrlClosed = { "OnShowWebUrlClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowWebURL, OnShowWebUrlClosed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowWebURLCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnShowWebUrlClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnShowWebUrlClosed_MetaData)) }; // 2840975072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowWebURL, __Store__Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowWebURL, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Url_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Url = { "__Store__Url", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowWebURL, __Store__Url), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__ShowParams_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__ShowParams = { "__Store__ShowParams", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowWebURL, __Store__ShowParams), Z_Construct_UScriptStruct_FShowWebUrlParameters, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__ShowParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__ShowParams_MetaData)) }; // 1160417119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp_OnShowWebUrlClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::NewProp___Store__ShowParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystemShowWebURL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::ClassParams = {
		&UOnlineExternalUISubsystemShowWebURL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowWebURL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowWebURL.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowWebURL.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystemShowWebURL>()
	{
		return UOnlineExternalUISubsystemShowWebURL::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystemShowWebURL);
	UOnlineExternalUISubsystemShowWebURL::~UOnlineExternalUISubsystemShowWebURL() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystemShowProfileUI::execShowProfileUI)
	{
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_Requestor);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_Requestee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystemShowProfileUI**)Z_Param__Result=UOnlineExternalUISubsystemShowProfileUI::ShowProfileUI(Z_Param_Subsystem,Z_Param_Requestor,Z_Param_Requestee);
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystemShowProfileUI::StaticRegisterNativesUOnlineExternalUISubsystemShowProfileUI()
	{
		UClass* Class = UOnlineExternalUISubsystemShowProfileUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowProfileUI", &UOnlineExternalUISubsystemShowProfileUI::execShowProfileUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics
	{
		struct OnlineExternalUISubsystemShowProfileUI_eventShowProfileUI_Parms
		{
			UOnlineExternalUISubsystem* Subsystem;
			FUniqueNetIdRepl Requestor;
			FUniqueNetIdRepl Requestee;
			UOnlineExternalUISubsystemShowProfileUI* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Requestor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Requestee;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowProfileUI_eventShowProfileUI_Parms, Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowProfileUI_eventShowProfileUI_Parms, Requestor), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_Requestee = { "Requestee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowProfileUI_eventShowProfileUI_Parms, Requestee), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowProfileUI_eventShowProfileUI_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_Requestor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_Requestee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI, nullptr, "ShowProfileUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::OnlineExternalUISubsystemShowProfileUI_eventShowProfileUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystemShowProfileUI);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_NoRegister()
	{
		return UOnlineExternalUISubsystemShowProfileUI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProfileUIClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProfileUIClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Requestor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Requestor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Requestee_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Requestee;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI, "ShowProfileUI" }, // 1374038047
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowProfileUI, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnCallFailed_MetaData)) }; // 2347889096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnProfileUIClosed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnProfileUIClosed = { "OnProfileUIClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowProfileUI, OnProfileUIClosed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowProfileUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnProfileUIClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnProfileUIClosed_MetaData)) }; // 2347889096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowProfileUI, __Store__Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowProfileUI, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestor_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestor = { "__Store__Requestor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowProfileUI, __Store__Requestor), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestor_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestee_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestee = { "__Store__Requestee", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowProfileUI, __Store__Requestee), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestee_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp_OnProfileUIClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::NewProp___Store__Requestee,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystemShowProfileUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::ClassParams = {
		&UOnlineExternalUISubsystemShowProfileUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowProfileUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowProfileUI.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowProfileUI.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystemShowProfileUI>()
	{
		return UOnlineExternalUISubsystemShowProfileUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystemShowProfileUI);
	UOnlineExternalUISubsystemShowProfileUI::~UOnlineExternalUISubsystemShowProfileUI() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowStoreUICallbackPin_Parms
		{
			bool bPurchased;
		};
		static void NewProp_bPurchased_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPurchased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::NewProp_bPurchased_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowStoreUICallbackPin_Parms*)Obj)->bPurchased = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::NewProp_bPurchased = { "bPurchased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowStoreUICallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::NewProp_bPurchased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::NewProp_bPurchased,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowStoreUICallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystemShowStoreUI::execShowStoreUI)
	{
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT(FShowStoreParameters,Z_Param_ShowParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystemShowStoreUI**)Z_Param__Result=UOnlineExternalUISubsystemShowStoreUI::ShowStoreUI(Z_Param_Subsystem,Z_Param_LocalUserNum,Z_Param_ShowParams);
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystemShowStoreUI::StaticRegisterNativesUOnlineExternalUISubsystemShowStoreUI()
	{
		UClass* Class = UOnlineExternalUISubsystemShowStoreUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowStoreUI", &UOnlineExternalUISubsystemShowStoreUI::execShowStoreUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics
	{
		struct OnlineExternalUISubsystemShowStoreUI_eventShowStoreUI_Parms
		{
			UOnlineExternalUISubsystem* Subsystem;
			int32 LocalUserNum;
			FShowStoreParameters ShowParams;
			UOnlineExternalUISubsystemShowStoreUI* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowStoreUI_eventShowStoreUI_Parms, Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowStoreUI_eventShowStoreUI_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_ShowParams = { "ShowParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowStoreUI_eventShowStoreUI_Parms, ShowParams), Z_Construct_UScriptStruct_FShowStoreParameters, METADATA_PARAMS(nullptr, 0) }; // 370780014
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowStoreUI_eventShowStoreUI_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_ShowParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI, nullptr, "ShowStoreUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::OnlineExternalUISubsystemShowStoreUI_eventShowStoreUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystemShowStoreUI);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_NoRegister()
	{
		return UOnlineExternalUISubsystemShowStoreUI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShowStoreUIClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowStoreUIClosed;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ShowParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__ShowParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI, "ShowStoreUI" }, // 3261709304
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowStoreUI, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnCallFailed_MetaData)) }; // 4043226985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnShowStoreUIClosed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnShowStoreUIClosed = { "OnShowStoreUIClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowStoreUI, OnShowStoreUIClosed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowStoreUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnShowStoreUIClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnShowStoreUIClosed_MetaData)) }; // 4043226985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowStoreUI, __Store__Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowStoreUI, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowStoreUI, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__LocalUserNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__ShowParams_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__ShowParams = { "__Store__ShowParams", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowStoreUI, __Store__ShowParams), Z_Construct_UScriptStruct_FShowStoreParameters, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__ShowParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__ShowParams_MetaData)) }; // 370780014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp_OnShowStoreUIClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::NewProp___Store__ShowParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystemShowStoreUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::ClassParams = {
		&UOnlineExternalUISubsystemShowStoreUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowStoreUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowStoreUI.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowStoreUI.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystemShowStoreUI>()
	{
		return UOnlineExternalUISubsystemShowStoreUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystemShowStoreUI);
	UOnlineExternalUISubsystemShowStoreUI::~UOnlineExternalUISubsystemShowStoreUI() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageUICallbackPin_Parms
		{
			bool bMessageSent;
		};
		static void NewProp_bMessageSent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMessageSent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageUICallbackPin_Parms*)Obj)->bMessageSent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent = { "bMessageSent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageUICallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageUICallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystemShowSendMessageUI::execShowSendMessageUI)
	{
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT(FShowSendMessageParameters,Z_Param_ShowParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystemShowSendMessageUI**)Z_Param__Result=UOnlineExternalUISubsystemShowSendMessageUI::ShowSendMessageUI(Z_Param_Subsystem,Z_Param_LocalUserNum,Z_Param_ShowParams);
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystemShowSendMessageUI::StaticRegisterNativesUOnlineExternalUISubsystemShowSendMessageUI()
	{
		UClass* Class = UOnlineExternalUISubsystemShowSendMessageUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowSendMessageUI", &UOnlineExternalUISubsystemShowSendMessageUI::execShowSendMessageUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics
	{
		struct OnlineExternalUISubsystemShowSendMessageUI_eventShowSendMessageUI_Parms
		{
			UOnlineExternalUISubsystem* Subsystem;
			int32 LocalUserNum;
			FShowSendMessageParameters ShowParams;
			UOnlineExternalUISubsystemShowSendMessageUI* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageUI_eventShowSendMessageUI_Parms, Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageUI_eventShowSendMessageUI_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_ShowParams = { "ShowParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageUI_eventShowSendMessageUI_Parms, ShowParams), Z_Construct_UScriptStruct_FShowSendMessageParameters, METADATA_PARAMS(nullptr, 0) }; // 887815660
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageUI_eventShowSendMessageUI_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_ShowParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI, nullptr, "ShowSendMessageUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::OnlineExternalUISubsystemShowSendMessageUI_eventShowSendMessageUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystemShowSendMessageUI);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_NoRegister()
	{
		return UOnlineExternalUISubsystemShowSendMessageUI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShowSendMessageUIClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowSendMessageUIClosed;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ShowParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__ShowParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI, "ShowSendMessageUI" }, // 37923642
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageUI, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnCallFailed_MetaData)) }; // 3893680471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnShowSendMessageUIClosed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnShowSendMessageUIClosed = { "OnShowSendMessageUIClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageUI, OnShowSendMessageUIClosed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnShowSendMessageUIClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnShowSendMessageUIClosed_MetaData)) }; // 3893680471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageUI, __Store__Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageUI, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageUI, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__LocalUserNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__ShowParams_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__ShowParams = { "__Store__ShowParams", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageUI, __Store__ShowParams), Z_Construct_UScriptStruct_FShowSendMessageParameters, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__ShowParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__ShowParams_MetaData)) }; // 887815660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp_OnShowSendMessageUIClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::NewProp___Store__ShowParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystemShowSendMessageUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::ClassParams = {
		&UOnlineExternalUISubsystemShowSendMessageUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageUI.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageUI.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystemShowSendMessageUI>()
	{
		return UOnlineExternalUISubsystemShowSendMessageUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystemShowSendMessageUI);
	UOnlineExternalUISubsystemShowSendMessageUI::~UOnlineExternalUISubsystemShowSendMessageUI() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageToUserUICallbackPin_Parms
		{
			bool bMessageSent;
		};
		static void NewProp_bMessageSent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMessageSent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageToUserUICallbackPin_Parms*)Obj)->bMessageSent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent = { "bMessageSent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageToUserUICallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::NewProp_bMessageSent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineExternalUISubsystemShowSendMessageToUserUICallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineExternalUISubsystemShowSendMessageToUserUI::execShowSendMessageToUserUI)
	{
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_Recipient);
		P_GET_STRUCT(FShowSendMessageParameters,Z_Param_ShowParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystemShowSendMessageToUserUI**)Z_Param__Result=UOnlineExternalUISubsystemShowSendMessageToUserUI::ShowSendMessageToUserUI(Z_Param_Subsystem,Z_Param_LocalUserNum,Z_Param_Recipient,Z_Param_ShowParams);
		P_NATIVE_END;
	}
	void UOnlineExternalUISubsystemShowSendMessageToUserUI::StaticRegisterNativesUOnlineExternalUISubsystemShowSendMessageToUserUI()
	{
		UClass* Class = UOnlineExternalUISubsystemShowSendMessageToUserUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowSendMessageToUserUI", &UOnlineExternalUISubsystemShowSendMessageToUserUI::execShowSendMessageToUserUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics
	{
		struct OnlineExternalUISubsystemShowSendMessageToUserUI_eventShowSendMessageToUserUI_Parms
		{
			UOnlineExternalUISubsystem* Subsystem;
			int32 LocalUserNum;
			FUniqueNetIdRepl Recipient;
			FShowSendMessageParameters ShowParams;
			UOnlineExternalUISubsystemShowSendMessageToUserUI* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Recipient;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageToUserUI_eventShowSendMessageToUserUI_Parms, Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageToUserUI_eventShowSendMessageToUserUI_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_Recipient = { "Recipient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageToUserUI_eventShowSendMessageToUserUI_Parms, Recipient), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_ShowParams = { "ShowParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageToUserUI_eventShowSendMessageToUserUI_Parms, ShowParams), Z_Construct_UScriptStruct_FShowSendMessageParameters, METADATA_PARAMS(nullptr, 0) }; // 887815660
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineExternalUISubsystemShowSendMessageToUserUI_eventShowSendMessageToUserUI_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_Recipient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_ShowParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|ExternalUI" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI, nullptr, "ShowSendMessageToUserUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::OnlineExternalUISubsystemShowSendMessageToUserUI_eventShowSendMessageToUserUI_Parms), Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineExternalUISubsystemShowSendMessageToUserUI);
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_NoRegister()
	{
		return UOnlineExternalUISubsystemShowSendMessageToUserUI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShowSendMessageUIClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowSendMessageUIClosed;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Recipient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Recipient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ShowParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__ShowParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI, "ShowSendMessageToUserUI" }, // 3973687355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageToUserUI, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnCallFailed_MetaData)) }; // 2870010710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnShowSendMessageUIClosed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnShowSendMessageUIClosed = { "OnShowSendMessageUIClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageToUserUI, OnShowSendMessageUIClosed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnShowSendMessageUIClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnShowSendMessageUIClosed_MetaData)) }; // 2870010710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__Subsystem), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__LocalUserNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Recipient_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Recipient = { "__Store__Recipient", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__Recipient), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Recipient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Recipient_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__ShowParams_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineExternalUISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__ShowParams = { "__Store__ShowParams", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__ShowParams), Z_Construct_UScriptStruct_FShowSendMessageParameters, METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__ShowParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__ShowParams_MetaData)) }; // 887815660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp_OnShowSendMessageUIClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__Recipient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::NewProp___Store__ShowParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineExternalUISubsystemShowSendMessageToUserUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::ClassParams = {
		&UOnlineExternalUISubsystemShowSendMessageToUserUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI()
	{
		if (!Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI.OuterSingleton, Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineExternalUISubsystemShowSendMessageToUserUI>()
	{
		return UOnlineExternalUISubsystemShowSendMessageToUserUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineExternalUISubsystemShowSendMessageToUserUI);
	UOnlineExternalUISubsystemShowSendMessageToUserUI::~UOnlineExternalUISubsystemShowSendMessageToUserUI() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineExternalUISubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineExternalUISubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineExternalUISubsystem, UOnlineExternalUISubsystem::StaticClass, TEXT("UOnlineExternalUISubsystem"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystem), 1013350187U) },
		{ Z_Construct_UClass_UOnlineExternalUISubsystemShowLoginUI, UOnlineExternalUISubsystemShowLoginUI::StaticClass, TEXT("UOnlineExternalUISubsystemShowLoginUI"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowLoginUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystemShowLoginUI), 3408628719U) },
		{ Z_Construct_UClass_UOnlineExternalUISubsystemShowAccountCreationUI, UOnlineExternalUISubsystemShowAccountCreationUI::StaticClass, TEXT("UOnlineExternalUISubsystemShowAccountCreationUI"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowAccountCreationUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystemShowAccountCreationUI), 4019540305U) },
		{ Z_Construct_UClass_UOnlineExternalUISubsystemShowWebURL, UOnlineExternalUISubsystemShowWebURL::StaticClass, TEXT("UOnlineExternalUISubsystemShowWebURL"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowWebURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystemShowWebURL), 727813031U) },
		{ Z_Construct_UClass_UOnlineExternalUISubsystemShowProfileUI, UOnlineExternalUISubsystemShowProfileUI::StaticClass, TEXT("UOnlineExternalUISubsystemShowProfileUI"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowProfileUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystemShowProfileUI), 3979965961U) },
		{ Z_Construct_UClass_UOnlineExternalUISubsystemShowStoreUI, UOnlineExternalUISubsystemShowStoreUI::StaticClass, TEXT("UOnlineExternalUISubsystemShowStoreUI"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowStoreUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystemShowStoreUI), 3513352642U) },
		{ Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageUI, UOnlineExternalUISubsystemShowSendMessageUI::StaticClass, TEXT("UOnlineExternalUISubsystemShowSendMessageUI"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystemShowSendMessageUI), 183677537U) },
		{ Z_Construct_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI, UOnlineExternalUISubsystemShowSendMessageToUserUI::StaticClass, TEXT("UOnlineExternalUISubsystemShowSendMessageToUserUI"), &Z_Registration_Info_UClass_UOnlineExternalUISubsystemShowSendMessageToUserUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineExternalUISubsystemShowSendMessageToUserUI), 975006085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineExternalUISubsystem_h_4061396978(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineExternalUISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineExternalUISubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
