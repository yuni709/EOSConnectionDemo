// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBPartyTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPartyId;
enum class EMemberConnectionStatus_ : uint8;
struct FUniqueNetIdRepl;
struct FVariantDataBP;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBPartyTypes_generated_h
#error "OSBPartyTypes.generated.h already included, missing '#pragma once' in OSBPartyTypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBPartyTypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLeaderId); \
	DECLARE_FUNCTION(execGetPartyTypeId); \
	DECLARE_FUNCTION(execGetPartyId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLeaderId); \
	DECLARE_FUNCTION(execGetPartyTypeId); \
	DECLARE_FUNCTION(execGetPartyId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParty(); \
	friend struct Z_Construct_UClass_UParty_Statics; \
public: \
	DECLARE_CLASS(UParty, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUParty(); \
	friend struct Z_Construct_UClass_UParty_Statics; \
public: \
	DECLARE_CLASS(UParty, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UParty)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParty(UParty&&); \
	NO_API UParty(const UParty&); \
public: \
	NO_API virtual ~UParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParty(UParty&&); \
	NO_API UParty(const UParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParty) \
	NO_API virtual ~UParty();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_17_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UParty>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_78_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms \
{ \
	FUniqueNetIdRepl ChangedUserId; \
	FString Attribute; \
	FString NewValue; \
	FString OldValue; \
}; \
static inline void FPartyMemberAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& PartyMemberAttributeChanged, FUniqueNetIdRepl ChangedUserId, const FString& Attribute, const FString& NewValue, const FString& OldValue) \
{ \
	_Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms Parms; \
	Parms.ChangedUserId=ChangedUserId; \
	Parms.Attribute=Attribute; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	PartyMemberAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_86_DELEGATE \
struct _Script_OnlineSubsystemBlueprints_eventPartyMemberConnectionStatusChanged_Parms \
{ \
	FUniqueNetIdRepl ChangedUserId; \
	EMemberConnectionStatus_ NewStatus; \
	EMemberConnectionStatus_ PreviousStatus; \
}; \
static inline void FPartyMemberConnectionStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& PartyMemberConnectionStatusChanged, FUniqueNetIdRepl ChangedUserId, EMemberConnectionStatus_ NewStatus, EMemberConnectionStatus_ PreviousStatus) \
{ \
	_Script_OnlineSubsystemBlueprints_eventPartyMemberConnectionStatusChanged_Parms Parms; \
	Parms.ChangedUserId=ChangedUserId; \
	Parms.NewStatus=NewStatus; \
	Parms.PreviousStatus=PreviousStatus; \
	PartyMemberConnectionStatusChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserAttribute); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetRealName); \
	DECLARE_FUNCTION(execGetUserId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserAttribute); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetRealName); \
	DECLARE_FUNCTION(execGetUserId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintPartyMember(); \
	friend struct Z_Construct_UClass_UBlueprintPartyMember_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPartyMember, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPartyMember)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintPartyMember(); \
	friend struct Z_Construct_UClass_UBlueprintPartyMember_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPartyMember, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPartyMember)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPartyMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPartyMember) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPartyMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPartyMember); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPartyMember(UBlueprintPartyMember&&); \
	NO_API UBlueprintPartyMember(const UBlueprintPartyMember&); \
public: \
	NO_API virtual ~UBlueprintPartyMember();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPartyMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPartyMember(UBlueprintPartyMember&&); \
	NO_API UBlueprintPartyMember(const UBlueprintPartyMember&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPartyMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPartyMember); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPartyMember) \
	NO_API virtual ~UBlueprintPartyMember();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_88_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UBlueprintPartyMember>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttribute);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttribute);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadablePartyData(); \
	friend struct Z_Construct_UClass_UReadablePartyData_Statics; \
public: \
	DECLARE_CLASS(UReadablePartyData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UReadablePartyData)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_INCLASS \
private: \
	static void StaticRegisterNativesUReadablePartyData(); \
	friend struct Z_Construct_UClass_UReadablePartyData_Statics; \
public: \
	DECLARE_CLASS(UReadablePartyData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UReadablePartyData)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadablePartyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadablePartyData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadablePartyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadablePartyData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadablePartyData(UReadablePartyData&&); \
	NO_API UReadablePartyData(const UReadablePartyData&); \
