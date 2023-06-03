// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBLobbyTypes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineLobbySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_ULobby_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_ULobbyId_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbyMemberTransaction_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemKickMember();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemKickMember_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemSearch();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemSearch_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventLobby_LobbyUpdate_BP_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_LobbyUpdate_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_LobbyUpdate_BP_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::NewProp_LobbyId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Lobby_LobbyUpdate_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventLobby_LobbyUpdate_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventLobby_LobbyDelete_BP_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_LobbyDelete_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_LobbyDelete_BP_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::NewProp_LobbyId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Lobby_LobbyDelete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventLobby_LobbyDelete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventLobby_MemberConnect_BP_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			FUniqueNetIdRepl MemberId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberConnect_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberConnect_BP_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberConnect_BP_Parms, MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::NewProp_MemberId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Lobby_MemberConnect_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventLobby_MemberConnect_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventLobby_MemberUpdate_BP_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			FUniqueNetIdRepl MemberId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberUpdate_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberUpdate_BP_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberUpdate_BP_Parms, MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::NewProp_MemberId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Lobby_MemberUpdate_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventLobby_MemberUpdate_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventLobby_MemberDisconnect_BP_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			FUniqueNetIdRepl MemberId;
			bool bWasKicked;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberId;
		static void NewProp_bWasKicked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasKicked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberDisconnect_BP_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberDisconnect_BP_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventLobby_MemberDisconnect_BP_Parms, MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_bWasKicked_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventLobby_MemberDisconnect_BP_Parms*)Obj)->bWasKicked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_bWasKicked = { "bWasKicked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventLobby_MemberDisconnect_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_bWasKicked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_MemberId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::NewProp_bWasKicked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Lobby_MemberDisconnect_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventLobby_MemberDisconnect_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execParseSerializedLobbyId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULobbyId**)Z_Param__Result=P_THIS->ParseSerializedLobbyId(Z_Param_InLobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execGetLobbyMetadataValue)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetadataKey);
		P_GET_STRUCT_REF(FVariantDataBP,Z_Param_Out_OutMetadataValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLobbyMetadataValue(Z_Param_UserId,Z_Param_LobbyId,Z_Param_MetadataKey,Z_Param_Out_OutMetadataValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execGetMemberMetadataValue)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_MemberId);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetadataKey);
		P_GET_STRUCT_REF(FVariantDataBP,Z_Param_Out_OutMetadataValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMemberMetadataValue(Z_Param_UserId,Z_Param_LobbyId,Z_Param_MemberId,Z_Param_MetadataKey,Z_Param_Out_OutMetadataValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execGetMemberUserId)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_PROPERTY(FIntProperty,Z_Param_MemberIndex);
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_OutMemberId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMemberUserId(Z_Param_UserId,Z_Param_LobbyId,Z_Param_MemberIndex,Z_Param_Out_OutMemberId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execGetMemberCount)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMemberCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMemberCount(Z_Param_UserId,Z_Param_LobbyId,Z_Param_Out_OutMemberCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execMakeUpdateLobbyMemberTransaction)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_MemberId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbyMemberTransaction**)Z_Param__Result=P_THIS->MakeUpdateLobbyMemberTransaction(Z_Param_UserId,Z_Param_LobbyId,Z_Param_MemberId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execMakeUpdateLobbyTransaction)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbyTransaction**)Z_Param__Result=P_THIS->MakeUpdateLobbyTransaction(Z_Param_UserId,Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execMakeCreateLobbyTransaction)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbyTransaction**)Z_Param__Result=P_THIS->MakeCreateLobbyTransaction(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystem::StaticRegisterNativesUOnlineLobbySubsystem()
	{
		UClass* Class = UOnlineLobbySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLobbyMetadataValue", &UOnlineLobbySubsystem::execGetLobbyMetadataValue },
			{ "GetMemberCount", &UOnlineLobbySubsystem::execGetMemberCount },
			{ "GetMemberMetadataValue", &UOnlineLobbySubsystem::execGetMemberMetadataValue },
			{ "GetMemberUserId", &UOnlineLobbySubsystem::execGetMemberUserId },
			{ "IsSubsystemAvailable", &UOnlineLobbySubsystem::execIsSubsystemAvailable },
			{ "MakeCreateLobbyTransaction", &UOnlineLobbySubsystem::execMakeCreateLobbyTransaction },
			{ "MakeUpdateLobbyMemberTransaction", &UOnlineLobbySubsystem::execMakeUpdateLobbyMemberTransaction },
			{ "MakeUpdateLobbyTransaction", &UOnlineLobbySubsystem::execMakeUpdateLobbyTransaction },
			{ "ParseSerializedLobbyId", &UOnlineLobbySubsystem::execParseSerializedLobbyId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics
	{
		struct OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			FString MetadataKey;
			FVariantDataBP OutMetadataValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMetadataValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_MetadataKey = { "MetadataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms, MetadataKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_OutMetadataValue = { "OutMetadataValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms, OutMetadataValue), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	void Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms), &Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_MetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_OutMetadataValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "GetLobbyMetadataValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::OnlineLobbySubsystem_eventGetLobbyMetadataValue_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics
	{
		struct OnlineLobbySubsystem_eventGetMemberCount_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			int32 OutMemberCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutMemberCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberCount_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberCount_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_OutMemberCount = { "OutMemberCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberCount_Parms, OutMemberCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLobbySubsystem_eventGetMemberCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLobbySubsystem_eventGetMemberCount_Parms), &Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_OutMemberCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "GetMemberCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::OnlineLobbySubsystem_eventGetMemberCount_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics
	{
		struct OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			FUniqueNetIdRepl MemberId;
			FString MetadataKey;
			FVariantDataBP OutMetadataValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMetadataValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms, MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_MetadataKey = { "MetadataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms, MetadataKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_OutMetadataValue = { "OutMetadataValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms, OutMetadataValue), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	void Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms), &Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_MemberId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_MetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_OutMetadataValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "GetMemberMetadataValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::OnlineLobbySubsystem_eventGetMemberMetadataValue_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics
	{
		struct OnlineLobbySubsystem_eventGetMemberUserId_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			int32 MemberIndex;
			FUniqueNetIdRepl OutMemberId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MemberIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMemberId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberUserId_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberUserId_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_MemberIndex = { "MemberIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberUserId_Parms, MemberIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_OutMemberId = { "OutMemberId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventGetMemberUserId_Parms, OutMemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLobbySubsystem_eventGetMemberUserId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLobbySubsystem_eventGetMemberUserId_Parms), &Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_MemberIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_OutMemberId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "GetMemberUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::OnlineLobbySubsystem_eventGetMemberUserId_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineLobbySubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineLobbySubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLobbySubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::OnlineLobbySubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics
	{
		struct OnlineLobbySubsystem_eventMakeCreateLobbyTransaction_Parms
		{
			FUniqueNetIdRepl UserId;
			UOnlineLobbyTransaction* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeCreateLobbyTransaction_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeCreateLobbyTransaction_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "Comment", "// @generator-incompatible\n// FDateTime GetUtcNow();\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nFDateTime GetUtcNow();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "MakeCreateLobbyTransaction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::OnlineLobbySubsystem_eventMakeCreateLobbyTransaction_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics
	{
		struct OnlineLobbySubsystem_eventMakeUpdateLobbyMemberTransaction_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			FUniqueNetIdRepl MemberId;
			UOnlineLobbyMemberTransaction* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeUpdateLobbyMemberTransaction_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeUpdateLobbyMemberTransaction_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeUpdateLobbyMemberTransaction_Parms, MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeUpdateLobbyMemberTransaction_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbyMemberTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_MemberId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "MakeUpdateLobbyMemberTransaction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::OnlineLobbySubsystem_eventMakeUpdateLobbyMemberTransaction_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics
	{
		struct OnlineLobbySubsystem_eventMakeUpdateLobbyTransaction_Parms
		{
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			UOnlineLobbyTransaction* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeUpdateLobbyTransaction_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeUpdateLobbyTransaction_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventMakeUpdateLobbyTransaction_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "MakeUpdateLobbyTransaction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::OnlineLobbySubsystem_eventMakeUpdateLobbyTransaction_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics
	{
		struct OnlineLobbySubsystem_eventParseSerializedLobbyId_Parms
		{
			FString InLobbyId;
			ULobbyId* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::NewProp_InLobbyId = { "InLobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventParseSerializedLobbyId_Parms, InLobbyId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystem_eventParseSerializedLobbyId_Parms, ReturnValue), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::NewProp_InLobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystem, nullptr, "ParseSerializedLobbyId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::OnlineLobbySubsystem_eventParseSerializedLobbyId_Parms), Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystem);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister()
	{
		return UOnlineLobbySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyDelete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyDelete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMemberConnect_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemberConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMemberUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemberUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMemberDisconnect_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemberDisconnect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_GetLobbyMetadataValue, "GetLobbyMetadataValue" }, // 2952044528
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberCount, "GetMemberCount" }, // 3631631342
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberMetadataValue, "GetMemberMetadataValue" }, // 3914600691
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_GetMemberUserId, "GetMemberUserId" }, // 2913178905
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3137228100
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_MakeCreateLobbyTransaction, "MakeCreateLobbyTransaction" }, // 4139768661
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction, "MakeUpdateLobbyMemberTransaction" }, // 3340850019
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_MakeUpdateLobbyTransaction, "MakeUpdateLobbyTransaction" }, // 1796063990
		{ &Z_Construct_UFunction_UOnlineLobbySubsystem_ParseSerializedLobbyId, "ParseSerializedLobbyId" }, // 119769177
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyUpdate_MetaData[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyUpdate = { "OnLobbyUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystem, OnLobbyUpdate), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyUpdate_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyUpdate_MetaData)) }; // 516741961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyDelete_MetaData[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyDelete = { "OnLobbyDelete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystem, OnLobbyDelete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_LobbyDelete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyDelete_MetaData)) }; // 4099695862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberConnect_MetaData[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberConnect = { "OnMemberConnect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystem, OnMemberConnect), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberConnect_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberConnect_MetaData)) }; // 1563202936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberUpdate_MetaData[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberUpdate = { "OnMemberUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystem, OnMemberUpdate), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberUpdate_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberUpdate_MetaData)) }; // 681321976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberDisconnect_MetaData[] = {
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberDisconnect = { "OnMemberDisconnect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystem, OnMemberDisconnect), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Lobby_MemberDisconnect_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberDisconnect_MetaData)) }; // 166249754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnLobbyDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystem_Statics::NewProp_OnMemberDisconnect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystem_Statics::ClassParams = {
		&UOnlineLobbySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystem.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystem>()
	{
		return UOnlineLobbySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystem);
	UOnlineLobbySubsystem::~UOnlineLobbySubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemCreateLobbyCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
			ULobby* Lobby;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Lobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemCreateLobbyCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemCreateLobbyCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemCreateLobbyCallbackPin_Parms, Lobby), Z_Construct_UClass_ULobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::NewProp_Lobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemCreateLobbyCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemCreateLobby::execCreateLobby)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(UOnlineLobbyTransaction,Z_Param_Transaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemCreateLobby**)Z_Param__Result=UOnlineLobbySubsystemCreateLobby::CreateLobby(Z_Param_Subsystem,Z_Param_UserId,Z_Param_Transaction);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemCreateLobby::StaticRegisterNativesUOnlineLobbySubsystemCreateLobby()
	{
		UClass* Class = UOnlineLobbySubsystemCreateLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLobby", &UOnlineLobbySubsystemCreateLobby::execCreateLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics
	{
		struct OnlineLobbySubsystemCreateLobby_eventCreateLobby_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			UOnlineLobbyTransaction* Transaction;
			UOnlineLobbySubsystemCreateLobby* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Transaction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemCreateLobby_eventCreateLobby_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemCreateLobby_eventCreateLobby_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemCreateLobby_eventCreateLobby_Parms, Transaction), Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemCreateLobby_eventCreateLobby_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_Transaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby, nullptr, "CreateLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::OnlineLobbySubsystemCreateLobby_eventCreateLobby_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemCreateLobby);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_NoRegister()
	{
		return UOnlineLobbySubsystemCreateLobby::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyCreateOrConnectComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyCreateOrConnectComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Transaction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Transaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemCreateLobby_CreateLobby, "CreateLobby" }, // 2104351824
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemCreateLobby, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnCallFailed_MetaData)) }; // 2517942654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete = { "OnLobbyCreateOrConnectComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemCreateLobby, OnLobbyCreateOrConnectComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemCreateLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete_MetaData)) }; // 2517942654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemCreateLobby, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemCreateLobby, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemCreateLobby, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Transaction_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Transaction = { "__Store__Transaction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemCreateLobby, __Store__Transaction), Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Transaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Transaction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::NewProp___Store__Transaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemCreateLobby>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::ClassParams = {
		&UOnlineLobbySubsystemCreateLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemCreateLobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemCreateLobby.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemCreateLobby.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemCreateLobby>()
	{
		return UOnlineLobbySubsystemCreateLobby::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemCreateLobby);
	UOnlineLobbySubsystemCreateLobby::~UOnlineLobbySubsystemCreateLobby() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateLobbyCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateLobbyCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateLobbyCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateLobbyCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemUpdateLobby::execUpdateLobby)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_OBJECT(UOnlineLobbyTransaction,Z_Param_Transaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemUpdateLobby**)Z_Param__Result=UOnlineLobbySubsystemUpdateLobby::UpdateLobby(Z_Param_Subsystem,Z_Param_UserId,Z_Param_LobbyId,Z_Param_Transaction);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemUpdateLobby::StaticRegisterNativesUOnlineLobbySubsystemUpdateLobby()
	{
		UClass* Class = UOnlineLobbySubsystemUpdateLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateLobby", &UOnlineLobbySubsystemUpdateLobby::execUpdateLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics
	{
		struct OnlineLobbySubsystemUpdateLobby_eventUpdateLobby_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			UOnlineLobbyTransaction* Transaction;
			UOnlineLobbySubsystemUpdateLobby* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Transaction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateLobby_eventUpdateLobby_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateLobby_eventUpdateLobby_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateLobby_eventUpdateLobby_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateLobby_eventUpdateLobby_Parms, Transaction), Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateLobby_eventUpdateLobby_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_Transaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby, nullptr, "UpdateLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::OnlineLobbySubsystemUpdateLobby_eventUpdateLobby_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemUpdateLobby);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_NoRegister()
	{
		return UOnlineLobbySubsystemUpdateLobby::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyOperationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyOperationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__LobbyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Transaction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Transaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemUpdateLobby_UpdateLobby, "UpdateLobby" }, // 3064614362
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateLobby, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnCallFailed_MetaData)) }; // 393663244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnLobbyOperationComplete = { "OnLobbyOperationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateLobby, OnLobbyOperationComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData)) }; // 393663244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateLobby, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateLobby, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateLobby, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__LobbyId = { "__Store__LobbyId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateLobby, __Store__LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__LobbyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Transaction_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Transaction = { "__Store__Transaction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateLobby, __Store__Transaction), Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Transaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Transaction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp_OnLobbyOperationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::NewProp___Store__Transaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemUpdateLobby>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::ClassParams = {
		&UOnlineLobbySubsystemUpdateLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateLobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateLobby.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateLobby.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemUpdateLobby>()
	{
		return UOnlineLobbySubsystemUpdateLobby::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemUpdateLobby);
	UOnlineLobbySubsystemUpdateLobby::~UOnlineLobbySubsystemUpdateLobby() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDeleteLobbyCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDeleteLobbyCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDeleteLobbyCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDeleteLobbyCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemDeleteLobby::execDeleteLobby)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemDeleteLobby**)Z_Param__Result=UOnlineLobbySubsystemDeleteLobby::DeleteLobby(Z_Param_Subsystem,Z_Param_UserId,Z_Param_LobbyId);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemDeleteLobby::StaticRegisterNativesUOnlineLobbySubsystemDeleteLobby()
	{
		UClass* Class = UOnlineLobbySubsystemDeleteLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteLobby", &UOnlineLobbySubsystemDeleteLobby::execDeleteLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics
	{
		struct OnlineLobbySubsystemDeleteLobby_eventDeleteLobby_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			UOnlineLobbySubsystemDeleteLobby* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDeleteLobby_eventDeleteLobby_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDeleteLobby_eventDeleteLobby_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDeleteLobby_eventDeleteLobby_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDeleteLobby_eventDeleteLobby_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby, nullptr, "DeleteLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::OnlineLobbySubsystemDeleteLobby_eventDeleteLobby_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemDeleteLobby);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_NoRegister()
	{
		return UOnlineLobbySubsystemDeleteLobby::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyOperationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyOperationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemDeleteLobby_DeleteLobby, "DeleteLobby" }, // 2948128904
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDeleteLobby, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnCallFailed_MetaData)) }; // 3245114632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnLobbyOperationComplete = { "OnLobbyOperationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDeleteLobby, OnLobbyOperationComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDeleteLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData)) }; // 3245114632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDeleteLobby, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDeleteLobby, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDeleteLobby, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__LobbyId = { "__Store__LobbyId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDeleteLobby, __Store__LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__LobbyId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp_OnLobbyOperationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::NewProp___Store__LobbyId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemDeleteLobby>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::ClassParams = {
		&UOnlineLobbySubsystemDeleteLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemDeleteLobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemDeleteLobby.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemDeleteLobby.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemDeleteLobby>()
	{
		return UOnlineLobbySubsystemDeleteLobby::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemDeleteLobby);
	UOnlineLobbySubsystemDeleteLobby::~UOnlineLobbySubsystemDeleteLobby() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemConnectLobbyCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
			ULobby* Lobby;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Lobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemConnectLobbyCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemConnectLobbyCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemConnectLobbyCallbackPin_Parms, Lobby), Z_Construct_UClass_ULobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_Lobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemConnectLobbyCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemConnectLobby::execConnectLobby)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemConnectLobby**)Z_Param__Result=UOnlineLobbySubsystemConnectLobby::ConnectLobby(Z_Param_Subsystem,Z_Param_UserId,Z_Param_LobbyId);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemConnectLobby::StaticRegisterNativesUOnlineLobbySubsystemConnectLobby()
	{
		UClass* Class = UOnlineLobbySubsystemConnectLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectLobby", &UOnlineLobbySubsystemConnectLobby::execConnectLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics
	{
		struct OnlineLobbySubsystemConnectLobby_eventConnectLobby_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			UOnlineLobbySubsystemConnectLobby* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemConnectLobby_eventConnectLobby_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemConnectLobby_eventConnectLobby_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemConnectLobby_eventConnectLobby_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemConnectLobby_eventConnectLobby_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby, nullptr, "ConnectLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::OnlineLobbySubsystemConnectLobby_eventConnectLobby_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemConnectLobby);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_NoRegister()
	{
		return UOnlineLobbySubsystemConnectLobby::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyCreateOrConnectComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyCreateOrConnectComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemConnectLobby_ConnectLobby, "ConnectLobby" }, // 3858885331
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemConnectLobby, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnCallFailed_MetaData)) }; // 2694448210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete = { "OnLobbyCreateOrConnectComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemConnectLobby, OnLobbyCreateOrConnectComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemConnectLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete_MetaData)) }; // 2694448210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemConnectLobby, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemConnectLobby, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemConnectLobby, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__LobbyId = { "__Store__LobbyId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemConnectLobby, __Store__LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__LobbyId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp_OnLobbyCreateOrConnectComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::NewProp___Store__LobbyId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemConnectLobby>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::ClassParams = {
		&UOnlineLobbySubsystemConnectLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemConnectLobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemConnectLobby.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemConnectLobby.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemConnectLobby>()
	{
		return UOnlineLobbySubsystemConnectLobby::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemConnectLobby);
	UOnlineLobbySubsystemConnectLobby::~UOnlineLobbySubsystemConnectLobby() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDisconnectLobbyCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDisconnectLobbyCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDisconnectLobbyCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemDisconnectLobbyCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemDisconnectLobby::execDisconnectLobby)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemDisconnectLobby**)Z_Param__Result=UOnlineLobbySubsystemDisconnectLobby::DisconnectLobby(Z_Param_Subsystem,Z_Param_UserId,Z_Param_LobbyId);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemDisconnectLobby::StaticRegisterNativesUOnlineLobbySubsystemDisconnectLobby()
	{
		UClass* Class = UOnlineLobbySubsystemDisconnectLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnectLobby", &UOnlineLobbySubsystemDisconnectLobby::execDisconnectLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics
	{
		struct OnlineLobbySubsystemDisconnectLobby_eventDisconnectLobby_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			UOnlineLobbySubsystemDisconnectLobby* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDisconnectLobby_eventDisconnectLobby_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDisconnectLobby_eventDisconnectLobby_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDisconnectLobby_eventDisconnectLobby_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemDisconnectLobby_eventDisconnectLobby_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby, nullptr, "DisconnectLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::OnlineLobbySubsystemDisconnectLobby_eventDisconnectLobby_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemDisconnectLobby);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_NoRegister()
	{
		return UOnlineLobbySubsystemDisconnectLobby::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyOperationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyOperationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby, "DisconnectLobby" }, // 1210512048
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDisconnectLobby, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnCallFailed_MetaData)) }; // 3497955251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnLobbyOperationComplete = { "OnLobbyOperationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDisconnectLobby, OnLobbyOperationComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemDisconnectLobbyCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnLobbyOperationComplete_MetaData)) }; // 3497955251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDisconnectLobby, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDisconnectLobby, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDisconnectLobby, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__LobbyId = { "__Store__LobbyId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemDisconnectLobby, __Store__LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__LobbyId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp_OnLobbyOperationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::NewProp___Store__LobbyId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemDisconnectLobby>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::ClassParams = {
		&UOnlineLobbySubsystemDisconnectLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemDisconnectLobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemDisconnectLobby.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemDisconnectLobby.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemDisconnectLobby>()
	{
		return UOnlineLobbySubsystemDisconnectLobby::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemDisconnectLobby);
	UOnlineLobbySubsystemDisconnectLobby::~UOnlineLobbySubsystemDisconnectLobby() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateMemberSelfCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateMemberSelfCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateMemberSelfCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemUpdateMemberSelfCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemUpdateMemberSelf::execUpdateMemberSelf)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_OBJECT(UOnlineLobbyMemberTransaction,Z_Param_Transaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemUpdateMemberSelf**)Z_Param__Result=UOnlineLobbySubsystemUpdateMemberSelf::UpdateMemberSelf(Z_Param_Subsystem,Z_Param_UserId,Z_Param_LobbyId,Z_Param_Transaction);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemUpdateMemberSelf::StaticRegisterNativesUOnlineLobbySubsystemUpdateMemberSelf()
	{
		UClass* Class = UOnlineLobbySubsystemUpdateMemberSelf::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateMemberSelf", &UOnlineLobbySubsystemUpdateMemberSelf::execUpdateMemberSelf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics
	{
		struct OnlineLobbySubsystemUpdateMemberSelf_eventUpdateMemberSelf_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			UOnlineLobbyMemberTransaction* Transaction;
			UOnlineLobbySubsystemUpdateMemberSelf* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Transaction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateMemberSelf_eventUpdateMemberSelf_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateMemberSelf_eventUpdateMemberSelf_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateMemberSelf_eventUpdateMemberSelf_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateMemberSelf_eventUpdateMemberSelf_Parms, Transaction), Z_Construct_UClass_UOnlineLobbyMemberTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemUpdateMemberSelf_eventUpdateMemberSelf_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_Transaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf, nullptr, "UpdateMemberSelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::OnlineLobbySubsystemUpdateMemberSelf_eventUpdateMemberSelf_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemUpdateMemberSelf);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_NoRegister()
	{
		return UOnlineLobbySubsystemUpdateMemberSelf::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyOperationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyOperationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__LobbyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Transaction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Transaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf, "UpdateMemberSelf" }, // 3012976307
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateMemberSelf, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnCallFailed_MetaData)) }; // 1983699625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnLobbyOperationComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnLobbyOperationComplete = { "OnLobbyOperationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateMemberSelf, OnLobbyOperationComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemUpdateMemberSelfCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnLobbyOperationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnLobbyOperationComplete_MetaData)) }; // 1983699625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateMemberSelf, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateMemberSelf, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateMemberSelf, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__LobbyId = { "__Store__LobbyId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateMemberSelf, __Store__LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__LobbyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Transaction_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Transaction = { "__Store__Transaction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemUpdateMemberSelf, __Store__Transaction), Z_Construct_UClass_UOnlineLobbyMemberTransaction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Transaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Transaction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp_OnLobbyOperationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::NewProp___Store__Transaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemUpdateMemberSelf>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::ClassParams = {
		&UOnlineLobbySubsystemUpdateMemberSelf::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateMemberSelf.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateMemberSelf.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateMemberSelf.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemUpdateMemberSelf>()
	{
		return UOnlineLobbySubsystemUpdateMemberSelf::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemUpdateMemberSelf);
	UOnlineLobbySubsystemUpdateMemberSelf::~UOnlineLobbySubsystemUpdateMemberSelf() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemSearchCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
			TArray<ULobbyId*> Lobbies;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Lobbies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lobbies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Lobbies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemSearchCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemSearchCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Lobbies_Inner = { "Lobbies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Lobbies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Lobbies = { "Lobbies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemSearchCallbackPin_Parms, Lobbies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Lobbies_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Lobbies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Lobbies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::NewProp_Lobbies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemSearchCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemSearchCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemSearch::execSearch)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FOnlineLobbySearchQueryBP,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemSearch**)Z_Param__Result=UOnlineLobbySubsystemSearch::Search(Z_Param_Subsystem,Z_Param_UserId,Z_Param_Query);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemSearch::StaticRegisterNativesUOnlineLobbySubsystemSearch()
	{
		UClass* Class = UOnlineLobbySubsystemSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Search", &UOnlineLobbySubsystemSearch::execSearch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics
	{
		struct OnlineLobbySubsystemSearch_eventSearch_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FOnlineLobbySearchQueryBP Query;
			UOnlineLobbySubsystemSearch* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemSearch_eventSearch_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemSearch_eventSearch_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemSearch_eventSearch_Parms, Query), Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP, METADATA_PARAMS(nullptr, 0) }; // 1213570340
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemSearch_eventSearch_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemSearch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemSearch, nullptr, "Search", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::OnlineLobbySubsystemSearch_eventSearch_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemSearch);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemSearch_NoRegister()
	{
		return UOnlineLobbySubsystemSearch::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbySearchComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbySearchComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Query_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemSearch_Search, "Search" }, // 3276738206
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemSearch, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnCallFailed_MetaData)) }; // 2309992713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnLobbySearchComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnLobbySearchComplete = { "OnLobbySearchComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemSearch, OnLobbySearchComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemSearchCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnLobbySearchComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnLobbySearchComplete_MetaData)) }; // 2309992713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemSearch, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemSearch, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemSearch, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Query_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Query = { "__Store__Query", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemSearch, __Store__Query), Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Query_MetaData)) }; // 1213570340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp_OnLobbySearchComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::NewProp___Store__Query,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemSearch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::ClassParams = {
		&UOnlineLobbySubsystemSearch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemSearch()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemSearch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemSearch.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemSearch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemSearch.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemSearch>()
	{
		return UOnlineLobbySubsystemSearch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemSearch);
	UOnlineLobbySubsystemSearch::~UOnlineLobbySubsystemSearch() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemKickMemberCallbackPin_Parms
		{
			FOnlineErrorInfo Error;
			FUniqueNetIdRepl UserId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemKickMemberCallbackPin_Parms, Error), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemKickMemberCallbackPin_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineLobbySubsystemKickMemberCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineLobbySubsystemKickMember::execKickMember)
	{
		P_GET_OBJECT(UOnlineLobbySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_OBJECT(ULobbyId,Z_Param_LobbyId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_MemberId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystemKickMember**)Z_Param__Result=UOnlineLobbySubsystemKickMember::KickMember(Z_Param_Subsystem,Z_Param_UserId,Z_Param_LobbyId,Z_Param_MemberId);
		P_NATIVE_END;
	}
	void UOnlineLobbySubsystemKickMember::StaticRegisterNativesUOnlineLobbySubsystemKickMember()
	{
		UClass* Class = UOnlineLobbySubsystemKickMember::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KickMember", &UOnlineLobbySubsystemKickMember::execKickMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics
	{
		struct OnlineLobbySubsystemKickMember_eventKickMember_Parms
		{
			UOnlineLobbySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			ULobbyId* LobbyId;
			FUniqueNetIdRepl MemberId;
			UOnlineLobbySubsystemKickMember* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemKickMember_eventKickMember_Parms, Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemKickMember_eventKickMember_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemKickMember_eventKickMember_Parms, LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemKickMember_eventKickMember_Parms, MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbySubsystemKickMember_eventKickMember_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystemKickMember_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_MemberId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Lobby" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbySubsystemKickMember, nullptr, "KickMember", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::OnlineLobbySubsystemKickMember_eventKickMember_Parms), Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbySubsystemKickMember);
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemKickMember_NoRegister()
	{
		return UOnlineLobbySubsystemKickMember::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyOperationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyOperationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__LobbyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__MemberId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__MemberId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbySubsystemKickMember_KickMember, "KickMember" }, // 1482296144
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemKickMember, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnCallFailed_MetaData)) }; // 1129720025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnLobbyOperationComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnLobbyOperationComplete = { "OnLobbyOperationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemKickMember, OnLobbyOperationComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineLobbySubsystemKickMemberCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnLobbyOperationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnLobbyOperationComplete_MetaData)) }; // 1129720025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemKickMember, __Store__Subsystem), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemKickMember, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemKickMember, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__LobbyId = { "__Store__LobbyId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemKickMember, __Store__LobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__LobbyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__MemberId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineLobbySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__MemberId = { "__Store__MemberId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineLobbySubsystemKickMember, __Store__MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__MemberId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__MemberId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp_OnLobbyOperationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::NewProp___Store__MemberId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbySubsystemKickMember>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::ClassParams = {
		&UOnlineLobbySubsystemKickMember::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbySubsystemKickMember()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbySubsystemKickMember.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbySubsystemKickMember.OuterSingleton, Z_Construct_UClass_UOnlineLobbySubsystemKickMember_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbySubsystemKickMember.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbySubsystemKickMember>()
	{
		return UOnlineLobbySubsystemKickMember::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbySubsystemKickMember);
	UOnlineLobbySubsystemKickMember::~UOnlineLobbySubsystemKickMember() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLobbySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLobbySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineLobbySubsystem, UOnlineLobbySubsystem::StaticClass, TEXT("UOnlineLobbySubsystem"), &Z_Registration_Info_UClass_UOnlineLobbySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystem), 3287987784U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemCreateLobby, UOnlineLobbySubsystemCreateLobby::StaticClass, TEXT("UOnlineLobbySubsystemCreateLobby"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemCreateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemCreateLobby), 2261130680U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemUpdateLobby, UOnlineLobbySubsystemUpdateLobby::StaticClass, TEXT("UOnlineLobbySubsystemUpdateLobby"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemUpdateLobby), 2338469494U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemDeleteLobby, UOnlineLobbySubsystemDeleteLobby::StaticClass, TEXT("UOnlineLobbySubsystemDeleteLobby"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemDeleteLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemDeleteLobby), 1836478807U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemConnectLobby, UOnlineLobbySubsystemConnectLobby::StaticClass, TEXT("UOnlineLobbySubsystemConnectLobby"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemConnectLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemConnectLobby), 3357546699U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemDisconnectLobby, UOnlineLobbySubsystemDisconnectLobby::StaticClass, TEXT("UOnlineLobbySubsystemDisconnectLobby"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemDisconnectLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemDisconnectLobby), 533674464U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemUpdateMemberSelf, UOnlineLobbySubsystemUpdateMemberSelf::StaticClass, TEXT("UOnlineLobbySubsystemUpdateMemberSelf"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemUpdateMemberSelf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemUpdateMemberSelf), 3968042787U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemSearch, UOnlineLobbySubsystemSearch::StaticClass, TEXT("UOnlineLobbySubsystemSearch"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemSearch), 1754483880U) },
		{ Z_Construct_UClass_UOnlineLobbySubsystemKickMember, UOnlineLobbySubsystemKickMember::StaticClass, TEXT("UOnlineLobbySubsystemKickMember"), &Z_Registration_Info_UClass_UOnlineLobbySubsystemKickMember, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbySubsystemKickMember), 2459832643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLobbySubsystem_h_614793589(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLobbySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineLobbySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
