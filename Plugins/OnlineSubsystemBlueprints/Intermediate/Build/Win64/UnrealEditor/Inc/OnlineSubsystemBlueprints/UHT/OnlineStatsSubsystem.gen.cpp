// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBStatsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineStatsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStatsSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStatsSubsystemQueryStats();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineStatsSubsystem::execGetStats)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_StatsUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOnlineStatsUserStatsBP*)Z_Param__Result=P_THIS->GetStats(Z_Param_StatsUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStatsSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineStatsSubsystem::StaticRegisterNativesUOnlineStatsSubsystem()
	{
		UClass* Class = UOnlineStatsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStats", &UOnlineStatsSubsystem::execGetStats },
			{ "IsSubsystemAvailable", &UOnlineStatsSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics
	{
		struct OnlineStatsSubsystem_eventGetStats_Parms
		{
			FUniqueNetIdRepl StatsUserId;
			FOnlineStatsUserStatsBP ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatsUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::NewProp_StatsUserId = { "StatsUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystem_eventGetStats_Parms, StatsUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystem_eventGetStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP, METADATA_PARAMS(nullptr, 0) }; // 1151985947
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::NewProp_StatsUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStatsSubsystem, nullptr, "GetStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::OnlineStatsSubsystem_eventGetStats_Parms), Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineStatsSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineStatsSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineStatsSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStatsSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::OnlineStatsSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStatsSubsystem);
	UClass* Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister()
	{
		return UOnlineStatsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStatsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStatsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStatsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStatsSubsystem_GetStats, "GetStats" }, // 2813349146
		{ &Z_Construct_UFunction_UOnlineStatsSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3619317212
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStatsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStatsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStatsSubsystem_Statics::ClassParams = {
		&UOnlineStatsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStatsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineStatsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStatsSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineStatsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStatsSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStatsSubsystem>()
	{
		return UOnlineStatsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStatsSubsystem);
	UOnlineStatsSubsystem::~UOnlineStatsSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineStatsSubsystemQueryStatsCallbackPin_Parms
		{
			FOnlineErrorInfo ResultState;
			TArray<FOnlineStatsUserStatsBP> UsersStatsResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UsersStatsResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsersStatsResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsersStatsResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_ResultState = { "ResultState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStatsSubsystemQueryStatsCallbackPin_Parms, ResultState), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_UsersStatsResult_Inner = { "UsersStatsResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP, METADATA_PARAMS(nullptr, 0) }; // 1151985947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_UsersStatsResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_UsersStatsResult = { "UsersStatsResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStatsSubsystemQueryStatsCallbackPin_Parms, UsersStatsResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_UsersStatsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_UsersStatsResult_MetaData)) }; // 1151985947
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_ResultState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_UsersStatsResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::NewProp_UsersStatsResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineStatsSubsystemQueryStatsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineStatsSubsystemQueryStats::execQueryStats)
	{
		P_GET_OBJECT(UOnlineStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TARRAY(FUniqueNetIdRepl,Z_Param_StatUsers);
		P_GET_TARRAY(FString,Z_Param_StatNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStatsSubsystemQueryStats**)Z_Param__Result=UOnlineStatsSubsystemQueryStats::QueryStats(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_StatUsers,Z_Param_StatNames);
		P_NATIVE_END;
	}
	void UOnlineStatsSubsystemQueryStats::StaticRegisterNativesUOnlineStatsSubsystemQueryStats()
	{
		UClass* Class = UOnlineStatsSubsystemQueryStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryStats", &UOnlineStatsSubsystemQueryStats::execQueryStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics
	{
		struct OnlineStatsSubsystemQueryStats_eventQueryStats_Parms
		{
			UOnlineStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TArray<FUniqueNetIdRepl> StatUsers;
			TArray<FString> StatNames;
			UOnlineStatsSubsystemQueryStats* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatUsers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatUsers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemQueryStats_eventQueryStats_Parms, Subsystem), Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemQueryStats_eventQueryStats_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatUsers_Inner = { "StatUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatUsers = { "StatUsers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemQueryStats_eventQueryStats_Parms, StatUsers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatNames_Inner = { "StatNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatNames = { "StatNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemQueryStats_eventQueryStats_Parms, StatNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemQueryStats_eventQueryStats_Parms, ReturnValue), Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_StatNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStatsSubsystemQueryStats, nullptr, "QueryStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::OnlineStatsSubsystemQueryStats_eventQueryStats_Parms), Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStatsSubsystemQueryStats);
	UClass* Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_NoRegister()
	{
		return UOnlineStatsSubsystemQueryStats::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineStatsQueryUsersStatsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnlineStatsQueryUsersStatsComplete;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__StatUsers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__StatUsers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__StatUsers;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__StatNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__StatNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__StatNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStatsSubsystemQueryStats_QueryStats, "QueryStats" }, // 3402307613
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemQueryStats, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnCallFailed_MetaData)) }; // 1651314812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnlineStatsQueryUsersStatsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnlineStatsQueryUsersStatsComplete = { "OnlineStatsQueryUsersStatsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemQueryStats, OnlineStatsQueryUsersStatsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemQueryStatsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnlineStatsQueryUsersStatsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnlineStatsQueryUsersStatsComplete_MetaData)) }; // 1651314812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemQueryStats, __Store__Subsystem), Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemQueryStats, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemQueryStats, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatUsers_Inner = { "__Store__StatUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatUsers_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatUsers = { "__Store__StatUsers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemQueryStats, __Store__StatUsers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatUsers_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatNames_Inner = { "__Store__StatNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatNames_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatNames = { "__Store__StatNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemQueryStats, __Store__StatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp_OnlineStatsQueryUsersStatsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::NewProp___Store__StatNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStatsSubsystemQueryStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::ClassParams = {
		&UOnlineStatsSubsystemQueryStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStatsSubsystemQueryStats()
	{
		if (!Z_Registration_Info_UClass_UOnlineStatsSubsystemQueryStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStatsSubsystemQueryStats.OuterSingleton, Z_Construct_UClass_UOnlineStatsSubsystemQueryStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStatsSubsystemQueryStats.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStatsSubsystemQueryStats>()
	{
		return UOnlineStatsSubsystemQueryStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStatsSubsystemQueryStats);
	UOnlineStatsSubsystemQueryStats::~UOnlineStatsSubsystemQueryStats() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineStatsSubsystemUpdateStatsCallbackPin_Parms
		{
			FOnlineErrorInfo ResultState;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::NewProp_ResultState = { "ResultState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStatsSubsystemUpdateStatsCallbackPin_Parms, ResultState), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::NewProp_ResultState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineStatsSubsystemUpdateStatsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineStatsSubsystemUpdateStats::execUpdateStats)
	{
		P_GET_OBJECT(UOnlineStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TARRAY(FOnlineStatsUserUpdatedStatsBP,Z_Param_UpdatedUserStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStatsSubsystemUpdateStats**)Z_Param__Result=UOnlineStatsSubsystemUpdateStats::UpdateStats(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_UpdatedUserStats);
		P_NATIVE_END;
	}
	void UOnlineStatsSubsystemUpdateStats::StaticRegisterNativesUOnlineStatsSubsystemUpdateStats()
	{
		UClass* Class = UOnlineStatsSubsystemUpdateStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateStats", &UOnlineStatsSubsystemUpdateStats::execUpdateStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics
	{
		struct OnlineStatsSubsystemUpdateStats_eventUpdateStats_Parms
		{
			UOnlineStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TArray<FOnlineStatsUserUpdatedStatsBP> UpdatedUserStats;
			UOnlineStatsSubsystemUpdateStats* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedUserStats_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedUserStats;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemUpdateStats_eventUpdateStats_Parms, Subsystem), Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemUpdateStats_eventUpdateStats_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_UpdatedUserStats_Inner = { "UpdatedUserStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP, METADATA_PARAMS(nullptr, 0) }; // 3742940526
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_UpdatedUserStats = { "UpdatedUserStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemUpdateStats_eventUpdateStats_Parms, UpdatedUserStats), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3742940526
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStatsSubsystemUpdateStats_eventUpdateStats_Parms, ReturnValue), Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_UpdatedUserStats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_UpdatedUserStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats, nullptr, "UpdateStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::OnlineStatsSubsystemUpdateStats_eventUpdateStats_Parms), Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStatsSubsystemUpdateStats);
	UClass* Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_NoRegister()
	{
		return UOnlineStatsSubsystemUpdateStats::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineStatsUpdateStatsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnlineStatsUpdateStatsComplete;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UpdatedUserStats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UpdatedUserStats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__UpdatedUserStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStatsSubsystemUpdateStats_UpdateStats, "UpdateStats" }, // 3127258764
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemUpdateStats, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnCallFailed_MetaData)) }; // 3815623724
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnlineStatsUpdateStatsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnlineStatsUpdateStatsComplete = { "OnlineStatsUpdateStatsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemUpdateStats, OnlineStatsUpdateStatsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStatsSubsystemUpdateStatsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnlineStatsUpdateStatsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnlineStatsUpdateStatsComplete_MetaData)) }; // 3815623724
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemUpdateStats, __Store__Subsystem), Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemUpdateStats, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemUpdateStats, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__UpdatedUserStats_Inner = { "__Store__UpdatedUserStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP, METADATA_PARAMS(nullptr, 0) }; // 3742940526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__UpdatedUserStats_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__UpdatedUserStats = { "__Store__UpdatedUserStats", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStatsSubsystemUpdateStats, __Store__UpdatedUserStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__UpdatedUserStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__UpdatedUserStats_MetaData)) }; // 3742940526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp_OnlineStatsUpdateStatsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__UpdatedUserStats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::NewProp___Store__UpdatedUserStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStatsSubsystemUpdateStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::ClassParams = {
		&UOnlineStatsSubsystemUpdateStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats()
	{
		if (!Z_Registration_Info_UClass_UOnlineStatsSubsystemUpdateStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStatsSubsystemUpdateStats.OuterSingleton, Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStatsSubsystemUpdateStats.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStatsSubsystemUpdateStats>()
	{
		return UOnlineStatsSubsystemUpdateStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStatsSubsystemUpdateStats);
	UOnlineStatsSubsystemUpdateStats::~UOnlineStatsSubsystemUpdateStats() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStatsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStatsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineStatsSubsystem, UOnlineStatsSubsystem::StaticClass, TEXT("UOnlineStatsSubsystem"), &Z_Registration_Info_UClass_UOnlineStatsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStatsSubsystem), 2257355636U) },
		{ Z_Construct_UClass_UOnlineStatsSubsystemQueryStats, UOnlineStatsSubsystemQueryStats::StaticClass, TEXT("UOnlineStatsSubsystemQueryStats"), &Z_Registration_Info_UClass_UOnlineStatsSubsystemQueryStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStatsSubsystemQueryStats), 2085217939U) },
		{ Z_Construct_UClass_UOnlineStatsSubsystemUpdateStats, UOnlineStatsSubsystemUpdateStats::StaticClass, TEXT("UOnlineStatsSubsystemUpdateStats"), &Z_Registration_Info_UClass_UOnlineStatsSubsystemUpdateStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStatsSubsystemUpdateStats), 105562732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStatsSubsystem_h_990574737(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStatsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStatsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