public: \
	NO_API virtual ~UReadablePartyData();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadablePartyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadablePartyData(UReadablePartyData&&); \
	NO_API UReadablePartyData(const UReadablePartyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadablePartyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadablePartyData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadablePartyData) \
	NO_API virtual ~UReadablePartyData();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_140_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UReadablePartyData>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAttribute); \
	DECLARE_FUNCTION(execSetAttribute);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAttribute); \
	DECLARE_FUNCTION(execSetAttribute);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMutablePartyData(); \
	friend struct Z_Construct_UClass_UMutablePartyData_Statics; \
public: \
	DECLARE_CLASS(UMutablePartyData, UReadablePartyData, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UMutablePartyData)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_INCLASS \
private: \
	static void StaticRegisterNativesUMutablePartyData(); \
	friend struct Z_Construct_UClass_UMutablePartyData_Statics; \
public: \
	DECLARE_CLASS(UMutablePartyData, UReadablePartyData, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UMutablePartyData)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMutablePartyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMutablePartyData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMutablePartyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMutablePartyData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMutablePartyData(UMutablePartyData&&); \
	NO_API UMutablePartyData(const UMutablePartyData&); \
public: \
	NO_API virtual ~UMutablePartyData();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMutablePartyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMutablePartyData(UMutablePartyData&&); \
	NO_API UMutablePartyData(const UMutablePartyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMutablePartyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMutablePartyData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMutablePartyData) \
	NO_API virtual ~UMutablePartyData();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_167_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UMutablePartyData>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToDebugString);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToDebugString);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPartyId(); \
	friend struct Z_Construct_UClass_UPartyId_Statics; \
public: \
	DECLARE_CLASS(UPartyId, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UPartyId)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_INCLASS \
private: \
	static void StaticRegisterNativesUPartyId(); \
	friend struct Z_Construct_UClass_UPartyId_Statics; \
public: \
	DECLARE_CLASS(UPartyId, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UPartyId)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPartyId(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPartyId) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPartyId); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyId); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPartyId(UPartyId&&); \
	NO_API UPartyId(const UPartyId&); \
public: \
	NO_API virtual ~UPartyId();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPartyId(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPartyId(UPartyId&&); \
	NO_API UPartyId(const UPartyId&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPartyId); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyId); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPartyId) \
	NO_API virtual ~UPartyId();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_191_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UPartyId>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToDebugString); \
	DECLARE_FUNCTION(execGetSourceUserId); \
	DECLARE_FUNCTION(execGetSourceDisplayName); \
	DECLARE_FUNCTION(execGetPartyId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToDebugString); \
	DECLARE_FUNCTION(execGetSourceUserId); \
	DECLARE_FUNCTION(execGetSourceDisplayName); \
	DECLARE_FUNCTION(execGetPartyId);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePartyJoinInfo(); \
	friend struct Z_Construct_UClass_UOnlinePartyJoinInfo_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartyJoinInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartyJoinInfo)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePartyJoinInfo(); \
	friend struct Z_Construct_UClass_UOnlinePartyJoinInfo_Statics; \
public: \
	DECLARE_CLASS(UOnlinePartyJoinInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePartyJoinInfo)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartyJoinInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartyJoinInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartyJoinInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartyJoinInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartyJoinInfo(UOnlinePartyJoinInfo&&); \
	NO_API UOnlinePartyJoinInfo(const UOnlinePartyJoinInfo&); \
public: \
	NO_API virtual ~UOnlinePartyJoinInfo();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePartyJoinInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePartyJoinInfo(UOnlinePartyJoinInfo&&); \
	NO_API UOnlinePartyJoinInfo(const UOnlinePartyJoinInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePartyJoinInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePartyJoinInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePartyJoinInfo) \
	NO_API virtual ~UOnlinePartyJoinInfo();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_223_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_INCLASS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UOnlinePartyJoinInfo>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_301_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics; \
	ONLINESUBSYSTEMBLUEPRINTS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FOnlinePartyConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h


#define FOREACH_ENUM_EMEMBERCONNECTIONSTATUS_(op) \
	op(EMemberConnectionStatus_::Uninitialized) \
	op(EMemberConnectionStatus_::Disconnected) \
	op(EMemberConnectionStatus_::Initializing) \
	op(EMemberConnectionStatus_::Connected) 

