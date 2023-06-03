// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOnlineAvatarSubsystem;
class UOnlineAvatarSubsystemGetAvatar;
class UOnlineAvatarSubsystemGetAvatarUrl;
class UTexture;
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineAvatarSubsystem_generated_h
#error "OnlineAvatarSubsystem.generated.h already included, missing '#pragma once' in OnlineAvatarSubsystem.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineAvatarSubsystem_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSubsystemAvailable);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineAvatarSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineAvatarSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineAvatarSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAvatarSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineAvatarSubsystem(); \
	friend struct Z_Construct_UClass_UOnlineAvatarSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnlineAvatarSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAvatarSubsystem)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineAvatarSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineAvatarSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAvatarSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAvatarSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAvatarSubsystem(UOnlineAvatarSubsystem&&); \
	NO_API UOnlineAvatarSubsystem(const UOnlineAvatarSubsystem&); \
public: \
	NO_API virtual ~UOnlineAvatarSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAvatarSubsystem(UOnlineAvatarSubsystem&&); \
	NO_API UOnlineAvatarSubsystem(const UOnlineAvatarSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAvatarSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAvatarSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineAvatarSubsystem) \
	NO_API virtual ~UOnlineAvatarSubsystem();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_39_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineAvatarSubsystem>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_73_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
	UTexture* ResultTexture; \
}; \
static inline void FOnlineAvatarSubsystemGetAvatarCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineAvatarSubsystemGetAvatarCallbackPin, bool bWasSuccessful, UTexture* ResultTexture) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ResultTexture=ResultTexture; \
	OnlineAvatarSubsystemGetAvatarCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvatar);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvatar);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineAvatarSubsystemGetAvatar(); \
	friend struct Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics; \
public: \
	DECLARE_CLASS(UOnlineAvatarSubsystemGetAvatar, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAvatarSubsystemGetAvatar)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineAvatarSubsystemGetAvatar(); \
	friend struct Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics; \
public: \
	DECLARE_CLASS(UOnlineAvatarSubsystemGetAvatar, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAvatarSubsystemGetAvatar)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineAvatarSubsystemGetAvatar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineAvatarSubsystemGetAvatar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAvatarSubsystemGetAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAvatarSubsystemGetAvatar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAvatarSubsystemGetAvatar(UOnlineAvatarSubsystemGetAvatar&&); \
	NO_API UOnlineAvatarSubsystemGetAvatar(const UOnlineAvatarSubsystemGetAvatar&); \
public: \
	NO_API virtual ~UOnlineAvatarSubsystemGetAvatar();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineAvatarSubsystemGetAvatar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAvatarSubsystemGetAvatar(UOnlineAvatarSubsystemGetAvatar&&); \
	NO_API UOnlineAvatarSubsystemGetAvatar(const UOnlineAvatarSubsystemGetAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAvatarSubsystemGetAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAvatarSubsystemGetAvatar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineAvatarSubsystemGetAvatar) \
	NO_API virtual ~UOnlineAvatarSubsystemGetAvatar();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_75_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineAvatarSubsystemGetAvatar>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_111_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarUrlCallbackPin_Parms \
{ \
	bool bWasSuccessful; \
	FString ResultAvatarUrl; \
}; \
static inline void FOnlineAvatarSubsystemGetAvatarUrlCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& OnlineAvatarSubsystemGetAvatarUrlCallbackPin, bool bWasSuccessful, const FString& ResultAvatarUrl) \
{ \
	_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarUrlCallbackPin_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ResultAvatarUrl=ResultAvatarUrl; \
	OnlineAvatarSubsystemGetAvatarUrlCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvatarUrl);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvatarUrl);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineAvatarSubsystemGetAvatarUrl(); \
	friend struct Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics; \
public: \
	DECLARE_CLASS(UOnlineAvatarSubsystemGetAvatarUrl, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAvatarSubsystemGetAvatarUrl)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineAvatarSubsystemGetAvatarUrl(); \
	friend struct Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics; \
public: \
	DECLARE_CLASS(UOnlineAvatarSubsystemGetAvatarUrl, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAvatarSubsystemGetAvatarUrl)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineAvatarSubsystemGetAvatarUrl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineAvatarSubsystemGetAvatarUrl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAvatarSubsystemGetAvatarUrl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAvatarSubsystemGetAvatarUrl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAvatarSubsystemGetAvatarUrl(UOnlineAvatarSubsystemGetAvatarUrl&&); \
	NO_API UOnlineAvatarSubsystemGetAvatarUrl(const UOnlineAvatarSubsystemGetAvatarUrl&); \
public: \
	NO_API virtual ~UOnlineAvatarSubsystemGetAvatarUrl();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineAvatarSubsystemGetAvatarUrl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAvatarSubsystemGetAvatarUrl(UOnlineAvatarSubsystemGetAvatarUrl&&); \
	NO_API UOnlineAvatarSubsystemGetAvatarUrl(const UOnlineAvatarSubsystemGetAvatarUrl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAvatarSubsystemGetAvatarUrl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAvatarSubsystemGetAvatarUrl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineAvatarSubsystemGetAvatarUrl) \
	NO_API virtual ~UOnlineAvatarSubsystemGetAvatarUrl();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_113_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineAvatarSubsystemGetAvatarUrl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
