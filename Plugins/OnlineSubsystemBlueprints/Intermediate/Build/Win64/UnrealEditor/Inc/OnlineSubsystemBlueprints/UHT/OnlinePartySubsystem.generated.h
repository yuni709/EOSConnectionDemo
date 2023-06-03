// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlinePartySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprintPartyMember;
class UMutablePartyData;
class UOnlinePartyJoinInfo;
class UOnlinePartySubsystem;
class UOnlinePartySubsystemCancelInvitation;
class UOnlinePartySubsystemCleanupParties;
class UOnlinePartySubsystemCreateParty;
class UOnlinePartySubsystemJoinParty;
class UOnlinePartySubsystemKickMember;
class UOnlinePartySubsystemLeaveParty;
class UOnlinePartySubsystemPromoteMember;
class UOnlinePartySubsystemRejoinParty;
class UOnlinePartySubsystemRestoreInvites;
class UOnlinePartySubsystemRestoreParties;
class UOnlinePartySubsystemSendInvitation;
class UOnlinePartySubsystemUpdateParty;
class UParty;
class UPartyId;
class UReadablePartyData;
enum class ECreatePartyCompletionResult_ : uint8;
enum class EJoinPartyCompletionResult_ : uint8;
enum class EKickMemberCompletionResult_ : uint8;
enum class ELeavePartyCompletionResult_ : uint8;
enum class EMemberExitedReason_ : uint8;
enum class EPartyState_ : uint8;
enum class EPromoteMemberCompletionResult_ : uint8;
enum class ESendPartyInvitationCompletionResult_ : uint8;
enum class EUpdateConfigCompletionResult_ : uint8;
struct FOnlineErrorInfo;
struct FOnlinePartyConfiguration;
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlinePartySubsystem_generated_h
#error "OnlinePartySubsystem.generated.h already included, missing '#pragma once' in OnlinePartySubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlinePartySubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_39_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyJoined_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
}; \
static inline void FParty_PartyJoined_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyJoined_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyJoined_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Party_PartyJoined_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_41_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyExited_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
}; \
static inline void FParty_PartyExited_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyExited_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyExited_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Party_PartyExited_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_43_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyStateChanged_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	EPartyState_ State; \
	EPartyState_ PreviousState; \
}; \
static inline void FParty_PartyStateChanged_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyStateChanged_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, EPartyState_ State, EPartyState_ PreviousState) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyStateChanged_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.State=State; \
	Parms.PreviousState=PreviousState; \
	Party_PartyStateChanged_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_45_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyJIPResponse_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	bool Success; \
	int32 DeniedResultCode; \
}; \
static inline void FParty_PartyJIPResponse_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyJIPResponse_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, bool Success, int32 DeniedResultCode) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyJIPResponse_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.Success=Success ? true : false; \
	Parms.DeniedResultCode=DeniedResultCode; \
	Party_PartyJIPResponse_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_47_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyPromotionLockoutChanged_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	bool bLockoutState; \
}; \
static inline void FParty_PartyPromotionLockoutChanged_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyPromotionLockoutChanged_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, bool bLockoutState) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyPromotionLockoutChanged_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.bLockoutState=bLockoutState ? true : false; \
	Party_PartyPromotionLockoutChanged_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_49_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyConfigChanged_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FOnlinePartyConfiguration PartyConfig; \
}; \
static inline void FParty_PartyConfigChanged_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyConfigChanged_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FOnlinePartyConfiguration PartyConfig) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyConfigChanged_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.PartyConfig=PartyConfig; \
	Party_PartyConfigChanged_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_51_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyDataReceived_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FName Namespace; \
	UReadablePartyData* PartyData; \
}; \
static inline void FParty_PartyDataReceived_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyDataReceived_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FName Namespace, UReadablePartyData* PartyData) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyDataReceived_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.Namespace=Namespace; \
	Parms.PartyData=PartyData; \
	Party_PartyDataReceived_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_53_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyMemberPromoted_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl NewLeaderId; \
}; \
static inline void FParty_PartyMemberPromoted_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyMemberPromoted_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl NewLeaderId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyMemberPromoted_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.NewLeaderId=NewLeaderId; \
	Party_PartyMemberPromoted_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_55_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyMemberExited_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl MemberId; \
	EMemberExitedReason_ Reason; \
}; \
static inline void FParty_PartyMemberExited_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyMemberExited_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl MemberId, EMemberExitedReason_ Reason) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyMemberExited_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.MemberId=MemberId; \
	Parms.Reason=Reason; \
	Party_PartyMemberExited_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_57_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyMemberJoined_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl MemberId; \
}; \
static inline void FParty_PartyMemberJoined_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyMemberJoined_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl MemberId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyMemberJoined_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.MemberId=MemberId; \
	Party_PartyMemberJoined_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_59_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyMemberDataReceived_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl MemberId; \
	FName Namespace; \
	UReadablePartyData* PartyData; \
}; \
static inline void FParty_PartyMemberDataReceived_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyMemberDataReceived_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl MemberId, FName Namespace, UReadablePartyData* PartyData) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyMemberDataReceived_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.MemberId=MemberId; \
	Parms.Namespace=Namespace; \
	Parms.PartyData=PartyData; \
	Party_PartyMemberDataReceived_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_61_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyInvitesChanged_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
}; \
static inline void FParty_PartyInvitesChanged_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyInvitesChanged_BP, FUniqueNetIdRepl LocalUserId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyInvitesChanged_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Party_PartyInvitesChanged_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_63_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyInviteRequestReceived_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl SenderId; \
	FUniqueNetIdRepl RequestForId; \
}; \
static inline void FParty_PartyInviteRequestReceived_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyInviteRequestReceived_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl SenderId, FUniqueNetIdRepl RequestForId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyInviteRequestReceived_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.SenderId=SenderId; \
	Parms.RequestForId=RequestForId; \
	Party_PartyInviteRequestReceived_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_65_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyInviteReceivedEx_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UOnlinePartyJoinInfo* Invitation; \
}; \
static inline void FParty_PartyInviteReceivedEx_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyInviteReceivedEx_BP, FUniqueNetIdRepl LocalUserId, UOnlinePartyJoinInfo* Invitation) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyInviteReceivedEx_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.Invitation=Invitation; \
	Party_PartyInviteReceivedEx_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_76_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_PartyJIPRequestReceived_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl SenderId; \
}; \
static inline void FParty_PartyJIPRequestReceived_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_PartyJIPRequestReceived_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl SenderId) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_PartyJIPRequestReceived_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.SenderId=SenderId; \
	Party_PartyJIPRequestReceived_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_78_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventParty_FillPartyJoinRequestData_BP_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	UMutablePartyData* PartyData; \
}; \
static inline void FParty_FillPartyJoinRequestData_BP_DelegateWrapper(const FMulticastScriptDelegate& Party_FillPartyJoinRequestData_BP, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, UMutablePartyData* PartyData) \
{ \
	_Script_OnlineSubsystemBlueprints_eventParty_FillPartyJoinRequestData_BP_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.PartyData=PartyData; \
	Party_FillPartyJoinRequestData_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDumpPartyState); \
	DECLARE_FUNCTION(execMakeTokenFromJoinInfo); \
	DECLARE_FUNCTION(execMakeJoinInfoJson); \
	DECLARE_FUNCTION(execGetPendingInvitedUsers); \
	DECLARE_FUNCTION(execGetPendingInvites); \
	DECLARE_FUNCTION(execGetPartyMembers); \
	DECLARE_FUNCTION(execGetJoinedParties); \
	DECLARE_FUNCTION(execGetPartyMemberData); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execGetPartyMember); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetPartyMemberCount); \
	DECLARE_FUNCTION(execIsMemberLeader); \
	DECLARE_FUNCTION(execUpdatePartyMemberData); \
	DECLARE_FUNCTION(execUpdatePartyData); \
	DECLARE_FUNCTION(execRejectInvitation); \
	DECLARE_FUNCTION(execRespondToQueryJoinability); \
	DECLARE_FUNCTION(execApproveJoinRequest); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDumpPartyState); \
	DECLARE_FUNCTION(execMakeTokenFromJoinInfo); \
	DECLARE_FUNCTION(execMakeJoinInfoJson); \
	DECLARE_FUNCTION(execGetPendingInvitedUsers); \
	DECLARE_FUNCTION(execGetPendingInvites); \
	DECLARE_FUNCTION(execGetPartyMembers); \
	DECLARE_FUNCTION(execGetJoinedParties); \
	DECLARE_FUNCTION(execGetPartyMemberData); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execGetPartyMember); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetPartyMemberCount); \
	DECLARE_FUNCTION(execIsMemberLeader); \
	DECLARE_FUNCTION(execUpdatePartyMemberData); \
	DECLARE_FUNCTION(execUpdatePartyData); \
	DECLARE_FUNCTION(execRejectInvitation); \
	DECLARE_FUNCTION(execRespondToQueryJoinability); \
	DECLARE_FUNCTION(execApproveJoinRequest); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystem(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystem(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystem(UOnlinePartySubsystem&&); \
	NO_API UOnlinePartySubsystem(const UOnlinePartySubsystem&); \
public: \
	NO_API virtual ~UOnlinePartySubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystem(UOnlinePartySubsystem&&); \
	NO_API UOnlinePartySubsystem(const UOnlinePartySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlinePartySubsystem) \
	NO_API virtual ~UOnlinePartySubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_92_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystem>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_303_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemRestorePartiesCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	FOnlineErrorInfo Result; \
}; \
static inline void FOnlinePartySubsystemRestorePartiesCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemRestorePartiesCallbackPin, FUniqueNetIdRepl LocalUserId, FOnlineErrorInfo Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemRestorePartiesCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.Result=Result; \
	OnlinePartySubsystemRestorePartiesCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreParties);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreParties);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemRestoreParties(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemRestoreParties_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemRestoreParties, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemRestoreParties)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemRestoreParties(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemRestoreParties_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemRestoreParties, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemRestoreParties)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemRestoreParties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemRestoreParties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemRestoreParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemRestoreParties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemRestoreParties(UOnlinePartySubsystemRestoreParties&&); \
	NO_API UOnlinePartySubsystemRestoreParties(const UOnlinePartySubsystemRestoreParties&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemRestoreParties();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemRestoreParties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemRestoreParties(UOnlinePartySubsystemRestoreParties&&); \
	NO_API UOnlinePartySubsystemRestoreParties(const UOnlinePartySubsystemRestoreParties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemRestoreParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemRestoreParties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemRestoreParties) \
	NO_API virtual ~UOnlinePartySubsystemRestoreParties();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_305_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_308_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemRestoreParties>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_335_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemRestoreInvitesCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	FOnlineErrorInfo Result; \
}; \
static inline void FOnlinePartySubsystemRestoreInvitesCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemRestoreInvitesCallbackPin, FUniqueNetIdRepl LocalUserId, FOnlineErrorInfo Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemRestoreInvitesCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.Result=Result; \
	OnlinePartySubsystemRestoreInvitesCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreInvites);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreInvites);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemRestoreInvites(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemRestoreInvites_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemRestoreInvites, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemRestoreInvites)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemRestoreInvites(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemRestoreInvites_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemRestoreInvites, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemRestoreInvites)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemRestoreInvites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemRestoreInvites) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemRestoreInvites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemRestoreInvites); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemRestoreInvites(UOnlinePartySubsystemRestoreInvites&&); \
	NO_API UOnlinePartySubsystemRestoreInvites(const UOnlinePartySubsystemRestoreInvites&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemRestoreInvites();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemRestoreInvites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemRestoreInvites(UOnlinePartySubsystemRestoreInvites&&); \
	NO_API UOnlinePartySubsystemRestoreInvites(const UOnlinePartySubsystemRestoreInvites&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemRestoreInvites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemRestoreInvites); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemRestoreInvites) \
	NO_API virtual ~UOnlinePartySubsystemRestoreInvites();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_337_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_340_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemRestoreInvites>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_367_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemCleanupPartiesCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	FOnlineErrorInfo Result; \
}; \
static inline void FOnlinePartySubsystemCleanupPartiesCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemCleanupPartiesCallbackPin, FUniqueNetIdRepl LocalUserId, FOnlineErrorInfo Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemCleanupPartiesCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.Result=Result; \
	OnlinePartySubsystemCleanupPartiesCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanupParties);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanupParties);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemCleanupParties(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemCleanupParties_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemCleanupParties, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemCleanupParties)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemCleanupParties(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemCleanupParties_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemCleanupParties, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemCleanupParties)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemCleanupParties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemCleanupParties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemCleanupParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemCleanupParties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemCleanupParties(UOnlinePartySubsystemCleanupParties&&); \
	NO_API UOnlinePartySubsystemCleanupParties(const UOnlinePartySubsystemCleanupParties&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemCleanupParties();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemCleanupParties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemCleanupParties(UOnlinePartySubsystemCleanupParties&&); \
	NO_API UOnlinePartySubsystemCleanupParties(const UOnlinePartySubsystemCleanupParties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemCleanupParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemCleanupParties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemCleanupParties) \
	NO_API virtual ~UOnlinePartySubsystemCleanupParties();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_369_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_372_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemCleanupParties>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_399_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemCreatePartyCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	ECreatePartyCompletionResult_ Result; \
}; \
static inline void FOnlinePartySubsystemCreatePartyCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemCreatePartyCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, ECreatePartyCompletionResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemCreatePartyCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.Result=Result; \
	OnlinePartySubsystemCreatePartyCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemCreateParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemCreateParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemCreateParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemCreateParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemCreateParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemCreateParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemCreateParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemCreateParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemCreateParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemCreateParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemCreateParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemCreateParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemCreateParty(UOnlinePartySubsystemCreateParty&&); \
	NO_API UOnlinePartySubsystemCreateParty(const UOnlinePartySubsystemCreateParty&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemCreateParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemCreateParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemCreateParty(UOnlinePartySubsystemCreateParty&&); \
	NO_API UOnlinePartySubsystemCreateParty(const UOnlinePartySubsystemCreateParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemCreateParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemCreateParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemCreateParty) \
	NO_API virtual ~UOnlinePartySubsystemCreateParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_401_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_404_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemCreateParty>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_437_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemUpdatePartyCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	EUpdateConfigCompletionResult_ Result; \
}; \
static inline void FOnlinePartySubsystemUpdatePartyCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemUpdatePartyCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, EUpdateConfigCompletionResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemUpdatePartyCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.Result=Result; \
	OnlinePartySubsystemUpdatePartyCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemUpdateParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemUpdateParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemUpdateParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemUpdateParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemUpdateParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemUpdateParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemUpdateParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemUpdateParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemUpdateParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemUpdateParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemUpdateParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemUpdateParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemUpdateParty(UOnlinePartySubsystemUpdateParty&&); \
	NO_API UOnlinePartySubsystemUpdateParty(const UOnlinePartySubsystemUpdateParty&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemUpdateParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemUpdateParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemUpdateParty(UOnlinePartySubsystemUpdateParty&&); \
	NO_API UOnlinePartySubsystemUpdateParty(const UOnlinePartySubsystemUpdateParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemUpdateParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemUpdateParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemUpdateParty) \
	NO_API virtual ~UOnlinePartySubsystemUpdateParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_439_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_442_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemUpdateParty>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_478_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemJoinPartyCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	EJoinPartyCompletionResult_ Result; \
	int32 NotApprovedReason; \
}; \
static inline void FOnlinePartySubsystemJoinPartyCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemJoinPartyCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, EJoinPartyCompletionResult_ Result, int32 NotApprovedReason) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemJoinPartyCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.Result=Result; \
	Parms.NotApprovedReason=NotApprovedReason; \
	OnlinePartySubsystemJoinPartyCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoinParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemJoinParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemJoinParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemJoinParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemJoinParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemJoinParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemJoinParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemJoinParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemJoinParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemJoinParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemJoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemJoinParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemJoinParty(UOnlinePartySubsystemJoinParty&&); \
	NO_API UOnlinePartySubsystemJoinParty(const UOnlinePartySubsystemJoinParty&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemJoinParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemJoinParty(UOnlinePartySubsystemJoinParty&&); \
	NO_API UOnlinePartySubsystemJoinParty(const UOnlinePartySubsystemJoinParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemJoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemJoinParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemJoinParty) \
	NO_API virtual ~UOnlinePartySubsystemJoinParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_480_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_483_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemJoinParty>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_513_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemRejoinPartyCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	EJoinPartyCompletionResult_ Result; \
	int32 NotApprovedReason; \
}; \
static inline void FOnlinePartySubsystemRejoinPartyCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemRejoinPartyCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, EJoinPartyCompletionResult_ Result, int32 NotApprovedReason) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemRejoinPartyCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.Result=Result; \
	Parms.NotApprovedReason=NotApprovedReason; \
	OnlinePartySubsystemRejoinPartyCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRejoinParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRejoinParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemRejoinParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemRejoinParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemRejoinParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemRejoinParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemRejoinParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemRejoinParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemRejoinParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemRejoinParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemRejoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemRejoinParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemRejoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemRejoinParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemRejoinParty(UOnlinePartySubsystemRejoinParty&&); \
	NO_API UOnlinePartySubsystemRejoinParty(const UOnlinePartySubsystemRejoinParty&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemRejoinParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemRejoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemRejoinParty(UOnlinePartySubsystemRejoinParty&&); \
	NO_API UOnlinePartySubsystemRejoinParty(const UOnlinePartySubsystemRejoinParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemRejoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemRejoinParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemRejoinParty) \
	NO_API virtual ~UOnlinePartySubsystemRejoinParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_515_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_518_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemRejoinParty>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_554_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemLeavePartyCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	ELeavePartyCompletionResult_ Result; \
}; \
static inline void FOnlinePartySubsystemLeavePartyCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemLeavePartyCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, ELeavePartyCompletionResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemLeavePartyCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.Result=Result; \
	OnlinePartySubsystemLeavePartyCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLeaveParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLeaveParty);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemLeaveParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemLeaveParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemLeaveParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemLeaveParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemLeaveParty(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemLeaveParty_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemLeaveParty, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemLeaveParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemLeaveParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemLeaveParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemLeaveParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemLeaveParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemLeaveParty(UOnlinePartySubsystemLeaveParty&&); \
	NO_API UOnlinePartySubsystemLeaveParty(const UOnlinePartySubsystemLeaveParty&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemLeaveParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemLeaveParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemLeaveParty(UOnlinePartySubsystemLeaveParty&&); \
	NO_API UOnlinePartySubsystemLeaveParty(const UOnlinePartySubsystemLeaveParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemLeaveParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemLeaveParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemLeaveParty) \
	NO_API virtual ~UOnlinePartySubsystemLeaveParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_556_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_559_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemLeaveParty>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_592_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemSendInvitationCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl RecipientId; \
	ESendPartyInvitationCompletionResult_ Result; \
}; \
static inline void FOnlinePartySubsystemSendInvitationCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemSendInvitationCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl RecipientId, ESendPartyInvitationCompletionResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemSendInvitationCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.RecipientId=RecipientId; \
	Parms.Result=Result; \
	OnlinePartySubsystemSendInvitationCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendInvitation);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendInvitation);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemSendInvitation(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemSendInvitation_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemSendInvitation, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemSendInvitation)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemSendInvitation(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemSendInvitation_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemSendInvitation, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemSendInvitation)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemSendInvitation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemSendInvitation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemSendInvitation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemSendInvitation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemSendInvitation(UOnlinePartySubsystemSendInvitation&&); \
	NO_API UOnlinePartySubsystemSendInvitation(const UOnlinePartySubsystemSendInvitation&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemSendInvitation();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemSendInvitation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemSendInvitation(UOnlinePartySubsystemSendInvitation&&); \
	NO_API UOnlinePartySubsystemSendInvitation(const UOnlinePartySubsystemSendInvitation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemSendInvitation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemSendInvitation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemSendInvitation) \
	NO_API virtual ~UOnlinePartySubsystemSendInvitation();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_594_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_597_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemSendInvitation>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_630_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemCancelInvitationCallbackPin_Parms \
{ \
	FUniqueNetIdRepl SenderUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl TargetUserId; \
	FOnlineErrorInfo Result; \
}; \
static inline void FOnlinePartySubsystemCancelInvitationCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemCancelInvitationCallbackPin, FUniqueNetIdRepl SenderUserId, UPartyId* PartyId, FUniqueNetIdRepl TargetUserId, FOnlineErrorInfo Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemCancelInvitationCallbackPin_Parms Parms; \
	Parms.SenderUserId=SenderUserId; \
	Parms.PartyId=PartyId; \
	Parms.TargetUserId=TargetUserId; \
	Parms.Result=Result; \
	OnlinePartySubsystemCancelInvitationCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelInvitation);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelInvitation);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemCancelInvitation(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemCancelInvitation_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemCancelInvitation, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemCancelInvitation)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemCancelInvitation(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemCancelInvitation_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemCancelInvitation, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemCancelInvitation)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemCancelInvitation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemCancelInvitation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemCancelInvitation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemCancelInvitation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemCancelInvitation(UOnlinePartySubsystemCancelInvitation&&); \
	NO_API UOnlinePartySubsystemCancelInvitation(const UOnlinePartySubsystemCancelInvitation&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemCancelInvitation();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemCancelInvitation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemCancelInvitation(UOnlinePartySubsystemCancelInvitation&&); \
	NO_API UOnlinePartySubsystemCancelInvitation(const UOnlinePartySubsystemCancelInvitation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemCancelInvitation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemCancelInvitation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemCancelInvitation) \
	NO_API virtual ~UOnlinePartySubsystemCancelInvitation();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_632_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_635_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemCancelInvitation>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_668_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemKickMemberCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl MemberId; \
	EKickMemberCompletionResult_ Result; \
}; \
static inline void FOnlinePartySubsystemKickMemberCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemKickMemberCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl MemberId, EKickMemberCompletionResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemKickMemberCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.MemberId=MemberId; \
	Parms.Result=Result; \
	OnlinePartySubsystemKickMemberCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execKickMember);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKickMember);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemKickMember(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemKickMember_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemKickMember, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemKickMember)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemKickMember(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemKickMember_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemKickMember, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemKickMember)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemKickMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemKickMember) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemKickMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemKickMember); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemKickMember(UOnlinePartySubsystemKickMember&&); \
	NO_API UOnlinePartySubsystemKickMember(const UOnlinePartySubsystemKickMember&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemKickMember();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemKickMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemKickMember(UOnlinePartySubsystemKickMember&&); \
	NO_API UOnlinePartySubsystemKickMember(const UOnlinePartySubsystemKickMember&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemKickMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemKickMember); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemKickMember) \
	NO_API virtual ~UOnlinePartySubsystemKickMember();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_670_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_673_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemKickMember>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_706_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemPromoteMemberCallbackPin_Parms \
{ \
	FUniqueNetIdRepl LocalUserId; \
	UPartyId* PartyId; \
	FUniqueNetIdRepl MemberId; \
	EPromoteMemberCompletionResult_ Result; \
}; \
static inline void FOnlinePartySubsystemPromoteMemberCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartySubsystemPromoteMemberCallbackPin, FUniqueNetIdRepl LocalUserId, UPartyId* PartyId, FUniqueNetIdRepl MemberId, EPromoteMemberCompletionResult_ Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlinePartySubsystemPromoteMemberCallbackPin_Parms Parms; \
	Parms.LocalUserId=LocalUserId; \
	Parms.PartyId=PartyId; \
	Parms.MemberId=MemberId; \
	Parms.Result=Result; \
	OnlinePartySubsystemPromoteMemberCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPromoteMember);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPromoteMember);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemPromoteMember(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemPromoteMember_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemPromoteMember, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemPromoteMember)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartySubsystemPromoteMember(); \
	friend struct Z_Construct_UClass_UOnlinePartySubsystemPromoteMember_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartySubsystemPromoteMember, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartySubsystemPromoteMember)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemPromoteMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemPromoteMember) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemPromoteMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemPromoteMember); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemPromoteMember(UOnlinePartySubsystemPromoteMember&&); \
	NO_API UOnlinePartySubsystemPromoteMember(const UOnlinePartySubsystemPromoteMember&); \
public: \
	NO_API virtual ~UOnlinePartySubsystemPromoteMember();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartySubsystemPromoteMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartySubsystemPromoteMember(UOnlinePartySubsystemPromoteMember&&); \
	NO_API UOnlinePartySubsystemPromoteMember(const UOnlinePartySubsystemPromoteMember&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartySubsystemPromoteMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartySubsystemPromoteMember); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartySubsystemPromoteMember) \
	NO_API virtual ~UOnlinePartySubsystemPromoteMember();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_708_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h_711_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartySubsystemPromoteMember>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePartySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
