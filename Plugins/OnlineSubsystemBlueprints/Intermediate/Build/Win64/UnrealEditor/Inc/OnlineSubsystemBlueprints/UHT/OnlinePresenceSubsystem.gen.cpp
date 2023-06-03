// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineUserPresenceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePresenceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePresenceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceData();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventPresence_PresenceReceived_BP_Parms
		{
			FUniqueNetIdRepl UserId;
			FOnlineUserPresenceData Presence;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Presence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPresence_PresenceReceived_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPresence_PresenceReceived_BP_Parms, Presence), Z_Construct_UScriptStruct_FOnlineUserPresenceData, METADATA_PARAMS(nullptr, 0) }; // 1165248872
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::NewProp_Presence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Presence_PresenceReceived_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventPresence_PresenceReceived_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventPresence_PresenceArrayUpdated_BP_Parms
		{
			FUniqueNetIdRepl UserId;
			TArray<FOnlineUserPresenceData> NewPresenceArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPresenceArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPresenceArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewPresenceArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPresence_PresenceArrayUpdated_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_NewPresenceArray_Inner = { "NewPresenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineUserPresenceData, METADATA_PARAMS(nullptr, 0) }; // 1165248872
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_NewPresenceArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_NewPresenceArray = { "NewPresenceArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPresence_PresenceArrayUpdated_BP_Parms, NewPresenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_NewPresenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_NewPresenceArray_MetaData)) }; // 1165248872
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_NewPresenceArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::NewProp_NewPresenceArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Presence_PresenceArrayUpdated_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventPresence_PresenceArrayUpdated_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePresenceSubsystem::execGetCachedPresenceForApp)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_User);
		P_GET_PROPERTY(FStrProperty,Z_Param_AppId);
		P_GET_STRUCT_REF(FOnlineUserPresenceData,Z_Param_Out_OutPresence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineCachedResult_*)Z_Param__Result=P_THIS->GetCachedPresenceForApp(Z_Param_LocalUserId,Z_Param_User,Z_Param_AppId,Z_Param_Out_OutPresence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceSubsystem::execGetCachedPresence)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_User);
		P_GET_STRUCT_REF(FOnlineUserPresenceData,Z_Param_Out_OutPresence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineCachedResult_*)Z_Param__Result=P_THIS->GetCachedPresence(Z_Param_User,Z_Param_Out_OutPresence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlinePresenceSubsystem::StaticRegisterNativesUOnlinePresenceSubsystem()
	{
		UClass* Class = UOnlinePresenceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedPresence", &UOnlinePresenceSubsystem::execGetCachedPresence },
			{ "GetCachedPresenceForApp", &UOnlinePresenceSubsystem::execGetCachedPresenceForApp },
			{ "IsSubsystemAvailable", &UOnlinePresenceSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics
	{
		struct OnlinePresenceSubsystem_eventGetCachedPresence_Parms
		{
			FUniqueNetIdRepl User;
			FOnlineUserPresenceData OutPresence;
			EOnlineCachedResult_ ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPresence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresence_Parms, User), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_OutPresence = { "OutPresence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresence_Parms, OutPresence), Z_Construct_UScriptStruct_FOnlineUserPresenceData, METADATA_PARAMS(nullptr, 0) }; // 1165248872
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresence_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_, METADATA_PARAMS(nullptr, 0) }; // 514511364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_OutPresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Presence" },
		{ "Comment", "// @generator-duplicate-needs-picking\n// void QueryPresence(const FUniqueNetId& LocalUserId, const TArray<FUniqueNetIdRef>& UserIds);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
		{ "ToolTip", "@generator-duplicate-needs-picking\nvoid QueryPresence(const FUniqueNetId& LocalUserId, const TArray<FUniqueNetIdRef>& UserIds);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceSubsystem, nullptr, "GetCachedPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::OnlinePresenceSubsystem_eventGetCachedPresence_Parms), Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics
	{
		struct OnlinePresenceSubsystem_eventGetCachedPresenceForApp_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FUniqueNetIdRepl User;
			FString AppId;
			FOnlineUserPresenceData OutPresence;
			EOnlineCachedResult_ ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPresence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresenceForApp_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresenceForApp_Parms, User), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresenceForApp_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_OutPresence = { "OutPresence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresenceForApp_Parms, OutPresence), Z_Construct_UScriptStruct_FOnlineUserPresenceData, METADATA_PARAMS(nullptr, 0) }; // 1165248872
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystem_eventGetCachedPresenceForApp_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_, METADATA_PARAMS(nullptr, 0) }; // 514511364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_OutPresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Presence" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceSubsystem, nullptr, "GetCachedPresenceForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::OnlinePresenceSubsystem_eventGetCachedPresenceForApp_Parms), Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlinePresenceSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePresenceSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlinePresenceSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Presence" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::OnlinePresenceSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePresenceSubsystem);
	UClass* Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister()
	{
		return UOnlinePresenceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePresenceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPresenceReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPresenceArrayUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceArrayUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresence, "GetCachedPresence" }, // 2718284225
		{ &Z_Construct_UFunction_UOnlinePresenceSubsystem_GetCachedPresenceForApp, "GetCachedPresenceForApp" }, // 1892514047
		{ &Z_Construct_UFunction_UOnlinePresenceSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 543079548
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceReceived_MetaData[] = {
		{ "Category", "Online|Presence" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceReceived = { "OnPresenceReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystem, OnPresenceReceived), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceReceived_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceReceived_MetaData)) }; // 2579346410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceArrayUpdated_MetaData[] = {
		{ "Category", "Online|Presence" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceArrayUpdated = { "OnPresenceArrayUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystem, OnPresenceArrayUpdated), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Presence_PresenceArrayUpdated_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceArrayUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceArrayUpdated_MetaData)) }; // 2763174965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::NewProp_OnPresenceArrayUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePresenceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::ClassParams = {
		&UOnlinePresenceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePresenceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlinePresenceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePresenceSubsystem.OuterSingleton, Z_Construct_UClass_UOnlinePresenceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePresenceSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePresenceSubsystem>()
	{
		return UOnlinePresenceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePresenceSubsystem);
	UOnlinePresenceSubsystem::~UOnlinePresenceSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemSetPresenceCallbackPin_Parms
		{
			FUniqueNetIdRepl UserId;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemSetPresenceCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemSetPresenceCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemSetPresenceCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemSetPresenceCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePresenceSubsystemSetPresence::execSetPresence)
	{
		P_GET_OBJECT(UOnlinePresenceSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_User);
		P_GET_STRUCT(FOnlineUserPresenceStatusData,Z_Param_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePresenceSubsystemSetPresence**)Z_Param__Result=UOnlinePresenceSubsystemSetPresence::SetPresence(Z_Param_Subsystem,Z_Param_User,Z_Param_Status);
		P_NATIVE_END;
	}
	void UOnlinePresenceSubsystemSetPresence::StaticRegisterNativesUOnlinePresenceSubsystemSetPresence()
	{
		UClass* Class = UOnlinePresenceSubsystemSetPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPresence", &UOnlinePresenceSubsystemSetPresence::execSetPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics
	{
		struct OnlinePresenceSubsystemSetPresence_eventSetPresence_Parms
		{
			UOnlinePresenceSubsystem* Subsystem;
			FUniqueNetIdRepl User;
			FOnlineUserPresenceStatusData Status;
			UOnlinePresenceSubsystemSetPresence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystemSetPresence_eventSetPresence_Parms, Subsystem), Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystemSetPresence_eventSetPresence_Parms, User), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystemSetPresence_eventSetPresence_Parms, Status), Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData, METADATA_PARAMS(nullptr, 0) }; // 711038097
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystemSetPresence_eventSetPresence_Parms, ReturnValue), Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Presence" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence, nullptr, "SetPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::OnlinePresenceSubsystemSetPresence_eventSetPresence_Parms), Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePresenceSubsystemSetPresence);
	UClass* Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_NoRegister()
	{
		return UOnlinePresenceSubsystemSetPresence::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPresenceTaskComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceTaskComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__User_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__User;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Status_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePresenceSubsystemSetPresence_SetPresence, "SetPresence" }, // 2020734707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemSetPresence, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnCallFailed_MetaData)) }; // 426486819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnPresenceTaskComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnPresenceTaskComplete = { "OnPresenceTaskComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemSetPresence, OnPresenceTaskComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemSetPresenceCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnPresenceTaskComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnPresenceTaskComplete_MetaData)) }; // 426486819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemSetPresence, __Store__Subsystem), Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemSetPresence, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__User_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__User = { "__Store__User", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemSetPresence, __Store__User), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__User_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__User_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Status_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Status = { "__Store__Status", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemSetPresence, __Store__Status), Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Status_MetaData)) }; // 711038097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp_OnPresenceTaskComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::NewProp___Store__Status,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePresenceSubsystemSetPresence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::ClassParams = {
		&UOnlinePresenceSubsystemSetPresence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence()
	{
		if (!Z_Registration_Info_UClass_UOnlinePresenceSubsystemSetPresence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePresenceSubsystemSetPresence.OuterSingleton, Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePresenceSubsystemSetPresence.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePresenceSubsystemSetPresence>()
	{
		return UOnlinePresenceSubsystemSetPresence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePresenceSubsystemSetPresence);
	UOnlinePresenceSubsystemSetPresence::~UOnlinePresenceSubsystemSetPresence() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemQueryPresenceCallbackPin_Parms
		{
			FUniqueNetIdRepl UserId;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemQueryPresenceCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemQueryPresenceCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemQueryPresenceCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlinePresenceSubsystemQueryPresenceCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePresenceSubsystemQueryPresence::execQueryPresence)
	{
		P_GET_OBJECT(UOnlinePresenceSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePresenceSubsystemQueryPresence**)Z_Param__Result=UOnlinePresenceSubsystemQueryPresence::QueryPresence(Z_Param_Subsystem,Z_Param_User);
		P_NATIVE_END;
	}
	void UOnlinePresenceSubsystemQueryPresence::StaticRegisterNativesUOnlinePresenceSubsystemQueryPresence()
	{
		UClass* Class = UOnlinePresenceSubsystemQueryPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryPresence", &UOnlinePresenceSubsystemQueryPresence::execQueryPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics
	{
		struct OnlinePresenceSubsystemQueryPresence_eventQueryPresence_Parms
		{
			UOnlinePresenceSubsystem* Subsystem;
			FUniqueNetIdRepl User;
			UOnlinePresenceSubsystemQueryPresence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystemQueryPresence_eventQueryPresence_Parms, Subsystem), Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystemQueryPresence_eventQueryPresence_Parms, User), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePresenceSubsystemQueryPresence_eventQueryPresence_Parms, ReturnValue), Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Presence" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence, nullptr, "QueryPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::OnlinePresenceSubsystemQueryPresence_eventQueryPresence_Parms), Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePresenceSubsystemQueryPresence);
	UClass* Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_NoRegister()
	{
		return UOnlinePresenceSubsystemQueryPresence::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPresenceTaskComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceTaskComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__User_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePresenceSubsystemQueryPresence_QueryPresence, "QueryPresence" }, // 4270715126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemQueryPresence, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnCallFailed_MetaData)) }; // 1705864943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnPresenceTaskComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnPresenceTaskComplete = { "OnPresenceTaskComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemQueryPresence, OnPresenceTaskComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlinePresenceSubsystemQueryPresenceCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnPresenceTaskComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnPresenceTaskComplete_MetaData)) }; // 1705864943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemQueryPresence, __Store__Subsystem), Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemQueryPresence, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__User_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlinePresenceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__User = { "__Store__User", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePresenceSubsystemQueryPresence, __Store__User), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__User_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__User_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp_OnPresenceTaskComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::NewProp___Store__User,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePresenceSubsystemQueryPresence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::ClassParams = {
		&UOnlinePresenceSubsystemQueryPresence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence()
	{
		if (!Z_Registration_Info_UClass_UOnlinePresenceSubsystemQueryPresence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePresenceSubsystemQueryPresence.OuterSingleton, Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePresenceSubsystemQueryPresence.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePresenceSubsystemQueryPresence>()
	{
		return UOnlinePresenceSubsystemQueryPresence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePresenceSubsystemQueryPresence);
	UOnlinePresenceSubsystemQueryPresence::~UOnlinePresenceSubsystemQueryPresence() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePresenceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePresenceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePresenceSubsystem, UOnlinePresenceSubsystem::StaticClass, TEXT("UOnlinePresenceSubsystem"), &Z_Registration_Info_UClass_UOnlinePresenceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePresenceSubsystem), 3387208828U) },
		{ Z_Construct_UClass_UOnlinePresenceSubsystemSetPresence, UOnlinePresenceSubsystemSetPresence::StaticClass, TEXT("UOnlinePresenceSubsystemSetPresence"), &Z_Registration_Info_UClass_UOnlinePresenceSubsystemSetPresence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePresenceSubsystemSetPresence), 2051442713U) },
		{ Z_Construct_UClass_UOnlinePresenceSubsystemQueryPresence, UOnlinePresenceSubsystemQueryPresence::StaticClass, TEXT("UOnlinePresenceSubsystemQueryPresence"), &Z_Registration_Info_UClass_UOnlinePresenceSubsystemQueryPresence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePresenceSubsystemQueryPresence), 2540365606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePresenceSubsystem_h_4187377080(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePresenceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlinePresenceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
