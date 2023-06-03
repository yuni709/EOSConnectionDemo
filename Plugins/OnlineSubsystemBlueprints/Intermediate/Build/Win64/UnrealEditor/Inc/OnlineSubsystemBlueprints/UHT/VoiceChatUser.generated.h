// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/VoiceChatUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVoiceChatUser;
class UVoiceChatUserJoinChannel;
class UVoiceChatUserLeaveChannel;
class UVoiceChatUserLogin;
class UVoiceChatUserLogout;
enum class EVoiceChatChannelType_ : uint8;
enum class EVoiceChatTransmitMode_ : uint8;
struct FVoiceChatChannel3dPropertiesBP;
struct FVoiceChatDeviceInfoBP;
struct FVoiceChatResultBP;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_VoiceChatUser_generated_h
#error "VoiceChatUser.generated.h already included, missing '#pragma once' in VoiceChatUser.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_VoiceChatUser_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_39_DELEGATE \
static inline void FVoiceChatUser_OnVoiceChatAvailableAudioDevicesChangedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatAvailableAudioDevicesChangedDelegate_BP) \
{ \
	VoiceChatUser_OnVoiceChatAvailableAudioDevicesChangedDelegate_BP.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_41_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatLoggedInDelegate_BP_Parms \
{ \
	FString PlayerName; \
}; \
static inline void FVoiceChatUser_OnVoiceChatLoggedInDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatLoggedInDelegate_BP, const FString& PlayerName) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatLoggedInDelegate_BP_Parms Parms; \
	Parms.PlayerName=PlayerName; \
	VoiceChatUser_OnVoiceChatLoggedInDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_43_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatLoggedOutDelegate_BP_Parms \
{ \
	FString PlayerName; \
}; \
static inline void FVoiceChatUser_OnVoiceChatLoggedOutDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatLoggedOutDelegate_BP, const FString& PlayerName) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatLoggedOutDelegate_BP_Parms Parms; \
	Parms.PlayerName=PlayerName; \
	VoiceChatUser_OnVoiceChatLoggedOutDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_48_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatChannelJoinedDelegate_BP_Parms \
{ \
	FString ChannelName; \
}; \
static inline void FVoiceChatUser_OnVoiceChatChannelJoinedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatChannelJoinedDelegate_BP, const FString& ChannelName) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatChannelJoinedDelegate_BP_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	VoiceChatUser_OnVoiceChatChannelJoinedDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_50_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatChannelExitedDelegate_BP_Parms \
{ \
	FString ChannelName; \
	FVoiceChatResultBP Reason; \
}; \
static inline void FVoiceChatUser_OnVoiceChatChannelExitedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatChannelExitedDelegate_BP, const FString& ChannelName, FVoiceChatResultBP Reason) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatChannelExitedDelegate_BP_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.Reason=Reason; \
	VoiceChatUser_OnVoiceChatChannelExitedDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_52_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerAddedDelegate_BP_Parms \
{ \
	FString ChannelName; \
	FString PlayerName; \
}; \
static inline void FVoiceChatUser_OnVoiceChatPlayerAddedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatPlayerAddedDelegate_BP, const FString& ChannelName, const FString& PlayerName) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerAddedDelegate_BP_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.PlayerName=PlayerName; \
	VoiceChatUser_OnVoiceChatPlayerAddedDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_54_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerRemovedDelegate_BP_Parms \
{ \
	FString ChannelName; \
	FString PlayerName; \
}; \
static inline void FVoiceChatUser_OnVoiceChatPlayerRemovedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatPlayerRemovedDelegate_BP, const FString& ChannelName, const FString& PlayerName) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerRemovedDelegate_BP_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.PlayerName=PlayerName; \
	VoiceChatUser_OnVoiceChatPlayerRemovedDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_56_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerTalkingUpdatedDelegate_BP_Parms \
{ \
	FString ChannelName; \
	FString PlayerName; \
	bool bIsTalking; \
}; \
static inline void FVoiceChatUser_OnVoiceChatPlayerTalkingUpdatedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatPlayerTalkingUpdatedDelegate_BP, const FString& ChannelName, const FString& PlayerName, bool bIsTalking) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerTalkingUpdatedDelegate_BP_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.PlayerName=PlayerName; \
	Parms.bIsTalking=bIsTalking ? true : false; \
	VoiceChatUser_OnVoiceChatPlayerTalkingUpdatedDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_58_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerMuteUpdatedDelegate_BP_Parms \
{ \
	FString ChannelName; \
	FString PlayerName; \
	bool bIsMuted; \
}; \
static inline void FVoiceChatUser_OnVoiceChatPlayerMuteUpdatedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatPlayerMuteUpdatedDelegate_BP, const FString& ChannelName, const FString& PlayerName, bool bIsMuted) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerMuteUpdatedDelegate_BP_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.PlayerName=PlayerName; \
	Parms.bIsMuted=bIsMuted ? true : false; \
	VoiceChatUser_OnVoiceChatPlayerMuteUpdatedDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_60_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerVolumeUpdatedDelegate_BP_Parms \
{ \
	FString ChannelName; \
	FString PlayerName; \
	float Volume; \
}; \
static inline void FVoiceChatUser_OnVoiceChatPlayerVolumeUpdatedDelegate_BP_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUser_OnVoiceChatPlayerVolumeUpdatedDelegate_BP, const FString& ChannelName, const FString& PlayerName, float Volume) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUser_OnVoiceChatPlayerVolumeUpdatedDelegate_BP_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.PlayerName=PlayerName; \
	Parms.Volume=Volume; \
	VoiceChatUser_OnVoiceChatPlayerVolumeUpdatedDelegate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInsecureGetJoinToken); \
	DECLARE_FUNCTION(execInsecureGetLoginToken); \
	DECLARE_FUNCTION(execGetTransmitChannel); \
	DECLARE_FUNCTION(execGetTransmitMode); \
	DECLARE_FUNCTION(execTransmitToSpecificChannel); \
	DECLARE_FUNCTION(execTransmitToNoChannels); \
	DECLARE_FUNCTION(execTransmitToAllChannels); \
	DECLARE_FUNCTION(execGetPlayerVolume); \
	DECLARE_FUNCTION(execSetPlayerVolume); \
	DECLARE_FUNCTION(execIsChannelPlayerMuted); \
	DECLARE_FUNCTION(execSetChannelPlayerMuted); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execSetPlayerMuted); \
	DECLARE_FUNCTION(execIsPlayerTalking); \
	DECLARE_FUNCTION(execGetChannelType); \
	DECLARE_FUNCTION(execGetPlayersInChannel); \
	DECLARE_FUNCTION(execGetChannels); \
	DECLARE_FUNCTION(execSet3DPosition); \
	DECLARE_FUNCTION(execUnblockPlayers); \
	DECLARE_FUNCTION(execBlockPlayers); \
	DECLARE_FUNCTION(execGetLoggedInPlayerName); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execIsLoggingIn); \
	DECLARE_FUNCTION(execGetDefaultOutputDeviceInfo); \
	DECLARE_FUNCTION(execGetDefaultInputDeviceInfo); \
	DECLARE_FUNCTION(execGetOutputDeviceInfo); \
	DECLARE_FUNCTION(execGetInputDeviceInfo); \
	DECLARE_FUNCTION(execSetOutputDeviceId); \
	DECLARE_FUNCTION(execSetInputDeviceId); \
	DECLARE_FUNCTION(execGetAvailableOutputDeviceInfos); \
	DECLARE_FUNCTION(execGetAvailableInputDeviceInfos); \
	DECLARE_FUNCTION(execGetAudioOutputDeviceMuted); \
	DECLARE_FUNCTION(execGetAudioInputDeviceMuted); \
	DECLARE_FUNCTION(execSetAudioOutputDeviceMuted); \
	DECLARE_FUNCTION(execSetAudioInputDeviceMuted); \
	DECLARE_FUNCTION(execGetAudioOutputVolume); \
	DECLARE_FUNCTION(execGetAudioInputVolume); \
	DECLARE_FUNCTION(execSetAudioOutputVolume); \
	DECLARE_FUNCTION(execSetAudioInputVolume); \
	DECLARE_FUNCTION(execGetSetting); \
	DECLARE_FUNCTION(execSetSetting);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInsecureGetJoinToken); \
	DECLARE_FUNCTION(execInsecureGetLoginToken); \
	DECLARE_FUNCTION(execGetTransmitChannel); \
	DECLARE_FUNCTION(execGetTransmitMode); \
	DECLARE_FUNCTION(execTransmitToSpecificChannel); \
	DECLARE_FUNCTION(execTransmitToNoChannels); \
	DECLARE_FUNCTION(execTransmitToAllChannels); \
	DECLARE_FUNCTION(execGetPlayerVolume); \
	DECLARE_FUNCTION(execSetPlayerVolume); \
	DECLARE_FUNCTION(execIsChannelPlayerMuted); \
	DECLARE_FUNCTION(execSetChannelPlayerMuted); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execSetPlayerMuted); \
	DECLARE_FUNCTION(execIsPlayerTalking); \
	DECLARE_FUNCTION(execGetChannelType); \
	DECLARE_FUNCTION(execGetPlayersInChannel); \
	DECLARE_FUNCTION(execGetChannels); \
	DECLARE_FUNCTION(execSet3DPosition); \
	DECLARE_FUNCTION(execUnblockPlayers); \
	DECLARE_FUNCTION(execBlockPlayers); \
	DECLARE_FUNCTION(execGetLoggedInPlayerName); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execIsLoggingIn); \
	DECLARE_FUNCTION(execGetDefaultOutputDeviceInfo); \
	DECLARE_FUNCTION(execGetDefaultInputDeviceInfo); \
	DECLARE_FUNCTION(execGetOutputDeviceInfo); \
	DECLARE_FUNCTION(execGetInputDeviceInfo); \
	DECLARE_FUNCTION(execSetOutputDeviceId); \
	DECLARE_FUNCTION(execSetInputDeviceId); \
	DECLARE_FUNCTION(execGetAvailableOutputDeviceInfos); \
	DECLARE_FUNCTION(execGetAvailableInputDeviceInfos); \
	DECLARE_FUNCTION(execGetAudioOutputDeviceMuted); \
	DECLARE_FUNCTION(execGetAudioInputDeviceMuted); \
	DECLARE_FUNCTION(execSetAudioOutputDeviceMuted); \
	DECLARE_FUNCTION(execSetAudioInputDeviceMuted); \
	DECLARE_FUNCTION(execGetAudioOutputVolume); \
	DECLARE_FUNCTION(execGetAudioInputVolume); \
	DECLARE_FUNCTION(execSetAudioOutputVolume); \
	DECLARE_FUNCTION(execSetAudioInputVolume); \
	DECLARE_FUNCTION(execGetSetting); \
	DECLARE_FUNCTION(execSetSetting);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceChatUser(); \
	friend struct Z_Construct_UClass_UVoiceChatUser_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUser)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChatUser(); \
	friend struct Z_Construct_UClass_UVoiceChatUser_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUser)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUser(UVoiceChatUser&&); \
	NO_API UVoiceChatUser(const UVoiceChatUser&); \
