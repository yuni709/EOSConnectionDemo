// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBStatsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBStatsTypes_generated_h
#error "OSBStatsTypes.generated.h already included, missing '#pragma once' in OSBStatsTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBStatsTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineStatsUserStatsBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineStatUpdateBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineStatsUserUpdatedStatsBP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h


#define FOREACH_ENUM_EONLINESTATMODIFICATIONTYPE_(op) \
	op(EOnlineStatModificationType_::Unknown) \
	op(EOnlineStatModificationType_::Sum) \
	op(EOnlineStatModificationType_::Set) \
	op(EOnlineStatModificationType_::Largest) \
	op(EOnlineStatModificationType_::Smallest) 

enum class EOnlineStatModificationType_ : uint8;
template<> struct TIsUEnumClass<EOnlineStatModificationType_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineStatModificationType_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
