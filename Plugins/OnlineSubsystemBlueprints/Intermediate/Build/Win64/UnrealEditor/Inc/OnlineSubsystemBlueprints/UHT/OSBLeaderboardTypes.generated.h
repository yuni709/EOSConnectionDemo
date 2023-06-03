// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBLeaderboardTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnlineAsyncTaskState_ : uint8;
struct FColumnMetaDataBP;
struct FOnlineStatsRowBP;
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBLeaderboardTypes_generated_h
#error "OSBLeaderboardTypes.generated.h already included, missing '#pragma once' in OSBLeaderboardTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBLeaderboardTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineStatsRowBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FColumnMetaDataBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindPlayerRecord); \
	DECLARE_FUNCTION(execGetRows); \
	DECLARE_FUNCTION(execGetColumns); \
	DECLARE_FUNCTION(execSetColumns); \
	DECLARE_FUNCTION(execGetReadState); \
	DECLARE_FUNCTION(execGetSortedColumn); \
	DECLARE_FUNCTION(execSetSortedColumn); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execSetLeaderboardName);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindPlayerRecord); \
	DECLARE_FUNCTION(execGetRows); \
	DECLARE_FUNCTION(execGetColumns); \
	DECLARE_FUNCTION(execSetColumns); \
	DECLARE_FUNCTION(execGetReadState); \
	DECLARE_FUNCTION(execGetSortedColumn); \
	DECLARE_FUNCTION(execSetSortedColumn); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execSetLeaderboardName);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineLeaderboardRead(); \
	friend struct Z_Construct_UClass_UOnlineLeaderboardRead_Statics; \
public: \
	DECLARE_CLASS(UOnlineLeaderboardRead, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineLeaderboardRead)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineLeaderboardRead(); \
	friend struct Z_Construct_UClass_UOnlineLeaderboardRead_Statics; \
public: \
	DECLARE_CLASS(UOnlineLeaderboardRead, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineLeaderboardRead)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineLeaderboardRead(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineLeaderboardRead) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineLeaderboardRead); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineLeaderboardRead); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineLeaderboardRead(UOnlineLeaderboardRead&&); \
	NO_API UOnlineLeaderboardRead(const UOnlineLeaderboardRead&); \
public: \
	NO_API virtual ~UOnlineLeaderboardRead();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineLeaderboardRead(UOnlineLeaderboardRead&&); \
	NO_API UOnlineLeaderboardRead(const UOnlineLeaderboardRead&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineLeaderboardRead); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineLeaderboardRead); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineLeaderboardRead) \
	NO_API virtual ~UOnlineLeaderboardRead();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_54_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineLeaderboardRead>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_RPC_WRAPPERS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineLeaderboardWrite(); \
	friend struct Z_Construct_UClass_UOnlineLeaderboardWrite_Statics; \
public: \
	DECLARE_CLASS(UOnlineLeaderboardWrite, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineLeaderboardWrite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineLeaderboardWrite(); \
	friend struct Z_Construct_UClass_UOnlineLeaderboardWrite_Statics; \
public: \
	DECLARE_CLASS(UOnlineLeaderboardWrite, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineLeaderboardWrite)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineLeaderboardWrite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineLeaderboardWrite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineLeaderboardWrite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineLeaderboardWrite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineLeaderboardWrite(UOnlineLeaderboardWrite&&); \
	NO_API UOnlineLeaderboardWrite(const UOnlineLeaderboardWrite&); \
public: \
	NO_API virtual ~UOnlineLeaderboardWrite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineLeaderboardWrite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineLeaderboardWrite(UOnlineLeaderboardWrite&&); \
	NO_API UOnlineLeaderboardWrite(const UOnlineLeaderboardWrite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineLeaderboardWrite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineLeaderboardWrite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineLeaderboardWrite) \
	NO_API virtual ~UOnlineLeaderboardWrite();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_102_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineLeaderboardWrite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