public: \
	NO_API virtual ~UVoiceChatUser();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUser(UVoiceChatUser&&); \
	NO_API UVoiceChatUser(const UVoiceChatUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoiceChatUser) \
	NO_API virtual ~UVoiceChatUser();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_62_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UVoiceChatUser>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_301_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUserLoginCallbackPin_Parms \
{ \
	FString PlayerName; \
	FVoiceChatResultBP Result; \
}; \
static inline void FVoiceChatUserLoginCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUserLoginCallbackPin, const FString& PlayerName, FVoiceChatResultBP Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUserLoginCallbackPin_Parms Parms; \
	Parms.PlayerName=PlayerName; \
	Parms.Result=Result; \
	VoiceChatUserLoginCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogin);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogin);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceChatUserLogin(); \
	friend struct Z_Construct_UClass_UVoiceChatUserLogin_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserLogin, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserLogin)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChatUserLogin(); \
	friend struct Z_Construct_UClass_UVoiceChatUserLogin_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserLogin, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserLogin)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserLogin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserLogin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserLogin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserLogin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserLogin(UVoiceChatUserLogin&&); \
	NO_API UVoiceChatUserLogin(const UVoiceChatUserLogin&); \
public: \
	NO_API virtual ~UVoiceChatUserLogin();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserLogin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserLogin(UVoiceChatUserLogin&&); \
	NO_API UVoiceChatUserLogin(const UVoiceChatUserLogin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserLogin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserLogin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserLogin) \
	NO_API virtual ~UVoiceChatUserLogin();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_303_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_306_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UVoiceChatUserLogin>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_337_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUserLogoutCallbackPin_Parms \
{ \
	FString PlayerName; \
	FVoiceChatResultBP Result; \
}; \
static inline void FVoiceChatUserLogoutCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUserLogoutCallbackPin, const FString& PlayerName, FVoiceChatResultBP Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUserLogoutCallbackPin_Parms Parms; \
	Parms.PlayerName=PlayerName; \
	Parms.Result=Result; \
	VoiceChatUserLogoutCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogout);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogout);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceChatUserLogout(); \
	friend struct Z_Construct_UClass_UVoiceChatUserLogout_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserLogout, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserLogout)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChatUserLogout(); \
	friend struct Z_Construct_UClass_UVoiceChatUserLogout_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserLogout, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserLogout)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserLogout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserLogout) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserLogout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserLogout); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserLogout(UVoiceChatUserLogout&&); \
	NO_API UVoiceChatUserLogout(const UVoiceChatUserLogout&); \
