// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineLeaderboardsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardWrite_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardReadComplete_BP_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardReadComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardReadComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Leaderboards_LeaderboardReadComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardReadComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardFlushComplete_BP_Parms
		{
			FName SessionName;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardFlushComplete_BP_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardFlushComplete_BP_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardFlushComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventLeaderboards_LeaderboardFlushComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystem::execFlushLeaderboards)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FlushLeaderboards(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystem::execWriteLeaderboards)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_Player);
		P_GET_OBJECT(UOnlineLeaderboardWrite,Z_Param_WriteObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteLeaderboards(Z_Param_SessionName,Z_Param_Player,Z_Param_WriteObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystem::execFreeStats)
	{
		P_GET_OBJECT(UOnlineLeaderboardRead,Z_Param_ReadObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreeStats(Z_Param_ReadObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineLeaderboardsSubsystem::StaticRegisterNativesUOnlineLeaderboardsSubsystem()
	{
		UClass* Class = UOnlineLeaderboardsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushLeaderboards", &UOnlineLeaderboardsSubsystem::execFlushLeaderboards },
			{ "FreeStats", &UOnlineLeaderboardsSubsystem::execFreeStats },
			{ "IsSubsystemAvailable", &UOnlineLeaderboardsSubsystem::execIsSubsystemAvailable },
			{ "WriteLeaderboards", &UOnlineLeaderboardsSubsystem::execWriteLeaderboards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics
	{
		struct OnlineLeaderboardsSubsystem_eventFlushLeaderboards_Parms
		{
			FName SessionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystem_eventFlushLeaderboards_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLeaderboardsSubsystem_eventFlushLeaderboards_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLeaderboardsSubsystem_eventFlushLeaderboards_Parms), &Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystem, nullptr, "FlushLeaderboards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::OnlineLeaderboardsSubsystem_eventFlushLeaderboards_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics
	{
		struct OnlineLeaderboardsSubsystem_eventFreeStats_Parms
		{
			UOnlineLeaderboardRead* ReadObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::NewProp_ReadObject = { "ReadObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystem_eventFreeStats_Parms, ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::NewProp_ReadObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystem, nullptr, "FreeStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::OnlineLeaderboardsSubsystem_eventFreeStats_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineLeaderboardsSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLeaderboardsSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLeaderboardsSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::OnlineLeaderboardsSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics
	{
		struct OnlineLeaderboardsSubsystem_eventWriteLeaderboards_Parms
		{
			FName SessionName;
			FUniqueNetIdRepl Player;
			UOnlineLeaderboardWrite* WriteObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WriteObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystem_eventWriteLeaderboards_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystem_eventWriteLeaderboards_Parms, Player), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_WriteObject = { "WriteObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystem_eventWriteLeaderboards_Parms, WriteObject), Z_Construct_UClass_UOnlineLeaderboardWrite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLeaderboardsSubsystem_eventWriteLeaderboards_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLeaderboardsSubsystem_eventWriteLeaderboards_Parms), &Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_WriteObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystem, nullptr, "WriteLeaderboards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::OnlineLeaderboardsSubsystem_eventWriteLeaderboards_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLeaderboardsSubsystem);
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister()
	{
		return UOnlineLeaderboardsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardReadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardReadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardFlushComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardFlushComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FlushLeaderboards, "FlushLeaderboards" }, // 262700651
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_FreeStats, "FreeStats" }, // 3119064216
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 558036711
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystem_WriteLeaderboards, "WriteLeaderboards" }, // 1935889989
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardReadComplete_MetaData[] = {
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardReadComplete = { "OnLeaderboardReadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystem, OnLeaderboardReadComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardReadComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardReadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardReadComplete_MetaData)) }; // 1160647577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardFlushComplete_MetaData[] = {
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardFlushComplete = { "OnLeaderboardFlushComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystem, OnLeaderboardFlushComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Leaderboards_LeaderboardFlushComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardFlushComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardFlushComplete_MetaData)) }; // 2501379093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardReadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::NewProp_OnLeaderboardFlushComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLeaderboardsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::ClassParams = {
		&UOnlineLeaderboardsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineLeaderboardsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLeaderboardsSubsystem>()
	{
		return UOnlineLeaderboardsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLeaderboardsSubsystem);
	UOnlineLeaderboardsSubsystem::~UOnlineLeaderboardsSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystemReadLeaderboards::execReadLeaderboards)
	{
		P_GET_OBJECT(UOnlineLeaderboardsSubsystem,Z_Param_Subsystem);
		P_GET_TARRAY(FUniqueNetIdRepl,Z_Param_Players);
		P_GET_OBJECT(UOnlineLeaderboardRead,Z_Param_ReadObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLeaderboardsSubsystemReadLeaderboards**)Z_Param__Result=UOnlineLeaderboardsSubsystemReadLeaderboards::ReadLeaderboards(Z_Param_Subsystem,Z_Param_Players,Z_Param_ReadObject);
		P_NATIVE_END;
	}
	void UOnlineLeaderboardsSubsystemReadLeaderboards::StaticRegisterNativesUOnlineLeaderboardsSubsystemReadLeaderboards()
	{
		UClass* Class = UOnlineLeaderboardsSubsystemReadLeaderboards::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadLeaderboards", &UOnlineLeaderboardsSubsystemReadLeaderboards::execReadLeaderboards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics
	{
		struct OnlineLeaderboardsSubsystemReadLeaderboards_eventReadLeaderboards_Parms
		{
			UOnlineLeaderboardsSubsystem* Subsystem;
			TArray<FUniqueNetIdRepl> Players;
			UOnlineLeaderboardRead* ReadObject;
			UOnlineLeaderboardsSubsystemReadLeaderboards* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Players_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboards_eventReadLeaderboards_Parms, Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboards_eventReadLeaderboards_Parms, Players), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_ReadObject = { "ReadObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboards_eventReadLeaderboards_Parms, ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboards_eventReadLeaderboards_Parms, ReturnValue), Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_Players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_Players,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_ReadObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards, nullptr, "ReadLeaderboards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::OnlineLeaderboardsSubsystemReadLeaderboards_eventReadLeaderboards_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLeaderboardsSubsystemReadLeaderboards);
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_NoRegister()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboards::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardReadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardReadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__Players;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ReadObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__ReadObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards, "ReadLeaderboards" }, // 1165738324
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboards, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnCallFailed_MetaData)) }; // 2203282307
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnLeaderboardReadComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnLeaderboardReadComplete = { "OnLeaderboardReadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboards, OnLeaderboardReadComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnLeaderboardReadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnLeaderboardReadComplete_MetaData)) }; // 2203282307
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Players_Inner = { "__Store__Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Players_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Players = { "__Store__Players", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Players_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__ReadObject_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__ReadObject = { "__Store__ReadObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__ReadObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__ReadObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp_OnLeaderboardReadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__Players,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::NewProp___Store__ReadObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLeaderboardsSubsystemReadLeaderboards>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::ClassParams = {
		&UOnlineLeaderboardsSubsystemReadLeaderboards::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards()
	{
		if (!Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards.OuterSingleton, Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLeaderboardsSubsystemReadLeaderboards>()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboards::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLeaderboardsSubsystemReadLeaderboards);
	UOnlineLeaderboardsSubsystemReadLeaderboards::~UOnlineLeaderboardsSubsystemReadLeaderboards() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::execReadLeaderboardsForFriends)
	{
		P_GET_OBJECT(UOnlineLeaderboardsSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_OBJECT(UOnlineLeaderboardRead,Z_Param_ReadObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends**)Z_Param__Result=UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::ReadLeaderboardsForFriends(Z_Param_Subsystem,Z_Param_LocalUserNum,Z_Param_ReadObject);
		P_NATIVE_END;
	}
	void UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::StaticRegisterNativesUOnlineLeaderboardsSubsystemReadLeaderboardsForFriends()
	{
		UClass* Class = UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadLeaderboardsForFriends", &UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::execReadLeaderboardsForFriends },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics
	{
		struct OnlineLeaderboardsSubsystemReadLeaderboardsForFriends_eventReadLeaderboardsForFriends_Parms
		{
			UOnlineLeaderboardsSubsystem* Subsystem;
			int32 LocalUserNum;
			UOnlineLeaderboardRead* ReadObject;
			UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsForFriends_eventReadLeaderboardsForFriends_Parms, Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsForFriends_eventReadLeaderboardsForFriends_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_ReadObject = { "ReadObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsForFriends_eventReadLeaderboardsForFriends_Parms, ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsForFriends_eventReadLeaderboardsForFriends_Parms, ReturnValue), Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_ReadObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, nullptr, "ReadLeaderboardsForFriends", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::OnlineLeaderboardsSubsystemReadLeaderboardsForFriends_eventReadLeaderboardsForFriends_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends);
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_NoRegister()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardReadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardReadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp___Store__LocalUserNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ReadObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__ReadObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends, "ReadLeaderboardsForFriends" }, // 2211738133
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnCallFailed_MetaData)) }; // 121476609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnLeaderboardReadComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnLeaderboardReadComplete = { "OnLeaderboardReadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, OnLeaderboardReadComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnLeaderboardReadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnLeaderboardReadComplete_MetaData)) }; // 121476609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__LocalUserNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__ReadObject_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__ReadObject = { "__Store__ReadObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__ReadObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__ReadObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp_OnLeaderboardReadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::NewProp___Store__ReadObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::ClassParams = {
		&UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends()
	{
		if (!Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends.OuterSingleton, Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends>()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends);
	UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::~UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::execReadLeaderboardsAroundRank)
	{
		P_GET_OBJECT(UOnlineLeaderboardsSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
		P_GET_PROPERTY(FInt64Property,Z_Param_Range);
		P_GET_OBJECT(UOnlineLeaderboardRead,Z_Param_ReadObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank**)Z_Param__Result=UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::ReadLeaderboardsAroundRank(Z_Param_Subsystem,Z_Param_Rank,Z_Param_Range,Z_Param_ReadObject);
		P_NATIVE_END;
	}
	void UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::StaticRegisterNativesUOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank()
	{
		UClass* Class = UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadLeaderboardsAroundRank", &UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::execReadLeaderboardsAroundRank },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics
	{
		struct OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_eventReadLeaderboardsAroundRank_Parms
		{
			UOnlineLeaderboardsSubsystem* Subsystem;
			int32 Rank;
			int64 Range;
			UOnlineLeaderboardRead* ReadObject;
			UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Range;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_eventReadLeaderboardsAroundRank_Parms, Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_eventReadLeaderboardsAroundRank_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_eventReadLeaderboardsAroundRank_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_ReadObject = { "ReadObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_eventReadLeaderboardsAroundRank_Parms, ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_eventReadLeaderboardsAroundRank_Parms, ReturnValue), Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_Rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_ReadObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, nullptr, "ReadLeaderboardsAroundRank", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_eventReadLeaderboardsAroundRank_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank);
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_NoRegister()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardReadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardReadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Rank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp___Store__Rank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Range_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp___Store__Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ReadObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__ReadObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank, "ReadLeaderboardsAroundRank" }, // 4095732355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnCallFailed_MetaData)) }; // 3433700251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnLeaderboardReadComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnLeaderboardReadComplete = { "OnLeaderboardReadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, OnLeaderboardReadComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnLeaderboardReadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnLeaderboardReadComplete_MetaData)) }; // 3433700251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Rank_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Rank = { "__Store__Rank", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__Rank), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Rank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Range_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Range = { "__Store__Range", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__Range), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__ReadObject_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__ReadObject = { "__Store__ReadObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__ReadObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__ReadObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp_OnLeaderboardReadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::NewProp___Store__ReadObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::ClassParams = {
		&UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank()
	{
		if (!Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank.OuterSingleton, Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank>()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank);
	UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::~UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::execReadLeaderboardsAroundUser)
	{
		P_GET_OBJECT(UOnlineLeaderboardsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_Player);
		P_GET_PROPERTY(FInt64Property,Z_Param_Range);
		P_GET_OBJECT(UOnlineLeaderboardRead,Z_Param_ReadObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser**)Z_Param__Result=UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::ReadLeaderboardsAroundUser(Z_Param_Subsystem,Z_Param_Player,Z_Param_Range,Z_Param_ReadObject);
		P_NATIVE_END;
	}
	void UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::StaticRegisterNativesUOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser()
	{
		UClass* Class = UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadLeaderboardsAroundUser", &UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::execReadLeaderboardsAroundUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics
	{
		struct OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_eventReadLeaderboardsAroundUser_Parms
		{
			UOnlineLeaderboardsSubsystem* Subsystem;
			FUniqueNetIdRepl Player;
			int64 Range;
			UOnlineLeaderboardRead* ReadObject;
			UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Player;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Range;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_eventReadLeaderboardsAroundUser_Parms, Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_eventReadLeaderboardsAroundUser_Parms, Player), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_eventReadLeaderboardsAroundUser_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_ReadObject = { "ReadObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_eventReadLeaderboardsAroundUser_Parms, ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_eventReadLeaderboardsAroundUser_Parms, ReturnValue), Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_ReadObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Leaderboards" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, nullptr, "ReadLeaderboardsAroundUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_eventReadLeaderboardsAroundUser_Parms), Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser);
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_NoRegister()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardReadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardReadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Player_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Range_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp___Store__Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ReadObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__ReadObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser, "ReadLeaderboardsAroundUser" }, // 2772127801
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnCallFailed_MetaData)) }; // 2234192928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnLeaderboardReadComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnLeaderboardReadComplete = { "OnLeaderboardReadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, OnLeaderboardReadComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnLeaderboardReadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnLeaderboardReadComplete_MetaData)) }; // 2234192928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__Subsystem), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Player_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Player = { "__Store__Player", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__Player), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Player_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Range_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Range = { "__Store__Range", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__Range), METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__ReadObject_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLeaderboardsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__ReadObject = { "__Store__ReadObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__ReadObject), Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__ReadObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__ReadObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp_OnLeaderboardReadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::NewProp___Store__ReadObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::ClassParams = {
		&UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser()
	{
		if (!Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser.OuterSingleton, Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser>()
	{
		return UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser);
	UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::~UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLeaderboardsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLeaderboardsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineLeaderboardsSubsystem, UOnlineLeaderboardsSubsystem::StaticClass, TEXT("UOnlineLeaderboardsSubsystem"), &Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLeaderboardsSubsystem), 347261259U) },
		{ Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards, UOnlineLeaderboardsSubsystemReadLeaderboards::StaticClass, TEXT("UOnlineLeaderboardsSubsystemReadLeaderboards"), &Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboards, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLeaderboardsSubsystemReadLeaderboards), 3237076590U) },
		{ Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends::StaticClass, TEXT("UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends"), &Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends), 839994537U) },
		{ Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank::StaticClass, TEXT("UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank"), &Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank), 2986318510U) },
		{ Z_Construct_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser::StaticClass, TEXT("UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser"), &Z_Registration_Info_UClass_UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser), 2627212100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLeaderboardsSubsystem_h_79304710(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLeaderboardsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLeaderboardsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