enum class EMemberConnectionStatus_ : uint8;
template<> struct TIsUEnumClass<EMemberConnectionStatus_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EMemberConnectionStatus_>();

#define FOREACH_ENUM_EMEMBEREXITEDREASON_(op) \
	op(EMemberExitedReason_::Unknown) \
	op(EMemberExitedReason_::Left) \
	op(EMemberExitedReason_::Removed) \
	op(EMemberExitedReason_::Kicked) 

enum class EMemberExitedReason_ : uint8;
template<> struct TIsUEnumClass<EMemberExitedReason_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EMemberExitedReason_>();

#define FOREACH_ENUM_EPARTYSTATE_(op) \
	op(EPartyState_::None) \
	op(EPartyState_::CreatePending) \
	op(EPartyState_::JoinPending) \
	op(EPartyState_::RejoinPending) \
	op(EPartyState_::LeavePending) \
	op(EPartyState_::Active) \
	op(EPartyState_::Disconnected) \
	op(EPartyState_::CleanUp) 

enum class EPartyState_ : uint8;
template<> struct TIsUEnumClass<EPartyState_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPartyState_>();

#define FOREACH_ENUM_EPARTYSYSTEMPERMISSIONS(op) \
	op(EPartySystemPermissions::Noone) \
	op(EPartySystemPermissions::Leader) \
	op(EPartySystemPermissions::Friends) \
	op(EPartySystemPermissions::Anyone) 

enum class EPartySystemPermissions : uint8;
template<> struct TIsUEnumClass<EPartySystemPermissions> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPartySystemPermissions>();

#define FOREACH_ENUM_EJOINREQUESTACTION_(op) \
	op(EJoinRequestAction_::Manual) \
	op(EJoinRequestAction_::AutoApprove) \
	op(EJoinRequestAction_::AutoReject) 

enum class EJoinRequestAction_ : uint8;
template<> struct TIsUEnumClass<EJoinRequestAction_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EJoinRequestAction_>();

#define FOREACH_ENUM_ECREATEPARTYCOMPLETIONRESULT_(op) \
	op(ECreatePartyCompletionResult_::UnknownClientFailure) \
	op(ECreatePartyCompletionResult_::AlreadyInPartyOfSpecifiedType) \
	op(ECreatePartyCompletionResult_::AlreadyCreatingParty) \
	op(ECreatePartyCompletionResult_::AlreadyInParty) \
	op(ECreatePartyCompletionResult_::FailedToCreateMucRoom) \
	op(ECreatePartyCompletionResult_::NoResponse) \
	op(ECreatePartyCompletionResult_::LoggedOut) \
	op(ECreatePartyCompletionResult_::NotPrimaryUser) \
	op(ECreatePartyCompletionResult_::UnknownInternalFailure) \
	op(ECreatePartyCompletionResult_::Succeeded) 

enum class ECreatePartyCompletionResult_ : uint8;
template<> struct TIsUEnumClass<ECreatePartyCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ECreatePartyCompletionResult_>();

#define FOREACH_ENUM_EJOINPARTYCOMPLETIONRESULT_(op) \
	op(EJoinPartyCompletionResult_::UnknownClientFailure) \
	op(EJoinPartyCompletionResult_::BadBuild) \
	op(EJoinPartyCompletionResult_::InvalidAccessKey) \
	op(EJoinPartyCompletionResult_::AlreadyInLeadersJoiningList) \
	op(EJoinPartyCompletionResult_::AlreadyInLeadersPartyRoster) \
	op(EJoinPartyCompletionResult_::NoSpace) \
	op(EJoinPartyCompletionResult_::NotApproved) \
	op(EJoinPartyCompletionResult_::RequesteeNotMember) \
	op(EJoinPartyCompletionResult_::RequesteeNotLeader) \
	op(EJoinPartyCompletionResult_::NoResponse) \
	op(EJoinPartyCompletionResult_::LoggedOut) \
	op(EJoinPartyCompletionResult_::UnableToRejoin) \
	op(EJoinPartyCompletionResult_::IncompatiblePlatform) \
	op(EJoinPartyCompletionResult_::AlreadyJoiningParty) \
	op(EJoinPartyCompletionResult_::AlreadyInParty) \
	op(EJoinPartyCompletionResult_::JoinInfoInvalid) \
	op(EJoinPartyCompletionResult_::AlreadyInPartyOfSpecifiedType) \
	op(EJoinPartyCompletionResult_::MessagingFailure) \
	op(EJoinPartyCompletionResult_::GameSpecificReason) \
	op(EJoinPartyCompletionResult_::UnknownInternalFailure) \
	op(EJoinPartyCompletionResult_::Succeeded) 

