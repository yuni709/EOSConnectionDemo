// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBOnlineUserPrivilege.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineUserPrivilege_generated_h
#error "OSBOnlineUserPrivilege.generated.h already included, missing '#pragma once' in OSBOnlineUserPrivilege.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineUserPrivilege_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPrivilege_h


#define FOREACH_ENUM_EONLINEUSERPRIVILEGE(op) \
	op(EOnlineUserPrivilege::CanPlay) \
	op(EOnlineUserPrivilege::CanPlayOnline) \
	op(EOnlineUserPrivilege::CanCommunicateOnline) \
	op(EOnlineUserPrivilege::CanUseUserGeneratedContent) \
	op(EOnlineUserPrivilege::CanUserCrossPlay) 

enum class EOnlineUserPrivilege : uint8;
template<> struct TIsUEnumClass<EOnlineUserPrivilege> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineUserPrivilege>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
