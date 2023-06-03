// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineUserPresenceData.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBOnlineUserPresenceData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceData();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState;
	static UEnum* FOnlineUserPresenceStatusState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("FOnlineUserPresenceStatusState"));
		}
		return Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<FOnlineUserPresenceStatusState>()
	{
		return FOnlineUserPresenceStatusState_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::Enumerators[] = {
		{ "FOnlineUserPresenceStatusState::Online", (int64)FOnlineUserPresenceStatusState::Online },
		{ "FOnlineUserPresenceStatusState::Offline", (int64)FOnlineUserPresenceStatusState::Offline },
		{ "FOnlineUserPresenceStatusState::Away", (int64)FOnlineUserPresenceStatusState::Away },
		{ "FOnlineUserPresenceStatusState::ExtendedAway", (int64)FOnlineUserPresenceStatusState::ExtendedAway },
		{ "FOnlineUserPresenceStatusState::DoNotDisturb", (int64)FOnlineUserPresenceStatusState::DoNotDisturb },
		{ "FOnlineUserPresenceStatusState::Chat", (int64)FOnlineUserPresenceStatusState::Chat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::Enum_MetaDataParams[] = {
		{ "Away.Name", "FOnlineUserPresenceStatusState::Away" },
		{ "BlueprintType", "true" },
		{ "Chat.Name", "FOnlineUserPresenceStatusState::Chat" },
		{ "Comment", "// Uh, why is this FOnlineUserPresenceStatusState and not EOnlineUserPresenceStatusState_ ?\n" },
		{ "DoNotDisturb.Name", "FOnlineUserPresenceStatusState::DoNotDisturb" },
		{ "ExtendedAway.Name", "FOnlineUserPresenceStatusState::ExtendedAway" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
		{ "Offline.Name", "FOnlineUserPresenceStatusState::Offline" },
		{ "Online.Name", "FOnlineUserPresenceStatusState::Online" },
		{ "ScriptName", "EOnlinePresenceState" },
		{ "ToolTip", "Uh, why is this FOnlineUserPresenceStatusState and not EOnlineUserPresenceStatusState_ ?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"FOnlineUserPresenceStatusState",
		"FOnlineUserPresenceStatusState",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState()
	{
		if (!Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineCachedResult_;
	static UEnum* EOnlineCachedResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineCachedResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineCachedResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineCachedResult_"));
		}
		return Z_Registration_Info_UEnum_EOnlineCachedResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineCachedResult_>()
	{
		return EOnlineCachedResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::Enumerators[] = {
		{ "EOnlineCachedResult_::Success", (int64)EOnlineCachedResult_::Success },
		{ "EOnlineCachedResult_::NotFound", (int64)EOnlineCachedResult_::NotFound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
		{ "NotFound.Comment", "/** The requested data was not found in the cache, and the out parameter was not modified. */" },
		{ "NotFound.Name", "EOnlineCachedResult_::NotFound" },
		{ "NotFound.ToolTip", "The requested data was not found in the cache, and the out parameter was not modified." },
		{ "ScriptName", "EOnlineCachedResult" },
		{ "Success.Comment", "/** The requested data was found and returned successfully. */" },
		{ "Success.Name", "EOnlineCachedResult_::Success" },
		{ "Success.ToolTip", "The requested data was found and returned successfully." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineCachedResult_",
		"EOnlineCachedResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineCachedResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineCachedResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineCachedResult_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData;
class UScriptStruct* FOnlineUserPresenceStatusData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineUserPresenceStatusData"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineUserPresenceStatusData>()
{
	return FOnlineUserPresenceStatusData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
		{ "ScriptName", "FOnlineUserPresenceStatus" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineUserPresenceStatusData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineUserPresenceStatusData, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Status_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineUserPresenceStatusData, State), Z_Construct_UEnum_OnlineSubsystemBlueprints_FOnlineUserPresenceStatusState, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_State_MetaData)) }; // 3069089632
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties_ValueProp = { "Properties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties_Key_KeyProp = { "Properties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineUserPresenceStatusData, Properties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewProp_Properties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineUserPresenceStatusData",
		sizeof(FOnlineUserPresenceStatusData),
		alignof(FOnlineUserPresenceStatusData),
		Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData.InnerSingleton, Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineUserPresenceData;
class UScriptStruct* FOnlineUserPresenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineUserPresenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineUserPresenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineUserPresenceData, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineUserPresenceData"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineUserPresenceData.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineUserPresenceData>()
{
	return FOnlineUserPresenceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsOnline_MetaData[];
#endif
		static void NewProp_IsOnline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlaying_MetaData[];
#endif
		static void NewProp_IsPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayingThisGame_MetaData[];
#endif
		static void NewProp_IsPlayingThisGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayingThisGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[];
#endif
		static void NewProp_IsJoinable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasVoiceSupport_MetaData[];
#endif
		static void NewProp_HasVoiceSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasVoiceSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastOnline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastOnline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
		{ "ScriptName", "FOnlineUserPresence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineUserPresenceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineUserPresenceData, SessionId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_SessionId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsOnline_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsOnline_SetBit(void* Obj)
	{
		((FOnlineUserPresenceData*)Obj)->IsOnline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsOnline = { "IsOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineUserPresenceData), &Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsOnline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsOnline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlaying_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlaying_SetBit(void* Obj)
	{
		((FOnlineUserPresenceData*)Obj)->IsPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlaying = { "IsPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineUserPresenceData), &Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlayingThisGame_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlayingThisGame_SetBit(void* Obj)
	{
		((FOnlineUserPresenceData*)Obj)->IsPlayingThisGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlayingThisGame = { "IsPlayingThisGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineUserPresenceData), &Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlayingThisGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlayingThisGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlayingThisGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsJoinable_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsJoinable_SetBit(void* Obj)
	{
		((FOnlineUserPresenceData*)Obj)->IsJoinable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineUserPresenceData), &Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsJoinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsJoinable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_HasVoiceSupport_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_HasVoiceSupport_SetBit(void* Obj)
	{
		((FOnlineUserPresenceData*)Obj)->HasVoiceSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_HasVoiceSupport = { "HasVoiceSupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineUserPresenceData), &Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_HasVoiceSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_HasVoiceSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_HasVoiceSupport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_LastOnline_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_LastOnline = { "LastOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineUserPresenceData, LastOnline), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_LastOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_LastOnline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserPresenceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineUserPresenceData, Status), Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_Status_MetaData)) }; // 711038097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsOnline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsPlayingThisGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_IsJoinable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_HasVoiceSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_LastOnline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewProp_Status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineUserPresenceData",
		sizeof(FOnlineUserPresenceData),
		alignof(FOnlineUserPresenceData),
		Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceData()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineUserPresenceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineUserPresenceData.InnerSingleton, Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineUserPresenceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_Statics::EnumInfo[] = {
		{ FOnlineUserPresenceStatusState_StaticEnum, TEXT("FOnlineUserPresenceStatusState"), &Z_Registration_Info_UEnum_FOnlineUserPresenceStatusState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3069089632U) },
		{ EOnlineCachedResult__StaticEnum, TEXT("EOnlineCachedResult_"), &Z_Registration_Info_UEnum_EOnlineCachedResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 514511364U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_Statics::ScriptStructInfo[] = {
		{ FOnlineUserPresenceStatusData::StaticStruct, Z_Construct_UScriptStruct_FOnlineUserPresenceStatusData_Statics::NewStructOps, TEXT("OnlineUserPresenceStatusData"), &Z_Registration_Info_UScriptStruct_OnlineUserPresenceStatusData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineUserPresenceStatusData), 711038097U) },
		{ FOnlineUserPresenceData::StaticStruct, Z_Construct_UScriptStruct_FOnlineUserPresenceData_Statics::NewStructOps, TEXT("OnlineUserPresenceData"), &Z_Registration_Info_UScriptStruct_OnlineUserPresenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineUserPresenceData), 1165248872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_1946442540(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserPresenceData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