enum class EJoinPartyCompletionResult_ : uint8;
template<> struct TIsUEnumClass<EJoinPartyCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EJoinPartyCompletionResult_>();

#define FOREACH_ENUM_ELEAVEPARTYCOMPLETIONRESULT_(op) \
	op(ELeavePartyCompletionResult_::UnknownClientFailure) \
	op(ELeavePartyCompletionResult_::NoResponse) \
	op(ELeavePartyCompletionResult_::LoggedOut) \
	op(ELeavePartyCompletionResult_::UnknownParty) \
	op(ELeavePartyCompletionResult_::LeavePending) \
	op(ELeavePartyCompletionResult_::UnknownLocalUser) \
	op(ELeavePartyCompletionResult_::NotMember) \
	op(ELeavePartyCompletionResult_::MessagingFailure) \
	op(ELeavePartyCompletionResult_::UnknownTransportFailure) \
	op(ELeavePartyCompletionResult_::UnknownInternalFailure) \
	op(ELeavePartyCompletionResult_::Succeeded) 

enum class ELeavePartyCompletionResult_ : uint8;
template<> struct TIsUEnumClass<ELeavePartyCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ELeavePartyCompletionResult_>();

#define FOREACH_ENUM_EUPDATECONFIGCOMPLETIONRESULT_(op) \
	op(EUpdateConfigCompletionResult_::UnknownClientFailure) \
	op(EUpdateConfigCompletionResult_::UnknownParty) \
	op(EUpdateConfigCompletionResult_::LocalMemberNotMember) \
	op(EUpdateConfigCompletionResult_::LocalMemberNotLeader) \
	op(EUpdateConfigCompletionResult_::RemoteMemberNotMember) \
	op(EUpdateConfigCompletionResult_::MessagingFailure) \
	op(EUpdateConfigCompletionResult_::NoResponse) \
	op(EUpdateConfigCompletionResult_::UnknownInternalFailure) \
	op(EUpdateConfigCompletionResult_::Succeeded) 

enum class EUpdateConfigCompletionResult_ : uint8;
template<> struct TIsUEnumClass<EUpdateConfigCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EUpdateConfigCompletionResult_>();

#define FOREACH_ENUM_EREQUESTPARTYINVITATIONCOMPLETIONRESULT_(op) \
	op(ERequestPartyInvitationCompletionResult_::NotLoggedIn) \
	op(ERequestPartyInvitationCompletionResult_::InvitePending) \
	op(ERequestPartyInvitationCompletionResult_::AlreadyInParty) \
	op(ERequestPartyInvitationCompletionResult_::PartyFull) \
	op(ERequestPartyInvitationCompletionResult_::NoPermission) \
	op(ERequestPartyInvitationCompletionResult_::UnknownInternalFailure) \
	op(ERequestPartyInvitationCompletionResult_::Succeeded) 

enum class ERequestPartyInvitationCompletionResult_ : uint8;
template<> struct TIsUEnumClass<ERequestPartyInvitationCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ERequestPartyInvitationCompletionResult_>();

#define FOREACH_ENUM_ESENDPARTYINVITATIONCOMPLETIONRESULT_(op) \
	op(ESendPartyInvitationCompletionResult_::NotLoggedIn) \
	op(ESendPartyInvitationCompletionResult_::InvitePending) \
	op(ESendPartyInvitationCompletionResult_::AlreadyInParty) \
	op(ESendPartyInvitationCompletionResult_::PartyFull) \
	op(ESendPartyInvitationCompletionResult_::NoPermission) \
	op(ESendPartyInvitationCompletionResult_::RateLimited) \
	op(ESendPartyInvitationCompletionResult_::UnknownInternalFailure) \
	op(ESendPartyInvitationCompletionResult_::Succeeded) 

enum class ESendPartyInvitationCompletionResult_ : uint8;
template<> struct TIsUEnumClass<ESendPartyInvitationCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ESendPartyInvitationCompletionResult_>();

