// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineAccountCredential.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBOnlineAccountCredential() {}
// Cross Module References
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountCredential();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineAccountCredential;
class UScriptStruct* FOnlineAccountCredential::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineAccountCredential.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineAccountCredential.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineAccountCredential, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineAccountCredential"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineAccountCredential.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineAccountCredential>()
{
	return FOnlineAccountCredential::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the credential information for logging into an identity system.\n */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineAccountCredential.h" },
		{ "ToolTip", "Represents the credential information for logging into an identity system." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineAccountCredential>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc) */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineAccountCredential.h" },
		{ "ToolTip", "Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAccountCredential, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Id of the user logging in (email, display name, facebook id, etc) */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineAccountCredential.h" },
		{ "ToolTip", "Id of the user logging in (email, display name, facebook id, etc)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAccountCredential, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Credentials of the user logging in (password or auth token) */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineAccountCredential.h" },
		{ "ToolTip", "Credentials of the user logging in (password or auth token)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAccountCredential, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewProp_Token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineAccountCredential",
		sizeof(FOnlineAccountCredential),
		alignof(FOnlineAccountCredential),
		Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountCredential()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineAccountCredential.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineAccountCredential.InnerSingleton, Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineAccountCredential.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineAccountCredential_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineAccountCredential_h_Statics::ScriptStructInfo[] = {
		{ FOnlineAccountCredential::StaticStruct, Z_Construct_UScriptStruct_FOnlineAccountCredential_Statics::NewStructOps, TEXT("OnlineAccountCredential"), &Z_Registration_Info_UScriptStruct_OnlineAccountCredential, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineAccountCredential), 3131143017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineAccountCredential_h_118905230(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineAccountCredential_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineAccountCredential_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
