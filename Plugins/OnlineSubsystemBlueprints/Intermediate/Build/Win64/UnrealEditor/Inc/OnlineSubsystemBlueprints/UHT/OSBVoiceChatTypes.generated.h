// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBVoiceChatTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBVoiceChatTypes_generated_h
#error "OSBVoiceChatTypes.generated.h already included, missing '#pragma once' in OSBVoiceChatTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBVoiceChatTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceChatResultBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FVoiceChatResultBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceChatDeviceInfoBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FVoiceChatDeviceInfoBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceChatChannel3dPropertiesBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FVoiceChatChannel3dPropertiesBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FVoiceAdminChannelCredentialsBP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBVoiceChatTypes_h


#define FOREACH_ENUM_EVOICECHATCHANNELTYPE_(op) \
	op(EVoiceChatChannelType_::NonPositional) \
	op(EVoiceChatChannelType_::Positional) \
	op(EVoiceChatChannelType_::Echo) 

enum class EVoiceChatChannelType_ : uint8;
template<> struct TIsUEnumClass<EVoiceChatChannelType_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatChannelType_>();

#define FOREACH_ENUM_EVOICECHATTRANSMITMODE_(op) \
	op(EVoiceChatTransmitMode_::None) \
	op(EVoiceChatTransmitMode_::All) \
	op(EVoiceChatTransmitMode_::Channel) 

enum class EVoiceChatTransmitMode_ : uint8;
template<> struct TIsUEnumClass<EVoiceChatTransmitMode_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatTransmitMode_>();

#define FOREACH_ENUM_EVOICECHATATTENUATIONMODEL_(op) \
	op(EVoiceChatAttenuationModel_::None) \
	op(EVoiceChatAttenuationModel_::InverseByDistance) \
	op(EVoiceChatAttenuationModel_::LinearByDistance) \
	op(EVoiceChatAttenuationModel_::ExponentialByDistance) 

enum class EVoiceChatAttenuationModel_ : uint8;
template<> struct TIsUEnumClass<EVoiceChatAttenuationModel_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatAttenuationModel_>();

#define FOREACH_ENUM_EVOICECHATRESULT_(op) \
	op(EVoiceChatResult_::Success) \
	op(EVoiceChatResult_::InvalidState) \
	op(EVoiceChatResult_::NotInitialized) \
	op(EVoiceChatResult_::NotConnected) \
	op(EVoiceChatResult_::NotLoggedIn) \
	op(EVoiceChatResult_::NotPermitted) \
	op(EVoiceChatResult_::Throttled) \
	op(EVoiceChatResult_::InvalidArgument) \
	op(EVoiceChatResult_::CredentialsInvalid) \
	op(EVoiceChatResult_::CredentialsExpired) \
	op(EVoiceChatResult_::ClientTimeout) \
	op(EVoiceChatResult_::ServerTimeout) \
	op(EVoiceChatResult_::DnsFailure) \
	op(EVoiceChatResult_::ConnectionFailure) \
	op(EVoiceChatResult_::ImplementationError) 

enum class EVoiceChatResult_ : uint8;
template<> struct TIsUEnumClass<EVoiceChatResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EVoiceChatResult_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