public: \
	NO_API virtual ~UVoiceChatUserLogout();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserLogout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserLogout(UVoiceChatUserLogout&&); \
	NO_API UVoiceChatUserLogout(const UVoiceChatUserLogout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserLogout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserLogout); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserLogout) \
	NO_API virtual ~UVoiceChatUserLogout();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_339_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_342_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UVoiceChatUserLogout>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_366_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUserJoinChannelCallbackPin_Parms \
{ \
	FString ChannelName; \
	FVoiceChatResultBP Result; \
}; \
static inline void FVoiceChatUserJoinChannelCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUserJoinChannelCallbackPin, const FString& ChannelName, FVoiceChatResultBP Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUserJoinChannelCallbackPin_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.Result=Result; \
	VoiceChatUserJoinChannelCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoinChannel);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinChannel);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceChatUserJoinChannel(); \
	friend struct Z_Construct_UClass_UVoiceChatUserJoinChannel_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserJoinChannel, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserJoinChannel)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChatUserJoinChannel(); \
	friend struct Z_Construct_UClass_UVoiceChatUserJoinChannel_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserJoinChannel, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserJoinChannel)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserJoinChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserJoinChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserJoinChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserJoinChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserJoinChannel(UVoiceChatUserJoinChannel&&); \
	NO_API UVoiceChatUserJoinChannel(const UVoiceChatUserJoinChannel&); \
