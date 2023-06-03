// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineLoginStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBOnlineLoginStatus() {}
// Cross Module References
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineLoginStatus;
	static UEnum* EOnlineLoginStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineLoginStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineLoginStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineLoginStatus"));
		}
		return Z_Registration_Info_UEnum_EOnlineLoginStatus.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineLoginStatus>()
	{
		return EOnlineLoginStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::Enumerators[] = {
		{ "EOnlineLoginStatus::NotLoggedIn", (int64)EOnlineLoginStatus::NotLoggedIn },
		{ "EOnlineLoginStatus::UsingLocalProfile", (int64)EOnlineLoginStatus::UsingLocalProfile },
		{ "EOnlineLoginStatus::LoggedIn", (int64)EOnlineLoginStatus::LoggedIn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoggedIn.Comment", "/** Player has been validated by the platform specific authentication service */" },
		{ "LoggedIn.Name", "EOnlineLoginStatus::LoggedIn" },
		{ "LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineLoginStatus.h" },
		{ "NotLoggedIn.Comment", "/** Player has not logged in or chosen a local profile */" },
		{ "NotLoggedIn.Name", "EOnlineLoginStatus::NotLoggedIn" },
		{ "NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
		{ "ScriptName", "ELoginStatus" },
		{ "UsingLocalProfile.Comment", "/** Player is using a local profile but is not logged in */" },
		{ "UsingLocalProfile.Name", "EOnlineLoginStatus::UsingLocalProfile" },
		{ "UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineLoginStatus",
		"EOnlineLoginStatus",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus()
	{
		if (!Z_Registration_Info_UEnum_EOnlineLoginStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineLoginStatus.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLoginStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineLoginStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineLoginStatus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineLoginStatus_h_Statics::EnumInfo[] = {
		{ EOnlineLoginStatus_StaticEnum, TEXT("EOnlineLoginStatus"), &Z_Registration_Info_UEnum_EOnlineLoginStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 281306772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineLoginStatus_h_2598882050(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineLoginStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineLoginStatus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
