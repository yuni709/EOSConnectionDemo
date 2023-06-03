// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/OSBExternalUITypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOnlineExternalUISubsystem;
#ifdef ONLINESUBSYSTEMBLUEPRINTS_OSBExternalUITypes_generated_h
#error "OSBExternalUITypes.generated.h already included, missing '#pragma once' in OSBExternalUITypes.h"
#endif
#define ONLINESUBSYSTEMBLUEPRINTS_OSBExternalUITypes_generated_h

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExternalUIFlowHandlerRegistration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FExternalUIFlowHandlerRegistration>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoginFlowResultBP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FLoginFlowResultBP>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_SPARSE_DATA
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_RPC_WRAPPERS \
	virtual bool OnCreateAccountFlowUIRequired_Implementation(const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID) { return false; }; \
	virtual bool OnLoginFlowUIRequired_Implementation(const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID) { return false; }; \
 \
	DECLARE_FUNCTION(execOnCreateAccountFlowUIRequired); \
	DECLARE_FUNCTION(execOnLoginFlowUIRequired);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnCreateAccountFlowUIRequired_Implementation(const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID) { return false; }; \
	virtual bool OnLoginFlowUIRequired_Implementation(const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID) { return false; }; \
 \
	DECLARE_FUNCTION(execOnCreateAccountFlowUIRequired); \
	DECLARE_FUNCTION(execOnLoginFlowUIRequired);


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_ACCESSORS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_CALLBACK_WRAPPERS
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalUIFlowHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalUIFlowHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalUIFlowHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalUIFlowHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExternalUIFlowHandler(UExternalUIFlowHandler&&); \
	NO_API UExternalUIFlowHandler(const UExternalUIFlowHandler&); \
public: \
	NO_API virtual ~UExternalUIFlowHandler();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalUIFlowHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExternalUIFlowHandler(UExternalUIFlowHandler&&); \
	NO_API UExternalUIFlowHandler(const UExternalUIFlowHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalUIFlowHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalUIFlowHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalUIFlowHandler) \
	NO_API virtual ~UExternalUIFlowHandler();


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExternalUIFlowHandler(); \
	friend struct Z_Construct_UClass_UExternalUIFlowHandler_Statics; \
public: \
	DECLARE_CLASS(UExternalUIFlowHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OnlineSubsystemBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UExternalUIFlowHandler)


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExternalUIFlowHandler() {} \
public: \
	typedef UExternalUIFlowHandler UClassType; \
	typedef IExternalUIFlowHandler ThisClass; \
	static bool Execute_OnCreateAccountFlowUIRequired(UObject* O, const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID); \
	static bool Execute_OnLoginFlowUIRequired(UObject* O, const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_INCLASS_IINTERFACE \
protected: \
	virtual ~IExternalUIFlowHandler() {} \
public: \
	typedef UExternalUIFlowHandler UClassType; \
	typedef IExternalUIFlowHandler ThisClass; \
	static bool Execute_OnCreateAccountFlowUIRequired(UObject* O, const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID); \
	static bool Execute_OnLoginFlowUIRequired(UObject* O, const FString& RequestedURL, UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_51_PROLOG
#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_RPC_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_CALLBACK_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_SPARSE_DATA \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_ACCESSORS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_CALLBACK_WRAPPERS \
	FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<class UExternalUIFlowHandler>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShowWebUrlParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FShowWebUrlParameters>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShowStoreParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FShowStoreParameters>();

#define FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShowSendMessageParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<struct FShowSendMessageParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBExternalUITypes_h


#define FOREACH_ENUM_EPLATFORMMESSAGETYPE_(op) \
	op(EPlatformMessageType_::EmptyStore) \
	op(EPlatformMessageType_::ChatRestricted) \
	op(EPlatformMessageType_::UGCRestricted) 

enum class EPlatformMessageType_ : uint8;
template<> struct TIsUEnumClass<EPlatformMessageType_> { enum { Value = true }; };
template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPlatformMessageType_>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
