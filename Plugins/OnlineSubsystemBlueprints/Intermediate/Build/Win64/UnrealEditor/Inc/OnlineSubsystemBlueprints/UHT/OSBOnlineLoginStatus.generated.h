// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBOnlineLoginStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineLoginStatus_generated_h
#error "OSBOnlineLoginStatus.generated.h already included, missing '#pragma once' in OSBOnlineLoginStatus.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineLoginStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineLoginStatus_h


#define FOREACH_ENUM_EONLINELOGINSTATUS(op) \
	op(EOnlineLoginStatus::NotLoggedIn) \
	op(EOnlineLoginStatus::UsingLocalProfile) \
	op(EOnlineLoginStatus::LoggedIn) 

enum class EOnlineLoginStatus : uint8;
template<> struct TIsUEnumClass<EOnlineLoginStatus> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineLoginStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
