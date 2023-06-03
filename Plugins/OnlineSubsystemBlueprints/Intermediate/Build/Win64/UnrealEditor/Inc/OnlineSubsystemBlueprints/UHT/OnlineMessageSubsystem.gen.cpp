// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineMessageSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool Param1;
			FString Param2;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::NewProp_Param2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Message_EnumerateMessagesComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool Param1;
			FString Param2;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::NewProp_Param2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// @parameters-not-compatible\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMessage_ReadMessageComplete_BP, int32, LocalUserNum, bool, Param1, const FUniqueMessageId&, Param2, const FString&, Param3);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
		{ "ToolTip", "@parameters-not-compatible\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMessage_ReadMessageComplete_BP, int32, LocalUserNum, bool, Param1, const FUniqueMessageId&, Param2, const FString&, Param3);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Message_SendMessageComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineMessageSubsystem::execClearMessages)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearMessages(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineMessageSubsystem::execClearMessageHeaders)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearMessageHeaders(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineMessageSubsystem::execEnumerateMessages)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnumerateMessages(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineMessageSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineMessageSubsystem::StaticRegisterNativesUOnlineMessageSubsystem()
	{
		UClass* Class = UOnlineMessageSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMessageHeaders", &UOnlineMessageSubsystem::execClearMessageHeaders },
			{ "ClearMessages", &UOnlineMessageSubsystem::execClearMessages },
			{ "EnumerateMessages", &UOnlineMessageSubsystem::execEnumerateMessages },
			{ "IsSubsystemAvailable", &UOnlineMessageSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics
	{
		struct OnlineMessageSubsystem_eventClearMessageHeaders_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSubsystem_eventClearMessageHeaders_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineMessageSubsystem_eventClearMessageHeaders_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineMessageSubsystem_eventClearMessageHeaders_Parms), &Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Message" },
		{ "Comment", "// @generator-incompatible\n// bool GetMessageHeaders(int32 LocalUserNum, TArray<TSharedRef<class FOnlineMessageHeader>>& OutHeaders);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nbool GetMessageHeaders(int32 LocalUserNum, TArray<TSharedRef<class FOnlineMessageHeader>>& OutHeaders);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSubsystem, nullptr, "ClearMessageHeaders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::OnlineMessageSubsystem_eventClearMessageHeaders_Parms), Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics
	{
		struct OnlineMessageSubsystem_eventClearMessages_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSubsystem_eventClearMessages_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineMessageSubsystem_eventClearMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineMessageSubsystem_eventClearMessages_Parms), &Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Message" },
		{ "Comment", "// @generator-incompatible\n// bool ClearMessage(int32 LocalUserNum, const FUniqueMessageId& MessageId);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nbool ClearMessage(int32 LocalUserNum, const FUniqueMessageId& MessageId);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSubsystem, nullptr, "ClearMessages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::OnlineMessageSubsystem_eventClearMessages_Parms), Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics
	{
		struct OnlineMessageSubsystem_eventEnumerateMessages_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSubsystem_eventEnumerateMessages_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineMessageSubsystem_eventEnumerateMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineMessageSubsystem_eventEnumerateMessages_Parms), &Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Message" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSubsystem, nullptr, "EnumerateMessages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::OnlineMessageSubsystem_eventEnumerateMessages_Parms), Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineMessageSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineMessageSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineMessageSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Message" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::OnlineMessageSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineMessageSubsystem);
	UClass* Z_Construct_UClass_UOnlineMessageSubsystem_NoRegister()
	{
		return UOnlineMessageSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineMessageSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnumerateMessagesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnumerateMessagesComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSendMessageComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendMessageComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineMessageSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineMessageSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessageHeaders, "ClearMessageHeaders" }, // 3796247250
		{ &Z_Construct_UFunction_UOnlineMessageSubsystem_ClearMessages, "ClearMessages" }, // 718087594
		{ &Z_Construct_UFunction_UOnlineMessageSubsystem_EnumerateMessages, "EnumerateMessages" }, // 2918013202
		{ &Z_Construct_UFunction_UOnlineMessageSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3939604903
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// @parameters-not-compatible\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMessage_DeleteMessageComplete_BP, int32, LocalUserNum, bool, Param1, const FUniqueMessageId&, Param2, const FString&, Param3);\n" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
		{ "ToolTip", "@parameters-not-compatible\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMessage_DeleteMessageComplete_BP, int32, LocalUserNum, bool, Param1, const FUniqueMessageId&, Param2, const FString&, Param3);" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnEnumerateMessagesComplete_MetaData[] = {
		{ "Category", "Online|Message" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnEnumerateMessagesComplete = { "OnEnumerateMessagesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSubsystem, OnEnumerateMessagesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_EnumerateMessagesComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnEnumerateMessagesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnEnumerateMessagesComplete_MetaData)) }; // 3132449744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnSendMessageComplete_MetaData[] = {
		{ "Category", "Online|Message" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnSendMessageComplete = { "OnSendMessageComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSubsystem, OnSendMessageComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Message_SendMessageComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnSendMessageComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnSendMessageComplete_MetaData)) }; // 1624444124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineMessageSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnEnumerateMessagesComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSubsystem_Statics::NewProp_OnSendMessageComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineMessageSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineMessageSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineMessageSubsystem_Statics::ClassParams = {
		&UOnlineMessageSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineMessageSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineMessageSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineMessageSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineMessageSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineMessageSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineMessageSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineMessageSubsystem>()
	{
		return UOnlineMessageSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineMessageSubsystem);
	UOnlineMessageSubsystem::~UOnlineMessageSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineMessageSubsystem, UOnlineMessageSubsystem::StaticClass, TEXT("UOnlineMessageSubsystem"), &Z_Registration_Info_UClass_UOnlineMessageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineMessageSubsystem), 482834377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_2925870064(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
