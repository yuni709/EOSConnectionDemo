// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBEntitlementTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBEntitlementTypes_generated_h
#error "OSBEntitlementTypes.generated.h already included, missing '#pragma once' in OSBEntitlementTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBEntitlementTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FPurchaseOfferEntryBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FPurchaseCheckoutRequestBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetEndDate); \
	DECLARE_FUNCTION(execGetStartDate); \
	DECLARE_FUNCTION(execGetConsumedCount); \
	DECLARE_FUNCTION(execGetRemainingCount); \
	DECLARE_FUNCTION(execIsConsumable); \
	DECLARE_FUNCTION(execGetNamespace); \
	DECLARE_FUNCTION(execGetItemId); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetEndDate); \
	DECLARE_FUNCTION(execGetStartDate); \
	DECLARE_FUNCTION(execGetConsumedCount); \
	DECLARE_FUNCTION(execGetRemainingCount); \
	DECLARE_FUNCTION(execIsConsumable); \
	DECLARE_FUNCTION(execGetNamespace); \
	DECLARE_FUNCTION(execGetItemId); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineEntitlement(); \
	friend struct Z_Construct_UClass_UOnlineEntitlement_Statics; \
public: \
	DECLARE_CLASS(UOnlineEntitlement, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineEntitlement)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineEntitlement(); \
	friend struct Z_Construct_UClass_UOnlineEntitlement_Statics; \
public: \
	DECLARE_CLASS(UOnlineEntitlement, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlineEntitlement)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineEntitlement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineEntitlement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineEntitlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineEntitlement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineEntitlement(UOnlineEntitlement&&); \
	NO_API UOnlineEntitlement(const UOnlineEntitlement&); \
public: \
	NO_API virtual ~UOnlineEntitlement();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineEntitlement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineEntitlement(UOnlineEntitlement&&); \
	NO_API UOnlineEntitlement(const UOnlineEntitlement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineEntitlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineEntitlement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineEntitlement) \
	NO_API virtual ~UOnlineEntitlement();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_52_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlineEntitlement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
