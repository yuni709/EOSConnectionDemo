// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBFriendTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInviteStatus_ : uint8;
struct FOnlineUserPresenceData;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBFriendTypes_generated_h
#error "OSBFriendTypes.generated.h already included, missing '#pragma once' in OSBFriendTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBFriendTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_RPC_WRAPPERS \
	virtual FOnlineUserPresenceData GetPresence_Implementation(); \
	virtual EInviteStatus_ GetInviteStatus_Implementation(); \
 \
	DECLARE_FUNCTION(execGetPresence); \
	DECLARE_FUNCTION(execGetInviteStatus);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FOnlineUserPresenceData GetPresence_Implementation(); \
	virtual EInviteStatus_ GetInviteStatus_Implementation(); \
 \
	DECLARE_FUNCTION(execGetPresence); \
	DECLARE_FUNCTION(execGetInviteStatus);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_CALLBACK_WRAPPERS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendRef(); \
	friend struct Z_Construct_UClass_UOnlineFriendRef_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendRef, UOnlineUserRef, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendRef)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendRef(); \
	friend struct Z_Construct_UClass_UOnlineFriendRef_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendRef, UOnlineUserRef, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendRef)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendRef(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendRef) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendRef); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendRef); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendRef(UOnlineFriendRef&&); \
	NO_API UOnlineFriendRef(const UOnlineFriendRef&); \
public: \
	NO_API virtual ~UOnlineFriendRef();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendRef(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendRef(UOnlineFriendRef&&); \
	NO_API UOnlineFriendRef(const UOnlineFriendRef&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendRef); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendRef); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendRef) \
	NO_API virtual ~UOnlineFriendRef();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_35_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_CALLBACK_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_CALLBACK_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendRef>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FReportPlayedWithUserInfo>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFriendSettingsData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FFriendSettingsData>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineFriendSettingsSourceDataConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h


#define FOREACH_ENUM_EINVITESTATUS_(op) \
	op(EInviteStatus_::Unknown) \
	op(EInviteStatus_::Accepted) \
	op(EInviteStatus_::PendingInbound) \
	op(EInviteStatus_::PendingOutbound) \
	op(EInviteStatus_::Blocked) \
	op(EInviteStatus_::Suggested) 

enum class EInviteStatus_ : uint8;
template<> struct TIsUEnumClass<EInviteStatus_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EInviteStatus_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
