// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineSharingSubsystem_generated_h
#error "OnlineSharingSubsystem.generated.h already included, missing '#pragma once' in OnlineSharingSubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineSharingSubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_39_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSharing_RequestNewReadPermissionsComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool Param1; \
}; \
static inline void FSharing_RequestNewReadPermissionsComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Sharing_RequestNewReadPermissionsComplete_BP, int32 LocalUserNum, bool Param1) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewReadPermissionsComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.Param1=Param1 ? true : false; \
	Sharing_RequestNewReadPermissionsComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_41_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSharing_RequestNewPublishPermissionsComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool Param1; \
}; \
static inline void FSharing_RequestNewPublishPermissionsComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Sharing_RequestNewPublishPermissionsComplete_BP, int32 LocalUserNum, bool Param1) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewPublishPermissionsComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.Param1=Param1 ? true : false; \
	Sharing_RequestNewPublishPermissionsComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_43_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSharing_ReadNewsFeedComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool Param1; \
}; \
static inline void FSharing_ReadNewsFeedComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Sharing_ReadNewsFeedComplete_BP, int32 LocalUserNum, bool Param1) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSharing_ReadNewsFeedComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.Param1=Param1 ? true : false; \
	Sharing_ReadNewsFeedComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_45_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventSharing_SharePostComplete_BP_Parms \
{ \
	int32 LocalUserNum; \
	bool Param1; \
}; \
static inline void FSharing_SharePostComplete_BP_DelegateWrapper(const FMulticastScriptDelegate& Sharing_SharePostComplete_BP, int32 LocalUserNum, bool Param1) \
{ \
	_Script_OnlineSubsystemBlueprints_eventSharing_SharePostComplete_BP_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.Param1=Param1 ? true : false; \
	Sharing_SharePostComplete_BP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadNewsFeed); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadNewsFeed); \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSharingSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineSharingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineSharingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSharingSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSharingSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineSharingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineSharingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSharingSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSharingSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSharingSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSharingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSharingSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSharingSubsystem(UOnlineSharingSubsystem&&); \
	NO_API UOnlineSharingSubsystem(const UOnlineSharingSubsystem&); \
public: \
	NO_API virtual ~UOnlineSharingSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSharingSubsystem(UOnlineSharingSubsystem&&); \
	NO_API UOnlineSharingSubsystem(const UOnlineSharingSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSharingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSharingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineSharingSubsystem) \
	NO_API virtual ~UOnlineSharingSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_47_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineSharingSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
