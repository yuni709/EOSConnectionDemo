// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlineSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNamedOnlineSession;
class UOnlineSessionSearch;
class UOnlineSessionSettings;
class UOnlineSessionSubsystem;
class UOnlineSessionSubsystemCancelFindSessions;
class UOnlineSessionSubsystemCancelMatchmaking;
class UOnlineSessionSubsystemCreateSession;
class UOnlineSessionSubsystemDestroySession;
class UOnlineSessionSubsystemEndSession;
class UOnlineSessionSubsystemFindFriendSession;
class UOnlineSessionSubsystemFindSessionById;
class UOnlineSessionSubsystemFindSessions;
class UOnlineSessionSubsystemJoinSession;
class UOnlineSessionSubsystemPingSearchResults;
class UOnlineSessionSubsystemRegisterLocalPlayer;
class UOnlineSessionSubsystemRegisterPlayers;
class UOnlineSessionSubsystemStartMatchmaking;
class UOnlineSessionSubsystemStartSession;
class UOnlineSessionSubsystemUnregisterLocalPlayer;
class UOnlineSessionSubsystemUnregisterPlayers;
class UOnlineSessionSubsystemUpdateSession;
enum class EOnJoinSessionCompleteResult_ : uint8;
enum class EOnlineSessionState_ : uint8;
enum class ESessionFailure_ : uint8;
struct FOnlineSessionSearchResultBP;
struct FOnlineSessionSettingsBP;
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineSessionSubsystem_generated_h
#error "OnlineSessionSubsystem.generated.h already included, missing '#pragma once' in OnlineSessionSubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineSessionSubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_39_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_CreateSessionComplete_BP_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FSession_CreateSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_CreateSessionComplete_BP, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_CreateSessionComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_CreateSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_41_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_StartSessionComplete_BP_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FSession_StartSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_StartSessionComplete_BP, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_StartSessionComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_StartSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_43_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_UpdateSessionComplete_BP_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FSession_UpdateSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_UpdateSessionComplete_BP, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_UpdateSessionComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_UpdateSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_45_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_EndSessionComplete_BP_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FSession_EndSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_EndSessionComplete_BP, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_EndSessionComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_EndSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_47_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_DestroySessionComplete_BP_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FSession_DestroySessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_DestroySessionComplete_BP, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_DestroySessionComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_DestroySessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_49_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_MatchmakingComplete_BP_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FSession_MatchmakingComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_MatchmakingComplete_BP, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_MatchmakingComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_MatchmakingComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_51_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_CancelMatchmakingComplete_BP_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FSession_CancelMatchmakingComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_CancelMatchmakingComplete_BP, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_CancelMatchmakingComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_CancelMatchmakingComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_53_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_FindSessionsComplete_BP_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FSession_FindSessionsComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_FindSessionsComplete_BP, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_FindSessionsComplete_BP_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_FindSessionsComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_55_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_CancelFindSessionsComplete_BP_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FSession_CancelFindSessionsComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_CancelFindSessionsComplete_BP, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_CancelFindSessionsComplete_BP_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_CancelFindSessionsComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_57_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_PingSearchResultsComplete_BP_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FSession_PingSearchResultsComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_PingSearchResultsComplete_BP, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_PingSearchResultsComplete_BP_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_PingSearchResultsComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_59_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_JoinSessionComplete_BP_Parms \
{ \
	FName SessionName; \
	EOnJoinSessionCompleteResult_ Result; \
}; \
static inline void FSession_JoinSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_JoinSessionComplete_BP, FName SessionName, EOnJoinSessionCompleteResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_JoinSessionComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.Result=Result; \
	Session_JoinSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_61_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_SessionParticipantsChange_BP_Parms \
{ \
	FName Param1; \
	FUniqueNetIdRepl Param2; \
	bool Param3; \
}; \
static inline void FSession_SessionParticipantsChange_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_SessionParticipantsChange_BP, FName Param1, FUniqueNetIdRepl Param2, bool Param3) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_SessionParticipantsChange_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3 ? true : false; \
	Session_SessionParticipantsChange_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_63_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_QosDataRequested_BP_Parms \
{ \
	FName Param1; \
}; \
static inline void FSession_QosDataRequested_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_QosDataRequested_BP, FName Param1) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_QosDataRequested_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Session_QosDataRequested_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_65_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_SessionSettingsUpdated_BP_Parms \
{ \
	FName Param1; \
	FOnlineSessionSettingsBP Param2; \
}; \
static inline void FSession_SessionSettingsUpdated_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_SessionSettingsUpdated_BP, FName Param1, FOnlineSessionSettingsBP Param2) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_SessionSettingsUpdated_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Session_SessionSettingsUpdated_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_67_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_SessionParticipantSettingsUpdated_BP_Parms \
{ \
	FName Param1; \
	FUniqueNetIdRepl Param2; \
	FOnlineSessionSettingsBP Param3; \
}; \
static inline void FSession_SessionParticipantSettingsUpdated_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_SessionParticipantSettingsUpdated_BP, FName Param1, FUniqueNetIdRepl Param2, FOnlineSessionSettingsBP Param3) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_SessionParticipantSettingsUpdated_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3; \
	Session_SessionParticipantSettingsUpdated_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_69_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_SessionParticipantRemoved_BP_Parms \
{ \
	FName Param1; \
	FUniqueNetIdRepl Param2; \
}; \
static inline void FSession_SessionParticipantRemoved_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_SessionParticipantRemoved_BP, FName Param1, FUniqueNetIdRepl Param2) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_SessionParticipantRemoved_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Session_SessionParticipantRemoved_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_71_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_FindFriendSessionComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	TArray<FOnlineSessionSearchResultBP> FriendSearchResult; \
}; \
static inline void FSession_FindFriendSessionComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_FindFriendSessionComplete_BP, int32 LocalUserNum, bool bWasSuccessful, TArray<FOnlineSessionSearchResultBP> const& FriendSearchResult) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_FindFriendSessionComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendSearchResult=FriendSearchResult; \
	Session_FindFriendSessionComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_73_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_SessionUserInviteAccepted_BP_Parms \
{ \
	bool bWasSuccessful; \
	int32 ControllerId; \
	FUniqueNetIdRepl UserId; \
	FOnlineSessionSearchResultBP InviteResult; \
}; \
static inline void FSession_SessionUserInviteAccepted_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_SessionUserInviteAccepted_BP, bool bWasSuccessful, int32 ControllerId, FUniqueNetIdRepl UserId, FOnlineSessionSearchResultBP InviteResult) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_SessionUserInviteAccepted_BP_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ControllerId=ControllerId; \
	Parms.UserId=UserId; \
	Parms.InviteResult=InviteResult; \
	Session_SessionUserInviteAccepted_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_75_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_SessionInviteReceived_BP_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FUniqueNetIdRepl FromId; \
	FString AppId; \
	FOnlineSessionSearchResultBP InviteResult; \
}; \
static inline void FSession_SessionInviteReceived_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_SessionInviteReceived_BP, FUniqueNetIdRepl UserId, FUniqueNetIdRepl FromId, const FString& AppId, FOnlineSessionSearchResultBP InviteResult) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_SessionInviteReceived_BP_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.FromId=FromId; \
	Parms.AppId=AppId; \
	Parms.InviteResult=InviteResult; \
	Session_SessionInviteReceived_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_77_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_RegisterPlayersComplete_BP_Parms \
{ \
	FName SessionName; \
	TArray<FUniqueNetIdRepl> PlayerIds; \
	bool bWasSuccessful; \
}; \
static inline void FSession_RegisterPlayersComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_RegisterPlayersComplete_BP, FName SessionName, TArray<FUniqueNetIdRepl> const& PlayerIds, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_RegisterPlayersComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.PlayerIds=PlayerIds; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_RegisterPlayersComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_79_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_UnregisterPlayersComplete_BP_Parms \
{ \
	FName SessionName; \
	TArray<FUniqueNetIdRepl> PlayerIds; \
	bool bWasSuccessful; \
}; \
static inline void FSession_UnregisterPlayersComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_UnregisterPlayersComplete_BP, FName SessionName, TArray<FUniqueNetIdRepl> const& PlayerIds, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_UnregisterPlayersComplete_BP_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.PlayerIds=PlayerIds; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Session_UnregisterPlayersComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_81_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSession_SessionFailure_BP_Parms \
{ \
	FUniqueNetIdRepl PlayerId; \
	ESessionFailure_ FailureType; \
}; \
static inline void FSession_SessionFailure_BP_DelegateWrapper(const FMulticastScriptDelegate& Session_SessionFailure_BP, FUniqueNetIdRepl PlayerId, ESessionFailure_ FailureType) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSession_SessionFailure_BP_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	Parms.FailureType=FailureType; \
	Session_SessionFailure_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDumpSessionState); \
	DECLARE_FUNCTION(execGetNumSessions); \
	DECLARE_FUNCTION(execRemovePlayerFromSession); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execSendSessionInviteToFriends); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execHasPresenceSession); \
	DECLARE_FUNCTION(execRemoveNamedSession); \
	DECLARE_FUNCTION(execGetNamedSession); \
	DECLARE_FUNCTION(execCreateSessionIdFromString); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDumpSessionState); \
	DECLARE_FUNCTION(execGetNumSessions); \
	DECLARE_FUNCTION(execRemovePlayerFromSession); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execSendSessionInviteToFriends); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execHasPresenceSession); \
	DECLARE_FUNCTION(execRemoveNamedSession); \
	DECLARE_FUNCTION(execGetNamedSession); \
	DECLARE_FUNCTION(execCreateSessionIdFromString); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystem(UOnlineSessionSubsystem&&); \
	NO_API UOnlineSessionSubsystem(const UOnlineSessionSubsystem&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystem(UOnlineSessionSubsystem&&); \
	NO_API UOnlineSessionSubsystem(const UOnlineSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineSessionSubsystem) \
	NO_API virtual ~UOnlineSessionSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_83_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystem>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_301_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemCreateSessionCallbackPin_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemCreateSessionCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemCreateSessionCallbackPin, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemCreateSessionCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemCreateSessionCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemCreateSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemCreateSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemCreateSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemCreateSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemCreateSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemCreateSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemCreateSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemCreateSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemCreateSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemCreateSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemCreateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemCreateSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemCreateSession(UOnlineSessionSubsystemCreateSession&&); \
	NO_API UOnlineSessionSubsystemCreateSession(const UOnlineSessionSubsystemCreateSession&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemCreateSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemCreateSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemCreateSession(UOnlineSessionSubsystemCreateSession&&); \
	NO_API UOnlineSessionSubsystemCreateSession(const UOnlineSessionSubsystemCreateSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemCreateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemCreateSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemCreateSession) \
	NO_API virtual ~UOnlineSessionSubsystemCreateSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_303_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_306_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemCreateSession>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_340_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemStartSessionCallbackPin_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemStartSessionCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemStartSessionCallbackPin, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemStartSessionCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemStartSessionCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemStartSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemStartSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemStartSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemStartSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemStartSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemStartSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemStartSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemStartSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemStartSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemStartSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemStartSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemStartSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemStartSession(UOnlineSessionSubsystemStartSession&&); \
	NO_API UOnlineSessionSubsystemStartSession(const UOnlineSessionSubsystemStartSession&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemStartSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemStartSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemStartSession(UOnlineSessionSubsystemStartSession&&); \
	NO_API UOnlineSessionSubsystemStartSession(const UOnlineSessionSubsystemStartSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemStartSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemStartSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemStartSession) \
	NO_API virtual ~UOnlineSessionSubsystemStartSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_342_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_345_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemStartSession>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_373_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemUpdateSessionCallbackPin_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemUpdateSessionCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemUpdateSessionCallbackPin, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemUpdateSessionCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemUpdateSessionCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemUpdateSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemUpdateSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemUpdateSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemUpdateSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemUpdateSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemUpdateSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemUpdateSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemUpdateSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemUpdateSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemUpdateSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemUpdateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemUpdateSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemUpdateSession(UOnlineSessionSubsystemUpdateSession&&); \
	NO_API UOnlineSessionSubsystemUpdateSession(const UOnlineSessionSubsystemUpdateSession&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemUpdateSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemUpdateSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemUpdateSession(UOnlineSessionSubsystemUpdateSession&&); \
	NO_API UOnlineSessionSubsystemUpdateSession(const UOnlineSessionSubsystemUpdateSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemUpdateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemUpdateSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemUpdateSession) \
	NO_API virtual ~UOnlineSessionSubsystemUpdateSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_375_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_378_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemUpdateSession>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_412_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemEndSessionCallbackPin_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemEndSessionCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemEndSessionCallbackPin, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemEndSessionCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemEndSessionCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemEndSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemEndSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemEndSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemEndSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemEndSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemEndSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemEndSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemEndSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemEndSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemEndSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemEndSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemEndSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemEndSession(UOnlineSessionSubsystemEndSession&&); \
	NO_API UOnlineSessionSubsystemEndSession(const UOnlineSessionSubsystemEndSession&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemEndSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemEndSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemEndSession(UOnlineSessionSubsystemEndSession&&); \
	NO_API UOnlineSessionSubsystemEndSession(const UOnlineSessionSubsystemEndSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemEndSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemEndSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemEndSession) \
	NO_API virtual ~UOnlineSessionSubsystemEndSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_414_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_417_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemEndSession>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_445_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemDestroySessionCallbackPin_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemDestroySessionCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemDestroySessionCallbackPin, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemDestroySessionCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemDestroySessionCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroySession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroySession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemDestroySession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemDestroySession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemDestroySession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemDestroySession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemDestroySession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemDestroySession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemDestroySession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemDestroySession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemDestroySession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemDestroySession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemDestroySession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemDestroySession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemDestroySession(UOnlineSessionSubsystemDestroySession&&); \
	NO_API UOnlineSessionSubsystemDestroySession(const UOnlineSessionSubsystemDestroySession&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemDestroySession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemDestroySession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemDestroySession(UOnlineSessionSubsystemDestroySession&&); \
	NO_API UOnlineSessionSubsystemDestroySession(const UOnlineSessionSubsystemDestroySession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemDestroySession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemDestroySession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemDestroySession) \
	NO_API virtual ~UOnlineSessionSubsystemDestroySession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_447_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_450_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemDestroySession>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_477_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemStartMatchmakingCallbackPin_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemStartMatchmakingCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemStartMatchmakingCallbackPin, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemStartMatchmakingCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemStartMatchmakingCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartMatchmaking);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartMatchmaking);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemStartMatchmaking(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemStartMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemStartMatchmaking, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemStartMatchmaking)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemStartMatchmaking(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemStartMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemStartMatchmaking, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemStartMatchmaking)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemStartMatchmaking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemStartMatchmaking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemStartMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemStartMatchmaking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemStartMatchmaking(UOnlineSessionSubsystemStartMatchmaking&&); \
	NO_API UOnlineSessionSubsystemStartMatchmaking(const UOnlineSessionSubsystemStartMatchmaking&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemStartMatchmaking();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemStartMatchmaking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemStartMatchmaking(UOnlineSessionSubsystemStartMatchmaking&&); \
	NO_API UOnlineSessionSubsystemStartMatchmaking(const UOnlineSessionSubsystemStartMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemStartMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemStartMatchmaking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemStartMatchmaking) \
	NO_API virtual ~UOnlineSessionSubsystemStartMatchmaking();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_479_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_482_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemStartMatchmaking>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_519_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemCancelMatchmakingCallbackPin_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemCancelMatchmakingCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemCancelMatchmakingCallbackPin, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemCancelMatchmakingCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemCancelMatchmakingCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelMatchmaking);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelMatchmaking);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemCancelMatchmaking(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemCancelMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemCancelMatchmaking, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemCancelMatchmaking)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemCancelMatchmaking(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemCancelMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemCancelMatchmaking, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemCancelMatchmaking)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemCancelMatchmaking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemCancelMatchmaking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemCancelMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemCancelMatchmaking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemCancelMatchmaking(UOnlineSessionSubsystemCancelMatchmaking&&); \
	NO_API UOnlineSessionSubsystemCancelMatchmaking(const UOnlineSessionSubsystemCancelMatchmaking&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemCancelMatchmaking();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemCancelMatchmaking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemCancelMatchmaking(UOnlineSessionSubsystemCancelMatchmaking&&); \
	NO_API UOnlineSessionSubsystemCancelMatchmaking(const UOnlineSessionSubsystemCancelMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemCancelMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemCancelMatchmaking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemCancelMatchmaking) \
	NO_API virtual ~UOnlineSessionSubsystemCancelMatchmaking();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_521_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_524_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemCancelMatchmaking>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_555_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemFindSessionsCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemFindSessionsCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemFindSessionsCallbackPin, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemFindSessionsCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemFindSessionsCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindSessions);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindSessions);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemFindSessions(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemFindSessions_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemFindSessions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemFindSessions)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemFindSessions(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemFindSessions_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemFindSessions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemFindSessions)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemFindSessions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemFindSessions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemFindSessions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemFindSessions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemFindSessions(UOnlineSessionSubsystemFindSessions&&); \
	NO_API UOnlineSessionSubsystemFindSessions(const UOnlineSessionSubsystemFindSessions&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemFindSessions();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemFindSessions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemFindSessions(UOnlineSessionSubsystemFindSessions&&); \
	NO_API UOnlineSessionSubsystemFindSessions(const UOnlineSessionSubsystemFindSessions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemFindSessions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemFindSessions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemFindSessions) \
	NO_API virtual ~UOnlineSessionSubsystemFindSessions();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_557_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_560_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemFindSessions>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_591_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemFindSessionByIdCallbackPin_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FOnlineSessionSearchResultBP SearchResult; \
}; \
static inline void FOnlineSessionSubsystemFindSessionByIdCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemFindSessionByIdCallbackPin, int32 LocalUserNum, bool bWasSuccessful, FOnlineSessionSearchResultBP SearchResult) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemFindSessionByIdCallbackPin_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.SearchResult=SearchResult; \
	OnlineSessionSubsystemFindSessionByIdCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindSessionById);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindSessionById);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemFindSessionById(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemFindSessionById_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemFindSessionById, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemFindSessionById)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemFindSessionById(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemFindSessionById_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemFindSessionById, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemFindSessionById)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemFindSessionById(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemFindSessionById) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemFindSessionById); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemFindSessionById); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemFindSessionById(UOnlineSessionSubsystemFindSessionById&&); \
	NO_API UOnlineSessionSubsystemFindSessionById(const UOnlineSessionSubsystemFindSessionById&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemFindSessionById();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemFindSessionById(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemFindSessionById(UOnlineSessionSubsystemFindSessionById&&); \
	NO_API UOnlineSessionSubsystemFindSessionById(const UOnlineSessionSubsystemFindSessionById&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemFindSessionById); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemFindSessionById); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemFindSessionById) \
	NO_API virtual ~UOnlineSessionSubsystemFindSessionById();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_593_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_596_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemFindSessionById>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_632_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemCancelFindSessionsCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemCancelFindSessionsCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemCancelFindSessionsCallbackPin, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemCancelFindSessionsCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemCancelFindSessionsCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelFindSessions);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelFindSessions);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemCancelFindSessions(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemCancelFindSessions_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemCancelFindSessions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemCancelFindSessions)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemCancelFindSessions(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemCancelFindSessions_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemCancelFindSessions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemCancelFindSessions)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemCancelFindSessions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemCancelFindSessions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemCancelFindSessions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemCancelFindSessions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemCancelFindSessions(UOnlineSessionSubsystemCancelFindSessions&&); \
	NO_API UOnlineSessionSubsystemCancelFindSessions(const UOnlineSessionSubsystemCancelFindSessions&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemCancelFindSessions();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemCancelFindSessions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemCancelFindSessions(UOnlineSessionSubsystemCancelFindSessions&&); \
	NO_API UOnlineSessionSubsystemCancelFindSessions(const UOnlineSessionSubsystemCancelFindSessions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemCancelFindSessions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemCancelFindSessions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemCancelFindSessions) \
	NO_API virtual ~UOnlineSessionSubsystemCancelFindSessions();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_634_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_637_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemCancelFindSessions>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_664_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemPingSearchResultsCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemPingSearchResultsCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemPingSearchResultsCallbackPin, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemPingSearchResultsCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemPingSearchResultsCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPingSearchResults);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPingSearchResults);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemPingSearchResults(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemPingSearchResults_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemPingSearchResults, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemPingSearchResults)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemPingSearchResults(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemPingSearchResults_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemPingSearchResults, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemPingSearchResults)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemPingSearchResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemPingSearchResults) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemPingSearchResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemPingSearchResults); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemPingSearchResults(UOnlineSessionSubsystemPingSearchResults&&); \
	NO_API UOnlineSessionSubsystemPingSearchResults(const UOnlineSessionSubsystemPingSearchResults&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemPingSearchResults();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemPingSearchResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemPingSearchResults(UOnlineSessionSubsystemPingSearchResults&&); \
	NO_API UOnlineSessionSubsystemPingSearchResults(const UOnlineSessionSubsystemPingSearchResults&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemPingSearchResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemPingSearchResults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemPingSearchResults) \
	NO_API virtual ~UOnlineSessionSubsystemPingSearchResults();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_666_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_669_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemPingSearchResults>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_697_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemJoinSessionCallbackPin_Parms \
{ \
	FName SessionName; \
	EOnJoinSessionCompleteResult_ Result; \
}; \
static inline void FOnlineSessionSubsystemJoinSessionCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemJoinSessionCallbackPin, FName SessionName, EOnJoinSessionCompleteResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemJoinSessionCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.Result=Result; \
	OnlineSessionSubsystemJoinSessionCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoinSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemJoinSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemJoinSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemJoinSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemJoinSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemJoinSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemJoinSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemJoinSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemJoinSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemJoinSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemJoinSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemJoinSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemJoinSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemJoinSession(UOnlineSessionSubsystemJoinSession&&); \
	NO_API UOnlineSessionSubsystemJoinSession(const UOnlineSessionSubsystemJoinSession&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemJoinSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemJoinSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemJoinSession(UOnlineSessionSubsystemJoinSession&&); \
	NO_API UOnlineSessionSubsystemJoinSession(const UOnlineSessionSubsystemJoinSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemJoinSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemJoinSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemJoinSession) \
	NO_API virtual ~UOnlineSessionSubsystemJoinSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_699_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_702_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemJoinSession>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_736_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemFindFriendSessionCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
	TArray<FOnlineSessionSearchResultBP> FriendSearchResult; \
}; \
static inline void FOnlineSessionSubsystemFindFriendSessionCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemFindFriendSessionCallbackPin, bool bWasSuccessful, TArray<FOnlineSessionSearchResultBP> const& FriendSearchResult) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemFindFriendSessionCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.FriendSearchResult=FriendSearchResult; \
	OnlineSessionSubsystemFindFriendSessionCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFriendSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFriendSession);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemFindFriendSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemFindFriendSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemFindFriendSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemFindFriendSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemFindFriendSession(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemFindFriendSession_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemFindFriendSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemFindFriendSession)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemFindFriendSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemFindFriendSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemFindFriendSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemFindFriendSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemFindFriendSession(UOnlineSessionSubsystemFindFriendSession&&); \
	NO_API UOnlineSessionSubsystemFindFriendSession(const UOnlineSessionSubsystemFindFriendSession&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemFindFriendSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemFindFriendSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemFindFriendSession(UOnlineSessionSubsystemFindFriendSession&&); \
	NO_API UOnlineSessionSubsystemFindFriendSession(const UOnlineSessionSubsystemFindFriendSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemFindFriendSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemFindFriendSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemFindFriendSession) \
	NO_API virtual ~UOnlineSessionSubsystemFindFriendSession();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_738_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_741_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemFindFriendSession>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_772_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemRegisterPlayersCallbackPin_Parms \
{ \
	FName SessionName; \
	TArray<FUniqueNetIdRepl> PlayerIds; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemRegisterPlayersCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemRegisterPlayersCallbackPin, FName SessionName, TArray<FUniqueNetIdRepl> const& PlayerIds, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemRegisterPlayersCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.PlayerIds=PlayerIds; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemRegisterPlayersCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegisterPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegisterPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemRegisterPlayers(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemRegisterPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemRegisterPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemRegisterPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemRegisterPlayers(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemRegisterPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemRegisterPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemRegisterPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemRegisterPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemRegisterPlayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemRegisterPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemRegisterPlayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemRegisterPlayers(UOnlineSessionSubsystemRegisterPlayers&&); \
	NO_API UOnlineSessionSubsystemRegisterPlayers(const UOnlineSessionSubsystemRegisterPlayers&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemRegisterPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemRegisterPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemRegisterPlayers(UOnlineSessionSubsystemRegisterPlayers&&); \
	NO_API UOnlineSessionSubsystemRegisterPlayers(const UOnlineSessionSubsystemRegisterPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemRegisterPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemRegisterPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemRegisterPlayers) \
	NO_API virtual ~UOnlineSessionSubsystemRegisterPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_774_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_777_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemRegisterPlayers>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_811_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemUnregisterPlayersCallbackPin_Parms \
{ \
	FName SessionName; \
	TArray<FUniqueNetIdRepl> PlayerIds; \
	bool bWasSuccessful; \
}; \
static inline void FOnlineSessionSubsystemUnregisterPlayersCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemUnregisterPlayersCallbackPin, FName SessionName, TArray<FUniqueNetIdRepl> const& PlayerIds, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemUnregisterPlayersCallbackPin_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.PlayerIds=PlayerIds; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnlineSessionSubsystemUnregisterPlayersCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterPlayers);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemUnregisterPlayers(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemUnregisterPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemUnregisterPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemUnregisterPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemUnregisterPlayers(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemUnregisterPlayers_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemUnregisterPlayers, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemUnregisterPlayers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemUnregisterPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemUnregisterPlayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemUnregisterPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemUnregisterPlayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemUnregisterPlayers(UOnlineSessionSubsystemUnregisterPlayers&&); \
	NO_API UOnlineSessionSubsystemUnregisterPlayers(const UOnlineSessionSubsystemUnregisterPlayers&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemUnregisterPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemUnregisterPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemUnregisterPlayers(UOnlineSessionSubsystemUnregisterPlayers&&); \
	NO_API UOnlineSessionSubsystemUnregisterPlayers(const UOnlineSessionSubsystemUnregisterPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemUnregisterPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemUnregisterPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemUnregisterPlayers) \
	NO_API virtual ~UOnlineSessionSubsystemUnregisterPlayers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_813_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_816_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemUnregisterPlayers>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_847_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemRegisterLocalPlayerCallbackPin_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	EOnJoinSessionCompleteResult_ Param2; \
}; \
static inline void FOnlineSessionSubsystemRegisterLocalPlayerCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemRegisterLocalPlayerCallbackPin, FUniqueNetIdRepl Param1, EOnJoinSessionCompleteResult_ Param2) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemRegisterLocalPlayerCallbackPin_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	OnlineSessionSubsystemRegisterLocalPlayerCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegisterLocalPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegisterLocalPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemRegisterLocalPlayer(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemRegisterLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemRegisterLocalPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemRegisterLocalPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemRegisterLocalPlayer(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemRegisterLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemRegisterLocalPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemRegisterLocalPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemRegisterLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemRegisterLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemRegisterLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemRegisterLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemRegisterLocalPlayer(UOnlineSessionSubsystemRegisterLocalPlayer&&); \
	NO_API UOnlineSessionSubsystemRegisterLocalPlayer(const UOnlineSessionSubsystemRegisterLocalPlayer&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemRegisterLocalPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemRegisterLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemRegisterLocalPlayer(UOnlineSessionSubsystemRegisterLocalPlayer&&); \
	NO_API UOnlineSessionSubsystemRegisterLocalPlayer(const UOnlineSessionSubsystemRegisterLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemRegisterLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemRegisterLocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemRegisterLocalPlayer) \
	NO_API virtual ~UOnlineSessionSubsystemRegisterLocalPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_849_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_852_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemRegisterLocalPlayer>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_882_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemUnregisterLocalPlayerCallbackPin_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	bool Param2; \
}; \
static inline void FOnlineSessionSubsystemUnregisterLocalPlayerCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineSessionSubsystemUnregisterLocalPlayerCallbackPin, FUniqueNetIdRepl Param1, bool Param2) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineSessionSubsystemUnregisterLocalPlayerCallbackPin_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2 ? true : false; \
	OnlineSessionSubsystemUnregisterLocalPlayerCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterLocalPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterLocalPlayer);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemUnregisterLocalPlayer(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemUnregisterLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemUnregisterLocalPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemUnregisterLocalPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionSubsystemUnregisterLocalPlayer(); \
	friend struct Z_Construct_UClass_UOnlineSessionSubsystemUnregisterLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionSubsystemUnregisterLocalPlayer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionSubsystemUnregisterLocalPlayer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemUnregisterLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemUnregisterLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemUnregisterLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemUnregisterLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemUnregisterLocalPlayer(UOnlineSessionSubsystemUnregisterLocalPlayer&&); \
	NO_API UOnlineSessionSubsystemUnregisterLocalPlayer(const UOnlineSessionSubsystemUnregisterLocalPlayer&); \
public: \
	NO_API virtual ~UOnlineSessionSubsystemUnregisterLocalPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionSubsystemUnregisterLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionSubsystemUnregisterLocalPlayer(UOnlineSessionSubsystemUnregisterLocalPlayer&&); \
	NO_API UOnlineSessionSubsystemUnregisterLocalPlayer(const UOnlineSessionSubsystemUnregisterLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionSubsystemUnregisterLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionSubsystemUnregisterLocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionSubsystemUnregisterLocalPlayer) \
	NO_API virtual ~UOnlineSessionSubsystemUnregisterLocalPlayer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_884_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h_887_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSessionSubsystemUnregisterLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
