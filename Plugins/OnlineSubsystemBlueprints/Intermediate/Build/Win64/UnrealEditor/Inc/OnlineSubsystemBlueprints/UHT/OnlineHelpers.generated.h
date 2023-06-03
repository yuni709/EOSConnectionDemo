// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APlayerState;
class UFileData;
class ULobbyId;
class UMutablePartyData;
class UObject;
class UOnlinePartyJoinInfo;
class UOnlinePartySubsystem;
class UOnlineSessionSubsystem;
class UPartyId;
class UReadablePartyData;
class USaveGame;
struct FOnlineSessionSearchResultBP;
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OnlineHelpers_generated_h
#error "OnlineHelpers.generated.h already included, missing '#pragma once' in OnlineHelpers.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OnlineHelpers_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_ULobbyIdToUOnlinePartyJoinInfo); \
	DECLARE_FUNCTION(execReadFileDataAsSaveGame); \
	DECLARE_FUNCTION(execCreateFileDataFromSaveGame); \
	DECLARE_FUNCTION(execReadFileDataAsString); \
	DECLARE_FUNCTION(execCreateFileDataFromString); \
	DECLARE_FUNCTION(execCreateMutablePartyData); \
	DECLARE_FUNCTION(execGetPlayerStateUniqueNetId); \
	DECLARE_FUNCTION(execGetControllerUniqueNetId); \
	DECLARE_FUNCTION(execGetResolvedConnectStringBySearchResult); \
	DECLARE_FUNCTION(execGetResolvedConnectStringByName); \
	DECLARE_FUNCTION(execGetPrimaryPartyType); \
	DECLARE_FUNCTION(execIsValid_LobbyId); \
	DECLARE_FUNCTION(execEqualEqual_LobbyIdLobbyId); \
	DECLARE_FUNCTION(execIsValid_PartyId); \
	DECLARE_FUNCTION(execEqualEqual_PartyIdPartyId); \
	DECLARE_FUNCTION(execEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl); \
	DECLARE_FUNCTION(execFUniqueNetIdIsValid); \
	DECLARE_FUNCTION(execFUniqueNetIdGetType); \
	DECLARE_FUNCTION(execGetCurrentSubsystemName); \
	DECLARE_FUNCTION(execConv_FUniqueNetIdReplToString);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_ULobbyIdToUOnlinePartyJoinInfo); \
	DECLARE_FUNCTION(execReadFileDataAsSaveGame); \
	DECLARE_FUNCTION(execCreateFileDataFromSaveGame); \
	DECLARE_FUNCTION(execReadFileDataAsString); \
	DECLARE_FUNCTION(execCreateFileDataFromString); \
	DECLARE_FUNCTION(execCreateMutablePartyData); \
	DECLARE_FUNCTION(execGetPlayerStateUniqueNetId); \
	DECLARE_FUNCTION(execGetControllerUniqueNetId); \
	DECLARE_FUNCTION(execGetResolvedConnectStringBySearchResult); \
	DECLARE_FUNCTION(execGetResolvedConnectStringByName); \
	DECLARE_FUNCTION(execGetPrimaryPartyType); \
	DECLARE_FUNCTION(execIsValid_LobbyId); \
	DECLARE_FUNCTION(execEqualEqual_LobbyIdLobbyId); \
	DECLARE_FUNCTION(execIsValid_PartyId); \
	DECLARE_FUNCTION(execEqualEqual_PartyIdPartyId); \
	DECLARE_FUNCTION(execEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl); \
	DECLARE_FUNCTION(execFUniqueNetIdIsValid); \
	DECLARE_FUNCTION(execFUniqueNetIdGetType); \
	DECLARE_FUNCTION(execGetCurrentSubsystemName); \
	DECLARE_FUNCTION(execConv_FUniqueNetIdReplToString);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineHelpers(); \
	friend struct Z_Construct_UClass_UOnlineHelpers_Statics; \
public: \
	DECLARE_CLASS(UOnlineHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineHelpers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineHelpers(); \
	friend struct Z_Construct_UClass_UOnlineHelpers_Statics; \
public: \
	DECLARE_CLASS(UOnlineHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineHelpers)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineHelpers(UOnlineHelpers&&); \
	NO_API UOnlineHelpers(const UOnlineHelpers&); \
public: \
	NO_API virtual ~UOnlineHelpers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineHelpers(UOnlineHelpers&&); \
	NO_API UOnlineHelpers(const UOnlineHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineHelpers) \
	NO_API virtual ~UOnlineHelpers();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_17_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
