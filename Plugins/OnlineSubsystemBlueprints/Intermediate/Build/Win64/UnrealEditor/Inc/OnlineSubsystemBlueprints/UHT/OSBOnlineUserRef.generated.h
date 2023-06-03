// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBOnlineUserRef.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineUserRef_generated_h
#error "OSBOnlineUserRef.generated.h already included, missing '#pragma once' in OSBOnlineUserRef.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBOnlineUserRef_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_RPC_WRAPPERS \
	virtual void SetUserLocalAttribute_Implementation(const FString& Key, const FString& Value, bool& Success); \
	virtual FString GetUserAttribute_Implementation(const FString& Key, bool& Found); \
	virtual FString GetDisplayName_Implementation(); \
	virtual FString GetRealName_Implementation(); \
	virtual FUniqueNetIdRepl GetUserId_Implementation(); \
 \
	DECLARE_FUNCTION(execSetUserLocalAttribute); \
	DECLARE_FUNCTION(execGetUserAttribute); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetRealName); \
	DECLARE_FUNCTION(execGetUserId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetUserLocalAttribute_Implementation(const FString& Key, const FString& Value, bool& Success); \
	virtual FString GetUserAttribute_Implementation(const FString& Key, bool& Found); \
	virtual FString GetDisplayName_Implementation(); \
	virtual FString GetRealName_Implementation(); \
	virtual FUniqueNetIdRepl GetUserId_Implementation(); \
 \
	DECLARE_FUNCTION(execSetUserLocalAttribute); \
	DECLARE_FUNCTION(execGetUserAttribute); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetRealName); \
	DECLARE_FUNCTION(execGetUserId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_CALLBACK_WRAPPERS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineUserRef(); \
	friend struct Z_Construct_UClass_UOnlineUserRef_Statics; \
public: \
	DECLARE_CLASS(UOnlineUserRef, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineUserRef)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineUserRef(); \
	friend struct Z_Construct_UClass_UOnlineUserRef_Statics; \
public: \
	DECLARE_CLASS(UOnlineUserRef, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineUserRef)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineUserRef(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineUserRef) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineUserRef); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineUserRef); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineUserRef(UOnlineUserRef&&); \
	NO_API UOnlineUserRef(const UOnlineUserRef&); \
public: \
	NO_API virtual ~UOnlineUserRef();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineUserRef(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineUserRef(UOnlineUserRef&&); \
	NO_API UOnlineUserRef(const UOnlineUserRef&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineUserRef); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineUserRef); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineUserRef) \
	NO_API virtual ~UOnlineUserRef();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_17_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_CALLBACK_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_CALLBACK_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineUserRef>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUserAttribute); \
	DECLARE_FUNCTION(execGetAuthAttribute); \
	DECLARE_FUNCTION(execGetAccessToken);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUserAttribute); \
	DECLARE_FUNCTION(execGetAuthAttribute); \
	DECLARE_FUNCTION(execGetAccessToken);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserOnlineAccountRef(); \
	friend struct Z_Construct_UClass_UUserOnlineAccountRef_Statics; \
public: \
	DECLARE_CLASS(UUserOnlineAccountRef, UOnlineUserRef, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UUserOnlineAccountRef)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUUserOnlineAccountRef(); \
	friend struct Z_Construct_UClass_UUserOnlineAccountRef_Statics; \
public: \
	DECLARE_CLASS(UUserOnlineAccountRef, UOnlineUserRef, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UUserOnlineAccountRef)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserOnlineAccountRef(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserOnlineAccountRef) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserOnlineAccountRef); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserOnlineAccountRef); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserOnlineAccountRef(UUserOnlineAccountRef&&); \
	NO_API UUserOnlineAccountRef(const UUserOnlineAccountRef&); \
public: \
	NO_API virtual ~UUserOnlineAccountRef();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserOnlineAccountRef(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserOnlineAccountRef(UUserOnlineAccountRef&&); \
	NO_API UUserOnlineAccountRef(const UUserOnlineAccountRef&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserOnlineAccountRef); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserOnlineAccountRef); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserOnlineAccountRef) \
	NO_API virtual ~UUserOnlineAccountRef();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_81_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UUserOnlineAccountRef>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FExternalIdQueryOptionsBP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