#define FOREACH_ENUM_EACCEPTPARTYINVITATIONCOMPLETIONRESULT_(op) \
	op(EAcceptPartyInvitationCompletionResult_::NotLoggedIn) \
	op(EAcceptPartyInvitationCompletionResult_::InvitePending) \
	op(EAcceptPartyInvitationCompletionResult_::AlreadyInParty) \
	op(EAcceptPartyInvitationCompletionResult_::PartyFull) \
	op(EAcceptPartyInvitationCompletionResult_::NoPermission) \
	op(EAcceptPartyInvitationCompletionResult_::UnknownInternalFailure) \
	op(EAcceptPartyInvitationCompletionResult_::Succeeded) 

enum class EAcceptPartyInvitationCompletionResult_ : uint8;
template<> struct TIsUEnumClass<EAcceptPartyInvitationCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EAcceptPartyInvitationCompletionResult_>();

#define FOREACH_ENUM_EREJECTPARTYINVITATIONCOMPLETIONRESULT_(op) \
	op(ERejectPartyInvitationCompletionResult_::NotLoggedIn) \
	op(ERejectPartyInvitationCompletionResult_::InvitePending) \
	op(ERejectPartyInvitationCompletionResult_::AlreadyInParty) \
	op(ERejectPartyInvitationCompletionResult_::PartyFull) \
	op(ERejectPartyInvitationCompletionResult_::NoPermission) \
	op(ERejectPartyInvitationCompletionResult_::UnknownInternalFailure) \
	op(ERejectPartyInvitationCompletionResult_::Succeeded) 

enum class ERejectPartyInvitationCompletionResult_ : uint8;
template<> struct TIsUEnumClass<ERejectPartyInvitationCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ERejectPartyInvitationCompletionResult_>();

#define FOREACH_ENUM_EKICKMEMBERCOMPLETIONRESULT_(op) \
	op(EKickMemberCompletionResult_::UnknownClientFailure) \
	op(EKickMemberCompletionResult_::UnknownParty) \
	op(EKickMemberCompletionResult_::LocalMemberNotMember) \
	op(EKickMemberCompletionResult_::LocalMemberNotLeader) \
	op(EKickMemberCompletionResult_::RemoteMemberNotMember) \
	op(EKickMemberCompletionResult_::MessagingFailure) \
	op(EKickMemberCompletionResult_::NoResponse) \
	op(EKickMemberCompletionResult_::LoggedOut) \
	op(EKickMemberCompletionResult_::UnknownInternalFailure) \
	op(EKickMemberCompletionResult_::Succeeded) 

enum class EKickMemberCompletionResult_ : uint8;
template<> struct TIsUEnumClass<EKickMemberCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EKickMemberCompletionResult_>();

#define FOREACH_ENUM_EPROMOTEMEMBERCOMPLETIONRESULT_(op) \
	op(EPromoteMemberCompletionResult_::UnknownClientFailure) \
	op(EPromoteMemberCompletionResult_::UnknownServiceFailure) \
	op(EPromoteMemberCompletionResult_::UnknownParty) \
	op(EPromoteMemberCompletionResult_::LocalMemberNotMember) \
	op(EPromoteMemberCompletionResult_::LocalMemberNotLeader) \
	op(EPromoteMemberCompletionResult_::PromotionAlreadyPending) \
	op(EPromoteMemberCompletionResult_::TargetIsSelf) \
	op(EPromoteMemberCompletionResult_::TargetNotMember) \
	op(EPromoteMemberCompletionResult_::MessagingFailure) \
	op(EPromoteMemberCompletionResult_::NoResponse) \
	op(EPromoteMemberCompletionResult_::LoggedOut) \
	op(EPromoteMemberCompletionResult_::UnknownInternalFailure) \
	op(EPromoteMemberCompletionResult_::Succeeded) 

enum class EPromoteMemberCompletionResult_ : uint8;
template<> struct TIsUEnumClass<EPromoteMemberCompletionResult_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPromoteMemberCompletionResult_>();

#define FOREACH_ENUM_EINVITATIONRESPONSE_(op) \
	op(EInvitationResponse_::UnknownFailure) \
	op(EInvitationResponse_::BadBuild) \
	op(EInvitationResponse_::Rejected) \
	op(EInvitationResponse_::Accepted) 

enum class EInvitationResponse_ : uint8;
template<> struct TIsUEnumClass<EInvitationResponse_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EInvitationResponse_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
