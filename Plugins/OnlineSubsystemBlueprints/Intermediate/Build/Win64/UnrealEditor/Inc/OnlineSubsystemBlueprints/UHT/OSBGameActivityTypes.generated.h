// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBGameActivityTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBGameActivityTypes_generated_h
#error "OSBGameActivityTypes.generated.h already included, missing '#pragma once' in OSBGameActivityTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBGameActivityTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineActivityTasksToResetBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineActivityPlayerLocationBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOptionalOnlineSessionSearchResultBP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h


#define FOREACH_ENUM_EONLINEACTIVITYOUTCOME_(op) \
	op(EOnlineActivityOutcome_::Completed) \
	op(EOnlineActivityOutcome_::Failed) \
	op(EOnlineActivityOutcome_::Cancelled) 

enum class EOnlineActivityOutcome_ : uint8;
template<> struct TIsUEnumClass<EOnlineActivityOutcome_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineActivityOutcome_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