public: \
	NO_API virtual ~UVoiceChatUserJoinChannel();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserJoinChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserJoinChannel(UVoiceChatUserJoinChannel&&); \
	NO_API UVoiceChatUserJoinChannel(const UVoiceChatUserJoinChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserJoinChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserJoinChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserJoinChannel) \
	NO_API virtual ~UVoiceChatUserJoinChannel();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_368_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_371_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UVoiceChatUserJoinChannel>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_405_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventVoiceChatUserLeaveChannelCallbackPin_Parms \
{ \
	FString ChannelName; \
	FVoiceChatResultBP Result; \
}; \
static inline void FVoiceChatUserLeaveChannelCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatUserLeaveChannelCallbackPin, const FString& ChannelName, FVoiceChatResultBP Result) \
{ \
	_Script_OnlineSubsystemBlueprints_eventVoiceChatUserLeaveChannelCallbackPin_Parms Parms; \
	Parms.ChannelName=ChannelName; \
	Parms.Result=Result; \
	VoiceChatUserLeaveChannelCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLeaveChannel);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLeaveChannel);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceChatUserLeaveChannel(); \
	friend struct Z_Construct_UClass_UVoiceChatUserLeaveChannel_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserLeaveChannel, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserLeaveChannel)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChatUserLeaveChannel(); \
	friend struct Z_Construct_UClass_UVoiceChatUserLeaveChannel_Statics; \
public: \
	DECLARE_CLASS(UVoiceChatUserLeaveChannel, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatUserLeaveChannel)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserLeaveChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserLeaveChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserLeaveChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserLeaveChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserLeaveChannel(UVoiceChatUserLeaveChannel&&); \
	NO_API UVoiceChatUserLeaveChannel(const UVoiceChatUserLeaveChannel&); \
public: \
	NO_API virtual ~UVoiceChatUserLeaveChannel();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatUserLeaveChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatUserLeaveChannel(UVoiceChatUserLeaveChannel&&); \
	NO_API UVoiceChatUserLeaveChannel(const UVoiceChatUserLeaveChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatUserLeaveChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatUserLeaveChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatUserLeaveChannel) \
	NO_API virtual ~UVoiceChatUserLeaveChannel();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_407_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h_410_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UVoiceChatUserLeaveChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_VoiceChatUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
