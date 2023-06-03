// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBFriendTypes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineUserPresenceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBFriendTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineFriendRef();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineFriendRef_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserRef();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FFriendSettingsData();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceData();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FReportPlayedWithUserInfo();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInviteStatus_;
	static UEnum* EInviteStatus__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInviteStatus_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInviteStatus_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EInviteStatus_"));
		}
		return Z_Registration_Info_UEnum_EInviteStatus_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EInviteStatus_>()
	{
		return EInviteStatus__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::Enumerators[] = {
		{ "EInviteStatus_::Unknown", (int64)EInviteStatus_::Unknown },
		{ "EInviteStatus_::Accepted", (int64)EInviteStatus_::Accepted },
		{ "EInviteStatus_::PendingInbound", (int64)EInviteStatus_::PendingInbound },
		{ "EInviteStatus_::PendingOutbound", (int64)EInviteStatus_::PendingOutbound },
		{ "EInviteStatus_::Blocked", (int64)EInviteStatus_::Blocked },
		{ "EInviteStatus_::Suggested", (int64)EInviteStatus_::Suggested },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::Enum_MetaDataParams[] = {
		{ "Accepted.Comment", "/** Friend has accepted the invite */" },
		{ "Accepted.Name", "EInviteStatus_::Accepted" },
		{ "Accepted.ToolTip", "Friend has accepted the invite" },
		{ "Blocked.Comment", "/** Player has been blocked */" },
		{ "Blocked.Name", "EInviteStatus_::Blocked" },
		{ "Blocked.ToolTip", "Player has been blocked" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
		{ "PendingInbound.Comment", "/** Friend has sent player an invite, but it has not been accepted/rejected */" },
		{ "PendingInbound.Name", "EInviteStatus_::PendingInbound" },
		{ "PendingInbound.ToolTip", "Friend has sent player an invite, but it has not been accepted/rejected" },
		{ "PendingOutbound.Comment", "/** Player has sent friend an invite, but it has not been accepted/rejected */" },
		{ "PendingOutbound.Name", "EInviteStatus_::PendingOutbound" },
		{ "PendingOutbound.ToolTip", "Player has sent friend an invite, but it has not been accepted/rejected" },
		{ "ScriptName", "EInviteStatus" },
		{ "Suggested.Comment", "/** Suggested friend */" },
		{ "Suggested.Name", "EInviteStatus_::Suggested" },
		{ "Suggested.ToolTip", "Suggested friend" },
		{ "Unknown.Comment", "/** unknown state */" },
		{ "Unknown.Name", "EInviteStatus_::Unknown" },
		{ "Unknown.ToolTip", "unknown state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EInviteStatus_",
		"EInviteStatus_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus_()
	{
		if (!Z_Registration_Info_UEnum_EInviteStatus_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInviteStatus_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInviteStatus_.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineFriendRef::execGetPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOnlineUserPresenceData*)Z_Param__Result=P_THIS->GetPresence_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineFriendRef::execGetInviteStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInviteStatus_*)Z_Param__Result=P_THIS->GetInviteStatus_Implementation();
		P_NATIVE_END;
	}
	struct OnlineFriendRef_eventGetInviteStatus_Parms
	{
		EInviteStatus_ ReturnValue;

		/** Constructor, initializes return property only **/
		OnlineFriendRef_eventGetInviteStatus_Parms()
			: ReturnValue((EInviteStatus_)0)
		{
		}
	};
	struct OnlineFriendRef_eventGetPresence_Parms
	{
		FOnlineUserPresenceData ReturnValue;
	};
	static FName NAME_UOnlineFriendRef_GetInviteStatus = FName(TEXT("GetInviteStatus"));
	EInviteStatus_ UOnlineFriendRef::GetInviteStatus()
	{
		OnlineFriendRef_eventGetInviteStatus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UOnlineFriendRef_GetInviteStatus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UOnlineFriendRef_GetPresence = FName(TEXT("GetPresence"));
	FOnlineUserPresenceData UOnlineFriendRef::GetPresence()
	{
		OnlineFriendRef_eventGetPresence_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UOnlineFriendRef_GetPresence),&Parms);
		return Parms.ReturnValue;
	}
	void UOnlineFriendRef::StaticRegisterNativesUOnlineFriendRef()
	{
		UClass* Class = UOnlineFriendRef::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInviteStatus", &UOnlineFriendRef::execGetInviteStatus },
			{ "GetPresence", &UOnlineFriendRef::execGetPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineFriendRef_eventGetInviteStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EInviteStatus_, METADATA_PARAMS(nullptr, 0) }; // 3105952867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns the invite status of the friend.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
		{ "ToolTip", "Returns the invite status of the friend." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineFriendRef, nullptr, "GetInviteStatus", nullptr, nullptr, sizeof(OnlineFriendRef_eventGetInviteStatus_Parms), Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineFriendRef_eventGetPresence_Parms, ReturnValue), Z_Construct_UScriptStruct_FOnlineUserPresenceData, METADATA_PARAMS(nullptr, 0) }; // 1165248872
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns the presence information for the friend.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
		{ "ToolTip", "Returns the presence information for the friend." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineFriendRef, nullptr, "GetPresence", nullptr, nullptr, sizeof(OnlineFriendRef_eventGetPresence_Parms), Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineFriendRef_GetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineFriendRef_GetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineFriendRef);
	UClass* Z_Construct_UClass_UOnlineFriendRef_NoRegister()
	{
		return UOnlineFriendRef::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineFriendRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineFriendRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineUserRef,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineFriendRef_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineFriendRef_GetInviteStatus, "GetInviteStatus" }, // 758688253
		{ &Z_Construct_UFunction_UOnlineFriendRef_GetPresence, "GetPresence" }, // 4171559322
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineFriendRef_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBFriendTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineFriendRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineFriendRef>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineFriendRef_Statics::ClassParams = {
		&UOnlineFriendRef::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineFriendRef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineFriendRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineFriendRef()
	{
		if (!Z_Registration_Info_UClass_UOnlineFriendRef.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineFriendRef.OuterSingleton, Z_Construct_UClass_UOnlineFriendRef_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineFriendRef.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineFriendRef>()
	{
		return UOnlineFriendRef::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineFriendRef);
	UOnlineFriendRef::~UOnlineFriendRef() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo;
class UScriptStruct* FReportPlayedWithUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ReportPlayedWithUserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FReportPlayedWithUserInfo>()
{
	return FReportPlayedWithUserInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresenceStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReportPlayedWithUserInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReportPlayedWithUserInfo, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_PresenceStr_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_PresenceStr = { "PresenceStr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReportPlayedWithUserInfo, PresenceStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_PresenceStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_PresenceStr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewProp_PresenceStr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ReportPlayedWithUserInfo",
		sizeof(FReportPlayedWithUserInfo),
		alignof(FReportPlayedWithUserInfo),
		Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReportPlayedWithUserInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo.InnerSingleton, Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendSettingsData;
class UScriptStruct* FFriendSettingsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendSettingsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendSettingsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendSettingsData, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("FriendSettingsData"));
	}
	return Z_Registration_Info_UScriptStruct_FriendSettingsData.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FFriendSettingsData>()
{
	return FFriendSettingsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendSettingsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendSettingsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendSettingsData>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendSettingsData, Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendSettingsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendSettingsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"FriendSettingsData",
		sizeof(FFriendSettingsData),
		alignof(FFriendSettingsData),
		Z_Construct_UScriptStruct_FFriendSettingsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendSettingsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendSettingsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendSettingsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendSettingsData()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendSettingsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendSettingsData.InnerSingleton, Z_Construct_UScriptStruct_FFriendSettingsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendSettingsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig;
class UScriptStruct* FOnlineFriendSettingsSourceDataConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineFriendSettingsSourceDataConfig"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineFriendSettingsSourceDataConfig>()
{
	return FOnlineFriendSettingsSourceDataConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeverShowAgain_MetaData[];
#endif
		static void NewProp_NeverShowAgain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NeverShowAgain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineFriendSettingsSourceDataConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewProp_NeverShowAgain_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBFriendTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewProp_NeverShowAgain_SetBit(void* Obj)
	{
		((FOnlineFriendSettingsSourceDataConfig*)Obj)->NeverShowAgain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewProp_NeverShowAgain = { "NeverShowAgain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineFriendSettingsSourceDataConfig), &Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewProp_NeverShowAgain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewProp_NeverShowAgain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewProp_NeverShowAgain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewProp_NeverShowAgain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineFriendSettingsSourceDataConfig",
		sizeof(FOnlineFriendSettingsSourceDataConfig),
		alignof(FOnlineFriendSettingsSourceDataConfig),
		Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig.InnerSingleton, Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::EnumInfo[] = {
		{ EInviteStatus__StaticEnum, TEXT("EInviteStatus_"), &Z_Registration_Info_UEnum_EInviteStatus_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3105952867U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::ScriptStructInfo[] = {
		{ FReportPlayedWithUserInfo::StaticStruct, Z_Construct_UScriptStruct_FReportPlayedWithUserInfo_Statics::NewStructOps, TEXT("ReportPlayedWithUserInfo"), &Z_Registration_Info_UScriptStruct_ReportPlayedWithUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReportPlayedWithUserInfo), 3704579443U) },
		{ FFriendSettingsData::StaticStruct, Z_Construct_UScriptStruct_FFriendSettingsData_Statics::NewStructOps, TEXT("FriendSettingsData"), &Z_Registration_Info_UScriptStruct_FriendSettingsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendSettingsData), 3326108658U) },
		{ FOnlineFriendSettingsSourceDataConfig::StaticStruct, Z_Construct_UScriptStruct_FOnlineFriendSettingsSourceDataConfig_Statics::NewStructOps, TEXT("OnlineFriendSettingsSourceDataConfig"), &Z_Registration_Info_UScriptStruct_OnlineFriendSettingsSourceDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineFriendSettingsSourceDataConfig), 2921072343U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineFriendRef, UOnlineFriendRef::StaticClass, TEXT("UOnlineFriendRef"), &Z_Registration_Info_UClass_UOnlineFriendRef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineFriendRef), 970201220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_1374961366(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFriendTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
