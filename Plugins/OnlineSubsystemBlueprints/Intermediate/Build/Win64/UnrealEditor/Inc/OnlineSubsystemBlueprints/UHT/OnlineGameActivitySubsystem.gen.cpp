// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBGameActivityTypes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineGameActivitySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome_();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventGameActivity_GameActivityActivationRequested_BP_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			FOptionalOnlineSessionSearchResultBP SessionInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventGameActivity_GameActivityActivationRequested_BP_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventGameActivity_GameActivityActivationRequested_BP_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventGameActivity_GameActivityActivationRequested_BP_Parms, SessionInfo), Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP, METADATA_PARAMS(nullptr, 0) }; // 2002691867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::NewProp_SessionInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "GameActivity_GameActivityActivationRequested_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventGameActivity_GameActivityActivationRequested_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystem::execUpdatePlayerLocation)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_STRUCT_REF(FOnlineActivityPlayerLocationBP,Z_Param_Out_ActivityPlayerLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerLocation(Z_Param_LocalUserId,Z_Param_Out_ActivityPlayerLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineGameActivitySubsystem::StaticRegisterNativesUOnlineGameActivitySubsystem()
	{
		UClass* Class = UOnlineGameActivitySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSubsystemAvailable", &UOnlineGameActivitySubsystem::execIsSubsystemAvailable },
			{ "UpdatePlayerLocation", &UOnlineGameActivitySubsystem::execUpdatePlayerLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineGameActivitySubsystem_eventIsSubsystemAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineGameActivitySubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineGameActivitySubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::OnlineGameActivitySubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics
	{
		struct OnlineGameActivitySubsystem_eventUpdatePlayerLocation_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineActivityPlayerLocationBP ActivityPlayerLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityPlayerLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystem_eventUpdatePlayerLocation_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::NewProp_ActivityPlayerLocation = { "ActivityPlayerLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystem_eventUpdatePlayerLocation_Parms, ActivityPlayerLocation), Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP, METADATA_PARAMS(nullptr, 0) }; // 3889927454
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::NewProp_ActivityPlayerLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystem, nullptr, "UpdatePlayerLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::OnlineGameActivitySubsystem_eventUpdatePlayerLocation_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameActivitySubsystem);
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister()
	{
		return UOnlineGameActivitySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameActivityActivationRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameActivityActivationRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3781480319
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystem_UpdatePlayerLocation, "UpdatePlayerLocation" }, // 893454459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::NewProp_OnGameActivityActivationRequested_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::NewProp_OnGameActivityActivationRequested = { "OnGameActivityActivationRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystem, OnGameActivityActivationRequested), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_GameActivity_GameActivityActivationRequested_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::NewProp_OnGameActivityActivationRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::NewProp_OnGameActivityActivationRequested_MetaData)) }; // 920549178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::NewProp_OnGameActivityActivationRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameActivitySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::ClassParams = {
		&UOnlineGameActivitySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameActivitySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameActivitySubsystem.OuterSingleton, Z_Construct_UClass_UOnlineGameActivitySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameActivitySubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameActivitySubsystem>()
	{
		return UOnlineGameActivitySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameActivitySubsystem);
	UOnlineGameActivitySubsystem::~UOnlineGameActivitySubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemStartActivityCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemStartActivityCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemStartActivityCallbackPin_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemStartActivityCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemStartActivityCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystemStartActivity::execStartActivity)
	{
		P_GET_OBJECT(UOnlineGameActivitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivityId);
		P_GET_TMAP(FString,FVariantDataBP,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameActivitySubsystemStartActivity**)Z_Param__Result=UOnlineGameActivitySubsystemStartActivity::StartActivity(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ActivityId,Z_Param_Params);
		P_NATIVE_END;
	}
	void UOnlineGameActivitySubsystemStartActivity::StaticRegisterNativesUOnlineGameActivitySubsystemStartActivity()
	{
		UClass* Class = UOnlineGameActivitySubsystemStartActivity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartActivity", &UOnlineGameActivitySubsystemStartActivity::execStartActivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics
	{
		struct OnlineGameActivitySubsystemStartActivity_eventStartActivity_Parms
		{
			UOnlineGameActivitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			TMap<FString,FVariantDataBP> Params;
			UOnlineGameActivitySubsystemStartActivity* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemStartActivity_eventStartActivity_Parms, Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemStartActivity_eventStartActivity_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemStartActivity_eventStartActivity_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemStartActivity_eventStartActivity_Parms, Params), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemStartActivity_eventStartActivity_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity, nullptr, "StartActivity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::OnlineGameActivitySubsystemStartActivity_eventStartActivity_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameActivitySubsystemStartActivity);
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_NoRegister()
	{
		return UOnlineGameActivitySubsystemStartActivity::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartActivityComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartActivityComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ActivityId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ActivityId;
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Parms_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__Parms_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Parms_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp___Store__Parms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystemStartActivity_StartActivity, "StartActivity" }, // 1246016173
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemStartActivity, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnCallFailed_MetaData)) }; // 1406141809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnStartActivityComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnStartActivityComplete = { "OnStartActivityComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemStartActivity, OnStartActivityComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemStartActivityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnStartActivityComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnStartActivityComplete_MetaData)) }; // 1406141809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemStartActivity, __Store__Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemStartActivity, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemStartActivity, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__ActivityId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__ActivityId = { "__Store__ActivityId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemStartActivity, __Store__ActivityId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__ActivityId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms_ValueProp = { "__Store__Parms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms_Key_KeyProp = { "__Store__Parms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms = { "__Store__Parms", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemStartActivity, __Store__Parms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp_OnStartActivityComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::NewProp___Store__Parms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameActivitySubsystemStartActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::ClassParams = {
		&UOnlineGameActivitySubsystemStartActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameActivitySubsystemStartActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameActivitySubsystemStartActivity.OuterSingleton, Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameActivitySubsystemStartActivity.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameActivitySubsystemStartActivity>()
	{
		return UOnlineGameActivitySubsystemStartActivity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameActivitySubsystemStartActivity);
	UOnlineGameActivitySubsystemStartActivity::~UOnlineGameActivitySubsystemStartActivity() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemEndActivityCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			EOnlineActivityOutcome_ Outcome;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemEndActivityCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemEndActivityCallbackPin_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemEndActivityCallbackPin_Parms, Outcome), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome_, METADATA_PARAMS(nullptr, 0) }; // 1448097034
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemEndActivityCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemEndActivityCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystemEndActivity::execEndActivity)
	{
		P_GET_OBJECT(UOnlineGameActivitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivityId);
		P_GET_ENUM(EOnlineActivityOutcome_,Z_Param_ActivityOutcome);
		P_GET_TMAP(FString,FVariantDataBP,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameActivitySubsystemEndActivity**)Z_Param__Result=UOnlineGameActivitySubsystemEndActivity::EndActivity(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ActivityId,EOnlineActivityOutcome_(Z_Param_ActivityOutcome),Z_Param_Params);
		P_NATIVE_END;
	}
	void UOnlineGameActivitySubsystemEndActivity::StaticRegisterNativesUOnlineGameActivitySubsystemEndActivity()
	{
		UClass* Class = UOnlineGameActivitySubsystemEndActivity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndActivity", &UOnlineGameActivitySubsystemEndActivity::execEndActivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics
	{
		struct OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms
		{
			UOnlineGameActivitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			EOnlineActivityOutcome_ ActivityOutcome;
			TMap<FString,FVariantDataBP> Params;
			UOnlineGameActivitySubsystemEndActivity* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivityOutcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivityOutcome;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms, Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ActivityOutcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ActivityOutcome = { "ActivityOutcome", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms, ActivityOutcome), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome_, METADATA_PARAMS(nullptr, 0) }; // 1448097034
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms, Params), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ActivityOutcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ActivityOutcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity, nullptr, "EndActivity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::OnlineGameActivitySubsystemEndActivity_eventEndActivity_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameActivitySubsystemEndActivity);
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_NoRegister()
	{
		return UOnlineGameActivitySubsystemEndActivity::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndActivityComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndActivityComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ActivityId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ActivityId;
		static const UECodeGen_Private::FBytePropertyParams NewProp___Store__ActivityOutcome_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ActivityOutcome_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp___Store__ActivityOutcome;
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Parms_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__Parms_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Parms_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp___Store__Parms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystemEndActivity_EndActivity, "EndActivity" }, // 2249295885
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnCallFailed_MetaData)) }; // 3839203102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnEndActivityComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnEndActivityComplete = { "OnEndActivityComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, OnEndActivityComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemEndActivityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnEndActivityComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnEndActivityComplete_MetaData)) }; // 3839203102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, __Store__Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityId = { "__Store__ActivityId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, __Store__ActivityId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityOutcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityOutcome_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityOutcome = { "__Store__ActivityOutcome", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, __Store__ActivityOutcome), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome_, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityOutcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityOutcome_MetaData)) }; // 1448097034
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms_ValueProp = { "__Store__Parms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms_Key_KeyProp = { "__Store__Parms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms = { "__Store__Parms", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemEndActivity, __Store__Parms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp_OnEndActivityComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityOutcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__ActivityOutcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::NewProp___Store__Parms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameActivitySubsystemEndActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::ClassParams = {
		&UOnlineGameActivitySubsystemEndActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameActivitySubsystemEndActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameActivitySubsystemEndActivity.OuterSingleton, Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameActivitySubsystemEndActivity.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameActivitySubsystemEndActivity>()
	{
		return UOnlineGameActivitySubsystemEndActivity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameActivitySubsystemEndActivity);
	UOnlineGameActivitySubsystemEndActivity::~UOnlineGameActivitySubsystemEndActivity() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystemResetAllActiveActivities::execResetAllActiveActivities)
	{
		P_GET_OBJECT(UOnlineGameActivitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameActivitySubsystemResetAllActiveActivities**)Z_Param__Result=UOnlineGameActivitySubsystemResetAllActiveActivities::ResetAllActiveActivities(Z_Param_Subsystem,Z_Param_LocalUserId);
		P_NATIVE_END;
	}
	void UOnlineGameActivitySubsystemResetAllActiveActivities::StaticRegisterNativesUOnlineGameActivitySubsystemResetAllActiveActivities()
	{
		UClass* Class = UOnlineGameActivitySubsystemResetAllActiveActivities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetAllActiveActivities", &UOnlineGameActivitySubsystemResetAllActiveActivities::execResetAllActiveActivities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics
	{
		struct OnlineGameActivitySubsystemResetAllActiveActivities_eventResetAllActiveActivities_Parms
		{
			UOnlineGameActivitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			UOnlineGameActivitySubsystemResetAllActiveActivities* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResetAllActiveActivities_eventResetAllActiveActivities_Parms, Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResetAllActiveActivities_eventResetAllActiveActivities_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResetAllActiveActivities_eventResetAllActiveActivities_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities, nullptr, "ResetAllActiveActivities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::OnlineGameActivitySubsystemResetAllActiveActivities_eventResetAllActiveActivities_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameActivitySubsystemResetAllActiveActivities);
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_NoRegister()
	{
		return UOnlineGameActivitySubsystemResetAllActiveActivities::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResetAllActiveActivitiesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResetAllActiveActivitiesComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities, "ResetAllActiveActivities" }, // 2469985055
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResetAllActiveActivities, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnCallFailed_MetaData)) }; // 2114813015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnResetAllActiveActivitiesComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnResetAllActiveActivitiesComplete = { "OnResetAllActiveActivitiesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResetAllActiveActivities, OnResetAllActiveActivitiesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnResetAllActiveActivitiesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnResetAllActiveActivitiesComplete_MetaData)) }; // 2114813015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp_OnResetAllActiveActivitiesComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::NewProp___Store__LocalUserId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameActivitySubsystemResetAllActiveActivities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::ClassParams = {
		&UOnlineGameActivitySubsystemResetAllActiveActivities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities.OuterSingleton, Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameActivitySubsystemResetAllActiveActivities>()
	{
		return UOnlineGameActivitySubsystemResetAllActiveActivities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameActivitySubsystemResetAllActiveActivities);
	UOnlineGameActivitySubsystemResetAllActiveActivities::~UOnlineGameActivitySubsystemResetAllActiveActivities() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResumeActivityCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResumeActivityCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResumeActivityCallbackPin_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResumeActivityCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemResumeActivityCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystemResumeActivity::execResumeActivity)
	{
		P_GET_OBJECT(UOnlineGameActivitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivityId);
		P_GET_STRUCT(FOnlineActivityTasksToResetBP,Z_Param_TasksToReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameActivitySubsystemResumeActivity**)Z_Param__Result=UOnlineGameActivitySubsystemResumeActivity::ResumeActivity(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ActivityId,Z_Param_TasksToReset);
		P_NATIVE_END;
	}
	void UOnlineGameActivitySubsystemResumeActivity::StaticRegisterNativesUOnlineGameActivitySubsystemResumeActivity()
	{
		UClass* Class = UOnlineGameActivitySubsystemResumeActivity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResumeActivity", &UOnlineGameActivitySubsystemResumeActivity::execResumeActivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics
	{
		struct OnlineGameActivitySubsystemResumeActivity_eventResumeActivity_Parms
		{
			UOnlineGameActivitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			FOnlineActivityTasksToResetBP TasksToReset;
			UOnlineGameActivitySubsystemResumeActivity* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksToReset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResumeActivity_eventResumeActivity_Parms, Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResumeActivity_eventResumeActivity_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResumeActivity_eventResumeActivity_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_TasksToReset = { "TasksToReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResumeActivity_eventResumeActivity_Parms, TasksToReset), Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP, METADATA_PARAMS(nullptr, 0) }; // 875293676
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemResumeActivity_eventResumeActivity_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_TasksToReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity, nullptr, "ResumeActivity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::OnlineGameActivitySubsystemResumeActivity_eventResumeActivity_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameActivitySubsystemResumeActivity);
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_NoRegister()
	{
		return UOnlineGameActivitySubsystemResumeActivity::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResumeActivityComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResumeActivityComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ActivityId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ActivityId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__TasksToReset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__TasksToReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystemResumeActivity_ResumeActivity, "ResumeActivity" }, // 3561117985
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResumeActivity, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnCallFailed_MetaData)) }; // 3943164411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnResumeActivityComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnResumeActivityComplete = { "OnResumeActivityComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResumeActivity, OnResumeActivityComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemResumeActivityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnResumeActivityComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnResumeActivityComplete_MetaData)) }; // 3943164411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResumeActivity, __Store__Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResumeActivity, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResumeActivity, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__ActivityId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__ActivityId = { "__Store__ActivityId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResumeActivity, __Store__ActivityId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__ActivityId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__TasksToReset_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__TasksToReset = { "__Store__TasksToReset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemResumeActivity, __Store__TasksToReset), Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__TasksToReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__TasksToReset_MetaData)) }; // 875293676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp_OnResumeActivityComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::NewProp___Store__TasksToReset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameActivitySubsystemResumeActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::ClassParams = {
		&UOnlineGameActivitySubsystemResumeActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResumeActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResumeActivity.OuterSingleton, Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResumeActivity.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameActivitySubsystemResumeActivity>()
	{
		return UOnlineGameActivitySubsystemResumeActivity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameActivitySubsystemResumeActivity);
	UOnlineGameActivitySubsystemResumeActivity::~UOnlineGameActivitySubsystemResumeActivity() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystemSetActivityAvailability::execSetActivityAvailability)
	{
		P_GET_OBJECT(UOnlineGameActivitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivityId);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameActivitySubsystemSetActivityAvailability**)Z_Param__Result=UOnlineGameActivitySubsystemSetActivityAvailability::SetActivityAvailability(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ActivityId,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void UOnlineGameActivitySubsystemSetActivityAvailability::StaticRegisterNativesUOnlineGameActivitySubsystemSetActivityAvailability()
	{
		UClass* Class = UOnlineGameActivitySubsystemSetActivityAvailability::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetActivityAvailability", &UOnlineGameActivitySubsystemSetActivityAvailability::execSetActivityAvailability },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics
	{
		struct OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms
		{
			UOnlineGameActivitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ActivityId;
			bool bEnabled;
			UOnlineGameActivitySubsystemSetActivityAvailability* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms, Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms, ActivityId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms), &Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability, nullptr, "SetActivityAvailability", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::OnlineGameActivitySubsystemSetActivityAvailability_eventSetActivityAvailability_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameActivitySubsystemSetActivityAvailability);
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_NoRegister()
	{
		return UOnlineGameActivitySubsystemSetActivityAvailability::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSetActivityAvailabilityComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetActivityAvailabilityComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ActivityId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ActivityId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bEnabled_MetaData[];
#endif
		static void NewProp___Store__bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability, "SetActivityAvailability" }, // 1760410146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityAvailability, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnCallFailed_MetaData)) }; // 3220347422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnSetActivityAvailabilityComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnSetActivityAvailabilityComplete = { "OnSetActivityAvailabilityComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityAvailability, OnSetActivityAvailabilityComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnSetActivityAvailabilityComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnSetActivityAvailabilityComplete_MetaData)) }; // 3220347422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__ActivityId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__ActivityId = { "__Store__ActivityId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__ActivityId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__ActivityId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__bEnabled_SetBit(void* Obj)
	{
		((UOnlineGameActivitySubsystemSetActivityAvailability*)Obj)->__Store__bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__bEnabled = { "__Store__bEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineGameActivitySubsystemSetActivityAvailability), &Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp_OnSetActivityAvailabilityComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::NewProp___Store__bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameActivitySubsystemSetActivityAvailability>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::ClassParams = {
		&UOnlineGameActivitySubsystemSetActivityAvailability::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityAvailability.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityAvailability.OuterSingleton, Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityAvailability.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameActivitySubsystemSetActivityAvailability>()
	{
		return UOnlineGameActivitySubsystemSetActivityAvailability::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameActivitySubsystemSetActivityAvailability);
	UOnlineGameActivitySubsystemSetActivityAvailability::~UOnlineGameActivitySubsystemSetActivityAvailability() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityPriorityCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityPriorityCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityPriorityCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameActivitySubsystemSetActivityPriorityCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameActivitySubsystemSetActivityPriority::execSetActivityPriority)
	{
		P_GET_OBJECT(UOnlineGameActivitySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TMAP(FString,int32,Z_Param_PrioritizedActivities);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameActivitySubsystemSetActivityPriority**)Z_Param__Result=UOnlineGameActivitySubsystemSetActivityPriority::SetActivityPriority(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_PrioritizedActivities);
		P_NATIVE_END;
	}
	void UOnlineGameActivitySubsystemSetActivityPriority::StaticRegisterNativesUOnlineGameActivitySubsystemSetActivityPriority()
	{
		UClass* Class = UOnlineGameActivitySubsystemSetActivityPriority::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetActivityPriority", &UOnlineGameActivitySubsystemSetActivityPriority::execSetActivityPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics
	{
		struct OnlineGameActivitySubsystemSetActivityPriority_eventSetActivityPriority_Parms
		{
			UOnlineGameActivitySubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TMap<FString,int32> PrioritizedActivities;
			UOnlineGameActivitySubsystemSetActivityPriority* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrioritizedActivities_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrioritizedActivities_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_PrioritizedActivities;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityPriority_eventSetActivityPriority_Parms, Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityPriority_eventSetActivityPriority_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_PrioritizedActivities_ValueProp = { "PrioritizedActivities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_PrioritizedActivities_Key_KeyProp = { "PrioritizedActivities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_PrioritizedActivities = { "PrioritizedActivities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityPriority_eventSetActivityPriority_Parms, PrioritizedActivities), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameActivitySubsystemSetActivityPriority_eventSetActivityPriority_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_PrioritizedActivities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_PrioritizedActivities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_PrioritizedActivities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority, nullptr, "SetActivityPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::OnlineGameActivitySubsystemSetActivityPriority_eventSetActivityPriority_Parms), Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameActivitySubsystemSetActivityPriority);
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_NoRegister()
	{
		return UOnlineGameActivitySubsystemSetActivityPriority::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSetActivityPriorityComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetActivityPriorityComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FIntPropertyParams NewProp___Store__PrioritizedActivities_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__PrioritizedActivities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__PrioritizedActivities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp___Store__PrioritizedActivities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority, "SetActivityPriority" }, // 785917754
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityPriority, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnCallFailed_MetaData)) }; // 432583194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnSetActivityPriorityComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnSetActivityPriorityComplete = { "OnSetActivityPriorityComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityPriority, OnSetActivityPriorityComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameActivitySubsystemSetActivityPriorityCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnSetActivityPriorityComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnSetActivityPriorityComplete_MetaData)) }; // 432583194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityPriority, __Store__Subsystem), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityPriority, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityPriority, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities_ValueProp = { "__Store__PrioritizedActivities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities_Key_KeyProp = { "__Store__PrioritizedActivities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameActivitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities = { "__Store__PrioritizedActivities", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameActivitySubsystemSetActivityPriority, __Store__PrioritizedActivities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp_OnSetActivityPriorityComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::NewProp___Store__PrioritizedActivities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameActivitySubsystemSetActivityPriority>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::ClassParams = {
		&UOnlineGameActivitySubsystemSetActivityPriority::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityPriority.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityPriority.OuterSingleton, Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityPriority.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameActivitySubsystemSetActivityPriority>()
	{
		return UOnlineGameActivitySubsystemSetActivityPriority::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameActivitySubsystemSetActivityPriority);
	UOnlineGameActivitySubsystemSetActivityPriority::~UOnlineGameActivitySubsystemSetActivityPriority() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameActivitySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameActivitySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineGameActivitySubsystem, UOnlineGameActivitySubsystem::StaticClass, TEXT("UOnlineGameActivitySubsystem"), &Z_Registration_Info_UClass_UOnlineGameActivitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameActivitySubsystem), 3467140614U) },
		{ Z_Construct_UClass_UOnlineGameActivitySubsystemStartActivity, UOnlineGameActivitySubsystemStartActivity::StaticClass, TEXT("UOnlineGameActivitySubsystemStartActivity"), &Z_Registration_Info_UClass_UOnlineGameActivitySubsystemStartActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameActivitySubsystemStartActivity), 2522994532U) },
		{ Z_Construct_UClass_UOnlineGameActivitySubsystemEndActivity, UOnlineGameActivitySubsystemEndActivity::StaticClass, TEXT("UOnlineGameActivitySubsystemEndActivity"), &Z_Registration_Info_UClass_UOnlineGameActivitySubsystemEndActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameActivitySubsystemEndActivity), 2502429932U) },
		{ Z_Construct_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities, UOnlineGameActivitySubsystemResetAllActiveActivities::StaticClass, TEXT("UOnlineGameActivitySubsystemResetAllActiveActivities"), &Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResetAllActiveActivities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameActivitySubsystemResetAllActiveActivities), 500463100U) },
		{ Z_Construct_UClass_UOnlineGameActivitySubsystemResumeActivity, UOnlineGameActivitySubsystemResumeActivity::StaticClass, TEXT("UOnlineGameActivitySubsystemResumeActivity"), &Z_Registration_Info_UClass_UOnlineGameActivitySubsystemResumeActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameActivitySubsystemResumeActivity), 2395580617U) },
		{ Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityAvailability, UOnlineGameActivitySubsystemSetActivityAvailability::StaticClass, TEXT("UOnlineGameActivitySubsystemSetActivityAvailability"), &Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameActivitySubsystemSetActivityAvailability), 2324890788U) },
		{ Z_Construct_UClass_UOnlineGameActivitySubsystemSetActivityPriority, UOnlineGameActivitySubsystemSetActivityPriority::StaticClass, TEXT("UOnlineGameActivitySubsystemSetActivityPriority"), &Z_Registration_Info_UClass_UOnlineGameActivitySubsystemSetActivityPriority, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameActivitySubsystemSetActivityPriority), 2249165369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameActivitySubsystem_h_2624211719(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameActivitySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameActivitySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
