// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineVoiceSubsystem_generated_h
#error "OnlineVoiceSubsystem.generated.h already included, missing '#pragma once' in OnlineVoiceSubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineVoiceSubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_39_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoice_PlayerTalkingStateChanged_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	bool Param2; \
}; \
static inline void FVoice_PlayerTalkingStateChanged_BP_DelegateWrapper(const FMulticastScriptDelegate& Voice_PlayerTalkingStateChanged_BP, FUniqueNetIdRepl Param1, bool Param2) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoice_PlayerTalkingStateChanged_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2 ? true : false; \
	Voice_PlayerTalkingStateChanged_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnectAllEndpoints); \
	DECLARE_FUNCTION(execPatchLocalTalkerOutputToEndpoint); \
	DECLARE_FUNCTION(execPatchRemoteTalkerOutputToEndpoint); \
	DECLARE_FUNCTION(execGetAmplitudeOfRemoteTalker); \
	DECLARE_FUNCTION(execGetVoiceDebugState); \
	DECLARE_FUNCTION(execClearVoicePackets); \
	DECLARE_FUNCTION(execGetNumLocalTalkers); \
	DECLARE_FUNCTION(execUnmuteRemoteTalker); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execIsHeadsetPresent); \
	DECLARE_FUNCTION(execRemoveAllRemoteTalkers); \
	DECLARE_FUNCTION(execUnregisterRemoteTalker); \
	DECLARE_FUNCTION(execRegisterRemoteTalker); \
	DECLARE_FUNCTION(execUnregisterLocalTalkers); \
	DECLARE_FUNCTION(execUnregisterLocalTalker); \
	DECLARE_FUNCTION(execRegisterLocalTalkers); \
	DECLARE_FUNCTION(execRegisterLocalTalker); \
	DECLARE_FUNCTION(execStopNetworkedVoice); \
	DECLARE_FUNCTION(execStartNetworkedVoice); \
	DECLARE_FUNCTION(execProcessMuteChangeNotification); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnectAllEndpoints); \
	DECLARE_FUNCTION(execPatchLocalTalkerOutputToEndpoint); \
	DECLARE_FUNCTION(execPatchRemoteTalkerOutputToEndpoint); \
	DECLARE_FUNCTION(execGetAmplitudeOfRemoteTalker); \
	DECLARE_FUNCTION(execGetVoiceDebugState); \
	DECLARE_FUNCTION(execClearVoicePackets); \
	DECLARE_FUNCTION(execGetNumLocalTalkers); \
	DECLARE_FUNCTION(execUnmuteRemoteTalker); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execIsHeadsetPresent); \
	DECLARE_FUNCTION(execRemoveAllRemoteTalkers); \
	DECLARE_FUNCTION(execUnregisterRemoteTalker); \
	DECLARE_FUNCTION(execRegisterRemoteTalker); \
	DECLARE_FUNCTION(execUnregisterLocalTalkers); \
	DECLARE_FUNCTION(execUnregisterLocalTalker); \
	DECLARE_FUNCTION(execRegisterLocalTalkers); \
	DECLARE_FUNCTION(execRegisterLocalTalker); \
	DECLARE_FUNCTION(execStopNetworkedVoice); \
	DECLARE_FUNCTION(execStartNetworkedVoice); \
	DECLARE_FUNCTION(execProcessMuteChangeNotification); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineVoiceSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineVoiceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineVoiceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineVoiceSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineVoiceSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineVoiceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineVoiceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineVoiceSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineVoiceSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineVoiceSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineVoiceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineVoiceSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineVoiceSubsystem(UOnlineVoiceSubsystem&&); \
	NO_API UOnlineVoiceSubsystem(const UOnlineVoiceSubsystem&); \
public: \
	NO_API virtual ~UOnlineVoiceSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineVoiceSubsystem(UOnlineVoiceSubsystem&&); \
	NO_API UOnlineVoiceSubsystem(const UOnlineVoiceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineVoiceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineVoiceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineVoiceSubsystem) \
	NO_API virtual ~UOnlineVoiceSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_41_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineVoiceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
