// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBBlockedQueryResultInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBBlockedQueryResultInfo() {}
// Cross Module References
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FBlockedQueryResultInfo();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo;
class UScriptStruct* FBlockedQueryResultInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockedQueryResultInfo, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("BlockedQueryResultInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FBlockedQueryResultInfo>()
{
	return FBlockedQueryResultInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocked_MetaData[];
#endif
		static void NewProp_Blocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Blocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedNonFriends_MetaData[];
#endif
		static void NewProp_BlockedNonFriends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BlockedNonFriends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBBlockedQueryResultInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockedQueryResultInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_Blocked_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBBlockedQueryResultInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_Blocked_SetBit(void* Obj)
	{
		((FBlockedQueryResultInfo*)Obj)->Blocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_Blocked = { "Blocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlockedQueryResultInfo), &Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_Blocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_Blocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_Blocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_BlockedNonFriends_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBBlockedQueryResultInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_BlockedNonFriends_SetBit(void* Obj)
	{
		((FBlockedQueryResultInfo*)Obj)->BlockedNonFriends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_BlockedNonFriends = { "BlockedNonFriends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlockedQueryResultInfo), &Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_BlockedNonFriends_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_BlockedNonFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_BlockedNonFriends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBBlockedQueryResultInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlockedQueryResultInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_UserId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_Blocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_BlockedNonFriends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewProp_UserId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"BlockedQueryResultInfo",
		sizeof(FBlockedQueryResultInfo),
		alignof(FBlockedQueryResultInfo),
		Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlockedQueryResultInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo.InnerSingleton, Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBBlockedQueryResultInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBBlockedQueryResultInfo_h_Statics::ScriptStructInfo[] = {
		{ FBlockedQueryResultInfo::StaticStruct, Z_Construct_UScriptStruct_FBlockedQueryResultInfo_Statics::NewStructOps, TEXT("BlockedQueryResultInfo"), &Z_Registration_Info_UScriptStruct_BlockedQueryResultInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlockedQueryResultInfo), 3087577829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBBlockedQueryResultInfo_h_2521059557(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBBlockedQueryResultInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBBlockedQueryResultInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
