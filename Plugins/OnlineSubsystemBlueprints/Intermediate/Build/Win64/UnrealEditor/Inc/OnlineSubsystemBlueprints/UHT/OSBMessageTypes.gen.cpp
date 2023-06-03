// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBMessageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBMessageTypes() {}
// Cross Module References
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineMessagePayloadData();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData;
class UScriptStruct* FOnlineMessagePayloadData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineMessagePayloadData, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineMessagePayloadData"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineMessagePayloadData>()
{
	return FOnlineMessagePayloadData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBMessageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineMessagePayloadData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineMessagePayloadData",
		sizeof(FOnlineMessagePayloadData),
		alignof(FOnlineMessagePayloadData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineMessagePayloadData()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData.InnerSingleton, Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBMessageTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBMessageTypes_h_Statics::ScriptStructInfo[] = {
		{ FOnlineMessagePayloadData::StaticStruct, Z_Construct_UScriptStruct_FOnlineMessagePayloadData_Statics::NewStructOps, TEXT("OnlineMessagePayloadData"), &Z_Registration_Info_UScriptStruct_OnlineMessagePayloadData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineMessagePayloadData), 2080183978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBMessageTypes_h_2405771165(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBMessageTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBMessageTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
