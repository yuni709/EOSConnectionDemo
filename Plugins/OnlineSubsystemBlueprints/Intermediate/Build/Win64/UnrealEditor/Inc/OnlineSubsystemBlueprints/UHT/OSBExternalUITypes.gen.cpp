// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBExternalUITypes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBMessageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBExternalUITypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UExternalUIFlowHandler();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UExternalUIFlowHandler_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FLoginFlowResultBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineMessagePayloadData();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FShowSendMessageParameters();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FShowStoreParameters();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FShowWebUrlParameters();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration;
class UScriptStruct* FExternalUIFlowHandlerRegistration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ExternalUIFlowHandlerRegistration"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FExternalUIFlowHandlerRegistration>()
{
	return FExternalUIFlowHandlerRegistration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalUIFlowHandlerRegistration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::NewProp_Interface_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalUIFlowHandlerRegistration, Interface), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::NewProp_Interface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::NewProp_Interface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ExternalUIFlowHandlerRegistration",
		sizeof(FExternalUIFlowHandlerRegistration),
		alignof(FExternalUIFlowHandlerRegistration),
		Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration()
	{
		if (!Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration.InnerSingleton, Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoginFlowResultBP;
class UScriptStruct* FLoginFlowResultBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoginFlowResultBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoginFlowResultBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginFlowResultBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("LoginFlowResultBP"));
	}
	return Z_Registration_Info_UScriptStruct_LoginFlowResultBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FLoginFlowResultBP>()
{
	return FLoginFlowResultBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorRaw_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorRaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumericErrorCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginFlowResultBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoginFlowResultBP, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoginFlowResultBP, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorRaw_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorRaw = { "ErrorRaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoginFlowResultBP, ErrorRaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorRaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_NumericErrorCode_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_NumericErrorCode = { "NumericErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoginFlowResultBP, NumericErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_NumericErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_NumericErrorCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_ErrorRaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewProp_NumericErrorCode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"LoginFlowResultBP",
		sizeof(FLoginFlowResultBP),
		alignof(FLoginFlowResultBP),
		Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginFlowResultBP()
	{
		if (!Z_Registration_Info_UScriptStruct_LoginFlowResultBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoginFlowResultBP.InnerSingleton, Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LoginFlowResultBP.InnerSingleton;
	}
	DEFINE_FUNCTION(IExternalUIFlowHandler::execOnCreateAccountFlowUIRequired)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestedURL);
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_ExternalUIContext);
		P_GET_PROPERTY(FIntProperty,Z_Param_RequestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnCreateAccountFlowUIRequired_Implementation(Z_Param_RequestedURL,Z_Param_ExternalUIContext,Z_Param_RequestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IExternalUIFlowHandler::execOnLoginFlowUIRequired)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestedURL);
		P_GET_OBJECT(UOnlineExternalUISubsystem,Z_Param_ExternalUIContext);
		P_GET_PROPERTY(FIntProperty,Z_Param_RequestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnLoginFlowUIRequired_Implementation(Z_Param_RequestedURL,Z_Param_ExternalUIContext,Z_Param_RequestID);
		P_NATIVE_END;
	}
	struct ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms
	{
		FString RequestedURL;
		UOnlineExternalUISubsystem* ExternalUIContext;
		int32 RequestID;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms
	{
		FString RequestedURL;
		UOnlineExternalUISubsystem* ExternalUIContext;
		int32 RequestID;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IExternalUIFlowHandler::OnCreateAccountFlowUIRequired(const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCreateAccountFlowUIRequired instead.");
		ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IExternalUIFlowHandler::OnLoginFlowUIRequired(const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLoginFlowUIRequired instead.");
		ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms Parms;
		return Parms.ReturnValue;
	}
	void UExternalUIFlowHandler::StaticRegisterNativesUExternalUIFlowHandler()
	{
		UClass* Class = UExternalUIFlowHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCreateAccountFlowUIRequired", &IExternalUIFlowHandler::execOnCreateAccountFlowUIRequired },
			{ "OnLoginFlowUIRequired", &IExternalUIFlowHandler::execOnLoginFlowUIRequired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedURL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalUIContext;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RequestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_RequestedURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_RequestedURL = { "RequestedURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms, RequestedURL), METADATA_PARAMS(Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_RequestedURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_RequestedURL_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_ExternalUIContext = { "ExternalUIContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms, ExternalUIContext), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms, RequestID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms), &Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_RequestedURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_ExternalUIContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_RequestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|External UI" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalUIFlowHandler, nullptr, "OnCreateAccountFlowUIRequired", nullptr, nullptr, sizeof(ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms), Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedURL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalUIContext;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RequestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_RequestedURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_RequestedURL = { "RequestedURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms, RequestedURL), METADATA_PARAMS(Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_RequestedURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_RequestedURL_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_ExternalUIContext = { "ExternalUIContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms, ExternalUIContext), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms, RequestID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms), &Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_RequestedURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_ExternalUIContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_RequestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|External UI" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalUIFlowHandler, nullptr, "OnLoginFlowUIRequired", nullptr, nullptr, sizeof(ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms), Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalUIFlowHandler);
	UClass* Z_Construct_UClass_UExternalUIFlowHandler_NoRegister()
	{
		return UExternalUIFlowHandler::StaticClass();
	}
	struct Z_Construct_UClass_UExternalUIFlowHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExternalUIFlowHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExternalUIFlowHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired, "OnCreateAccountFlowUIRequired" }, // 145768072
		{ &Z_Construct_UFunction_UExternalUIFlowHandler_OnLoginFlowUIRequired, "OnLoginFlowUIRequired" }, // 4127305466
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalUIFlowHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExternalUIFlowHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExternalUIFlowHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalUIFlowHandler_Statics::ClassParams = {
		&UExternalUIFlowHandler::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExternalUIFlowHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExternalUIFlowHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExternalUIFlowHandler()
	{
		if (!Z_Registration_Info_UClass_UExternalUIFlowHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalUIFlowHandler.OuterSingleton, Z_Construct_UClass_UExternalUIFlowHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExternalUIFlowHandler.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UExternalUIFlowHandler>()
	{
		return UExternalUIFlowHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalUIFlowHandler);
	UExternalUIFlowHandler::~UExternalUIFlowHandler() {}
	static FName NAME_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired = FName(TEXT("OnCreateAccountFlowUIRequired"));
	bool IExternalUIFlowHandler::Execute_OnCreateAccountFlowUIRequired(UObject* O, const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UExternalUIFlowHandler::StaticClass()));
		ExternalUIFlowHandler_eventOnCreateAccountFlowUIRequired_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UExternalUIFlowHandler_OnCreateAccountFlowUIRequired);
		if (Func)
		{
			Parms.RequestedURL=RequestedURL;
			Parms.ExternalUIContext=ExternalUIContext;
			Parms.RequestID=RequestID;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IExternalUIFlowHandler*)(O->GetNativeInterfaceAddress(UExternalUIFlowHandler::StaticClass())))
		{
			Parms.ReturnValue = I->OnCreateAccountFlowUIRequired_Implementation(RequestedURL,ExternalUIContext,RequestID);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UExternalUIFlowHandler_OnLoginFlowUIRequired = FName(TEXT("OnLoginFlowUIRequired"));
	bool IExternalUIFlowHandler::Execute_OnLoginFlowUIRequired(UObject* O, const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UExternalUIFlowHandler::StaticClass()));
		ExternalUIFlowHandler_eventOnLoginFlowUIRequired_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UExternalUIFlowHandler_OnLoginFlowUIRequired);
		if (Func)
		{
			Parms.RequestedURL=RequestedURL;
			Parms.ExternalUIContext=ExternalUIContext;
			Parms.RequestID=RequestID;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IExternalUIFlowHandler*)(O->GetNativeInterfaceAddress(UExternalUIFlowHandler::StaticClass())))
		{
			Parms.ReturnValue = I->OnLoginFlowUIRequired_Implementation(RequestedURL,ExternalUIContext,RequestID);
		}
		return Parms.ReturnValue;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowWebUrlParameters;
class UScriptStruct* FShowWebUrlParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowWebUrlParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowWebUrlParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowWebUrlParameters, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ShowWebUrlParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ShowWebUrlParameters.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FShowWebUrlParameters>()
{
	return FShowWebUrlParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Embedded_MetaData[];
#endif
		static void NewProp_Embedded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Embedded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowCloseButton_MetaData[];
#endif
		static void NewProp_ShowCloseButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCloseButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowBackground_MetaData[];
#endif
		static void NewProp_ShowBackground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HideCursor_MetaData[];
#endif
		static void NewProp_HideCursor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HideCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetCookies_MetaData[];
#endif
		static void NewProp_ResetCookies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetCookies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedDomains;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CallbackPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowWebUrlParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_Embedded_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_Embedded_SetBit(void* Obj)
	{
		((FShowWebUrlParameters*)Obj)->Embedded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_Embedded = { "Embedded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FShowWebUrlParameters), &Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_Embedded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_Embedded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_Embedded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowCloseButton_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowCloseButton_SetBit(void* Obj)
	{
		((FShowWebUrlParameters*)Obj)->ShowCloseButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowCloseButton = { "ShowCloseButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FShowWebUrlParameters), &Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowCloseButton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowCloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowCloseButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowBackground_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowBackground_SetBit(void* Obj)
	{
		((FShowWebUrlParameters*)Obj)->ShowBackground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowBackground = { "ShowBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FShowWebUrlParameters), &Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowBackground_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_HideCursor_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_HideCursor_SetBit(void* Obj)
	{
		((FShowWebUrlParameters*)Obj)->HideCursor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_HideCursor = { "HideCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FShowWebUrlParameters), &Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_HideCursor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_HideCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_HideCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ResetCookies_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ResetCookies_SetBit(void* Obj)
	{
		((FShowWebUrlParameters*)Obj)->ResetCookies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ResetCookies = { "ResetCookies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FShowWebUrlParameters), &Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ResetCookies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ResetCookies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ResetCookies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetX_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowWebUrlParameters, OffsetX), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetY_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowWebUrlParameters, OffsetY), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowWebUrlParameters, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowWebUrlParameters, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeY_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_AllowedDomains_Inner = { "AllowedDomains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_AllowedDomains_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_AllowedDomains = { "AllowedDomains", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowWebUrlParameters, AllowedDomains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_AllowedDomains_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_AllowedDomains_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_CallbackPath_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_CallbackPath = { "CallbackPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowWebUrlParameters, CallbackPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_CallbackPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_CallbackPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_Embedded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowCloseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ShowBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_HideCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_ResetCookies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_OffsetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_AllowedDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_AllowedDomains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewProp_CallbackPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ShowWebUrlParameters",
		sizeof(FShowWebUrlParameters),
		alignof(FShowWebUrlParameters),
		Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShowWebUrlParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ShowWebUrlParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowWebUrlParameters.InnerSingleton, Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShowWebUrlParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowStoreParameters;
class UScriptStruct* FShowStoreParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowStoreParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowStoreParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowStoreParameters, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ShowStoreParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ShowStoreParameters.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FShowStoreParameters>()
{
	return FShowStoreParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShowStoreParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddToCart_MetaData[];
#endif
		static void NewProp_AddToCart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddToCart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowStoreParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowStoreParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowStoreParameters, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_ProductId_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowStoreParameters, ProductId), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_ProductId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_ProductId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_AddToCart_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_AddToCart_SetBit(void* Obj)
	{
		((FShowStoreParameters*)Obj)->AddToCart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_AddToCart = { "AddToCart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FShowStoreParameters), &Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_AddToCart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_AddToCart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_AddToCart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowStoreParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_ProductId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewProp_AddToCart,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowStoreParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ShowStoreParameters",
		sizeof(FShowStoreParameters),
		alignof(FShowStoreParameters),
		Z_Construct_UScriptStruct_FShowStoreParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowStoreParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShowStoreParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ShowStoreParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowStoreParameters.InnerSingleton, Z_Construct_UScriptStruct_FShowStoreParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShowStoreParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShowSendMessageParameters;
class UScriptStruct* FShowSendMessageParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShowSendMessageParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShowSendMessageParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShowSendMessageParameters, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ShowSendMessageParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ShowSendMessageParameters.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FShowSendMessageParameters>()
{
	return FShowSendMessageParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayTitle_Loc_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayTitle_Loc_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTitle_Loc_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayTitle_Loc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDetails_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayDetails;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayDetails_Loc_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayDetails_Loc_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDetails_Loc_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayDetails_Loc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecipients_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRecipients;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShowSendMessageParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle = { "DisplayTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowSendMessageParameters, DisplayTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc_ValueProp = { "DisplayTitle_Loc", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc_Key_KeyProp = { "DisplayTitle_Loc_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc = { "DisplayTitle_Loc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowSendMessageParameters, DisplayTitle_Loc), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayMessage_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayMessage = { "DisplayMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowSendMessageParameters, DisplayMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails = { "DisplayDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowSendMessageParameters, DisplayDetails), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc_ValueProp = { "DisplayDetails_Loc", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc_Key_KeyProp = { "DisplayDetails_Loc_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc = { "DisplayDetails_Loc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowSendMessageParameters, DisplayDetails_Loc), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DataPayload_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "// todo: DisplayThumbnail - this is meant to be image data\n" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
		{ "ToolTip", "todo: DisplayThumbnail - this is meant to be image data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DataPayload = { "DataPayload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowSendMessageParameters, DataPayload), Z_Construct_UScriptStruct_FOnlineMessagePayloadData, METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DataPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DataPayload_MetaData)) }; // 2080183978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_MaxRecipients_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_MaxRecipients = { "MaxRecipients", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShowSendMessageParameters, MaxRecipients), METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_MaxRecipients_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_MaxRecipients_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayTitle_Loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DisplayDetails_Loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_DataPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewProp_MaxRecipients,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ShowSendMessageParameters",
		sizeof(FShowSendMessageParameters),
		alignof(FShowSendMessageParameters),
		Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShowSendMessageParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ShowSendMessageParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShowSendMessageParameters.InnerSingleton, Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShowSendMessageParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlatformMessageType_;
	static UEnum* EPlatformMessageType__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlatformMessageType_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlatformMessageType_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EPlatformMessageType_"));
		}
		return Z_Registration_Info_UEnum_EPlatformMessageType_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPlatformMessageType_>()
	{
		return EPlatformMessageType__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::Enumerators[] = {
		{ "EPlatformMessageType_::EmptyStore", (int64)EPlatformMessageType_::EmptyStore },
		{ "EPlatformMessageType_::ChatRestricted", (int64)EPlatformMessageType_::ChatRestricted },
		{ "EPlatformMessageType_::UGCRestricted", (int64)EPlatformMessageType_::UGCRestricted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatRestricted.Name", "EPlatformMessageType_::ChatRestricted" },
		{ "EmptyStore.Name", "EPlatformMessageType_::EmptyStore" },
		{ "ModuleRelativePath", "Public/Types/OSBExternalUITypes.h" },
		{ "ScriptName", "EPlatformMessageType" },
		{ "UGCRestricted.Name", "EPlatformMessageType_::UGCRestricted" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EPlatformMessageType_",
		"EPlatformMessageType_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType_()
	{
		if (!Z_Registration_Info_UEnum_EPlatformMessageType_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlatformMessageType_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EPlatformMessageType__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlatformMessageType_.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::EnumInfo[] = {
		{ EPlatformMessageType__StaticEnum, TEXT("EPlatformMessageType_"), &Z_Registration_Info_UEnum_EPlatformMessageType_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1307388547U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::ScriptStructInfo[] = {
		{ FExternalUIFlowHandlerRegistration::StaticStruct, Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics::NewStructOps, TEXT("ExternalUIFlowHandlerRegistration"), &Z_Registration_Info_UScriptStruct_ExternalUIFlowHandlerRegistration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalUIFlowHandlerRegistration), 3692060841U) },
		{ FLoginFlowResultBP::StaticStruct, Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics::NewStructOps, TEXT("LoginFlowResultBP"), &Z_Registration_Info_UScriptStruct_LoginFlowResultBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoginFlowResultBP), 3139023351U) },
		{ FShowWebUrlParameters::StaticStruct, Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics::NewStructOps, TEXT("ShowWebUrlParameters"), &Z_Registration_Info_UScriptStruct_ShowWebUrlParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowWebUrlParameters), 1160417119U) },
		{ FShowStoreParameters::StaticStruct, Z_Construct_UScriptStruct_FShowStoreParameters_Statics::NewStructOps, TEXT("ShowStoreParameters"), &Z_Registration_Info_UScriptStruct_ShowStoreParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowStoreParameters), 370780014U) },
		{ FShowSendMessageParameters::StaticStruct, Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics::NewStructOps, TEXT("ShowSendMessageParameters"), &Z_Registration_Info_UScriptStruct_ShowSendMessageParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShowSendMessageParameters), 887815660U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExternalUIFlowHandler, UExternalUIFlowHandler::StaticClass, TEXT("UExternalUIFlowHandler"), &Z_Registration_Info_UClass_UExternalUIFlowHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalUIFlowHandler), 4254374493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_881000236(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
