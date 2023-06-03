// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlineFriendsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FOnlineFriendSettingsSourceDataConfig;
class UOnlineFriendRef;
class UOnlineFriendsSubsystem;
class UOnlineFriendsSubsystemAcceptInvite;
class UOnlineFriendsSubsystemAddRecentPlayers;
class UOnlineFriendsSubsystemBlockPlayer;
class UOnlineFriendsSubsystemDeleteFriend;
class UOnlineFriendsSubsystemDeleteFriendAlias;
class UOnlineFriendsSubsystemDeleteFriendsList;
class UOnlineFriendsSubsystemQueryBlockedPlayers;
class UOnlineFriendsSubsystemQueryFriendSettings;
class UOnlineFriendsSubsystemQueryRecentPlayers;
class UOnlineFriendsSubsystemReadFriendsList;
class UOnlineFriendsSubsystemRejectInvite;
class UOnlineFriendsSubsystemSendInvite;
class UOnlineFriendsSubsystemSetFriendAlias;
class UOnlineFriendsSubsystemSetFriendSettings;
class UOnlineFriendsSubsystemUnblockPlayer;
class UOnlineRecentPlayerRef;
class UOnlineUserRef;
struct FFriendSettingsData;
struct FOnlineErrorInfo;
struct FReportPlayedWithUserInfo;
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineFriendsSubsystem_generated_h
#error "OnlineFriendsSubsystem.generated.h already included, missing '#pragma once' in OnlineFriendsSubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineFriendsSubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_39_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_FriendsChange_BP_Parms \
{ \
	int32 LocalUserNum; \
}; \
static inline void FFriends_FriendsChange_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_FriendsChange_BP, int32 LocalUserNum) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_FriendsChange_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Friends_FriendsChange_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_41_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_OutgoingInviteSent_BP_Parms \
{ \
	int32 LocalUserNum; \
}; \
static inline void FFriends_OutgoingInviteSent_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_OutgoingInviteSent_BP, int32 LocalUserNum) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_OutgoingInviteSent_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Friends_OutgoingInviteSent_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_43_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_InviteReceived_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FUniqueNetIdRepl FriendId; \
}; \
static inline void FFriends_InviteReceived_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_InviteReceived_BP, FUniqueNetIdRepl UserId, FUniqueNetIdRepl FriendId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_InviteReceived_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.FriendId=FriendId; \
	Friends_InviteReceived_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_45_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_InviteAccepted_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FUniqueNetIdRepl FriendId; \
}; \
static inline void FFriends_InviteAccepted_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_InviteAccepted_BP, FUniqueNetIdRepl UserId, FUniqueNetIdRepl FriendId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_InviteAccepted_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.FriendId=FriendId; \
	Friends_InviteAccepted_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_47_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_InviteRejected_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FUniqueNetIdRepl FriendId; \
}; \
static inline void FFriends_InviteRejected_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_InviteRejected_BP, FUniqueNetIdRepl UserId, FUniqueNetIdRepl FriendId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_InviteRejected_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.FriendId=FriendId; \
	Friends_InviteRejected_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_49_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_InviteAborted_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FUniqueNetIdRepl FriendId; \
}; \
static inline void FFriends_InviteAborted_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_InviteAborted_BP, FUniqueNetIdRepl UserId, FUniqueNetIdRepl FriendId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_InviteAborted_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.FriendId=FriendId; \
	Friends_InviteAborted_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_51_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_FriendRemoved_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FUniqueNetIdRepl FriendId; \
}; \
static inline void FFriends_FriendRemoved_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_FriendRemoved_BP, FUniqueNetIdRepl UserId, FUniqueNetIdRepl FriendId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_FriendRemoved_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.FriendId=FriendId; \
	Friends_FriendRemoved_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_53_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_RejectInviteComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FFriends_RejectInviteComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_RejectInviteComplete_BP, int32 LocalUserNum, bool bWasSuccessful, FUniqueNetIdRepl FriendId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_RejectInviteComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	Friends_RejectInviteComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_55_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_DeleteFriendComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FFriends_DeleteFriendComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_DeleteFriendComplete_BP, int32 LocalUserNum, bool bWasSuccessful, FUniqueNetIdRepl FriendId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_DeleteFriendComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	Friends_DeleteFriendComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_57_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_BlockedPlayerComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FUniqueNetIdRepl UniqueId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FFriends_BlockedPlayerComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_BlockedPlayerComplete_BP, int32 LocalUserNum, bool bWasSuccessful, FUniqueNetIdRepl UniqueId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_BlockedPlayerComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.UniqueId=UniqueId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	Friends_BlockedPlayerComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_59_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_UnblockedPlayerComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FUniqueNetIdRepl UniqueId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FFriends_UnblockedPlayerComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_UnblockedPlayerComplete_BP, int32 LocalUserNum, bool bWasSuccessful, FUniqueNetIdRepl UniqueId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_UnblockedPlayerComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.UniqueId=UniqueId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	Friends_UnblockedPlayerComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_61_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_BlockListChange_BP_Parms \
{ \
	int32 LocalUserNum; \
	FString ListName; \
}; \
static inline void FFriends_BlockListChange_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_BlockListChange_BP, int32 LocalUserNum, const FString& ListName) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_BlockListChange_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.ListName=ListName; \
	Friends_BlockListChange_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_63_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_QueryRecentPlayersComplete_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FString Namespace; \
	bool bWasSuccessful; \
	FString Error; \
}; \
static inline void FFriends_QueryRecentPlayersComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_QueryRecentPlayersComplete_BP, FUniqueNetIdRepl UserId, const FString& Namespace, bool bWasSuccessful, const FString& Error) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_QueryRecentPlayersComplete_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.Namespace=Namespace; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.Error=Error; \
	Friends_QueryRecentPlayersComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_65_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_QueryBlockedPlayersComplete_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	bool bWasSuccessful; \
	FString Error; \
}; \
static inline void FFriends_QueryBlockedPlayersComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_QueryBlockedPlayersComplete_BP, FUniqueNetIdRepl UserId, bool bWasSuccessful, const FString& Error) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_QueryBlockedPlayersComplete_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.Error=Error; \
	Friends_QueryBlockedPlayersComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_67_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_RecentPlayersAdded_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	TArray<UOnlineRecentPlayerRef*> AddedPlayers; \
}; \
static inline void FFriends_RecentPlayersAdded_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_RecentPlayersAdded_BP, FUniqueNetIdRepl UserId, TArray<UOnlineRecentPlayerRef*> const& AddedPlayers) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_RecentPlayersAdded_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.AddedPlayers=AddedPlayers; \
	Friends_RecentPlayersAdded_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_69_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventFriends_FriendSettingsUpdated_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	bool bWasSuccessful; \
	bool bWasUpdate; \
	FFriendSettingsData Settings; \
	FString ErrorStr; \
}; \
static inline void FFriends_FriendSettingsUpdated_BP_DelegateWrapper(const FMulticastScriptDelegate& Friends_FriendSettingsUpdated_BP, FUniqueNetIdRepl UserId, bool bWasSuccessful, bool bWasUpdate, FFriendSettingsData Settings, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventFriends_FriendSettingsUpdated_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.bWasUpdate=bWasUpdate ? true : false; \
	Parms.Settings=Settings; \
	Parms.ErrorStr=ErrorStr; \
	Friends_FriendSettingsUpdated_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFriendSettings); \
	DECLARE_FUNCTION(execDumpBlockedPlayers); \
	DECLARE_FUNCTION(execGetBlockedPlayers); \
	DECLARE_FUNCTION(execDumpRecentPlayers); \
	DECLARE_FUNCTION(execGetRecentPlayers); \
	DECLARE_FUNCTION(execIsFriend); \
	DECLARE_FUNCTION(execGetFriend); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFriendSettings); \
	DECLARE_FUNCTION(execDumpBlockedPlayers); \
	DECLARE_FUNCTION(execGetBlockedPlayers); \
	DECLARE_FUNCTION(execDumpRecentPlayers); \
	DECLARE_FUNCTION(execGetRecentPlayers); \
	DECLARE_FUNCTION(execIsFriend); \
	DECLARE_FUNCTION(execGetFriend); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystem(UOnlineFriendsSubsystem&&); \
	NO_API UOnlineFriendsSubsystem(const UOnlineFriendsSubsystem&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystem(UOnlineFriendsSubsystem&&); \
	NO_API UOnlineFriendsSubsystem(const UOnlineFriendsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineFriendsSubsystem) \
	NO_API virtual ~UOnlineFriendsSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_71_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystem>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_228_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemReadFriendsListCallbackPin_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemReadFriendsListCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemReadFriendsListCallbackPin, int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemReadFriendsListCallbackPin_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemReadFriendsListCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadFriendsList);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadFriendsList);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemReadFriendsList(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemReadFriendsList_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemReadFriendsList, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemReadFriendsList)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemReadFriendsList(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemReadFriendsList_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemReadFriendsList, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemReadFriendsList)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemReadFriendsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemReadFriendsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemReadFriendsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemReadFriendsList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemReadFriendsList(UOnlineFriendsSubsystemReadFriendsList&&); \
	NO_API UOnlineFriendsSubsystemReadFriendsList(const UOnlineFriendsSubsystemReadFriendsList&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemReadFriendsList();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemReadFriendsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemReadFriendsList(UOnlineFriendsSubsystemReadFriendsList&&); \
	NO_API UOnlineFriendsSubsystemReadFriendsList(const UOnlineFriendsSubsystemReadFriendsList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemReadFriendsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemReadFriendsList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemReadFriendsList) \
	NO_API virtual ~UOnlineFriendsSubsystemReadFriendsList();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_230_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_233_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemReadFriendsList>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_263_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemDeleteFriendsListCallbackPin_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemDeleteFriendsListCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemDeleteFriendsListCallbackPin, int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemDeleteFriendsListCallbackPin_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemDeleteFriendsListCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteFriendsList);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteFriendsList);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemDeleteFriendsList(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemDeleteFriendsList_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemDeleteFriendsList, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemDeleteFriendsList)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemDeleteFriendsList(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemDeleteFriendsList_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemDeleteFriendsList, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemDeleteFriendsList)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemDeleteFriendsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemDeleteFriendsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemDeleteFriendsList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendsList(UOnlineFriendsSubsystemDeleteFriendsList&&); \
	NO_API UOnlineFriendsSubsystemDeleteFriendsList(const UOnlineFriendsSubsystemDeleteFriendsList&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemDeleteFriendsList();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendsList(UOnlineFriendsSubsystemDeleteFriendsList&&); \
	NO_API UOnlineFriendsSubsystemDeleteFriendsList(const UOnlineFriendsSubsystemDeleteFriendsList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemDeleteFriendsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemDeleteFriendsList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemDeleteFriendsList) \
	NO_API virtual ~UOnlineFriendsSubsystemDeleteFriendsList();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_265_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_268_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemDeleteFriendsList>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_298_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemSendInviteCallbackPin_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemSendInviteCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemSendInviteCallbackPin, int32 LocalUserNum, bool bWasSuccessful, FUniqueNetIdRepl FriendId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemSendInviteCallbackPin_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemSendInviteCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendInvite);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendInvite);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemSendInvite(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemSendInvite_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemSendInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemSendInvite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemSendInvite(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemSendInvite_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemSendInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemSendInvite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemSendInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemSendInvite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemSendInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemSendInvite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemSendInvite(UOnlineFriendsSubsystemSendInvite&&); \
	NO_API UOnlineFriendsSubsystemSendInvite(const UOnlineFriendsSubsystemSendInvite&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemSendInvite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemSendInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemSendInvite(UOnlineFriendsSubsystemSendInvite&&); \
	NO_API UOnlineFriendsSubsystemSendInvite(const UOnlineFriendsSubsystemSendInvite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemSendInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemSendInvite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemSendInvite) \
	NO_API virtual ~UOnlineFriendsSubsystemSendInvite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_300_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_303_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemSendInvite>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_336_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemAcceptInviteCallbackPin_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemAcceptInviteCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemAcceptInviteCallbackPin, int32 LocalUserNum, bool bWasSuccessful, FUniqueNetIdRepl FriendId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemAcceptInviteCallbackPin_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemAcceptInviteCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptInvite);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptInvite);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemAcceptInvite(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemAcceptInvite_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemAcceptInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemAcceptInvite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemAcceptInvite(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemAcceptInvite_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemAcceptInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemAcceptInvite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemAcceptInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemAcceptInvite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemAcceptInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemAcceptInvite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemAcceptInvite(UOnlineFriendsSubsystemAcceptInvite&&); \
	NO_API UOnlineFriendsSubsystemAcceptInvite(const UOnlineFriendsSubsystemAcceptInvite&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemAcceptInvite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemAcceptInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemAcceptInvite(UOnlineFriendsSubsystemAcceptInvite&&); \
	NO_API UOnlineFriendsSubsystemAcceptInvite(const UOnlineFriendsSubsystemAcceptInvite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemAcceptInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemAcceptInvite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemAcceptInvite) \
	NO_API virtual ~UOnlineFriendsSubsystemAcceptInvite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_338_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_341_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemAcceptInvite>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_374_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemRejectInviteCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemRejectInviteCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemRejectInviteCallbackPin, bool bWasSuccessful, FUniqueNetIdRepl FriendId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemRejectInviteCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemRejectInviteCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRejectInvite);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRejectInvite);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemRejectInvite(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemRejectInvite_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemRejectInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemRejectInvite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemRejectInvite(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemRejectInvite_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemRejectInvite, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemRejectInvite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemRejectInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemRejectInvite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemRejectInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemRejectInvite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemRejectInvite(UOnlineFriendsSubsystemRejectInvite&&); \
	NO_API UOnlineFriendsSubsystemRejectInvite(const UOnlineFriendsSubsystemRejectInvite&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemRejectInvite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemRejectInvite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemRejectInvite(UOnlineFriendsSubsystemRejectInvite&&); \
	NO_API UOnlineFriendsSubsystemRejectInvite(const UOnlineFriendsSubsystemRejectInvite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemRejectInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemRejectInvite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemRejectInvite) \
	NO_API virtual ~UOnlineFriendsSubsystemRejectInvite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_376_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_379_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemRejectInvite>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_413_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemSetFriendAliasCallbackPin_Parms \
{ \
	int32 LocalUserNum; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FOnlineErrorInfo Error; \
}; \
static inline void FOnlineFriendsSubsystemSetFriendAliasCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemSetFriendAliasCallbackPin, int32 LocalUserNum, FUniqueNetIdRepl FriendId, const FString& ListName, FOnlineErrorInfo Error) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemSetFriendAliasCallbackPin_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.Error=Error; \
	OnlineFriendsSubsystemSetFriendAliasCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFriendAlias);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFriendAlias);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemSetFriendAlias(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemSetFriendAlias_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemSetFriendAlias, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemSetFriendAlias)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemSetFriendAlias(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemSetFriendAlias_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemSetFriendAlias, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemSetFriendAlias)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemSetFriendAlias(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemSetFriendAlias) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemSetFriendAlias); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemSetFriendAlias); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemSetFriendAlias(UOnlineFriendsSubsystemSetFriendAlias&&); \
	NO_API UOnlineFriendsSubsystemSetFriendAlias(const UOnlineFriendsSubsystemSetFriendAlias&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemSetFriendAlias();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemSetFriendAlias(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemSetFriendAlias(UOnlineFriendsSubsystemSetFriendAlias&&); \
	NO_API UOnlineFriendsSubsystemSetFriendAlias(const UOnlineFriendsSubsystemSetFriendAlias&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemSetFriendAlias); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemSetFriendAlias); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemSetFriendAlias) \
	NO_API virtual ~UOnlineFriendsSubsystemSetFriendAlias();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_415_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_418_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemSetFriendAlias>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_454_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemDeleteFriendAliasCallbackPin_Parms \
{ \
	int32 LocalUserNum; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FOnlineErrorInfo Error; \
}; \
static inline void FOnlineFriendsSubsystemDeleteFriendAliasCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemDeleteFriendAliasCallbackPin, int32 LocalUserNum, FUniqueNetIdRepl FriendId, const FString& ListName, FOnlineErrorInfo Error) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemDeleteFriendAliasCallbackPin_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.Error=Error; \
	OnlineFriendsSubsystemDeleteFriendAliasCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteFriendAlias);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteFriendAlias);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemDeleteFriendAlias(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemDeleteFriendAlias_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemDeleteFriendAlias, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemDeleteFriendAlias)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemDeleteFriendAlias(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemDeleteFriendAlias_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemDeleteFriendAlias, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemDeleteFriendAlias)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendAlias(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemDeleteFriendAlias) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemDeleteFriendAlias); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemDeleteFriendAlias); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendAlias(UOnlineFriendsSubsystemDeleteFriendAlias&&); \
	NO_API UOnlineFriendsSubsystemDeleteFriendAlias(const UOnlineFriendsSubsystemDeleteFriendAlias&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemDeleteFriendAlias();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendAlias(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemDeleteFriendAlias(UOnlineFriendsSubsystemDeleteFriendAlias&&); \
	NO_API UOnlineFriendsSubsystemDeleteFriendAlias(const UOnlineFriendsSubsystemDeleteFriendAlias&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemDeleteFriendAlias); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemDeleteFriendAlias); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemDeleteFriendAlias) \
	NO_API virtual ~UOnlineFriendsSubsystemDeleteFriendAlias();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_456_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_459_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemDeleteFriendAlias>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_492_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemDeleteFriendCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
	FUniqueNetIdRepl FriendId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemDeleteFriendCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemDeleteFriendCallbackPin, bool bWasSuccessful, FUniqueNetIdRepl FriendId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemDeleteFriendCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendId=FriendId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemDeleteFriendCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteFriend);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteFriend);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemDeleteFriend(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemDeleteFriend_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemDeleteFriend, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemDeleteFriend)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemDeleteFriend(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemDeleteFriend_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemDeleteFriend, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemDeleteFriend)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemDeleteFriend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemDeleteFriend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemDeleteFriend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemDeleteFriend); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemDeleteFriend(UOnlineFriendsSubsystemDeleteFriend&&); \
	NO_API UOnlineFriendsSubsystemDeleteFriend(const UOnlineFriendsSubsystemDeleteFriend&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemDeleteFriend();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemDeleteFriend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemDeleteFriend(UOnlineFriendsSubsystemDeleteFriend&&); \
	NO_API UOnlineFriendsSubsystemDeleteFriend(const UOnlineFriendsSubsystemDeleteFriend&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemDeleteFriend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemDeleteFriend); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemDeleteFriend) \
	NO_API virtual ~UOnlineFriendsSubsystemDeleteFriend();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_494_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_497_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemDeleteFriend>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_531_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemAddRecentPlayersCallbackPin_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FOnlineErrorInfo Error; \
}; \
static inline void FOnlineFriendsSubsystemAddRecentPlayersCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemAddRecentPlayersCallbackPin, FUniqueNetIdRepl UserId, FOnlineErrorInfo Error) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemAddRecentPlayersCallbackPin_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.Error=Error; \
	OnlineFriendsSubsystemAddRecentPlayersCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRecentPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRecentPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemAddRecentPlayers(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemAddRecentPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemAddRecentPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemAddRecentPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemAddRecentPlayers(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemAddRecentPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemAddRecentPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemAddRecentPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemAddRecentPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemAddRecentPlayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemAddRecentPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemAddRecentPlayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemAddRecentPlayers(UOnlineFriendsSubsystemAddRecentPlayers&&); \
	NO_API UOnlineFriendsSubsystemAddRecentPlayers(const UOnlineFriendsSubsystemAddRecentPlayers&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemAddRecentPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemAddRecentPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemAddRecentPlayers(UOnlineFriendsSubsystemAddRecentPlayers&&); \
	NO_API UOnlineFriendsSubsystemAddRecentPlayers(const UOnlineFriendsSubsystemAddRecentPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemAddRecentPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemAddRecentPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemAddRecentPlayers) \
	NO_API virtual ~UOnlineFriendsSubsystemAddRecentPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_533_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_536_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemAddRecentPlayers>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_569_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemQueryRecentPlayersCallbackPin_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FString Namespace; \
	bool bWasSuccessful; \
	FString Error; \
}; \
static inline void FOnlineFriendsSubsystemQueryRecentPlayersCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemQueryRecentPlayersCallbackPin, FUniqueNetIdRepl UserId, const FString& Namespace, bool bWasSuccessful, const FString& Error) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemQueryRecentPlayersCallbackPin_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.Namespace=Namespace; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.Error=Error; \
	OnlineFriendsSubsystemQueryRecentPlayersCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryRecentPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryRecentPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemQueryRecentPlayers(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemQueryRecentPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemQueryRecentPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemQueryRecentPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemQueryRecentPlayers(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemQueryRecentPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemQueryRecentPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemQueryRecentPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemQueryRecentPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemQueryRecentPlayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemQueryRecentPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemQueryRecentPlayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemQueryRecentPlayers(UOnlineFriendsSubsystemQueryRecentPlayers&&); \
	NO_API UOnlineFriendsSubsystemQueryRecentPlayers(const UOnlineFriendsSubsystemQueryRecentPlayers&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemQueryRecentPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemQueryRecentPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemQueryRecentPlayers(UOnlineFriendsSubsystemQueryRecentPlayers&&); \
	NO_API UOnlineFriendsSubsystemQueryRecentPlayers(const UOnlineFriendsSubsystemQueryRecentPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemQueryRecentPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemQueryRecentPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemQueryRecentPlayers) \
	NO_API virtual ~UOnlineFriendsSubsystemQueryRecentPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_571_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_574_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemQueryRecentPlayers>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_605_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemBlockPlayerCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
	FUniqueNetIdRepl UniqueId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemBlockPlayerCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemBlockPlayerCallbackPin, bool bWasSuccessful, FUniqueNetIdRepl UniqueId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemBlockPlayerCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.UniqueId=UniqueId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemBlockPlayerCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlockPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlockPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemBlockPlayer(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemBlockPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemBlockPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemBlockPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemBlockPlayer(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemBlockPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemBlockPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemBlockPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemBlockPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemBlockPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemBlockPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemBlockPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemBlockPlayer(UOnlineFriendsSubsystemBlockPlayer&&); \
	NO_API UOnlineFriendsSubsystemBlockPlayer(const UOnlineFriendsSubsystemBlockPlayer&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemBlockPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemBlockPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemBlockPlayer(UOnlineFriendsSubsystemBlockPlayer&&); \
	NO_API UOnlineFriendsSubsystemBlockPlayer(const UOnlineFriendsSubsystemBlockPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemBlockPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemBlockPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemBlockPlayer) \
	NO_API virtual ~UOnlineFriendsSubsystemBlockPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_607_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_610_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemBlockPlayer>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_641_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemUnblockPlayerCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
	FUniqueNetIdRepl UniqueId; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemUnblockPlayerCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemUnblockPlayerCallbackPin, bool bWasSuccessful, FUniqueNetIdRepl UniqueId, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemUnblockPlayerCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.UniqueId=UniqueId; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemUnblockPlayerCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnblockPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnblockPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemUnblockPlayer(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemUnblockPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemUnblockPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemUnblockPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemUnblockPlayer(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemUnblockPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemUnblockPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemUnblockPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemUnblockPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemUnblockPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemUnblockPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemUnblockPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemUnblockPlayer(UOnlineFriendsSubsystemUnblockPlayer&&); \
	NO_API UOnlineFriendsSubsystemUnblockPlayer(const UOnlineFriendsSubsystemUnblockPlayer&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemUnblockPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemUnblockPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemUnblockPlayer(UOnlineFriendsSubsystemUnblockPlayer&&); \
	NO_API UOnlineFriendsSubsystemUnblockPlayer(const UOnlineFriendsSubsystemUnblockPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemUnblockPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemUnblockPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemUnblockPlayer) \
	NO_API virtual ~UOnlineFriendsSubsystemUnblockPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_643_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_646_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemUnblockPlayer>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_677_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemQueryBlockedPlayersCallbackPin_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	bool bWasSuccessful; \
	FString Error; \
}; \
static inline void FOnlineFriendsSubsystemQueryBlockedPlayersCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemQueryBlockedPlayersCallbackPin, FUniqueNetIdRepl UserId, bool bWasSuccessful, const FString& Error) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemQueryBlockedPlayersCallbackPin_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.Error=Error; \
	OnlineFriendsSubsystemQueryBlockedPlayersCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryBlockedPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryBlockedPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemQueryBlockedPlayers(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemQueryBlockedPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemQueryBlockedPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemQueryBlockedPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemQueryBlockedPlayers(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemQueryBlockedPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemQueryBlockedPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemQueryBlockedPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemQueryBlockedPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemQueryBlockedPlayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemQueryBlockedPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemQueryBlockedPlayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemQueryBlockedPlayers(UOnlineFriendsSubsystemQueryBlockedPlayers&&); \
	NO_API UOnlineFriendsSubsystemQueryBlockedPlayers(const UOnlineFriendsSubsystemQueryBlockedPlayers&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemQueryBlockedPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemQueryBlockedPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemQueryBlockedPlayers(UOnlineFriendsSubsystemQueryBlockedPlayers&&); \
	NO_API UOnlineFriendsSubsystemQueryBlockedPlayers(const UOnlineFriendsSubsystemQueryBlockedPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemQueryBlockedPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemQueryBlockedPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemQueryBlockedPlayers) \
	NO_API virtual ~UOnlineFriendsSubsystemQueryBlockedPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_679_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_682_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemQueryBlockedPlayers>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_710_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemQueryFriendSettingsCallbackPin_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	bool bWasSuccessful; \
	bool bWasUpdate; \
	FFriendSettingsData Settings; \
	FString ErrorStr; \
}; \
static inline void FOnlineFriendsSubsystemQueryFriendSettingsCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemQueryFriendSettingsCallbackPin, FUniqueNetIdRepl UserId, bool bWasSuccessful, bool bWasUpdate, FFriendSettingsData Settings, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemQueryFriendSettingsCallbackPin_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.bWasUpdate=bWasUpdate ? true : false; \
	Parms.Settings=Settings; \
	Parms.ErrorStr=ErrorStr; \
	OnlineFriendsSubsystemQueryFriendSettingsCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryFriendSettings);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryFriendSettings);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemQueryFriendSettings(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemQueryFriendSettings_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemQueryFriendSettings, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemQueryFriendSettings)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemQueryFriendSettings(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemQueryFriendSettings_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemQueryFriendSettings, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemQueryFriendSettings)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemQueryFriendSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemQueryFriendSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemQueryFriendSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemQueryFriendSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemQueryFriendSettings(UOnlineFriendsSubsystemQueryFriendSettings&&); \
	NO_API UOnlineFriendsSubsystemQueryFriendSettings(const UOnlineFriendsSubsystemQueryFriendSettings&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemQueryFriendSettings();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemQueryFriendSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemQueryFriendSettings(UOnlineFriendsSubsystemQueryFriendSettings&&); \
	NO_API UOnlineFriendsSubsystemQueryFriendSettings(const UOnlineFriendsSubsystemQueryFriendSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemQueryFriendSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemQueryFriendSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemQueryFriendSettings) \
	NO_API virtual ~UOnlineFriendsSubsystemQueryFriendSettings();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_712_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_715_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemQueryFriendSettings>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_742_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemSetFriendSettingsCallbackPin_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	bool Param2; \
	FString Param3; \
}; \
static inline void FOnlineFriendsSubsystemSetFriendSettingsCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineFriendsSubsystemSetFriendSettingsCallbackPin, FUniqueNetIdRepl Param1, bool Param2, const FString& Param3) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineFriendsSubsystemSetFriendSettingsCallbackPin_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2 ? true : false; \
	Parms.Param3=Param3; \
	OnlineFriendsSubsystemSetFriendSettingsCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFriendSettings);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFriendSettings);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemSetFriendSettings(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemSetFriendSettings_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemSetFriendSettings, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemSetFriendSettings)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineFriendsSubsystemSetFriendSettings(); \
	friend struct Z_Construct_UClass_UOnlineFriendsSubsystemSetFriendSettings_Statics; \
public: \
	DECLARE_CLASS(UOnlineFriendsSubsystemSetFriendSettings, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineFriendsSubsystemSetFriendSettings)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemSetFriendSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemSetFriendSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemSetFriendSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemSetFriendSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemSetFriendSettings(UOnlineFriendsSubsystemSetFriendSettings&&); \
	NO_API UOnlineFriendsSubsystemSetFriendSettings(const UOnlineFriendsSubsystemSetFriendSettings&); \
public: \
	NO_API virtual ~UOnlineFriendsSubsystemSetFriendSettings();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineFriendsSubsystemSetFriendSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineFriendsSubsystemSetFriendSettings(UOnlineFriendsSubsystemSetFriendSettings&&); \
	NO_API UOnlineFriendsSubsystemSetFriendSettings(const UOnlineFriendsSubsystemSetFriendSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineFriendsSubsystemSetFriendSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineFriendsSubsystemSetFriendSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineFriendsSubsystemSetFriendSettings) \
	NO_API virtual ~UOnlineFriendsSubsystemSetFriendSettings();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_744_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h_747_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineFriendsSubsystemSetFriendSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineFriendsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
