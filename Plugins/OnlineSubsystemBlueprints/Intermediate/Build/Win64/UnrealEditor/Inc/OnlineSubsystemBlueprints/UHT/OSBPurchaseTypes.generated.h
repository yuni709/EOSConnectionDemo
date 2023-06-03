// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBPurchaseTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPurchaseTransactionState_ : uint8;
struct FReceiptOfferEntryBP;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBPurchaseTypes_generated_h
#error "OSBPurchaseTypes.generated.h already included, missing '#pragma once' in OSBPurchaseTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBPurchaseTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FRedeemCodeRequestBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineItemInfoBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FLineItemInfoBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FReceiptOfferEntryBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReceiptOffers); \
	DECLARE_FUNCTION(execGetPurchaseTransactionState); \
	DECLARE_FUNCTION(execGetTransactionId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReceiptOffers); \
	DECLARE_FUNCTION(execGetPurchaseTransactionState); \
	DECLARE_FUNCTION(execGetTransactionId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPurchaseReceipt(); \
	friend struct Z_Construct_UClass_UPurchaseReceipt_Statics; \
public: \
	DECLARE_CLASS(UPurchaseReceipt, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UPurchaseReceipt)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUPurchaseReceipt(); \
	friend struct Z_Construct_UClass_UPurchaseReceipt_Statics; \
public: \
	DECLARE_CLASS(UPurchaseReceipt, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UPurchaseReceipt)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPurchaseReceipt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPurchaseReceipt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPurchaseReceipt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPurchaseReceipt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPurchaseReceipt(UPurchaseReceipt&&); \
	NO_API UPurchaseReceipt(const UPurchaseReceipt&); \
public: \
	NO_API virtual ~UPurchaseReceipt();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPurchaseReceipt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPurchaseReceipt(UPurchaseReceipt&&); \
	NO_API UPurchaseReceipt(const UPurchaseReceipt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPurchaseReceipt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPurchaseReceipt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPurchaseReceipt) \
	NO_API virtual ~UPurchaseReceipt();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_99_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UPurchaseReceipt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h


#define FOREACH_ENUM_EPURCHASETRANSACTIONSTATE_(op) \
	op(EPurchaseTransactionState_::NotStarted) \
	op(EPurchaseTransactionState_::Processing) \
	op(EPurchaseTransactionState_::Purchased) \
	op(EPurchaseTransactionState_::Failed) \
	op(EPurchaseTransactionState_::Deferred) \
	op(EPurchaseTransactionState_::Canceled) \
	op(EPurchaseTransactionState_::Restored) \
	op(EPurchaseTransactionState_::NotAllowed) \
	op(EPurchaseTransactionState_::Invalid) 

enum class EPurchaseTransactionState_ : uint8;
template<> struct TIsUEnumClass<EPurchaseTransactionState_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPurchaseTransactionState_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
