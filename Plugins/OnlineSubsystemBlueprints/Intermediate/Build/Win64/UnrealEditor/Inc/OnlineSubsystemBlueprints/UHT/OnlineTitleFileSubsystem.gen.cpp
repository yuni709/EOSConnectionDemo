// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBFileTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineTitleFileSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UFileData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTitleFileSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FCloudFileHeaderBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FPagedQueryBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventTitleFile_EnumerateFilesComplete_BP_Parms
		{
			bool bWasSuccessful;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventTitleFile_EnumerateFilesComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventTitleFile_EnumerateFilesComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventTitleFile_EnumerateFilesComplete_BP_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "TitleFile_EnumerateFilesComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventTitleFile_EnumerateFilesComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileComplete_BP_Parms
		{
			bool bWasSuccessful;
			FString FileName;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileComplete_BP_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "TitleFile_ReadFileComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileProgress_BP_Parms
		{
			FString FileName;
			int64 NumBytes;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NumBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileProgress_BP_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::NewProp_NumBytes = { "NumBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileProgress_BP_Parms, NumBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::NewProp_NumBytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "TitleFile_ReadFileProgress_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventTitleFile_ReadFileProgress_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystem::execGetFileList)
	{
		P_GET_TARRAY_REF(FCloudFileHeaderBP,Z_Param_Out_Files);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFileList(Z_Param_Out_Files);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystem::execDeleteCachedFiles)
	{
		P_GET_UBOOL(Z_Param_bSkipEnumerated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteCachedFiles(Z_Param_bSkipEnumerated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystem::execClearFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearFile(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystem::execClearFiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearFiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystem::execGetFileContents)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_OBJECT_REF(UFileData,Z_Param_Out_FileContents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFileContents(Z_Param_FileName,Z_Param_Out_FileContents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineTitleFileSubsystem::StaticRegisterNativesUOnlineTitleFileSubsystem()
	{
		UClass* Class = UOnlineTitleFileSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearFile", &UOnlineTitleFileSubsystem::execClearFile },
			{ "ClearFiles", &UOnlineTitleFileSubsystem::execClearFiles },
			{ "DeleteCachedFiles", &UOnlineTitleFileSubsystem::execDeleteCachedFiles },
			{ "GetFileContents", &UOnlineTitleFileSubsystem::execGetFileContents },
			{ "GetFileList", &UOnlineTitleFileSubsystem::execGetFileList },
			{ "IsSubsystemAvailable", &UOnlineTitleFileSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics
	{
		struct OnlineTitleFileSubsystem_eventClearFile_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystem_eventClearFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineTitleFileSubsystem_eventClearFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineTitleFileSubsystem_eventClearFile_Parms), &Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystem, nullptr, "ClearFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::OnlineTitleFileSubsystem_eventClearFile_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics
	{
		struct OnlineTitleFileSubsystem_eventClearFiles_Parms
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
	void Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineTitleFileSubsystem_eventClearFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineTitleFileSubsystem_eventClearFiles_Parms), &Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystem, nullptr, "ClearFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::OnlineTitleFileSubsystem_eventClearFiles_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics
	{
		struct OnlineTitleFileSubsystem_eventDeleteCachedFiles_Parms
		{
			bool bSkipEnumerated;
		};
		static void NewProp_bSkipEnumerated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipEnumerated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::NewProp_bSkipEnumerated_SetBit(void* Obj)
	{
		((OnlineTitleFileSubsystem_eventDeleteCachedFiles_Parms*)Obj)->bSkipEnumerated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::NewProp_bSkipEnumerated = { "bSkipEnumerated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineTitleFileSubsystem_eventDeleteCachedFiles_Parms), &Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::NewProp_bSkipEnumerated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::NewProp_bSkipEnumerated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystem, nullptr, "DeleteCachedFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::OnlineTitleFileSubsystem_eventDeleteCachedFiles_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics
	{
		struct OnlineTitleFileSubsystem_eventGetFileContents_Parms
		{
			FString FileName;
			UFileData* FileContents;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystem_eventGetFileContents_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_FileContents = { "FileContents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystem_eventGetFileContents_Parms, FileContents), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineTitleFileSubsystem_eventGetFileContents_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineTitleFileSubsystem_eventGetFileContents_Parms), &Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_FileContents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystem, nullptr, "GetFileContents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::OnlineTitleFileSubsystem_eventGetFileContents_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics
	{
		struct OnlineTitleFileSubsystem_eventGetFileList_Parms
		{
			TArray<FCloudFileHeaderBP> Files;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCloudFileHeaderBP, METADATA_PARAMS(nullptr, 0) }; // 4143067514
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystem_eventGetFileList_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4143067514
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::NewProp_Files,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystem, nullptr, "GetFileList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::OnlineTitleFileSubsystem_eventGetFileList_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineTitleFileSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineTitleFileSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineTitleFileSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::OnlineTitleFileSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineTitleFileSubsystem);
	UClass* Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister()
	{
		return UOnlineTitleFileSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnumerateFilesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnumerateFilesComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadFileComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadFileProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadFileProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFile, "ClearFile" }, // 3838634575
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystem_ClearFiles, "ClearFiles" }, // 1202246370
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystem_DeleteCachedFiles, "DeleteCachedFiles" }, // 33337966
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileContents, "GetFileContents" }, // 3971127703
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystem_GetFileList, "GetFileList" }, // 2435836083
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 406739204
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnEnumerateFilesComplete_MetaData[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnEnumerateFilesComplete = { "OnEnumerateFilesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystem, OnEnumerateFilesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_EnumerateFilesComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnEnumerateFilesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnEnumerateFilesComplete_MetaData)) }; // 2579050960
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileComplete_MetaData[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileComplete = { "OnReadFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystem, OnReadFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileComplete_MetaData)) }; // 2562755367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileProgress_MetaData[] = {
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileProgress = { "OnReadFileProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystem, OnReadFileProgress), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_TitleFile_ReadFileProgress_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileProgress_MetaData)) }; // 1698995979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnEnumerateFilesComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::NewProp_OnReadFileProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineTitleFileSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::ClassParams = {
		&UOnlineTitleFileSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTitleFileSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineTitleFileSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineTitleFileSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineTitleFileSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineTitleFileSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineTitleFileSubsystem>()
	{
		return UOnlineTitleFileSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTitleFileSubsystem);
	UOnlineTitleFileSubsystem::~UOnlineTitleFileSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemEnumerateFilesCallbackPin_Parms
		{
			bool bWasSuccessful;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemEnumerateFilesCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemEnumerateFilesCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemEnumerateFilesCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemEnumerateFilesCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystemEnumerateFiles::execEnumerateFiles)
	{
		P_GET_OBJECT(UOnlineTitleFileSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FPagedQueryBP,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTitleFileSubsystemEnumerateFiles**)Z_Param__Result=UOnlineTitleFileSubsystemEnumerateFiles::EnumerateFiles(Z_Param_Subsystem,Z_Param_Page);
		P_NATIVE_END;
	}
	void UOnlineTitleFileSubsystemEnumerateFiles::StaticRegisterNativesUOnlineTitleFileSubsystemEnumerateFiles()
	{
		UClass* Class = UOnlineTitleFileSubsystemEnumerateFiles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateFiles", &UOnlineTitleFileSubsystemEnumerateFiles::execEnumerateFiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics
	{
		struct OnlineTitleFileSubsystemEnumerateFiles_eventEnumerateFiles_Parms
		{
			UOnlineTitleFileSubsystem* Subsystem;
			FPagedQueryBP Page;
			UOnlineTitleFileSubsystemEnumerateFiles* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Page;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystemEnumerateFiles_eventEnumerateFiles_Parms, Subsystem), Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystemEnumerateFiles_eventEnumerateFiles_Parms, Page), Z_Construct_UScriptStruct_FPagedQueryBP, METADATA_PARAMS(nullptr, 0) }; // 2694390678
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystemEnumerateFiles_eventEnumerateFiles_Parms, ReturnValue), Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles, nullptr, "EnumerateFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::OnlineTitleFileSubsystemEnumerateFiles_eventEnumerateFiles_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineTitleFileSubsystemEnumerateFiles);
	UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_NoRegister()
	{
		return UOnlineTitleFileSubsystemEnumerateFiles::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnumerateFilesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnumerateFilesComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Page_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Page;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles, "EnumerateFiles" }, // 4220892099
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemEnumerateFiles, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnCallFailed_MetaData)) }; // 15983425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnEnumerateFilesComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnEnumerateFilesComplete = { "OnEnumerateFilesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemEnumerateFiles, OnEnumerateFilesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemEnumerateFilesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnEnumerateFilesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnEnumerateFilesComplete_MetaData)) }; // 15983425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemEnumerateFiles, __Store__Subsystem), Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemEnumerateFiles, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Page_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Page = { "__Store__Page", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemEnumerateFiles, __Store__Page), Z_Construct_UScriptStruct_FPagedQueryBP, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Page_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Page_MetaData)) }; // 2694390678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp_OnEnumerateFilesComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::NewProp___Store__Page,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineTitleFileSubsystemEnumerateFiles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::ClassParams = {
		&UOnlineTitleFileSubsystemEnumerateFiles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles()
	{
		if (!Z_Registration_Info_UClass_UOnlineTitleFileSubsystemEnumerateFiles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineTitleFileSubsystemEnumerateFiles.OuterSingleton, Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineTitleFileSubsystemEnumerateFiles.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineTitleFileSubsystemEnumerateFiles>()
	{
		return UOnlineTitleFileSubsystemEnumerateFiles::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTitleFileSubsystemEnumerateFiles);
	UOnlineTitleFileSubsystemEnumerateFiles::~UOnlineTitleFileSubsystemEnumerateFiles() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemReadFileCallbackPin_Parms
		{
			bool bWasSuccessful;
			FString FileName;
			int64 NumBytes;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NumBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemReadFileCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemReadFileCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemReadFileCallbackPin_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_NumBytes = { "NumBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemReadFileCallbackPin_Parms, NumBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::NewProp_NumBytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineTitleFileSubsystemReadFileCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineTitleFileSubsystemReadFile::execReadFile)
	{
		P_GET_OBJECT(UOnlineTitleFileSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTitleFileSubsystemReadFile**)Z_Param__Result=UOnlineTitleFileSubsystemReadFile::ReadFile(Z_Param_Subsystem,Z_Param_FileName);
		P_NATIVE_END;
	}
	void UOnlineTitleFileSubsystemReadFile::StaticRegisterNativesUOnlineTitleFileSubsystemReadFile()
	{
		UClass* Class = UOnlineTitleFileSubsystemReadFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadFile", &UOnlineTitleFileSubsystemReadFile::execReadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics
	{
		struct OnlineTitleFileSubsystemReadFile_eventReadFile_Parms
		{
			UOnlineTitleFileSubsystem* Subsystem;
			FString FileName;
			UOnlineTitleFileSubsystemReadFile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystemReadFile_eventReadFile_Parms, Subsystem), Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystemReadFile_eventReadFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTitleFileSubsystemReadFile_eventReadFile_Parms, ReturnValue), Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TitleFile" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile, nullptr, "ReadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::OnlineTitleFileSubsystemReadFile_eventReadFile_Parms), Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineTitleFileSubsystemReadFile);
	UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_NoRegister()
	{
		return UOnlineTitleFileSubsystemReadFile::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadFileComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadFileComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadFileProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadFileProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineTitleFileSubsystemReadFile_ReadFile, "ReadFile" }, // 2805290396
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemReadFile, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnCallFailed_MetaData)) }; // 2084596262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileComplete = { "OnReadFileComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemReadFile, OnReadFileComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileComplete_MetaData)) }; // 2084596262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileProgress_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileProgress = { "OnReadFileProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemReadFile, OnReadFileProgress), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTitleFileSubsystemReadFileCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileProgress_MetaData)) }; // 2084596262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemReadFile, __Store__Subsystem), Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemReadFile, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__FileName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTitleFileSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__FileName = { "__Store__FileName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTitleFileSubsystemReadFile, __Store__FileName), METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__FileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp_OnReadFileProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::NewProp___Store__FileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineTitleFileSubsystemReadFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::ClassParams = {
		&UOnlineTitleFileSubsystemReadFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile()
	{
		if (!Z_Registration_Info_UClass_UOnlineTitleFileSubsystemReadFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineTitleFileSubsystemReadFile.OuterSingleton, Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineTitleFileSubsystemReadFile.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineTitleFileSubsystemReadFile>()
	{
		return UOnlineTitleFileSubsystemReadFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTitleFileSubsystemReadFile);
	UOnlineTitleFileSubsystemReadFile::~UOnlineTitleFileSubsystemReadFile() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTitleFileSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTitleFileSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineTitleFileSubsystem, UOnlineTitleFileSubsystem::StaticClass, TEXT("UOnlineTitleFileSubsystem"), &Z_Registration_Info_UClass_UOnlineTitleFileSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineTitleFileSubsystem), 2406161947U) },
		{ Z_Construct_UClass_UOnlineTitleFileSubsystemEnumerateFiles, UOnlineTitleFileSubsystemEnumerateFiles::StaticClass, TEXT("UOnlineTitleFileSubsystemEnumerateFiles"), &Z_Registration_Info_UClass_UOnlineTitleFileSubsystemEnumerateFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineTitleFileSubsystemEnumerateFiles), 1744560U) },
		{ Z_Construct_UClass_UOnlineTitleFileSubsystemReadFile, UOnlineTitleFileSubsystemReadFile::StaticClass, TEXT("UOnlineTitleFileSubsystemReadFile"), &Z_Registration_Info_UClass_UOnlineTitleFileSubsystemReadFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineTitleFileSubsystemReadFile), 553844498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTitleFileSubsystem_h_2683788601(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTitleFileSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTitleFileSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
