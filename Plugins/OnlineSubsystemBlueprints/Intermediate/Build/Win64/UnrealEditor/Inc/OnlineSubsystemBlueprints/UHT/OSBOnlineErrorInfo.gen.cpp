// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBOnlineErrorInfo() {}
// Cross Module References
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineErrorInfo;
class UScriptStruct* FOnlineErrorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineErrorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineErrorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineErrorInfo, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineErrorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineErrorInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineErrorInfo>()
{
	return FOnlineErrorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Successful_MetaData[];
#endif
		static void NewProp_Successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorRaw_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorRaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the result from an online operation.\n */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineErrorInfo.h" },
		{ "ToolTip", "Represents the result from an online operation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineErrorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_Successful_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineErrorInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_Successful_SetBit(void* Obj)
	{
		((FOnlineErrorInfo*)Obj)->Successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineErrorInfo), &Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_Successful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_Successful_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorRaw_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineErrorInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorRaw = { "ErrorRaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineErrorInfo, ErrorRaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorRaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineErrorInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineErrorInfo, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineErrorInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineErrorInfo, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_Successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorRaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewProp_ErrorMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineErrorInfo",
		sizeof(FOnlineErrorInfo),
		alignof(FOnlineErrorInfo),
		Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineErrorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineErrorInfo.InnerSingleton, Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineErrorInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineErrorInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineErrorInfo_h_Statics::ScriptStructInfo[] = {
		{ FOnlineErrorInfo::StaticStruct, Z_Construct_UScriptStruct_FOnlineErrorInfo_Statics::NewStructOps, TEXT("OnlineErrorInfo"), &Z_Registration_Info_UScriptStruct_OnlineErrorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineErrorInfo), 93036015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineErrorInfo_h_1023022068(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineErrorInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineErrorInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
