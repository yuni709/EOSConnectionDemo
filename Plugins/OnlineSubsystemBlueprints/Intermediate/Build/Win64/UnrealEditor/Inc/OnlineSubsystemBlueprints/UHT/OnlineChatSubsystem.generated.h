// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineChatSubsystem_generated_h
#error "OnlineChatSubsystem.generated.h already included, missing '#pragma once' in OnlineChatSubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineChatSubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_39_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	bool Param3; \
	FString Param4; \
}; \
static inline void FChat_ChatRoomCreated_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomCreated_BP, FUniqueNetIdRepl Param1, const FString& Param2, bool Param3, const FString& Param4) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3 ? true : false; \
	Parms.Param4=Param4; \
	Chat_ChatRoomCreated_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_41_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	bool Param3; \
	FString Param4; \
}; \
static inline void FChat_ChatRoomConfigured_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomConfigured_BP, FUniqueNetIdRepl Param1, const FString& Param2, bool Param3, const FString& Param4) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3 ? true : false; \
	Parms.Param4=Param4; \
	Chat_ChatRoomConfigured_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_43_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	bool Param3; \
	FString Param4; \
}; \
static inline void FChat_ChatRoomJoinPublic_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomJoinPublic_BP, FUniqueNetIdRepl Param1, const FString& Param2, bool Param3, const FString& Param4) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3 ? true : false; \
	Parms.Param4=Param4; \
	Chat_ChatRoomJoinPublic_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_45_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	bool Param3; \
	FString Param4; \
}; \
static inline void FChat_ChatRoomJoinPrivate_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomJoinPrivate_BP, FUniqueNetIdRepl Param1, const FString& Param2, bool Param3, const FString& Param4) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3 ? true : false; \
	Parms.Param4=Param4; \
	Chat_ChatRoomJoinPrivate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_47_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	bool Param3; \
	FString Param4; \
}; \
static inline void FChat_ChatRoomExit_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomExit_BP, FUniqueNetIdRepl Param1, const FString& Param2, bool Param3, const FString& Param4) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3 ? true : false; \
	Parms.Param4=Param4; \
	Chat_ChatRoomExit_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_49_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberJoin_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	FUniqueNetIdRepl Param3; \
}; \
static inline void FChat_ChatRoomMemberJoin_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomMemberJoin_BP, FUniqueNetIdRepl Param1, const FString& Param2, FUniqueNetIdRepl Param3) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberJoin_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3; \
	Chat_ChatRoomMemberJoin_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_51_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberExit_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	FUniqueNetIdRepl Param3; \
}; \
static inline void FChat_ChatRoomMemberExit_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomMemberExit_BP, FUniqueNetIdRepl Param1, const FString& Param2, FUniqueNetIdRepl Param3) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberExit_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3; \
	Chat_ChatRoomMemberExit_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_53_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberUpdate_BP_Parms \
{ \
	FUniqueNetIdRepl Param1; \
	FString Param2; \
	FUniqueNetIdRepl Param3; \
}; \
static inline void FChat_ChatRoomMemberUpdate_BP_DelegateWrapper(const FMulticastScriptDelegate& Chat_ChatRoomMemberUpdate_BP, FUniqueNetIdRepl Param1, const FString& Param2, FUniqueNetIdRepl Param3) \
{ \
	_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberUpdate_BP_Parms Parms; \
	Parms.Param1=Param1; \
	Parms.Param2=Param2; \
	Parms.Param3=Param3; \
	Chat_ChatRoomMemberUpdate_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDumpChatState); \
	DECLARE_FUNCTION(execGetJoinedRooms); \
	DECLARE_FUNCTION(execIsChatAllowed); \
	DECLARE_FUNCTION(execSendPrivateChat); \
	DECLARE_FUNCTION(execSendRoomChat); \
	DECLARE_FUNCTION(execExitRoom); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDumpChatState); \
	DECLARE_FUNCTION(execGetJoinedRooms); \
	DECLARE_FUNCTION(execIsChatAllowed); \
	DECLARE_FUNCTION(execSendPrivateChat); \
	DECLARE_FUNCTION(execSendRoomChat); \
	DECLARE_FUNCTION(execExitRoom); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineChatSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineChatSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineChatSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineChatSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineChatSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineChatSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineChatSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineChatSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineChatSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineChatSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineChatSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineChatSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineChatSubsystem(UOnlineChatSubsystem&&); \
	NO_API UOnlineChatSubsystem(const UOnlineChatSubsystem&); \
public: \
	NO_API virtual ~UOnlineChatSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineChatSubsystem(UOnlineChatSubsystem&&); \
	NO_API UOnlineChatSubsystem(const UOnlineChatSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineChatSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineChatSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineChatSubsystem) \
	NO_API virtual ~UOnlineChatSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_61_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineChatSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
