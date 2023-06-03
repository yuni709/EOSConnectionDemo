// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBStoreV2Types.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
struct FDateTime;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBStoreV2Types_generated_h
#error "OSBStoreV2Types.generated.h already included, missing '#pragma once' in OSBStoreV2Types.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBStoreV2Types_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineStoreCategoryBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlineStoreFilterBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPurchasable); \
	DECLARE_FUNCTION(execGetDynamicFields); \
	DECLARE_FUNCTION(execGetExpirationDate); \
	DECLARE_FUNCTION(execGetReleaseDate); \
	DECLARE_FUNCTION(execGetCurrencyCode); \
	DECLARE_FUNCTION(execGetNumericPrice); \
	DECLARE_FUNCTION(execGetRegularPrice); \
	DECLARE_FUNCTION(execGetDisplayPrice); \
	DECLARE_FUNCTION(execGetDisplayRegularPrice); \
	DECLARE_FUNCTION(execGetLongDescription); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execGetOfferId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPurchasable); \
	DECLARE_FUNCTION(execGetDynamicFields); \
	DECLARE_FUNCTION(execGetExpirationDate); \
	DECLARE_FUNCTION(execGetReleaseDate); \
	DECLARE_FUNCTION(execGetCurrencyCode); \
	DECLARE_FUNCTION(execGetNumericPrice); \
	DECLARE_FUNCTION(execGetRegularPrice); \
	DECLARE_FUNCTION(execGetDisplayPrice); \
	DECLARE_FUNCTION(execGetDisplayRegularPrice); \
	DECLARE_FUNCTION(execGetLongDescription); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execGetOfferId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineStoreOffer(); \
	friend struct Z_Construct_UClass_UOnlineStoreOffer_Statics; \
public: \
	DECLARE_CLASS(UOnlineStoreOffer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineStoreOffer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineStoreOffer(); \
	friend struct Z_Construct_UClass_UOnlineStoreOffer_Statics; \
public: \
	DECLARE_CLASS(UOnlineStoreOffer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineStoreOffer)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineStoreOffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineStoreOffer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineStoreOffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineStoreOffer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineStoreOffer(UOnlineStoreOffer&&); \
	NO_API UOnlineStoreOffer(const UOnlineStoreOffer&); \
public: \
	NO_API virtual ~UOnlineStoreOffer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineStoreOffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineStoreOffer(UOnlineStoreOffer&&); \
	NO_API UOnlineStoreOffer(const UOnlineStoreOffer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineStoreOffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineStoreOffer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineStoreOffer) \
	NO_API virtual ~UOnlineStoreOffer();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_53_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineStoreOffer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
