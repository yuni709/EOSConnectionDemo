// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBFileTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineUserCloudSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UFileData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FCloudFileHeaderBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventUserCloud_EnumerateUserFilesComplete_BP_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventUserCloud_EnumerateUserFilesComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventUserCloud_EnumerateUserFilesComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_EnumerateUserFilesComplete_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventUserCloud_EnumerateUserFilesComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventUserCloud_ReadUserFileComplete_BP_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventUserCloud_ReadUserFileComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventUserCloud_ReadUserFileComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_ReadUserFileComplete_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_ReadUserFileComplete_BP_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "UserCloud_ReadUserFileComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventUserCloud_ReadUserFileComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileProgress_BP_Parms
		{
			int32 BytesWritten;
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesWritten;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::NewProp_BytesWritten = { "BytesWritten", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileProgress_BP_Parms, BytesWritten), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileProgress_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileProgress_BP_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::NewProp_BytesWritten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "UserCloud_WriteUserFileProgress_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileProgress_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileComplete_BP_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileComplete_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileComplete_BP_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "UserCloud_WriteUserFileComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileCanceled_BP_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileCanceled_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileCanceled_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileCanceled_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileCanceled_BP_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "UserCloud_WriteUserFileCanceled_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventUserCloud_WriteUserFileCanceled_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventUserCloud_DeleteUserFileComplete_BP_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventUserCloud_DeleteUserFileComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventUserCloud_DeleteUserFileComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_DeleteUserFileComplete_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventUserCloud_DeleteUserFileComplete_BP_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "UserCloud_DeleteUserFileComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventUserCloud_DeleteUserFileComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execDumpCloudFileState)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpCloudFileState(Z_Param_UserId,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execDumpCloudState)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpCloudState(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execRequestUsageInfo)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUsageInfo(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execCancelWriteUserFile)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelWriteUserFile(Z_Param_UserId,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execGetUserFileList)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_TARRAY_REF(FCloudFileHeaderBP,Z_Param_Out_UserFiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserFileList(Z_Param_UserId,Z_Param_Out_UserFiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execClearFile)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearFile(Z_Param_UserId,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execClearFiles)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearFiles(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execGetFileContents)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_OBJECT_REF(UFileData,Z_Param_Out_FileContents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFileContents(Z_Param_UserId,Z_Param_FileName,Z_Param_Out_FileContents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineUserCloudSubsystem::StaticRegisterNativesUOnlineUserCloudSubsystem()
	{
		UClass* Class = UOnlineUserCloudSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelWriteUserFile", &UOnlineUserCloudSubsystem::execCancelWriteUserFile },
			{ "ClearFile", &UOnlineUserCloudSubsystem::execClearFile },
			{ "ClearFiles", &UOnlineUserCloudSubsystem::execClearFiles },
			{ "DumpCloudFileState", &UOnlineUserCloudSubsystem::execDumpCloudFileState },
			{ "DumpCloudState", &UOnlineUserCloudSubsystem::execDumpCloudState },
			{ "GetFileContents", &UOnlineUserCloudSubsystem::execGetFileContents },
			{ "GetUserFileList", &UOnlineUserCloudSubsystem::execGetUserFileList },
			{ "IsSubsystemAvailable", &UOnlineUserCloudSubsystem::execIsSubsystemAvailable },
			{ "RequestUsageInfo", &UOnlineUserCloudSubsystem::execRequestUsageInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics
	{
		struct OnlineUserCloudSubsystem_eventCancelWriteUserFile_Parms
		{
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventCancelWriteUserFile_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventCancelWriteUserFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "CancelWriteUserFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::OnlineUserCloudSubsystem_eventCancelWriteUserFile_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics
	{
		struct OnlineUserCloudSubsystem_eventClearFile_Parms
		{
			FUniqueNetIdRepl UserId;
			FString FileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventClearFile_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventClearFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystem_eventClearFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystem_eventClearFile_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "ClearFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::OnlineUserCloudSubsystem_eventClearFile_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics
	{
		struct OnlineUserCloudSubsystem_eventClearFiles_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventClearFiles_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystem_eventClearFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystem_eventClearFiles_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "ClearFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::OnlineUserCloudSubsystem_eventClearFiles_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics
	{
		struct OnlineUserCloudSubsystem_eventDumpCloudFileState_Parms
		{
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventDumpCloudFileState_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventDumpCloudFileState_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "DumpCloudFileState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::OnlineUserCloudSubsystem_eventDumpCloudFileState_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics
	{
		struct OnlineUserCloudSubsystem_eventDumpCloudState_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventDumpCloudState_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "DumpCloudState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::OnlineUserCloudSubsystem_eventDumpCloudState_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics
	{
		struct OnlineUserCloudSubsystem_eventGetFileContents_Parms
		{
			FUniqueNetIdRepl UserId;
			FString FileName;
			UFileData* FileContents;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FileContents;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventGetFileContents_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventGetFileContents_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_FileContents = { "FileContents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventGetFileContents_Parms, FileContents), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystem_eventGetFileContents_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystem_eventGetFileContents_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_FileContents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "GetFileContents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::OnlineUserCloudSubsystem_eventGetFileContents_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics
	{
		struct OnlineUserCloudSubsystem_eventGetUserFileList_Parms
		{
			FUniqueNetIdRepl UserId;
			TArray<FCloudFileHeaderBP> UserFiles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserFiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserFiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventGetUserFileList_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::NewProp_UserFiles_Inner = { "UserFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCloudFileHeaderBP, METADATA_PARAMS(nullptr, 0) }; // 4143067514
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::NewProp_UserFiles = { "UserFiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventGetUserFileList_Parms, UserFiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4143067514
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::NewProp_UserFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::NewProp_UserFiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "GetUserFileList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::OnlineUserCloudSubsystem_eventGetUserFileList_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineUserCloudSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::OnlineUserCloudSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics
	{
		struct OnlineUserCloudSubsystem_eventRequestUsageInfo_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystem_eventRequestUsageInfo_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystem_eventRequestUsageInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystem_eventRequestUsageInfo_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystem, nullptr, "RequestUsageInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::OnlineUserCloudSubsystem_eventRequestUsageInfo_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserCloudSubsystem);
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister()
	{
		return UOnlineUserCloudSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnumerateUserFilesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnumerateUserFilesComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadUserFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadUserFileComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWriteUserFileProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteUserFileProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWriteUserFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteUserFileComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWriteUserFileCanceled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteUserFileCanceled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeleteUserFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteUserFileComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_CancelWriteUserFile, "CancelWriteUserFile" }, // 3524944624
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFile, "ClearFile" }, // 57703078
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_ClearFiles, "ClearFiles" }, // 646130839
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudFileState, "DumpCloudFileState" }, // 844467491
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_DumpCloudState, "DumpCloudState" }, // 4164065109
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetFileContents, "GetFileContents" }, // 1584062105
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_GetUserFileList, "GetUserFileList" }, // 1990815371
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3505322949
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystem_RequestUsageInfo, "RequestUsageInfo" }, // 3094155235
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// @parameters-not-compatible\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserCloud_UserCloudAnalyticsEvent_BP, const FString&, EventName, const TArray<FAnalyticsEventAttribute>&, Attributes);\n" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
		{ "ToolTip", "@parameters-not-compatible\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserCloud_UserCloudAnalyticsEvent_BP, const FString&, EventName, const TArray<FAnalyticsEventAttribute>&, Attributes);" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnEnumerateUserFilesComplete_MetaData[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnEnumerateUserFilesComplete = { "OnEnumerateUserFilesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystem, OnEnumerateUserFilesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_EnumerateUserFilesComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnEnumerateUserFilesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnEnumerateUserFilesComplete_MetaData)) }; // 3697392679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnReadUserFileComplete_MetaData[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnReadUserFileComplete = { "OnReadUserFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystem, OnReadUserFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_ReadUserFileComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnReadUserFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnReadUserFileComplete_MetaData)) }; // 2542662348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileProgress_MetaData[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileProgress = { "OnWriteUserFileProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystem, OnWriteUserFileProgress), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileProgress_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileProgress_MetaData)) }; // 1887210212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileComplete_MetaData[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileComplete = { "OnWriteUserFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystem, OnWriteUserFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileComplete_MetaData)) }; // 2341649373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileCanceled_MetaData[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileCanceled = { "OnWriteUserFileCanceled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystem, OnWriteUserFileCanceled), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_WriteUserFileCanceled_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileCanceled_MetaData)) }; // 1174346696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnDeleteUserFileComplete_MetaData[] = {
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnDeleteUserFileComplete = { "OnDeleteUserFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystem, OnDeleteUserFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_UserCloud_DeleteUserFileComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnDeleteUserFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnDeleteUserFileComplete_MetaData)) }; // 886720531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnEnumerateUserFilesComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnReadUserFileComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnWriteUserFileCanceled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::NewProp_OnDeleteUserFileComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserCloudSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::ClassParams = {
		&UOnlineUserCloudSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserCloudSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserCloudSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineUserCloudSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserCloudSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserCloudSubsystem>()
	{
		return UOnlineUserCloudSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserCloudSubsystem);
	UOnlineUserCloudSubsystem::~UOnlineUserCloudSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemEnumerateUserFilesCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemEnumerateUserFilesCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemEnumerateUserFilesCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemEnumerateUserFilesCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemEnumerateUserFilesCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystemEnumerateUserFiles::execEnumerateUserFiles)
	{
		P_GET_OBJECT(UOnlineUserCloudSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserCloudSubsystemEnumerateUserFiles**)Z_Param__Result=UOnlineUserCloudSubsystemEnumerateUserFiles::EnumerateUserFiles(Z_Param_Subsystem,Z_Param_UserId);
		P_NATIVE_END;
	}
	void UOnlineUserCloudSubsystemEnumerateUserFiles::StaticRegisterNativesUOnlineUserCloudSubsystemEnumerateUserFiles()
	{
		UClass* Class = UOnlineUserCloudSubsystemEnumerateUserFiles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateUserFiles", &UOnlineUserCloudSubsystemEnumerateUserFiles::execEnumerateUserFiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics
	{
		struct OnlineUserCloudSubsystemEnumerateUserFiles_eventEnumerateUserFiles_Parms
		{
			UOnlineUserCloudSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			UOnlineUserCloudSubsystemEnumerateUserFiles* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemEnumerateUserFiles_eventEnumerateUserFiles_Parms, Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemEnumerateUserFiles_eventEnumerateUserFiles_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemEnumerateUserFiles_eventEnumerateUserFiles_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles, nullptr, "EnumerateUserFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::OnlineUserCloudSubsystemEnumerateUserFiles_eventEnumerateUserFiles_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserCloudSubsystemEnumerateUserFiles);
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_NoRegister()
	{
		return UOnlineUserCloudSubsystemEnumerateUserFiles::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnumerateUserFilesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnumerateUserFilesComplete;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles, "EnumerateUserFiles" }, // 2258928968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemEnumerateUserFiles, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnCallFailed_MetaData)) }; // 1171212556
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnEnumerateUserFilesComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnEnumerateUserFilesComplete = { "OnEnumerateUserFilesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemEnumerateUserFiles, OnEnumerateUserFilesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnEnumerateUserFilesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnEnumerateUserFilesComplete_MetaData)) }; // 1171212556
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp_OnEnumerateUserFilesComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::NewProp___Store__UserId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserCloudSubsystemEnumerateUserFiles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::ClassParams = {
		&UOnlineUserCloudSubsystemEnumerateUserFiles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles.OuterSingleton, Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserCloudSubsystemEnumerateUserFiles>()
	{
		return UOnlineUserCloudSubsystemEnumerateUserFiles::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserCloudSubsystemEnumerateUserFiles);
	UOnlineUserCloudSubsystemEnumerateUserFiles::~UOnlineUserCloudSubsystemEnumerateUserFiles() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemReadUserFileCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemReadUserFileCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemReadUserFileCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemReadUserFileCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemReadUserFileCallbackPin_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemReadUserFileCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystemReadUserFile::execReadUserFile)
	{
		P_GET_OBJECT(UOnlineUserCloudSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserCloudSubsystemReadUserFile**)Z_Param__Result=UOnlineUserCloudSubsystemReadUserFile::ReadUserFile(Z_Param_Subsystem,Z_Param_UserId,Z_Param_FileName);
		P_NATIVE_END;
	}
	void UOnlineUserCloudSubsystemReadUserFile::StaticRegisterNativesUOnlineUserCloudSubsystemReadUserFile()
	{
		UClass* Class = UOnlineUserCloudSubsystemReadUserFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadUserFile", &UOnlineUserCloudSubsystemReadUserFile::execReadUserFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics
	{
		struct OnlineUserCloudSubsystemReadUserFile_eventReadUserFile_Parms
		{
			UOnlineUserCloudSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FString FileName;
			UOnlineUserCloudSubsystemReadUserFile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemReadUserFile_eventReadUserFile_Parms, Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemReadUserFile_eventReadUserFile_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemReadUserFile_eventReadUserFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemReadUserFile_eventReadUserFile_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile, nullptr, "ReadUserFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::OnlineUserCloudSubsystemReadUserFile_eventReadUserFile_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserCloudSubsystemReadUserFile);
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_NoRegister()
	{
		return UOnlineUserCloudSubsystemReadUserFile::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadUserFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadUserFileComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystemReadUserFile_ReadUserFile, "ReadUserFile" }, // 2679064664
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemReadUserFile, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnCallFailed_MetaData)) }; // 3309462484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnReadUserFileComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnReadUserFileComplete = { "OnReadUserFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemReadUserFile, OnReadUserFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemReadUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnReadUserFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnReadUserFileComplete_MetaData)) }; // 3309462484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemReadUserFile, __Store__Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemReadUserFile, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemReadUserFile, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__FileName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__FileName = { "__Store__FileName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemReadUserFile, __Store__FileName), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__FileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp_OnReadUserFileComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::NewProp___Store__FileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserCloudSubsystemReadUserFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::ClassParams = {
		&UOnlineUserCloudSubsystemReadUserFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserCloudSubsystemReadUserFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserCloudSubsystemReadUserFile.OuterSingleton, Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserCloudSubsystemReadUserFile.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserCloudSubsystemReadUserFile>()
	{
		return UOnlineUserCloudSubsystemReadUserFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserCloudSubsystemReadUserFile);
	UOnlineUserCloudSubsystemReadUserFile::~UOnlineUserCloudSubsystemReadUserFile() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemWriteUserFileCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString FileName;
			int32 BytesWritten;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesWritten;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemWriteUserFileCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemWriteUserFileCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemWriteUserFileCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemWriteUserFileCallbackPin_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_BytesWritten = { "BytesWritten", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemWriteUserFileCallbackPin_Parms, BytesWritten), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::NewProp_BytesWritten,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemWriteUserFileCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystemWriteUserFile::execWriteUserFile)
	{
		P_GET_OBJECT(UOnlineUserCloudSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_OBJECT(UFileData,Z_Param_FileContents);
		P_GET_UBOOL(Z_Param_bCompressBeforeUpload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserCloudSubsystemWriteUserFile**)Z_Param__Result=UOnlineUserCloudSubsystemWriteUserFile::WriteUserFile(Z_Param_Subsystem,Z_Param_UserId,Z_Param_FileName,Z_Param_FileContents,Z_Param_bCompressBeforeUpload);
		P_NATIVE_END;
	}
	void UOnlineUserCloudSubsystemWriteUserFile::StaticRegisterNativesUOnlineUserCloudSubsystemWriteUserFile()
	{
		UClass* Class = UOnlineUserCloudSubsystemWriteUserFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WriteUserFile", &UOnlineUserCloudSubsystemWriteUserFile::execWriteUserFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics
	{
		struct OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms
		{
			UOnlineUserCloudSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FString FileName;
			UFileData* FileContents;
			bool bCompressBeforeUpload;
			UOnlineUserCloudSubsystemWriteUserFile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FileContents;
		static void NewProp_bCompressBeforeUpload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressBeforeUpload;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms, Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_FileContents = { "FileContents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms, FileContents), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_bCompressBeforeUpload_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms*)Obj)->bCompressBeforeUpload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_bCompressBeforeUpload = { "bCompressBeforeUpload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_bCompressBeforeUpload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_FileContents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_bCompressBeforeUpload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile, nullptr, "WriteUserFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::OnlineUserCloudSubsystemWriteUserFile_eventWriteUserFile_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserCloudSubsystemWriteUserFile);
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_NoRegister()
	{
		return UOnlineUserCloudSubsystemWriteUserFile::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWriteUserFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteUserFileComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWriteUserFileProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteUserFileProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWriteUserFileCanceled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteUserFileCanceled;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__FileContents_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__FileContents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bCompressBeforeUpload_MetaData[];
#endif
		static void NewProp___Store__bCompressBeforeUpload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bCompressBeforeUpload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile, "WriteUserFile" }, // 2396841571
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnCallFailed_MetaData)) }; // 2455423471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileComplete = { "OnWriteUserFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, OnWriteUserFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileComplete_MetaData)) }; // 2455423471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileProgress_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileProgress = { "OnWriteUserFileProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, OnWriteUserFileProgress), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileProgress_MetaData)) }; // 2455423471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileCanceled_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileCanceled = { "OnWriteUserFileCanceled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, OnWriteUserFileCanceled), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemWriteUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileCanceled_MetaData)) }; // 2455423471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, __Store__Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileName = { "__Store__FileName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, __Store__FileName), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileContents_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileContents = { "__Store__FileContents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemWriteUserFile, __Store__FileContents), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileContents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileContents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__bCompressBeforeUpload_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__bCompressBeforeUpload_SetBit(void* Obj)
	{
		((UOnlineUserCloudSubsystemWriteUserFile*)Obj)->__Store__bCompressBeforeUpload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__bCompressBeforeUpload = { "__Store__bCompressBeforeUpload", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineUserCloudSubsystemWriteUserFile), &Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__bCompressBeforeUpload_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__bCompressBeforeUpload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__bCompressBeforeUpload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp_OnWriteUserFileCanceled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__FileContents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::NewProp___Store__bCompressBeforeUpload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserCloudSubsystemWriteUserFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::ClassParams = {
		&UOnlineUserCloudSubsystemWriteUserFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserCloudSubsystemWriteUserFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserCloudSubsystemWriteUserFile.OuterSingleton, Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserCloudSubsystemWriteUserFile.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserCloudSubsystemWriteUserFile>()
	{
		return UOnlineUserCloudSubsystemWriteUserFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserCloudSubsystemWriteUserFile);
	UOnlineUserCloudSubsystemWriteUserFile::~UOnlineUserCloudSubsystemWriteUserFile() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemDeleteUserFileCallbackPin_Parms
		{
			bool bWasSuccessful;
			FUniqueNetIdRepl UserId;
			FString FileName;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemDeleteUserFileCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemDeleteUserFileCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemDeleteUserFileCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemDeleteUserFileCallbackPin_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineUserCloudSubsystemDeleteUserFileCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineUserCloudSubsystemDeleteUserFile::execDeleteUserFile)
	{
		P_GET_OBJECT(UOnlineUserCloudSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_UBOOL(Z_Param_bShouldCloudDelete);
		P_GET_UBOOL(Z_Param_bShouldLocallyDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserCloudSubsystemDeleteUserFile**)Z_Param__Result=UOnlineUserCloudSubsystemDeleteUserFile::DeleteUserFile(Z_Param_Subsystem,Z_Param_UserId,Z_Param_FileName,Z_Param_bShouldCloudDelete,Z_Param_bShouldLocallyDelete);
		P_NATIVE_END;
	}
	void UOnlineUserCloudSubsystemDeleteUserFile::StaticRegisterNativesUOnlineUserCloudSubsystemDeleteUserFile()
	{
		UClass* Class = UOnlineUserCloudSubsystemDeleteUserFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteUserFile", &UOnlineUserCloudSubsystemDeleteUserFile::execDeleteUserFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics
	{
		struct OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms
		{
			UOnlineUserCloudSubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FString FileName;
			bool bShouldCloudDelete;
			bool bShouldLocallyDelete;
			UOnlineUserCloudSubsystemDeleteUserFile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_bShouldCloudDelete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCloudDelete;
		static void NewProp_bShouldLocallyDelete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLocallyDelete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms, Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldCloudDelete_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms*)Obj)->bShouldCloudDelete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldCloudDelete = { "bShouldCloudDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldCloudDelete_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldLocallyDelete_SetBit(void* Obj)
	{
		((OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms*)Obj)->bShouldLocallyDelete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldLocallyDelete = { "bShouldLocallyDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms), &Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldLocallyDelete_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldCloudDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_bShouldLocallyDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|UserCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile, nullptr, "DeleteUserFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::OnlineUserCloudSubsystemDeleteUserFile_eventDeleteUserFile_Parms), Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserCloudSubsystemDeleteUserFile);
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_NoRegister()
	{
		return UOnlineUserCloudSubsystemDeleteUserFile::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeleteUserFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteUserFileComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bShouldCloudDelete_MetaData[];
#endif
		static void NewProp___Store__bShouldCloudDelete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bShouldCloudDelete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bShouldLocallyDelete_MetaData[];
#endif
		static void NewProp___Store__bShouldLocallyDelete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bShouldLocallyDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile, "DeleteUserFile" }, // 2430647141
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemDeleteUserFile, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnCallFailed_MetaData)) }; // 3373992063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnDeleteUserFileComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnDeleteUserFileComplete = { "OnDeleteUserFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemDeleteUserFile, OnDeleteUserFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineUserCloudSubsystemDeleteUserFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnDeleteUserFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnDeleteUserFileComplete_MetaData)) }; // 3373992063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemDeleteUserFile, __Store__Subsystem), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemDeleteUserFile, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemDeleteUserFile, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__FileName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__FileName = { "__Store__FileName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineUserCloudSubsystemDeleteUserFile, __Store__FileName), METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldCloudDelete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldCloudDelete_SetBit(void* Obj)
	{
		((UOnlineUserCloudSubsystemDeleteUserFile*)Obj)->__Store__bShouldCloudDelete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldCloudDelete = { "__Store__bShouldCloudDelete", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineUserCloudSubsystemDeleteUserFile), &Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldCloudDelete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldCloudDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldCloudDelete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldLocallyDelete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineUserCloudSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldLocallyDelete_SetBit(void* Obj)
	{
		((UOnlineUserCloudSubsystemDeleteUserFile*)Obj)->__Store__bShouldLocallyDelete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldLocallyDelete = { "__Store__bShouldLocallyDelete", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineUserCloudSubsystemDeleteUserFile), &Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldLocallyDelete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldLocallyDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldLocallyDelete_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp_OnDeleteUserFileComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldCloudDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::NewProp___Store__bShouldLocallyDelete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserCloudSubsystemDeleteUserFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::ClassParams = {
		&UOnlineUserCloudSubsystemDeleteUserFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserCloudSubsystemDeleteUserFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserCloudSubsystemDeleteUserFile.OuterSingleton, Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserCloudSubsystemDeleteUserFile.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserCloudSubsystemDeleteUserFile>()
	{
		return UOnlineUserCloudSubsystemDeleteUserFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserCloudSubsystemDeleteUserFile);
	UOnlineUserCloudSubsystemDeleteUserFile::~UOnlineUserCloudSubsystemDeleteUserFile() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserCloudSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserCloudSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineUserCloudSubsystem, UOnlineUserCloudSubsystem::StaticClass, TEXT("UOnlineUserCloudSubsystem"), &Z_Registration_Info_UClass_UOnlineUserCloudSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserCloudSubsystem), 846720544U) },
		{ Z_Construct_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles, UOnlineUserCloudSubsystemEnumerateUserFiles::StaticClass, TEXT("UOnlineUserCloudSubsystemEnumerateUserFiles"), &Z_Registration_Info_UClass_UOnlineUserCloudSubsystemEnumerateUserFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserCloudSubsystemEnumerateUserFiles), 4101248808U) },
		{ Z_Construct_UClass_UOnlineUserCloudSubsystemReadUserFile, UOnlineUserCloudSubsystemReadUserFile::StaticClass, TEXT("UOnlineUserCloudSubsystemReadUserFile"), &Z_Registration_Info_UClass_UOnlineUserCloudSubsystemReadUserFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserCloudSubsystemReadUserFile), 931728795U) },
		{ Z_Construct_UClass_UOnlineUserCloudSubsystemWriteUserFile, UOnlineUserCloudSubsystemWriteUserFile::StaticClass, TEXT("UOnlineUserCloudSubsystemWriteUserFile"), &Z_Registration_Info_UClass_UOnlineUserCloudSubsystemWriteUserFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserCloudSubsystemWriteUserFile), 4136701234U) },
		{ Z_Construct_UClass_UOnlineUserCloudSubsystemDeleteUserFile, UOnlineUserCloudSubsystemDeleteUserFile::StaticClass, TEXT("UOnlineUserCloudSubsystemDeleteUserFile"), &Z_Registration_Info_UClass_UOnlineUserCloudSubsystemDeleteUserFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserCloudSubsystemDeleteUserFile), 1033649665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserCloudSubsystem_h_3598751365(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserCloudSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineUserCloudSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
