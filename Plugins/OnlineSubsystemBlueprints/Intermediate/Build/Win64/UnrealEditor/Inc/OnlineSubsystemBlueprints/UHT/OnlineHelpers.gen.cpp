// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Private/OnlineHelpers.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UFileData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_ULobbyId_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UMutablePartyData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineHelpers();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineHelpers_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePartyJoinInfo_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePartySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UPartyId_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UReadablePartyData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineHelpers::execConv_ULobbyIdToUOnlinePartyJoinInfo)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InLocalUserId);
		P_GET_OBJECT(UOnlinePartySubsystem,Z_Param_InPartySubsystem);
		P_GET_OBJECT(ULobbyId,Z_Param_InLobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePartyJoinInfo**)Z_Param__Result=UOnlineHelpers::Conv_ULobbyIdToUOnlinePartyJoinInfo(Z_Param_InLocalUserId,Z_Param_InPartySubsystem,Z_Param_InLobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execReadFileDataAsSaveGame)
	{
		P_GET_OBJECT(UFileData,Z_Param_FileData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveGame**)Z_Param__Result=UOnlineHelpers::ReadFileDataAsSaveGame(Z_Param_FileData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execCreateFileDataFromSaveGame)
	{
		P_GET_OBJECT(USaveGame,Z_Param_SaveGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFileData**)Z_Param__Result=UOnlineHelpers::CreateFileDataFromSaveGame(Z_Param_SaveGame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execReadFileDataAsString)
	{
		P_GET_OBJECT(UFileData,Z_Param_FileData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineHelpers::ReadFileDataAsString(Z_Param_FileData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execCreateFileDataFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFileData**)Z_Param__Result=UOnlineHelpers::CreateFileDataFromString(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execCreateMutablePartyData)
	{
		P_GET_OBJECT(UReadablePartyData,Z_Param_ReadOnlyPartyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMutablePartyData**)Z_Param__Result=UOnlineHelpers::CreateMutablePartyData(Z_Param_ReadOnlyPartyData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execGetPlayerStateUniqueNetId)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=UOnlineHelpers::GetPlayerStateUniqueNetId(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execGetControllerUniqueNetId)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=UOnlineHelpers::GetControllerUniqueNetId(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execGetResolvedConnectStringBySearchResult)
	{
		P_GET_OBJECT(UOnlineSessionSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FOnlineSessionSearchResultBP,Z_Param_SearchResult);
		P_GET_PROPERTY(FNameProperty,Z_Param_PortType);
		P_GET_UBOOL_REF(Z_Param_Out_bWasSuccessful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutConnectInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlineHelpers::GetResolvedConnectStringBySearchResult(Z_Param_Subsystem,Z_Param_SearchResult,Z_Param_PortType,Z_Param_Out_bWasSuccessful,Z_Param_Out_OutConnectInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execGetResolvedConnectStringByName)
	{
		P_GET_OBJECT(UOnlineSessionSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_PortType);
		P_GET_UBOOL_REF(Z_Param_Out_bWasSuccessful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutConnectInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlineHelpers::GetResolvedConnectStringByName(Z_Param_Subsystem,Z_Param_SessionName,Z_Param_PortType,Z_Param_Out_bWasSuccessful,Z_Param_Out_OutConnectInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execGetPrimaryPartyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UOnlineHelpers::GetPrimaryPartyType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execIsValid_LobbyId)
	{
		P_GET_OBJECT(ULobbyId,Z_Param_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineHelpers::IsValid_LobbyId(Z_Param_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execEqualEqual_LobbyIdLobbyId)
	{
		P_GET_OBJECT(ULobbyId,Z_Param_A);
		P_GET_OBJECT(ULobbyId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineHelpers::EqualEqual_LobbyIdLobbyId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execIsValid_PartyId)
	{
		P_GET_OBJECT(UPartyId,Z_Param_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineHelpers::IsValid_PartyId(Z_Param_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execEqualEqual_PartyIdPartyId)
	{
		P_GET_OBJECT(UPartyId,Z_Param_A);
		P_GET_OBJECT(UPartyId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineHelpers::EqualEqual_PartyIdPartyId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_InA);
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_InB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineHelpers::EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl(Z_Param_Out_InA,Z_Param_Out_InB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execFUniqueNetIdIsValid)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlineHelpers::FUniqueNetIdIsValid(Z_Param_InNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execFUniqueNetIdGetType)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UOnlineHelpers::FUniqueNetIdGetType(Z_Param_InNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execGetCurrentSubsystemName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UOnlineHelpers::GetCurrentSubsystemName(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineHelpers::execConv_FUniqueNetIdReplToString)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOnlineHelpers::Conv_FUniqueNetIdReplToString(Z_Param_InNetId);
		P_NATIVE_END;
	}
	void UOnlineHelpers::StaticRegisterNativesUOnlineHelpers()
	{
		UClass* Class = UOnlineHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FUniqueNetIdReplToString", &UOnlineHelpers::execConv_FUniqueNetIdReplToString },
			{ "Conv_ULobbyIdToUOnlinePartyJoinInfo", &UOnlineHelpers::execConv_ULobbyIdToUOnlinePartyJoinInfo },
			{ "CreateFileDataFromSaveGame", &UOnlineHelpers::execCreateFileDataFromSaveGame },
			{ "CreateFileDataFromString", &UOnlineHelpers::execCreateFileDataFromString },
			{ "CreateMutablePartyData", &UOnlineHelpers::execCreateMutablePartyData },
			{ "EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl", &UOnlineHelpers::execEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl },
			{ "EqualEqual_LobbyIdLobbyId", &UOnlineHelpers::execEqualEqual_LobbyIdLobbyId },
			{ "EqualEqual_PartyIdPartyId", &UOnlineHelpers::execEqualEqual_PartyIdPartyId },
			{ "FUniqueNetIdGetType", &UOnlineHelpers::execFUniqueNetIdGetType },
			{ "FUniqueNetIdIsValid", &UOnlineHelpers::execFUniqueNetIdIsValid },
			{ "GetControllerUniqueNetId", &UOnlineHelpers::execGetControllerUniqueNetId },
			{ "GetCurrentSubsystemName", &UOnlineHelpers::execGetCurrentSubsystemName },
			{ "GetPlayerStateUniqueNetId", &UOnlineHelpers::execGetPlayerStateUniqueNetId },
			{ "GetPrimaryPartyType", &UOnlineHelpers::execGetPrimaryPartyType },
			{ "GetResolvedConnectStringByName", &UOnlineHelpers::execGetResolvedConnectStringByName },
			{ "GetResolvedConnectStringBySearchResult", &UOnlineHelpers::execGetResolvedConnectStringBySearchResult },
			{ "IsValid_LobbyId", &UOnlineHelpers::execIsValid_LobbyId },
			{ "IsValid_PartyId", &UOnlineHelpers::execIsValid_PartyId },
			{ "ReadFileDataAsSaveGame", &UOnlineHelpers::execReadFileDataAsSaveGame },
			{ "ReadFileDataAsString", &UOnlineHelpers::execReadFileDataAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics
	{
		struct OnlineHelpers_eventConv_FUniqueNetIdReplToString_Parms
		{
			FUniqueNetIdRepl InNetId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::NewProp_InNetId = { "InNetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventConv_FUniqueNetIdReplToString_Parms, InNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventConv_FUniqueNetIdReplToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::NewProp_InNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Online" },
		{ "Comment", "/** Convert the unique net ID to it's string representation */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FUniqueNetIdRepl)" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "FUniqueNetIdRepl netid cast convert to string" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Convert the unique net ID to it's string representation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "Conv_FUniqueNetIdReplToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::OnlineHelpers_eventConv_FUniqueNetIdReplToString_Parms), Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics
	{
		struct OnlineHelpers_eventConv_ULobbyIdToUOnlinePartyJoinInfo_Parms
		{
			FUniqueNetIdRepl InLocalUserId;
			UOnlinePartySubsystem* InPartySubsystem;
			ULobbyId* InLobbyId;
			UOnlinePartyJoinInfo* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocalUserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPartySubsystem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLobbyId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_InLocalUserId = { "InLocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventConv_ULobbyIdToUOnlinePartyJoinInfo_Parms, InLocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_InPartySubsystem = { "InPartySubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventConv_ULobbyIdToUOnlinePartyJoinInfo_Parms, InPartySubsystem), Z_Construct_UClass_UOnlinePartySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_InLobbyId = { "InLobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventConv_ULobbyIdToUOnlinePartyJoinInfo_Parms, InLobbyId), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventConv_ULobbyIdToUOnlinePartyJoinInfo_Parms, ReturnValue), Z_Construct_UClass_UOnlinePartyJoinInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_InLocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_InPartySubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_InLobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Convert a lobby ID into a joinable party info.\n     */" },
		{ "DisplayName", "Convert Lobby Id to Party Join Info" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "convert lobby id party join info" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Convert a lobby ID into a joinable party info." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "Conv_ULobbyIdToUOnlinePartyJoinInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::OnlineHelpers_eventConv_ULobbyIdToUOnlinePartyJoinInfo_Parms), Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics
	{
		struct OnlineHelpers_eventCreateFileDataFromSaveGame_Parms
		{
			USaveGame* SaveGame;
			UFileData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventCreateFileDataFromSaveGame_Parms, SaveGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventCreateFileDataFromSaveGame_Parms, ReturnValue), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::NewProp_SaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/**\n     * Create file data from a save game.\n     */" },
		{ "DisplayName", "Create File Data from Save Game" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "file data filedata create user title cloud save game" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Create file data from a save game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "CreateFileDataFromSaveGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::OnlineHelpers_eventCreateFileDataFromSaveGame_Parms), Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics
	{
		struct OnlineHelpers_eventCreateFileDataFromString_Parms
		{
			FString String;
			UFileData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventCreateFileDataFromString_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventCreateFileDataFromString_Parms, ReturnValue), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/**\n     * Create file data from a string; that is, the string will be the entire contents of the file.\n     */" },
		{ "DisplayName", "Create File Data from String" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "file data filedata create user title cloud string" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Create file data from a string; that is, the string will be the entire contents of the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "CreateFileDataFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::OnlineHelpers_eventCreateFileDataFromString_Parms), Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics
	{
		struct OnlineHelpers_eventCreateMutablePartyData_Parms
		{
			UReadablePartyData* ReadOnlyPartyData;
			UMutablePartyData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadOnlyPartyData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::NewProp_ReadOnlyPartyData = { "ReadOnlyPartyData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventCreateMutablePartyData_Parms, ReadOnlyPartyData), Z_Construct_UClass_UReadablePartyData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventCreateMutablePartyData_Parms, ReturnValue), Z_Construct_UClass_UMutablePartyData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::NewProp_ReadOnlyPartyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Create a mutable party data based on read-only party data. You must use this if you want to modify the party data\n     * you got from GetPartyData so that you can pass it to UpdatePartyData.\n     */" },
		{ "DisplayName", "Create Modifiable Party Data" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "modify party data set" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Create a mutable party data based on read-only party data. You must use this if you want to modify the party data\nyou got from GetPartyData so that you can pass it to UpdatePartyData." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "CreateMutablePartyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::OnlineHelpers_eventCreateMutablePartyData_Parms), Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics
	{
		struct OnlineHelpers_eventEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Parms
		{
			FUniqueNetIdRepl InA;
			FUniqueNetIdRepl InB;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InA = { "InA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Parms, InA), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InA_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InB = { "InB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Parms, InB), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InB_MetaData)) }; // 2142661840
	void Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineHelpers_eventEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Parms), &Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_InB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Returns true if the unique net IDs are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Unique Net Id" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Returns true if the unique net IDs are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::OnlineHelpers_eventEqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Parms), Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics
	{
		struct OnlineHelpers_eventEqualEqual_LobbyIdLobbyId_Parms
		{
			ULobbyId* A;
			ULobbyId* B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventEqualEqual_LobbyIdLobbyId_Parms, A), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventEqualEqual_LobbyIdLobbyId_Parms, B), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineHelpers_eventEqualEqual_LobbyIdLobbyId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventEqualEqual_LobbyIdLobbyId_Parms), &Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Returns true if the lobby IDs are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Lobby Id" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Returns true if the lobby IDs are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "EqualEqual_LobbyIdLobbyId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::OnlineHelpers_eventEqualEqual_LobbyIdLobbyId_Parms), Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics
	{
		struct OnlineHelpers_eventEqualEqual_PartyIdPartyId_Parms
		{
			UPartyId* A;
			UPartyId* B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventEqualEqual_PartyIdPartyId_Parms, A), Z_Construct_UClass_UPartyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventEqualEqual_PartyIdPartyId_Parms, B), Z_Construct_UClass_UPartyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineHelpers_eventEqualEqual_PartyIdPartyId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventEqualEqual_PartyIdPartyId_Parms), &Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Returns true if the party IDs are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Party Id" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Returns true if the party IDs are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "EqualEqual_PartyIdPartyId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::OnlineHelpers_eventEqualEqual_PartyIdPartyId_Parms), Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics
	{
		struct OnlineHelpers_eventFUniqueNetIdGetType_Parms
		{
			FUniqueNetIdRepl InNetId;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNetId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::NewProp_InNetId = { "InNetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventFUniqueNetIdGetType_Parms, InNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventFUniqueNetIdGetType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::NewProp_InNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Online" },
		{ "Comment", "/** Return the subsystem name of the unique net ID */" },
		{ "DisplayName", "Get User Id Subsystem Name" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "FUniqueNetIdRepl netid subsystem type name" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Return the subsystem name of the unique net ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "FUniqueNetIdGetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::OnlineHelpers_eventFUniqueNetIdGetType_Parms), Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics
	{
		struct OnlineHelpers_eventFUniqueNetIdIsValid_Parms
		{
			FUniqueNetIdRepl InNetId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::NewProp_InNetId = { "InNetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventFUniqueNetIdIsValid_Parms, InNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineHelpers_eventFUniqueNetIdIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventFUniqueNetIdIsValid_Parms), &Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::NewProp_InNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Online" },
		{ "Comment", "/** Return true if the unique net ID is valid */" },
		{ "DisplayName", "Is Valid (FUniqueNetIdRepl)" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "FUniqueNetIdRepl netid subsystem is valid" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Return true if the unique net ID is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "FUniqueNetIdIsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::OnlineHelpers_eventFUniqueNetIdIsValid_Parms), Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics
	{
		struct OnlineHelpers_eventGetControllerUniqueNetId_Parms
		{
			APlayerController* PlayerController;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetControllerUniqueNetId_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetControllerUniqueNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Gets the unique net ID for the player controller */" },
		{ "DisplayName", "Get Controller Unique Net Id" },
		{ "IgnoreTypePromotion", "" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Gets the unique net ID for the player controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "GetControllerUniqueNetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::OnlineHelpers_eventGetControllerUniqueNetId_Parms), Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics
	{
		struct OnlineHelpers_eventGetCurrentSubsystemName_Parms
		{
			const UObject* WorldContextObject;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetCurrentSubsystemName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetCurrentSubsystemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Online" },
		{ "Comment", "/** Return the name of the current subsystem (e.g. Steam) */" },
		{ "DisplayName", "Get Current Subsystem Name" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "subsystem name" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Return the name of the current subsystem (e.g. Steam)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "GetCurrentSubsystemName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::OnlineHelpers_eventGetCurrentSubsystemName_Parms), Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics
	{
		struct OnlineHelpers_eventGetPlayerStateUniqueNetId_Parms
		{
			APlayerState* PlayerState;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetPlayerStateUniqueNetId_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetPlayerStateUniqueNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Gets the unique net ID for the player state */" },
		{ "DisplayName", "Get Player State Unique Net Id" },
		{ "IgnoreTypePromotion", "" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Gets the unique net ID for the player state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "GetPlayerStateUniqueNetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::OnlineHelpers_eventGetPlayerStateUniqueNetId_Parms), Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics
	{
		struct OnlineHelpers_eventGetPrimaryPartyType_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetPrimaryPartyType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Returns the primary party type */" },
		{ "DisplayName", "Get Primary Party Type" },
		{ "IgnoreTypePromotion", "" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Returns the primary party type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "GetPrimaryPartyType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::OnlineHelpers_eventGetPrimaryPartyType_Parms), Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics
	{
		struct OnlineHelpers_eventGetResolvedConnectStringByName_Parms
		{
			UOnlineSessionSubsystem* Subsystem;
			FName SessionName;
			FName PortType;
			bool bWasSuccessful;
			FString OutConnectInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PortType;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutConnectInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringByName_Parms, Subsystem), Z_Construct_UClass_UOnlineSessionSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringByName_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_PortType = { "PortType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringByName_Parms, PortType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((OnlineHelpers_eventGetResolvedConnectStringByName_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventGetResolvedConnectStringByName_Parms), &Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_OutConnectInfo = { "OutConnectInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringByName_Parms, OutConnectInfo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_PortType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::NewProp_OutConnectInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Sessions" },
		{ "Comment", "/** Gets the connection string for a session by name */" },
		{ "DisplayName", "Get Resolved Connect String (from Session Name)" },
		{ "IgnoreTypePromotion", "" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Gets the connection string for a session by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "GetResolvedConnectStringByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::OnlineHelpers_eventGetResolvedConnectStringByName_Parms), Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics
	{
		struct OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms
		{
			UOnlineSessionSubsystem* Subsystem;
			FOnlineSessionSearchResultBP SearchResult;
			FName PortType;
			bool bWasSuccessful;
			FString OutConnectInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PortType;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutConnectInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms, Subsystem), Z_Construct_UClass_UOnlineSessionSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms, SearchResult), Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP, METADATA_PARAMS(nullptr, 0) }; // 1707739709
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_PortType = { "PortType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms, PortType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms), &Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_OutConnectInfo = { "OutConnectInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms, OutConnectInfo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_SearchResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_PortType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::NewProp_OutConnectInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Sessions" },
		{ "Comment", "/** Gets the connection string for a search result */" },
		{ "DisplayName", "Get Resolved Connect String (from Search Result)" },
		{ "IgnoreTypePromotion", "" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Gets the connection string for a search result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "GetResolvedConnectStringBySearchResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::OnlineHelpers_eventGetResolvedConnectStringBySearchResult_Parms), Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics
	{
		struct OnlineHelpers_eventIsValid_LobbyId_Parms
		{
			ULobbyId* A;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventIsValid_LobbyId_Parms, A), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineHelpers_eventIsValid_LobbyId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventIsValid_LobbyId_Parms), &Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Returns true if the lobby ID is valid */" },
		{ "CompactNodeTitle", "Valid?" },
		{ "DisplayName", "Lobby Id Is Valid?" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "is valid" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Returns true if the lobby ID is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "IsValid_LobbyId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::OnlineHelpers_eventIsValid_LobbyId_Parms), Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics
	{
		struct OnlineHelpers_eventIsValid_PartyId_Parms
		{
			UPartyId* A;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventIsValid_PartyId_Parms, A), Z_Construct_UClass_UPartyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineHelpers_eventIsValid_PartyId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineHelpers_eventIsValid_PartyId_Parms), &Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Returns true if the party ID is valid */" },
		{ "CompactNodeTitle", "Valid?" },
		{ "DisplayName", "Party Id Is Valid?" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "is valid" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Returns true if the party ID is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "IsValid_PartyId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::OnlineHelpers_eventIsValid_PartyId_Parms), Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics
	{
		struct OnlineHelpers_eventReadFileDataAsSaveGame_Parms
		{
			UFileData* FileData;
			USaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FileData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::NewProp_FileData = { "FileData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventReadFileDataAsSaveGame_Parms, FileData), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventReadFileDataAsSaveGame_Parms, ReturnValue), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::NewProp_FileData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/**\n     * Read file data as a string, and return the string value.\n     */" },
		{ "DisplayName", "Read File Data as Save Game" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "file data filedata read user title cloud save game" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Read file data as a string, and return the string value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "ReadFileDataAsSaveGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::OnlineHelpers_eventReadFileDataAsSaveGame_Parms), Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics
	{
		struct OnlineHelpers_eventReadFileDataAsString_Parms
		{
			UFileData* FileData;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FileData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::NewProp_FileData = { "FileData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventReadFileDataAsString_Parms, FileData), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineHelpers_eventReadFileDataAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::NewProp_FileData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/**\n     * Read file data as a string, and return the string value.\n     */" },
		{ "DisplayName", "Read File Data as String" },
		{ "IgnoreTypePromotion", "" },
		{ "Keywords", "file data filedata read user title cloud string" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
		{ "ToolTip", "Read file data as a string, and return the string value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHelpers, nullptr, "ReadFileDataAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::OnlineHelpers_eventReadFileDataAsString_Parms), Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineHelpers);
	UClass* Z_Construct_UClass_UOnlineHelpers_NoRegister()
	{
		return UOnlineHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineHelpers_Conv_FUniqueNetIdReplToString, "Conv_FUniqueNetIdReplToString" }, // 558096018
		{ &Z_Construct_UFunction_UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo, "Conv_ULobbyIdToUOnlinePartyJoinInfo" }, // 2418734263
		{ &Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromSaveGame, "CreateFileDataFromSaveGame" }, // 2488128449
		{ &Z_Construct_UFunction_UOnlineHelpers_CreateFileDataFromString, "CreateFileDataFromString" }, // 1542144343
		{ &Z_Construct_UFunction_UOnlineHelpers_CreateMutablePartyData, "CreateMutablePartyData" }, // 3477199690
		{ &Z_Construct_UFunction_UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl, "EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl" }, // 1486952579
		{ &Z_Construct_UFunction_UOnlineHelpers_EqualEqual_LobbyIdLobbyId, "EqualEqual_LobbyIdLobbyId" }, // 3330467496
		{ &Z_Construct_UFunction_UOnlineHelpers_EqualEqual_PartyIdPartyId, "EqualEqual_PartyIdPartyId" }, // 1934172649
		{ &Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdGetType, "FUniqueNetIdGetType" }, // 49485798
		{ &Z_Construct_UFunction_UOnlineHelpers_FUniqueNetIdIsValid, "FUniqueNetIdIsValid" }, // 2399198678
		{ &Z_Construct_UFunction_UOnlineHelpers_GetControllerUniqueNetId, "GetControllerUniqueNetId" }, // 3047882223
		{ &Z_Construct_UFunction_UOnlineHelpers_GetCurrentSubsystemName, "GetCurrentSubsystemName" }, // 3970967256
		{ &Z_Construct_UFunction_UOnlineHelpers_GetPlayerStateUniqueNetId, "GetPlayerStateUniqueNetId" }, // 1864703953
		{ &Z_Construct_UFunction_UOnlineHelpers_GetPrimaryPartyType, "GetPrimaryPartyType" }, // 1121426005
		{ &Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringByName, "GetResolvedConnectStringByName" }, // 247671834
		{ &Z_Construct_UFunction_UOnlineHelpers_GetResolvedConnectStringBySearchResult, "GetResolvedConnectStringBySearchResult" }, // 3563868877
		{ &Z_Construct_UFunction_UOnlineHelpers_IsValid_LobbyId, "IsValid_LobbyId" }, // 906702061
		{ &Z_Construct_UFunction_UOnlineHelpers_IsValid_PartyId, "IsValid_PartyId" }, // 1488774301
		{ &Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsSaveGame, "ReadFileDataAsSaveGame" }, // 2268574872
		{ &Z_Construct_UFunction_UOnlineHelpers_ReadFileDataAsString, "ReadFileDataAsString" }, // 1372834586
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineHelpers.h" },
		{ "ModuleRelativePath", "Private/OnlineHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineHelpers_Statics::ClassParams = {
		&UOnlineHelpers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineHelpers()
	{
		if (!Z_Registration_Info_UClass_UOnlineHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineHelpers.OuterSingleton, Z_Construct_UClass_UOnlineHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineHelpers.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineHelpers>()
	{
		return UOnlineHelpers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineHelpers);
	UOnlineHelpers::~UOnlineHelpers() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineHelpers, UOnlineHelpers::StaticClass, TEXT("UOnlineHelpers"), &Z_Registration_Info_UClass_UOnlineHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineHelpers), 3037624717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_597258659(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Private_OnlineHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
