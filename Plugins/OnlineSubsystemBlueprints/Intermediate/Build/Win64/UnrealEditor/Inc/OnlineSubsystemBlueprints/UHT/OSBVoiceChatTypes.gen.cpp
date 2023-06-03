// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBVoiceChatTypes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBVoiceChatTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceChatResultBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceChatChannelType_;
	static UEnum* EVoiceChatChannelType__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatChannelType_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoiceChatChannelType_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EVoiceChatChannelType_"));
		}
		return Z_Registration_Info_UEnum_EVoiceChatChannelType_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatChannelType_>()
	{
		return EVoiceChatChannelType__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::Enumerators[] = {
		{ "EVoiceChatChannelType_::NonPositional", (int64)EVoiceChatChannelType_::NonPositional },
		{ "EVoiceChatChannelType_::Positional", (int64)EVoiceChatChannelType_::Positional },
		{ "EVoiceChatChannelType_::Echo", (int64)EVoiceChatChannelType_::Echo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Echo.Comment", "/** Echo channel. Will only ever have one player and will echo anything you say */" },
		{ "Echo.Name", "EVoiceChatChannelType_::Echo" },
		{ "Echo.ToolTip", "Echo channel. Will only ever have one player and will echo anything you say" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "NonPositional.Comment", "/** Non positional/2d audio channel */" },
		{ "NonPositional.Name", "EVoiceChatChannelType_::NonPositional" },
		{ "NonPositional.ToolTip", "Non positional/2d audio channel" },
		{ "Positional.Comment", "/** Positional/3d audio channel */" },
		{ "Positional.Name", "EVoiceChatChannelType_::Positional" },
		{ "Positional.ToolTip", "Positional/3d audio channel" },
		{ "ScriptName", "EVoiceChatChannelType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EVoiceChatChannelType_",
		"EVoiceChatChannelType_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType_()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatChannelType_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceChatChannelType_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatChannelType__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoiceChatChannelType_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceChatTransmitMode_;
	static UEnum* EVoiceChatTransmitMode__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatTransmitMode_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoiceChatTransmitMode_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EVoiceChatTransmitMode_"));
		}
		return Z_Registration_Info_UEnum_EVoiceChatTransmitMode_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatTransmitMode_>()
	{
		return EVoiceChatTransmitMode__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::Enumerators[] = {
		{ "EVoiceChatTransmitMode_::None", (int64)EVoiceChatTransmitMode_::None },
		{ "EVoiceChatTransmitMode_::All", (int64)EVoiceChatTransmitMode_::All },
		{ "EVoiceChatTransmitMode_::Channel", (int64)EVoiceChatTransmitMode_::Channel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Transmit to all of the channels you are in */" },
		{ "All.Name", "EVoiceChatTransmitMode_::All" },
		{ "All.ToolTip", "Transmit to all of the channels you are in" },
		{ "BlueprintType", "true" },
		{ "Channel.Comment", "/** Transmit to a specific channel */" },
		{ "Channel.Name", "EVoiceChatTransmitMode_::Channel" },
		{ "Channel.ToolTip", "Transmit to a specific channel" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "None.Comment", "/** Transmit to none of the channels you are in */" },
		{ "None.Name", "EVoiceChatTransmitMode_::None" },
		{ "None.ToolTip", "Transmit to none of the channels you are in" },
		{ "ScriptName", "EVoiceChatTransmitMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EVoiceChatTransmitMode_",
		"EVoiceChatTransmitMode_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode_()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatTransmitMode_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceChatTransmitMode_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatTransmitMode__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoiceChatTransmitMode_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_;
	static UEnum* EVoiceChatAttenuationModel__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EVoiceChatAttenuationModel_"));
		}
		return Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatAttenuationModel_>()
	{
		return EVoiceChatAttenuationModel__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::Enumerators[] = {
		{ "EVoiceChatAttenuationModel_::None", (int64)EVoiceChatAttenuationModel_::None },
		{ "EVoiceChatAttenuationModel_::InverseByDistance", (int64)EVoiceChatAttenuationModel_::InverseByDistance },
		{ "EVoiceChatAttenuationModel_::LinearByDistance", (int64)EVoiceChatAttenuationModel_::LinearByDistance },
		{ "EVoiceChatAttenuationModel_::ExponentialByDistance", (int64)EVoiceChatAttenuationModel_::ExponentialByDistance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExponentialByDistance.Comment", "/** The attenuation increases in inverse proportion to the distance raised to the power of the Rolloff. */" },
		{ "ExponentialByDistance.Name", "EVoiceChatAttenuationModel_::ExponentialByDistance" },
		{ "ExponentialByDistance.ToolTip", "The attenuation increases in inverse proportion to the distance raised to the power of the Rolloff." },
		{ "InverseByDistance.Comment", "/** The attenuation increases in inverse proportion to the distance. The Rolloff is the inverse of the slope of the\n     * attenuation curve. */" },
		{ "InverseByDistance.Name", "EVoiceChatAttenuationModel_::InverseByDistance" },
		{ "InverseByDistance.ToolTip", "The attenuation increases in inverse proportion to the distance. The Rolloff is the inverse of the slope of the\nattenuation curve." },
		{ "LinearByDistance.Comment", "/** The attenuation increases in linear proportion to the distance. The Rolloff is the negative slope of the\n     * attenuation curve. */" },
		{ "LinearByDistance.Name", "EVoiceChatAttenuationModel_::LinearByDistance" },
		{ "LinearByDistance.ToolTip", "The attenuation increases in linear proportion to the distance. The Rolloff is the negative slope of the\nattenuation curve." },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "None.Comment", "/** No attenuation is applied. The audio will drop to 0 at MaxDistance */" },
		{ "None.Name", "EVoiceChatAttenuationModel_::None" },
		{ "None.ToolTip", "No attenuation is applied. The audio will drop to 0 at MaxDistance" },
		{ "ScriptName", "EVoiceChatAttenuationModel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EVoiceChatAttenuationModel_",
		"EVoiceChatAttenuationModel_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel_()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceChatResult_;
	static UEnum* EVoiceChatResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoiceChatResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EVoiceChatResult_"));
		}
		return Z_Registration_Info_UEnum_EVoiceChatResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatResult_>()
	{
		return EVoiceChatResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::Enumerators[] = {
		{ "EVoiceChatResult_::Success", (int64)EVoiceChatResult_::Success },
		{ "EVoiceChatResult_::InvalidState", (int64)EVoiceChatResult_::InvalidState },
		{ "EVoiceChatResult_::NotInitialized", (int64)EVoiceChatResult_::NotInitialized },
		{ "EVoiceChatResult_::NotConnected", (int64)EVoiceChatResult_::NotConnected },
		{ "EVoiceChatResult_::NotLoggedIn", (int64)EVoiceChatResult_::NotLoggedIn },
		{ "EVoiceChatResult_::NotPermitted", (int64)EVoiceChatResult_::NotPermitted },
		{ "EVoiceChatResult_::Throttled", (int64)EVoiceChatResult_::Throttled },
		{ "EVoiceChatResult_::InvalidArgument", (int64)EVoiceChatResult_::InvalidArgument },
		{ "EVoiceChatResult_::CredentialsInvalid", (int64)EVoiceChatResult_::CredentialsInvalid },
		{ "EVoiceChatResult_::CredentialsExpired", (int64)EVoiceChatResult_::CredentialsExpired },
		{ "EVoiceChatResult_::ClientTimeout", (int64)EVoiceChatResult_::ClientTimeout },
		{ "EVoiceChatResult_::ServerTimeout", (int64)EVoiceChatResult_::ServerTimeout },
		{ "EVoiceChatResult_::DnsFailure", (int64)EVoiceChatResult_::DnsFailure },
		{ "EVoiceChatResult_::ConnectionFailure", (int64)EVoiceChatResult_::ConnectionFailure },
		{ "EVoiceChatResult_::ImplementationError", (int64)EVoiceChatResult_::ImplementationError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClientTimeout.Comment", "// Common connection errors\n" },
		{ "ClientTimeout.Name", "EVoiceChatResult_::ClientTimeout" },
		{ "ClientTimeout.ToolTip", "Common connection errors" },
		{ "ConnectionFailure.Name", "EVoiceChatResult_::ConnectionFailure" },
		{ "CredentialsExpired.Name", "EVoiceChatResult_::CredentialsExpired" },
		{ "CredentialsInvalid.Name", "EVoiceChatResult_::CredentialsInvalid" },
		{ "DnsFailure.Name", "EVoiceChatResult_::DnsFailure" },
		{ "ImplementationError.Comment", "// Error does not map to any common categories\n" },
		{ "ImplementationError.Name", "EVoiceChatResult_::ImplementationError" },
		{ "ImplementationError.ToolTip", "Error does not map to any common categories" },
		{ "InvalidArgument.Comment", "// Common argument errors\n" },
		{ "InvalidArgument.Name", "EVoiceChatResult_::InvalidArgument" },
		{ "InvalidArgument.ToolTip", "Common argument errors" },
		{ "InvalidState.Comment", "// Common state errors\n" },
		{ "InvalidState.Name", "EVoiceChatResult_::InvalidState" },
		{ "InvalidState.ToolTip", "Common state errors" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "NotConnected.Name", "EVoiceChatResult_::NotConnected" },
		{ "NotInitialized.Name", "EVoiceChatResult_::NotInitialized" },
		{ "NotLoggedIn.Name", "EVoiceChatResult_::NotLoggedIn" },
		{ "NotPermitted.Name", "EVoiceChatResult_::NotPermitted" },
		{ "ScriptName", "EVoiceChatResult" },
		{ "ServerTimeout.Name", "EVoiceChatResult_::ServerTimeout" },
		{ "Success.Comment", "// The operation succeeded\n" },
		{ "Success.Name", "EVoiceChatResult_::Success" },
		{ "Success.ToolTip", "The operation succeeded" },
		{ "Throttled.Name", "EVoiceChatResult_::Throttled" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EVoiceChatResult_",
		"EVoiceChatResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult_()
	{
		if (!Z_Registration_Info_UEnum_EVoiceChatResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceChatResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoiceChatResult_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceChatResultBP;
class UScriptStruct* FVoiceChatResultBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceChatResultBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceChatResultBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceChatResultBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("VoiceChatResultBP"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceChatResultBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FVoiceChatResultBP>()
{
	return FVoiceChatResultBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorNum_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDesc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorDesc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceChatResultBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_Successful_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** If the operation was successful */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "If the operation was successful" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_Successful_SetBit(void* Obj)
	{
		((FVoiceChatResultBP*)Obj)->Successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVoiceChatResultBP), &Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_Successful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_Successful_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ResultCode_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** Success, or an error category */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "Success, or an error category" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatResultBP, ResultCode), Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatResult_, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ResultCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ResultCode_MetaData)) }; // 3405052298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** If we failed, the code for the error */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "If we failed, the code for the error" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatResultBP, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorNum_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** If we failed, a numeric error from the implementation */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "If we failed, a numeric error from the implementation" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorNum = { "ErrorNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatResultBP, ErrorNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorDesc_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** If we failed, more details about the error condition */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "If we failed, more details about the error condition" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorDesc = { "ErrorDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatResultBP, ErrorDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorDesc_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_Successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ResultCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ResultCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewProp_ErrorDesc,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"VoiceChatResultBP",
		sizeof(FVoiceChatResultBP),
		alignof(FVoiceChatResultBP),
		Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceChatResultBP()
	{
		if (!Z_Registration_Info_UScriptStruct_VoiceChatResultBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceChatResultBP.InnerSingleton, Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoiceChatResultBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP;
class UScriptStruct* FVoiceChatDeviceInfoBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("VoiceChatDeviceInfoBP"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FVoiceChatDeviceInfoBP>()
{
	return FVoiceChatDeviceInfoBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceChatDeviceInfoBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** The display name for the device */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The display name for the device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatDeviceInfoBP, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** The unique id for the device */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The unique id for the device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatDeviceInfoBP, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"VoiceChatDeviceInfoBP",
		sizeof(FVoiceChatDeviceInfoBP),
		alignof(FVoiceChatDeviceInfoBP),
		Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP()
	{
		if (!Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP.InnerSingleton, Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP;
class UScriptStruct* FVoiceChatChannel3dPropertiesBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("VoiceChatChannel3dPropertiesBP"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FVoiceChatChannel3dPropertiesBP>()
{
	return FVoiceChatChannel3dPropertiesBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSet_MetaData[];
#endif
		static void NewProp_bSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttenuationModel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationModel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttenuationModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rolloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rolloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceChatChannel3dPropertiesBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_bSet_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** If the channel's 3D properties are set */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "If the channel's 3D properties are set" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((FVoiceChatChannel3dPropertiesBP*)Obj)->bSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVoiceChatChannel3dPropertiesBP), &Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_bSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_bSet_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_AttenuationModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_AttenuationModel_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** The model used to determine how loud audio is at different distances */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The model used to determine how loud audio is at different distances" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_AttenuationModel = { "AttenuationModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatChannel3dPropertiesBP, AttenuationModel), Z_Construct_UEnum_OnlineSubsystemBlueprints_EVoiceChatAttenuationModel_, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_AttenuationModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_AttenuationModel_MetaData)) }; // 770941967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** The distance at which the sound will start to attenuate */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The distance at which the sound will start to attenuate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatChannel3dPropertiesBP, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** The distance at which sound will no longer be audible */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The distance at which sound will no longer be audible" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatChannel3dPropertiesBP, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_Rolloff_MetaData[] = {
		{ "Category", "Online|VoiceChat" },
		{ "Comment", "/** How fast the sound attenuates with distance */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "How fast the sound attenuates with distance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_Rolloff = { "Rolloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceChatChannel3dPropertiesBP, Rolloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_Rolloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_Rolloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_bSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_AttenuationModel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_AttenuationModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewProp_Rolloff,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"VoiceChatChannel3dPropertiesBP",
		sizeof(FVoiceChatChannel3dPropertiesBP),
		alignof(FVoiceChatChannel3dPropertiesBP),
		Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP()
	{
		if (!Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP.InnerSingleton, Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP;
class UScriptStruct* FVoiceAdminChannelCredentialsBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("VoiceAdminChannelCredentialsBP"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FVoiceAdminChannelCredentialsBP>()
{
	return FVoiceAdminChannelCredentialsBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelCredentials_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelCredentials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceAdminChannelCredentialsBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Online|VoiceAdmin" },
		{ "Comment", "/** The user that this credential is for. */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The user that this credential is for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceAdminChannelCredentialsBP, TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_TargetUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "Online|VoiceAdmin" },
		{ "Comment", "/** The player name that the target user should pass to IVoiceChatUser::Login. */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The player name that the target user should pass to IVoiceChatUser::Login." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceAdminChannelCredentialsBP, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_ChannelCredentials_MetaData[] = {
		{ "Category", "Online|VoiceAdmin" },
		{ "Comment", "/** The channel credentials that the target user should pass to IVoiceChatUser::Login. */" },
		{ "ModuleRelativePath", "Public/Types/OSBVoiceChatTypes.h" },
		{ "ToolTip", "The channel credentials that the target user should pass to IVoiceChatUser::Login." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_ChannelCredentials = { "ChannelCredentials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceAdminChannelCredentialsBP, ChannelCredentials), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_ChannelCredentials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_ChannelCredentials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewProp_ChannelCredentials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"VoiceAdminChannelCredentialsBP",
		sizeof(FVoiceAdminChannelCredentialsBP),
		alignof(FVoiceAdminChannelCredentialsBP),
		Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP()
	{
		if (!Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP.InnerSingleton, Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_Statics::EnumInfo[] = {
		{ EVoiceChatChannelType__StaticEnum, TEXT("EVoiceChatChannelType_"), &Z_Registration_Info_UEnum_EVoiceChatChannelType_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2757596097U) },
		{ EVoiceChatTransmitMode__StaticEnum, TEXT("EVoiceChatTransmitMode_"), &Z_Registration_Info_UEnum_EVoiceChatTransmitMode_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1566115173U) },
		{ EVoiceChatAttenuationModel__StaticEnum, TEXT("EVoiceChatAttenuationModel_"), &Z_Registration_Info_UEnum_EVoiceChatAttenuationModel_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 770941967U) },
		{ EVoiceChatResult__StaticEnum, TEXT("EVoiceChatResult_"), &Z_Registration_Info_UEnum_EVoiceChatResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3405052298U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_Statics::ScriptStructInfo[] = {
		{ FVoiceChatResultBP::StaticStruct, Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics::NewStructOps, TEXT("VoiceChatResultBP"), &Z_Registration_Info_UScriptStruct_VoiceChatResultBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceChatResultBP), 3594018074U) },
		{ FVoiceChatDeviceInfoBP::StaticStruct, Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics::NewStructOps, TEXT("VoiceChatDeviceInfoBP"), &Z_Registration_Info_UScriptStruct_VoiceChatDeviceInfoBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceChatDeviceInfoBP), 307905358U) },
		{ FVoiceChatChannel3dPropertiesBP::StaticStruct, Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics::NewStructOps, TEXT("VoiceChatChannel3dPropertiesBP"), &Z_Registration_Info_UScriptStruct_VoiceChatChannel3dPropertiesBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceChatChannel3dPropertiesBP), 2697032111U) },
		{ FVoiceAdminChannelCredentialsBP::StaticStruct, Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics::NewStructOps, TEXT("VoiceAdminChannelCredentialsBP"), &Z_Registration_Info_UScriptStruct_VoiceAdminChannelCredentialsBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceAdminChannelCredentialsBP), 425560329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_3640450640(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
