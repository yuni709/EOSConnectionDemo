// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlineMessageSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineMessageSubsystem_generated_h
#error "OnlineMessageSubsystem.generated.h already included, missing '#pragma once' in OnlineMessageSubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineMessageSubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_39_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool Param1; \
	FString Param2; \
}; \
static inline void FMessage_EnumerateMessagesComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Message_EnumerateMessagesComplete_BP, int32 LocalUserNum, bool Param1, const FString& Param2) \
{ \
	_Script_OnlineSubsystemBlueprints_eventMessage_EnumerateMessagesComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.Param1=Param1 ? true : false; \
	Parms.Param2=Param2; \
	Message_EnumerateMessagesComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_44_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool Param1; \
	FString Param2; \
}; \
static inline void FMessage_SendMessageComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Message_SendMessageComplete_BP, int32 LocalUserNum, bool Param1, const FString& Param2) \
{ \
	_Script_OnlineSubsystemBlueprints_eventMessage_SendMessageComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.Param1=Param1 ? true : false; \
	Parms.Param2=Param2; \
	Message_SendMessageComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearMessages); \
	DECLARE_FUNCTION(execClearMessageHeaders); \
	DECLARE_FUNCTION(execEnumerateMessages); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearMessages); \
	DECLARE_FUNCTION(execClearMessageHeaders); \
	DECLARE_FUNCTION(execEnumerateMessages); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineMessageSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineMessageSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineMessageSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineMessageSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineMessageSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineMessageSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineMessageSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineMessageSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineMessageSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineMessageSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineMessageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineMessageSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineMessageSubsystem(UOnlineMessageSubsystem&&); \
	NO_API UOnlineMessageSubsystem(const UOnlineMessageSubsystem&); \
public: \
	NO_API virtual ~UOnlineMessageSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineMessageSubsystem(UOnlineMessageSubsystem&&); \
	NO_API UOnlineMessageSubsystem(const UOnlineMessageSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineMessageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineMessageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineMessageSubsystem) \
	NO_API virtual ~UOnlineMessageSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_49_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineMessageSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
