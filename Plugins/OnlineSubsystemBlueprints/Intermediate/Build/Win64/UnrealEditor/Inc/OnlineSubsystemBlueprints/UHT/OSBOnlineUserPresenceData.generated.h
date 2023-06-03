// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBOnlineUserPresenceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineUserPresenceData_generated_h
#error "OSBOnlineUserPresenceData.generated.h already included, missing '#pragma once' in OSBOnlineUserPresenceData.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineUserPresenceData_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineUserPresenceStatusData>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineUserPresenceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h


#define FOREACH_ENUM_FONLINEUSERPRESENCESTATUSSTATE(op) \
	op(FOnlineUserPresenceStatusState::Online) \
	op(FOnlineUserPresenceStatusState::Offline) \
	op(FOnlineUserPresenceStatusState::Away) \
	op(FOnlineUserPresenceStatusState::ExtendedAway) \
	op(FOnlineUserPresenceStatusState::DoNotDisturb) \
	op(FOnlineUserPresenceStatusState::Chat) 

enum class FOnlineUserPresenceStatusState : uint8;
template<> struct TIsUEnumClass<FOnlineUserPresenceStatusState> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<FOnlineUserPresenceStatusState>();

#define FOREACH_ENUM_EONLINECACHEDRESULT_(op) \
	op(EOnlineCachedResult_::Success) \
	op(EOnlineCachedResult_::NotFound) 

enum class EOnlineCachedResult_ : uint8;
template<> struct TIsUEnumClass<EOnlineCachedResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineCachedResult_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
