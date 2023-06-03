// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBLeaderboardTypes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBLeaderboardTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardRead();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardWrite();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardWrite_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FColumnMetaDataBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsRowBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineStatsRowBP;
class UScriptStruct* FOnlineStatsRowBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineStatsRowBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineStatsRowBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineStatsRowBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineStatsRowBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineStatsRowBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineStatsRowBP>()
{
	return FOnlineStatsRowBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNickname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNickname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Columns_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Columns_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Columns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineStatsRowBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerNickname_MetaData[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerNickname = { "PlayerNickname", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsRowBP, PlayerNickname), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerNickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerNickname_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsRowBP, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsRowBP, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Rank_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns_ValueProp = { "Columns", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns_Key_KeyProp = { "Columns_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns_MetaData[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsRowBP, Columns), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerNickname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewProp_Columns,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineStatsRowBP",
		sizeof(FOnlineStatsRowBP),
		alignof(FOnlineStatsRowBP),
		Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsRowBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineStatsRowBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineStatsRowBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineStatsRowBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColumnMetaDataBP;
class UScriptStruct* FColumnMetaDataBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColumnMetaDataBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColumnMetaDataBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColumnMetaDataBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ColumnMetaDataBP"));
	}
	return Z_Registration_Info_UScriptStruct_ColumnMetaDataBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FColumnMetaDataBP>()
{
	return FColumnMetaDataBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColumnName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColumnMetaDataBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColumnMetaDataBP, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_ColumnName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColumnMetaDataBP, DataType), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType_, METADATA_PARAMS(Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_DataType_MetaData)) }; // 2115290296
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_ColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewProp_DataType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ColumnMetaDataBP",
		sizeof(FColumnMetaDataBP),
		alignof(FColumnMetaDataBP),
		Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColumnMetaDataBP()
	{
		if (!Z_Registration_Info_UScriptStruct_ColumnMetaDataBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColumnMetaDataBP.InnerSingleton, Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColumnMetaDataBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execFindPlayerRecord)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_UBOOL_REF(Z_Param_Out_OutFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOnlineStatsRowBP*)Z_Param__Result=P_THIS->FindPlayerRecord(Z_Param_UserId,Z_Param_Out_OutFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execGetRows)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOnlineStatsRowBP>*)Z_Param__Result=P_THIS->GetRows();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execGetColumns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColumnMetaDataBP>*)Z_Param__Result=P_THIS->GetColumns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execSetColumns)
	{
		P_GET_TARRAY(FColumnMetaDataBP,Z_Param_InColumns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColumns(Z_Param_InColumns);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execGetReadState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineAsyncTaskState_*)Z_Param__Result=P_THIS->GetReadState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execGetSortedColumn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSortedColumn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execSetSortedColumn)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SortedColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSortedColumn(Z_Param_SortedColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execGetLeaderboardName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetLeaderboardName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLeaderboardRead::execSetLeaderboardName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LeaderboardName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaderboardName(Z_Param_LeaderboardName);
		P_NATIVE_END;
	}
	void UOnlineLeaderboardRead::StaticRegisterNativesUOnlineLeaderboardRead()
	{
		UClass* Class = UOnlineLeaderboardRead::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPlayerRecord", &UOnlineLeaderboardRead::execFindPlayerRecord },
			{ "GetColumns", &UOnlineLeaderboardRead::execGetColumns },
			{ "GetLeaderboardName", &UOnlineLeaderboardRead::execGetLeaderboardName },
			{ "GetReadState", &UOnlineLeaderboardRead::execGetReadState },
			{ "GetRows", &UOnlineLeaderboardRead::execGetRows },
			{ "GetSortedColumn", &UOnlineLeaderboardRead::execGetSortedColumn },
			{ "SetColumns", &UOnlineLeaderboardRead::execSetColumns },
			{ "SetLeaderboardName", &UOnlineLeaderboardRead::execSetLeaderboardName },
			{ "SetSortedColumn", &UOnlineLeaderboardRead::execSetSortedColumn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics
	{
		struct OnlineLeaderboardRead_eventFindPlayerRecord_Parms
		{
			FUniqueNetIdRepl UserId;
			bool OutFound;
			FOnlineStatsRowBP ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_OutFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventFindPlayerRecord_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_OutFound_SetBit(void* Obj)
	{
		((OnlineLeaderboardRead_eventFindPlayerRecord_Parms*)Obj)->OutFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_OutFound = { "OutFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLeaderboardRead_eventFindPlayerRecord_Parms), &Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_OutFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventFindPlayerRecord_Parms, ReturnValue), Z_Construct_UScriptStruct_FOnlineStatsRowBP, METADATA_PARAMS(nullptr, 0) }; // 1090974685
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_OutFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "FindPlayerRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::OnlineLeaderboardRead_eventFindPlayerRecord_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics
	{
		struct OnlineLeaderboardRead_eventGetColumns_Parms
		{
			TArray<FColumnMetaDataBP> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColumnMetaDataBP, METADATA_PARAMS(nullptr, 0) }; // 856537157
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventGetColumns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 856537157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "GetColumns", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::OnlineLeaderboardRead_eventGetColumns_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics
	{
		struct OnlineLeaderboardRead_eventGetLeaderboardName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventGetLeaderboardName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "GetLeaderboardName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::OnlineLeaderboardRead_eventGetLeaderboardName_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics
	{
		struct OnlineLeaderboardRead_eventGetReadState_Parms
		{
			EOnlineAsyncTaskState_ ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventGetReadState_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState_, METADATA_PARAMS(nullptr, 0) }; // 2744987233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "GetReadState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::OnlineLeaderboardRead_eventGetReadState_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics
	{
		struct OnlineLeaderboardRead_eventGetRows_Parms
		{
			TArray<FOnlineStatsRowBP> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineStatsRowBP, METADATA_PARAMS(nullptr, 0) }; // 1090974685
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventGetRows_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1090974685
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "GetRows", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::OnlineLeaderboardRead_eventGetRows_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics
	{
		struct OnlineLeaderboardRead_eventGetSortedColumn_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventGetSortedColumn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "GetSortedColumn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::OnlineLeaderboardRead_eventGetSortedColumn_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics
	{
		struct OnlineLeaderboardRead_eventSetColumns_Parms
		{
			TArray<FColumnMetaDataBP> InColumns;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColumns_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InColumns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::NewProp_InColumns_Inner = { "InColumns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColumnMetaDataBP, METADATA_PARAMS(nullptr, 0) }; // 856537157
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::NewProp_InColumns = { "InColumns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventSetColumns_Parms, InColumns), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 856537157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::NewProp_InColumns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::NewProp_InColumns,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "SetColumns", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::OnlineLeaderboardRead_eventSetColumns_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics
	{
		struct OnlineLeaderboardRead_eventSetLeaderboardName_Parms
		{
			FName LeaderboardName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeaderboardName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventSetLeaderboardName_Parms, LeaderboardName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::NewProp_LeaderboardName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "SetLeaderboardName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::OnlineLeaderboardRead_eventSetLeaderboardName_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics
	{
		struct OnlineLeaderboardRead_eventSetSortedColumn_Parms
		{
			FName SortedColumn;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SortedColumn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::NewProp_SortedColumn = { "SortedColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLeaderboardRead_eventSetSortedColumn_Parms, SortedColumn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::NewProp_SortedColumn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLeaderboardRead, nullptr, "SetSortedColumn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::OnlineLeaderboardRead_eventSetSortedColumn_Parms), Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLeaderboardRead);
	UClass* Z_Construct_UClass_UOnlineLeaderboardRead_NoRegister()
	{
		return UOnlineLeaderboardRead::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLeaderboardRead_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLeaderboardRead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLeaderboardRead_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_FindPlayerRecord, "FindPlayerRecord" }, // 2387462613
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_GetColumns, "GetColumns" }, // 2675341630
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_GetLeaderboardName, "GetLeaderboardName" }, // 1989862204
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_GetReadState, "GetReadState" }, // 2540186210
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_GetRows, "GetRows" }, // 594186169
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_GetSortedColumn, "GetSortedColumn" }, // 1288542875
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_SetColumns, "SetColumns" }, // 3789770805
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_SetLeaderboardName, "SetLeaderboardName" }, // 688293669
		{ &Z_Construct_UFunction_UOnlineLeaderboardRead_SetSortedColumn, "SetSortedColumn" }, // 793014475
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardRead_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Types/OSBLeaderboardTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLeaderboardRead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLeaderboardRead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLeaderboardRead_Statics::ClassParams = {
		&UOnlineLeaderboardRead::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardRead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardRead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLeaderboardRead()
	{
		if (!Z_Registration_Info_UClass_UOnlineLeaderboardRead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLeaderboardRead.OuterSingleton, Z_Construct_UClass_UOnlineLeaderboardRead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLeaderboardRead.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLeaderboardRead>()
	{
		return UOnlineLeaderboardRead::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLeaderboardRead);
	UOnlineLeaderboardRead::~UOnlineLeaderboardRead() {}
	void UOnlineLeaderboardWrite::StaticRegisterNativesUOnlineLeaderboardWrite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLeaderboardWrite);
	UClass* Z_Construct_UClass_UOnlineLeaderboardWrite_NoRegister()
	{
		return UOnlineLeaderboardWrite::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLeaderboardWrite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLeaderboardWrite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLeaderboardWrite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Types/OSBLeaderboardTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBLeaderboardTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLeaderboardWrite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLeaderboardWrite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLeaderboardWrite_Statics::ClassParams = {
		&UOnlineLeaderboardWrite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLeaderboardWrite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLeaderboardWrite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLeaderboardWrite()
	{
		if (!Z_Registration_Info_UClass_UOnlineLeaderboardWrite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLeaderboardWrite.OuterSingleton, Z_Construct_UClass_UOnlineLeaderboardWrite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLeaderboardWrite.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLeaderboardWrite>()
	{
		return UOnlineLeaderboardWrite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLeaderboardWrite);
	UOnlineLeaderboardWrite::~UOnlineLeaderboardWrite() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_Statics::ScriptStructInfo[] = {
		{ FOnlineStatsRowBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineStatsRowBP_Statics::NewStructOps, TEXT("OnlineStatsRowBP"), &Z_Registration_Info_UScriptStruct_OnlineStatsRowBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineStatsRowBP), 1090974685U) },
		{ FColumnMetaDataBP::StaticStruct, Z_Construct_UScriptStruct_FColumnMetaDataBP_Statics::NewStructOps, TEXT("ColumnMetaDataBP"), &Z_Registration_Info_UScriptStruct_ColumnMetaDataBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColumnMetaDataBP), 856537157U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineLeaderboardRead, UOnlineLeaderboardRead::StaticClass, TEXT("UOnlineLeaderboardRead"), &Z_Registration_Info_UClass_UOnlineLeaderboardRead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLeaderboardRead), 1059224371U) },
		{ Z_Construct_UClass_UOnlineLeaderboardWrite, UOnlineLeaderboardWrite::StaticClass, TEXT("UOnlineLeaderboardWrite"), &Z_Registration_Info_UClass_UOnlineLeaderboardWrite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLeaderboardWrite), 2236563987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_2969699785(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLeaderboardTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
