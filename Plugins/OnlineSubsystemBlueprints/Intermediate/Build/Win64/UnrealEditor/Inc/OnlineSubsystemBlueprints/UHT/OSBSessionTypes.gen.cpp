// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBSessionTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UNamedOnlineSession();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UNamedOnlineSession_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionInfo_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionSearch();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionSearch_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionSettings();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionSettings_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FNamedOnlineSessionBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSettingBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSettingsBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionSearchParamBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_;
	static UEnum* EOnJoinSessionCompleteResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnJoinSessionCompleteResult_"));
		}
		return Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnJoinSessionCompleteResult_>()
	{
		return EOnJoinSessionCompleteResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::Enumerators[] = {
		{ "EOnJoinSessionCompleteResult_::Success", (int64)EOnJoinSessionCompleteResult_::Success },
		{ "EOnJoinSessionCompleteResult_::SessionIsFull", (int64)EOnJoinSessionCompleteResult_::SessionIsFull },
		{ "EOnJoinSessionCompleteResult_::SessionDoesNotExist", (int64)EOnJoinSessionCompleteResult_::SessionDoesNotExist },
		{ "EOnJoinSessionCompleteResult_::CouldNotRetrieveAddress", (int64)EOnJoinSessionCompleteResult_::CouldNotRetrieveAddress },
		{ "EOnJoinSessionCompleteResult_::AlreadyInSession", (int64)EOnJoinSessionCompleteResult_::AlreadyInSession },
		{ "EOnJoinSessionCompleteResult_::UnknownError", (int64)EOnJoinSessionCompleteResult_::UnknownError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInSession.Comment", "/** The user attempting to join is already a member of the session */" },
		{ "AlreadyInSession.Name", "EOnJoinSessionCompleteResult_::AlreadyInSession" },
		{ "AlreadyInSession.ToolTip", "The user attempting to join is already a member of the session" },
		{ "BlueprintType", "true" },
		{ "CouldNotRetrieveAddress.Comment", "/** There was an error getting the session server's address */" },
		{ "CouldNotRetrieveAddress.Name", "EOnJoinSessionCompleteResult_::CouldNotRetrieveAddress" },
		{ "CouldNotRetrieveAddress.ToolTip", "There was an error getting the session server's address" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ScriptName", "EOnJoinSessionCompleteResult" },
		{ "SessionDoesNotExist.Comment", "/** The session couldn't be found on the service */" },
		{ "SessionDoesNotExist.Name", "EOnJoinSessionCompleteResult_::SessionDoesNotExist" },
		{ "SessionDoesNotExist.ToolTip", "The session couldn't be found on the service" },
		{ "SessionIsFull.Comment", "/** There are no open slots to join */" },
		{ "SessionIsFull.Name", "EOnJoinSessionCompleteResult_::SessionIsFull" },
		{ "SessionIsFull.ToolTip", "There are no open slots to join" },
		{ "Success.Comment", "/** The join worked as expected */" },
		{ "Success.Name", "EOnJoinSessionCompleteResult_::Success" },
		{ "Success.ToolTip", "The join worked as expected" },
		{ "UnknownError.Comment", "/** An error not covered above occurred */" },
		{ "UnknownError.Name", "EOnJoinSessionCompleteResult_::UnknownError" },
		{ "UnknownError.ToolTip", "An error not covered above occurred" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnJoinSessionCompleteResult_",
		"EOnJoinSessionCompleteResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult_()
	{
		if (!Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnJoinSessionCompleteResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESessionFailure_;
	static UEnum* ESessionFailure__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESessionFailure_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESessionFailure_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ESessionFailure_"));
		}
		return Z_Registration_Info_UEnum_ESessionFailure_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ESessionFailure_>()
	{
		return ESessionFailure__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::Enumerators[] = {
		{ "ESessionFailure_::ServiceConnectionLost", (int64)ESessionFailure_::ServiceConnectionLost },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ScriptName", "ESessionFailure" },
		{ "ServiceConnectionLost.Comment", "/** General loss of connection */" },
		{ "ServiceConnectionLost.Name", "ESessionFailure_::ServiceConnectionLost" },
		{ "ServiceConnectionLost.ToolTip", "General loss of connection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"ESessionFailure_",
		"ESessionFailure_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure_()
	{
		if (!Z_Registration_Info_UEnum_ESessionFailure_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESessionFailure_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_ESessionFailure__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESessionFailure_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineSessionState_;
	static UEnum* EOnlineSessionState__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineSessionState_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineSessionState_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineSessionState_"));
		}
		return Z_Registration_Info_UEnum_EOnlineSessionState_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineSessionState_>()
	{
		return EOnlineSessionState__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::Enumerators[] = {
		{ "EOnlineSessionState_::NoSession", (int64)EOnlineSessionState_::NoSession },
		{ "EOnlineSessionState_::Creating", (int64)EOnlineSessionState_::Creating },
		{ "EOnlineSessionState_::Pending", (int64)EOnlineSessionState_::Pending },
		{ "EOnlineSessionState_::Starting", (int64)EOnlineSessionState_::Starting },
		{ "EOnlineSessionState_::InProgress", (int64)EOnlineSessionState_::InProgress },
		{ "EOnlineSessionState_::Ending", (int64)EOnlineSessionState_::Ending },
		{ "EOnlineSessionState_::Ended", (int64)EOnlineSessionState_::Ended },
		{ "EOnlineSessionState_::Destroying", (int64)EOnlineSessionState_::Destroying },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Creating.Comment", "/** An online session is in the process of being created */" },
		{ "Creating.Name", "EOnlineSessionState_::Creating" },
		{ "Creating.ToolTip", "An online session is in the process of being created" },
		{ "Destroying.Comment", "/** The session is being destroyed */" },
		{ "Destroying.Name", "EOnlineSessionState_::Destroying" },
		{ "Destroying.ToolTip", "The session is being destroyed" },
		{ "Ended.Comment", "/** The session is closed and any stats committed */" },
		{ "Ended.Name", "EOnlineSessionState_::Ended" },
		{ "Ended.ToolTip", "The session is closed and any stats committed" },
		{ "Ending.Comment", "/** The session is still valid, but the session is no longer being played (post match lobby) */" },
		{ "Ending.Name", "EOnlineSessionState_::Ending" },
		{ "Ending.ToolTip", "The session is still valid, but the session is no longer being played (post match lobby)" },
		{ "InProgress.Comment", "/** The current session has started. Sessions with join in progress disabled are no longer joinable */" },
		{ "InProgress.Name", "EOnlineSessionState_::InProgress" },
		{ "InProgress.ToolTip", "The current session has started. Sessions with join in progress disabled are no longer joinable" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "NoSession.Comment", "/** An online session has not been created yet */" },
		{ "NoSession.Name", "EOnlineSessionState_::NoSession" },
		{ "NoSession.ToolTip", "An online session has not been created yet" },
		{ "Pending.Comment", "/** Session has been created but the session hasn't started (pre match lobby) */" },
		{ "Pending.Name", "EOnlineSessionState_::Pending" },
		{ "Pending.ToolTip", "Session has been created but the session hasn't started (pre match lobby)" },
		{ "ScriptName", "EOnlineSessionState" },
		{ "Starting.Comment", "/** Session has been asked to start (may take time due to communication with backend) */" },
		{ "Starting.Name", "EOnlineSessionState_::Starting" },
		{ "Starting.ToolTip", "Session has been asked to start (may take time due to communication with backend)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineSessionState_",
		"EOnlineSessionState_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineSessionState_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineSessionState_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineSessionState_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_;
	static UEnum* EOnSessionParticipantLeftReason__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnSessionParticipantLeftReason_"));
		}
		return Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnSessionParticipantLeftReason_>()
	{
		return EOnSessionParticipantLeftReason__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::Enumerators[] = {
		{ "EOnSessionParticipantLeftReason_::Left", (int64)EOnSessionParticipantLeftReason_::Left },
		{ "EOnSessionParticipantLeftReason_::Disconnected", (int64)EOnSessionParticipantLeftReason_::Disconnected },
		{ "EOnSessionParticipantLeftReason_::Kicked", (int64)EOnSessionParticipantLeftReason_::Kicked },
		{ "EOnSessionParticipantLeftReason_::Closed", (int64)EOnSessionParticipantLeftReason_::Closed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Closed.Comment", "/** The session ended and the participant got removed from it */" },
		{ "Closed.Name", "EOnSessionParticipantLeftReason_::Closed" },
		{ "Closed.ToolTip", "The session ended and the participant got removed from it" },
		{ "Disconnected.Comment", "/** The participant got disconnected from a session that is still active */" },
		{ "Disconnected.Name", "EOnSessionParticipantLeftReason_::Disconnected" },
		{ "Disconnected.ToolTip", "The participant got disconnected from a session that is still active" },
		{ "Kicked.Comment", "/** The participant was forcefully removed from the session */" },
		{ "Kicked.Name", "EOnSessionParticipantLeftReason_::Kicked" },
		{ "Kicked.ToolTip", "The participant was forcefully removed from the session" },
		{ "Left.Comment", "/** The participant left the session of their own accord */" },
		{ "Left.Name", "EOnSessionParticipantLeftReason_::Left" },
		{ "Left.ToolTip", "The participant left the session of their own accord" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ScriptName", "EOnSessionParticipantLeftReason" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnSessionParticipantLeftReason_",
		"EOnSessionParticipantLeftReason_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason_()
	{
		if (!Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnSessionParticipantLeftReason__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_.InnerSingleton;
	}
	void UOnlineSessionInfo::StaticRegisterNativesUOnlineSessionInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSessionInfo);
	UClass* Z_Construct_UClass_UOnlineSessionInfo_NoRegister()
	{
		return UOnlineSessionInfo::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSessionInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSessionInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBSessionTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSessionInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSessionInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSessionInfo_Statics::ClassParams = {
		&UOnlineSessionInfo::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSessionInfo()
	{
		if (!Z_Registration_Info_UClass_UOnlineSessionInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSessionInfo.OuterSingleton, Z_Construct_UClass_UOnlineSessionInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSessionInfo.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineSessionInfo>()
	{
		return UOnlineSessionInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSessionInfo);
	UOnlineSessionInfo::~UOnlineSessionInfo() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_;
	static UEnum* EOnlineDataAdvertisementType__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineDataAdvertisementType_"));
		}
		return Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineDataAdvertisementType_>()
	{
		return EOnlineDataAdvertisementType__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::Enumerators[] = {
		{ "EOnlineDataAdvertisementType_::DontAdvertise", (int64)EOnlineDataAdvertisementType_::DontAdvertise },
		{ "EOnlineDataAdvertisementType_::ViaPingOnly", (int64)EOnlineDataAdvertisementType_::ViaPingOnly },
		{ "EOnlineDataAdvertisementType_::ViaOnlineService", (int64)EOnlineDataAdvertisementType_::ViaOnlineService },
		{ "EOnlineDataAdvertisementType_::ViaOnlineServiceAndPing", (int64)EOnlineDataAdvertisementType_::ViaOnlineServiceAndPing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontAdvertise.Comment", "/** Don't advertise via the online service or QoS data */" },
		{ "DontAdvertise.Name", "EOnlineDataAdvertisementType_::DontAdvertise" },
		{ "DontAdvertise.ToolTip", "Don't advertise via the online service or QoS data" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ScriptName", "EOnlineDataAdvertisementType" },
		{ "ViaOnlineService.Comment", "/** Advertise via the online service only */" },
		{ "ViaOnlineService.Name", "EOnlineDataAdvertisementType_::ViaOnlineService" },
		{ "ViaOnlineService.ToolTip", "Advertise via the online service only" },
		{ "ViaOnlineServiceAndPing.Comment", "/** Advertise via the online service and via the ping data */" },
		{ "ViaOnlineServiceAndPing.Name", "EOnlineDataAdvertisementType_::ViaOnlineServiceAndPing" },
		{ "ViaOnlineServiceAndPing.ToolTip", "Advertise via the online service and via the ping data" },
		{ "ViaPingOnly.Comment", "/** Advertise via the server ping data only */" },
		{ "ViaPingOnly.Name", "EOnlineDataAdvertisementType_::ViaPingOnly" },
		{ "ViaPingOnly.ToolTip", "Advertise via the server ping data only" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineDataAdvertisementType_",
		"EOnlineDataAdvertisementType_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_;
	static UEnum* EOnlineKeyValuePairDataType__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineKeyValuePairDataType_"));
		}
		return Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineKeyValuePairDataType_>()
	{
		return EOnlineKeyValuePairDataType__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::Enumerators[] = {
		{ "EOnlineKeyValuePairDataType_::Empty", (int64)EOnlineKeyValuePairDataType_::Empty },
		{ "EOnlineKeyValuePairDataType_::Int32", (int64)EOnlineKeyValuePairDataType_::Int32 },
		{ "EOnlineKeyValuePairDataType_::UInt32_NotSupported", (int64)EOnlineKeyValuePairDataType_::UInt32_NotSupported },
		{ "EOnlineKeyValuePairDataType_::Int64", (int64)EOnlineKeyValuePairDataType_::Int64 },
		{ "EOnlineKeyValuePairDataType_::UInt64_NotSupported", (int64)EOnlineKeyValuePairDataType_::UInt64_NotSupported },
		{ "EOnlineKeyValuePairDataType_::Double_NotSupported", (int64)EOnlineKeyValuePairDataType_::Double_NotSupported },
		{ "EOnlineKeyValuePairDataType_::String", (int64)EOnlineKeyValuePairDataType_::String },
		{ "EOnlineKeyValuePairDataType_::Float", (int64)EOnlineKeyValuePairDataType_::Float },
		{ "EOnlineKeyValuePairDataType_::Blob_NotSupported", (int64)EOnlineKeyValuePairDataType_::Blob_NotSupported },
		{ "EOnlineKeyValuePairDataType_::Bool", (int64)EOnlineKeyValuePairDataType_::Bool },
		{ "EOnlineKeyValuePairDataType_::Json_NotSupported", (int64)EOnlineKeyValuePairDataType_::Json_NotSupported },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::Enum_MetaDataParams[] = {
		{ "Blob_NotSupported.Comment", "/** Binary data */" },
		{ "Blob_NotSupported.Name", "EOnlineKeyValuePairDataType_::Blob_NotSupported" },
		{ "Blob_NotSupported.ToolTip", "Binary data" },
		{ "BlueprintType", "true" },
		{ "Bool.Comment", "/** bool data (1 byte) */" },
		{ "Bool.Name", "EOnlineKeyValuePairDataType_::Bool" },
		{ "Bool.ToolTip", "bool data (1 byte)" },
		{ "Double_NotSupported.Comment", "/** Double (8 byte) */" },
		{ "Double_NotSupported.Name", "EOnlineKeyValuePairDataType_::Double_NotSupported" },
		{ "Double_NotSupported.ToolTip", "Double (8 byte)" },
		{ "Empty.Comment", "/** Means the data in the OnlineData value fields should be ignored */" },
		{ "Empty.Name", "EOnlineKeyValuePairDataType_::Empty" },
		{ "Empty.ToolTip", "Means the data in the OnlineData value fields should be ignored" },
		{ "Float.Comment", "/** Float (4 byte) */" },
		{ "Float.Name", "EOnlineKeyValuePairDataType_::Float" },
		{ "Float.ToolTip", "Float (4 byte)" },
		{ "Int32.Comment", "/** 32 bit integer */" },
		{ "Int32.Name", "EOnlineKeyValuePairDataType_::Int32" },
		{ "Int32.ToolTip", "32 bit integer" },
		{ "Int64.Comment", "/** 64 bit integer */" },
		{ "Int64.Name", "EOnlineKeyValuePairDataType_::Int64" },
		{ "Int64.ToolTip", "64 bit integer" },
		{ "Json_NotSupported.Comment", "/** Serialized json text */" },
		{ "Json_NotSupported.Name", "EOnlineKeyValuePairDataType_::Json_NotSupported" },
		{ "Json_NotSupported.ToolTip", "Serialized json text" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ScriptName", "EOnlineKeyValuePairDataType" },
		{ "String.Comment", "/** Unicode string */" },
		{ "String.Name", "EOnlineKeyValuePairDataType_::String" },
		{ "String.ToolTip", "Unicode string" },
		{ "UInt32_NotSupported.Comment", "/** 32 bit unsigned integer */" },
		{ "UInt32_NotSupported.Name", "EOnlineKeyValuePairDataType_::UInt32_NotSupported" },
		{ "UInt32_NotSupported.ToolTip", "32 bit unsigned integer" },
		{ "UInt64_NotSupported.Comment", "/** 64 bit unsigned integer */" },
		{ "UInt64_NotSupported.Name", "EOnlineKeyValuePairDataType_::UInt64_NotSupported" },
		{ "UInt64_NotSupported.ToolTip", "64 bit unsigned integer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineKeyValuePairDataType_",
		"EOnlineKeyValuePairDataType_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VariantDataBP;
class UScriptStruct* FVariantDataBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VariantDataBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VariantDataBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVariantDataBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("VariantDataBP"));
	}
	return Z_Registration_Info_UScriptStruct_VariantDataBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FVariantDataBP>()
{
	return FVariantDataBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVariantDataBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsBool_MetaData[];
#endif
		static void NewProp_AsBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AsBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AsFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsInt64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_AsInt64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AsString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVariantDataBP>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVariantDataBP, Type), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineKeyValuePairDataType_, METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_Type_MetaData)) }; // 2115290296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsBool_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsBool_SetBit(void* Obj)
	{
		((FVariantDataBP*)Obj)->AsBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsBool = { "AsBool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVariantDataBP), &Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsBool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsBool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt = { "AsInt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVariantDataBP, AsInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsFloat_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsFloat = { "AsFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVariantDataBP, AsFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt64_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt64 = { "AsInt64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVariantDataBP, AsInt64), METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsString_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsString = { "AsString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVariantDataBP, AsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVariantDataBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsInt64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewProp_AsString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVariantDataBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"VariantDataBP",
		sizeof(FVariantDataBP),
		alignof(FVariantDataBP),
		Z_Construct_UScriptStruct_FVariantDataBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVariantDataBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDataBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP()
	{
		if (!Z_Registration_Info_UScriptStruct_VariantDataBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VariantDataBP.InnerSingleton, Z_Construct_UScriptStruct_FVariantDataBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VariantDataBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP;
class UScriptStruct* FOnlineSessionSettingBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineSessionSettingBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineSessionSettingBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineSessionSettingBP>()
{
	return FOnlineSessionSettingBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdvertisementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvertisementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AdvertisementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineSessionSettingBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Settings value */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Settings value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSettingBP, Data), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_Data_MetaData)) }; // 960401619
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_AdvertisementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_AdvertisementType_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** How is this session setting advertised with the backend or searches */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "How is this session setting advertised with the backend or searches" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_AdvertisementType = { "AdvertisementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSettingBP, AdvertisementType), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineDataAdvertisementType_, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_AdvertisementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_AdvertisementType_MetaData)) }; // 3841098638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Optional ID used in some platforms as the index instead of the session name */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Optional ID used in some platforms as the index instead of the session name" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSettingBP, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_AdvertisementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_AdvertisementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineSessionSettingBP",
		sizeof(FOnlineSessionSettingBP),
		alignof(FOnlineSessionSettingBP),
		Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSettingBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP;
class UScriptStruct* FOnlineSessionSettingsBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineSessionSettingsBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineSessionSettingsBP>()
{
	return FOnlineSessionSettingsBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPublicConnections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPublicConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPrivateConnections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPrivateConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAdvertise_MetaData[];
#endif
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinInProgress_MetaData[];
#endif
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLANMatch_MetaData[];
#endif
		static void NewProp_bIsLANMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLANMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDedicated_MetaData[];
#endif
		static void NewProp_bIsDedicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsesStats_MetaData[];
#endif
		static void NewProp_bUsesStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[];
#endif
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsesPresence_MetaData[];
#endif
		static void NewProp_bUsesPresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresence_MetaData[];
#endif
		static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData[];
#endif
		static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAntiCheatProtected_MetaData[];
#endif
		static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLobbiesIfAvailable_MetaData[];
#endif
		static void NewProp_bUseLobbiesIfAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesIfAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLobbiesVoiceChatIfAvailable_MetaData[];
#endif
		static void NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesVoiceChatIfAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuildUniqueId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Settings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineSessionSettingsBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPublicConnections_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The number of publicly available connections advertised */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The number of publicly available connections advertised" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPublicConnections = { "NumPublicConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSettingsBP, NumPublicConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPublicConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPublicConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPrivateConnections_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The number of connections that are private (invite/password) only */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The number of connections that are private (invite/password) only" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPrivateConnections = { "NumPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSettingsBP, NumPrivateConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPrivateConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPrivateConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bShouldAdvertise_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether this match is publicly advertised on the online service */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether this match is publicly advertised on the online service" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bShouldAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bShouldAdvertise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bShouldAdvertise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinInProgress_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether joining in progress is allowed or not */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether joining in progress is allowed or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bAllowJoinInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinInProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsLANMatch_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** This game will be lan only and not be visible to external players */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "This game will be lan only and not be visible to external players" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsLANMatch_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bIsLANMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsLANMatch = { "bIsLANMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsLANMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsLANMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsLANMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsDedicated_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether the server is dedicated or player hosted */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether the server is dedicated or player hosted" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsDedicated_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bIsDedicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsDedicated = { "bIsDedicated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsDedicated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsDedicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsDedicated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesStats_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether the match should gather stats or not */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether the match should gather stats or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesStats_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bUsesStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesStats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowInvites_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether the match allows invitations for this session or not */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether the match allows invitations for this session or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowInvites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesPresence_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether to display user presence information or not */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether to display user presence information or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bUsesPresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesPresence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresence_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether joining via player presence is allowed or not */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether joining via player presence is allowed or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bAllowJoinViaPresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether joining via player presence is allowed for friends only or not */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether joining via player presence is allowed for friends only or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAntiCheatProtected_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether the server employs anti-cheat (punkbuster, vac, etc) */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether the server employs anti-cheat (punkbuster, vac, etc)" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bAntiCheatProtected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAntiCheatProtected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAntiCheatProtected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesIfAvailable_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether to prefer lobbies APIs if the platform supports them */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether to prefer lobbies APIs if the platform supports them" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesIfAvailable_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bUseLobbiesIfAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesIfAvailable = { "bUseLobbiesIfAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesIfAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesIfAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesIfAvailable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
	{
		((FOnlineSessionSettingsBP*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineSessionSettingsBP), &Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_BuildUniqueId_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Used to keep different builds from seeing each other during searches */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Used to keep different builds from seeing each other during searches" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_BuildUniqueId = { "BuildUniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSettingsBP, BuildUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_BuildUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_BuildUniqueId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings_ValueProp = { "Settings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FOnlineSessionSettingBP, METADATA_PARAMS(nullptr, 0) }; // 2432035313
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings_Key_KeyProp = { "Settings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Array of custom session settings */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Array of custom session settings" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSettingsBP, Settings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings_MetaData)) }; // 2432035313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_NumPrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bShouldAdvertise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsLANMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bIsDedicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUsesPresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bAntiCheatProtected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesIfAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_BuildUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineSessionSettingsBP",
		sizeof(FOnlineSessionSettingsBP),
		alignof(FOnlineSessionSettingsBP),
		Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSettingsBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineSessionSettings::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOnlineSessionSettingsBP*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UOnlineSessionSettings::StaticRegisterNativesUOnlineSessionSettings()
	{
		UClass* Class = UOnlineSessionSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UOnlineSessionSettings::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics
	{
		struct OnlineSessionSettings_eventGetValue_Parms
		{
			FOnlineSessionSettingsBP ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSessionSettings_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FOnlineSessionSettingsBP, METADATA_PARAMS(nullptr, 0) }; // 3864515173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSessionSettings, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::OnlineSessionSettings_eventGetValue_Parms), Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSessionSettings_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSessionSettings_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSessionSettings);
	UClass* Z_Construct_UClass_UOnlineSessionSettings_NoRegister()
	{
		return UOnlineSessionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSessionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSessionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineSessionSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineSessionSettings_GetValue, "GetValue" }, // 3056829897
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A wrapping class around the optional FOnlineSessionSettingsBP value that is returned from\n * some functions. Call GetValue() to get the actual data.\n */" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBSessionTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "A wrapping class around the optional FOnlineSessionSettingsBP value that is returned from\nsome functions. Call GetValue() to get the actual data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSessionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSessionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSessionSettings_Statics::ClassParams = {
		&UOnlineSessionSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSessionSettings()
	{
		if (!Z_Registration_Info_UClass_UOnlineSessionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSessionSettings.OuterSingleton, Z_Construct_UClass_UOnlineSessionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSessionSettings.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineSessionSettings>()
	{
		return UOnlineSessionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSessionSettings);
	UOnlineSessionSettings::~UOnlineSessionSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineSessionBP;
class UScriptStruct* FOnlineSessionBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineSessionBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineSessionBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineSessionBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineSessionBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineSessionBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineSessionBP>()
{
	return FOnlineSessionBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineSessionBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwningUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningUserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwningUserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOpenPrivateConnections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOpenPrivateConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOpenPublicConnections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOpenPublicConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineSessionBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserId_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Owner of the session */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Owner of the session" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserId = { "OwningUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionBP, OwningUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserName_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Owner name of the session */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Owner name of the session" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserName = { "OwningUserName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionBP, OwningUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionSettings_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The settings associated with this session */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The settings associated with this session" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionBP, SessionSettings), Z_Construct_UScriptStruct_FOnlineSessionSettingsBP, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionSettings_MetaData)) }; // 3864515173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionInfo_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The platform specific session information */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The platform specific session information" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionBP, SessionInfo), Z_Construct_UClass_UOnlineSessionInfo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPrivateConnections_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The number of private connections that are available (read only) */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The number of private connections that are available (read only)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPrivateConnections = { "NumOpenPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionBP, NumOpenPrivateConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPrivateConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPrivateConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPublicConnections_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The number of publicly available connections that are available (read only) */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The number of publicly available connections that are available (read only)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPublicConnections = { "NumOpenPublicConnections", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionBP, NumOpenPublicConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPublicConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPublicConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The session ID as a string (read only) */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The session ID as a string (read only)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionBP, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_OwningUserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_NumOpenPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewProp_SessionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineSessionBP",
		sizeof(FOnlineSessionBP),
		alignof(FOnlineSessionBP),
		Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineSessionBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineSessionBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineSessionBP.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNamedOnlineSessionBP>() == std::is_polymorphic<FOnlineSessionBP>(), "USTRUCT FNamedOnlineSessionBP cannot be polymorphic unless super FOnlineSessionBP is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP;
class UScriptStruct* FNamedOnlineSessionBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedOnlineSessionBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("NamedOnlineSessionBP"));
	}
	return Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FNamedOnlineSessionBP>()
{
	return FNamedOnlineSessionBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHosting_MetaData[];
#endif
		static void NewProp_bHosting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHosting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalOwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalOwnerId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredPlayers;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedOnlineSessionBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionName_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The name of the session */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The name of the session" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedOnlineSessionBP, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_bHosting_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Whether or not the local player is hosting this session */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Whether or not the local player is hosting this session" },
	};
#endif
	void Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_bHosting_SetBit(void* Obj)
	{
		((FNamedOnlineSessionBP*)Obj)->bHosting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_bHosting = { "bHosting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNamedOnlineSessionBP), &Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_bHosting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_bHosting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_bHosting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_LocalOwnerId_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** NetId of the local player that created this named session.  Could be the host, or a player joining a session. */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "NetId of the local player that created this named session.  Could be the host, or a player joining a session." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_LocalOwnerId = { "LocalOwnerId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedOnlineSessionBP, LocalOwnerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_LocalOwnerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_LocalOwnerId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_RegisteredPlayers_Inner = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_RegisteredPlayers_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** List of players registered in the session */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "List of players registered in the session" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_RegisteredPlayers = { "RegisteredPlayers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedOnlineSessionBP, RegisteredPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_RegisteredPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_RegisteredPlayers_MetaData)) }; // 2142661840
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionState_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** State of the session */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "State of the session" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionState = { "SessionState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedOnlineSessionBP, SessionState), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineSessionState_, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionState_MetaData)) }; // 606189846
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_bHosting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_LocalOwnerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_RegisteredPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_RegisteredPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewProp_SessionState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		Z_Construct_UScriptStruct_FOnlineSessionBP,
		&NewStructOps,
		"NamedOnlineSessionBP",
		sizeof(FNamedOnlineSessionBP),
		alignof(FNamedOnlineSessionBP),
		Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedOnlineSessionBP()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP.InnerSingleton, Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UNamedOnlineSession::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNamedOnlineSessionBP*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UNamedOnlineSession::StaticRegisterNativesUNamedOnlineSession()
	{
		UClass* Class = UNamedOnlineSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UNamedOnlineSession::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics
	{
		struct NamedOnlineSession_eventGetValue_Parms
		{
			FNamedOnlineSessionBP ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NamedOnlineSession_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FNamedOnlineSessionBP, METADATA_PARAMS(nullptr, 0) }; // 1545584305
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNamedOnlineSession, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::NamedOnlineSession_eventGetValue_Parms), Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNamedOnlineSession_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamedOnlineSession_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedOnlineSession);
	UClass* Z_Construct_UClass_UNamedOnlineSession_NoRegister()
	{
		return UNamedOnlineSession::StaticClass();
	}
	struct Z_Construct_UClass_UNamedOnlineSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedOnlineSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNamedOnlineSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNamedOnlineSession_GetValue, "GetValue" }, // 220117180
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedOnlineSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A wrapping class around the optional FNamedOnlineSessionBP value that is returned from\n * some functions. Call GetValue() to get the actual data.\n */" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBSessionTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "A wrapping class around the optional FNamedOnlineSessionBP value that is returned from\nsome functions. Call GetValue() to get the actual data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedOnlineSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedOnlineSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedOnlineSession_Statics::ClassParams = {
		&UNamedOnlineSession::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNamedOnlineSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedOnlineSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedOnlineSession()
	{
		if (!Z_Registration_Info_UClass_UNamedOnlineSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedOnlineSession.OuterSingleton, Z_Construct_UClass_UNamedOnlineSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNamedOnlineSession.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UNamedOnlineSession>()
	{
		return UNamedOnlineSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedOnlineSession);
	UNamedOnlineSession::~UNamedOnlineSession() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP;
class UScriptStruct* FOnlineSessionSearchResultBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineSessionSearchResultBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineSessionSearchResultBP>()
{
	return FOnlineSessionSearchResultBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingInMs_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PingInMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineSessionSearchResultBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_Session_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** All advertised session information */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "All advertised session information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSearchResultBP, Session), Z_Construct_UScriptStruct_FOnlineSessionBP, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_Session_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_Session_MetaData)) }; // 4169064741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_PingInMs_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** Ping to the search result, MAX_QUERY_PING is unreachable */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "Ping to the search result, MAX_QUERY_PING is unreachable" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_PingInMs = { "PingInMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineSessionSearchResultBP, PingInMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_PingInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_PingInMs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_Session,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewProp_PingInMs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineSessionSearchResultBP",
		sizeof(FOnlineSessionSearchResultBP),
		alignof(FOnlineSessionSearchResultBP),
		Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineAsyncTaskState_;
	static UEnum* EOnlineAsyncTaskState__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineAsyncTaskState_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineAsyncTaskState_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineAsyncTaskState_"));
		}
		return Z_Registration_Info_UEnum_EOnlineAsyncTaskState_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineAsyncTaskState_>()
	{
		return EOnlineAsyncTaskState__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::Enumerators[] = {
		{ "EOnlineAsyncTaskState_::NotStarted", (int64)EOnlineAsyncTaskState_::NotStarted },
		{ "EOnlineAsyncTaskState_::InProgress", (int64)EOnlineAsyncTaskState_::InProgress },
		{ "EOnlineAsyncTaskState_::Done", (int64)EOnlineAsyncTaskState_::Done },
		{ "EOnlineAsyncTaskState_::Failed", (int64)EOnlineAsyncTaskState_::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Done.Comment", "/** The task has completed successfully */" },
		{ "Done.Name", "EOnlineAsyncTaskState_::Done" },
		{ "Done.ToolTip", "The task has completed successfully" },
		{ "Failed.Comment", "/** The task failed to complete */" },
		{ "Failed.Name", "EOnlineAsyncTaskState_::Failed" },
		{ "Failed.ToolTip", "The task failed to complete" },
		{ "InProgress.Comment", "/** The task is currently being processed */" },
		{ "InProgress.Name", "EOnlineAsyncTaskState_::InProgress" },
		{ "InProgress.ToolTip", "The task is currently being processed" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "NotStarted.Comment", "/** The task has not been started */" },
		{ "NotStarted.Name", "EOnlineAsyncTaskState_::NotStarted" },
		{ "NotStarted.ToolTip", "The task has not been started" },
		{ "ScriptName", "EOnlineAsyncTaskState" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineAsyncTaskState_",
		"EOnlineAsyncTaskState_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineAsyncTaskState_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineAsyncTaskState_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineAsyncTaskState_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineComparisonOp_;
	static UEnum* EOnlineComparisonOp__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineComparisonOp_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineComparisonOp_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineComparisonOp_"));
		}
		return Z_Registration_Info_UEnum_EOnlineComparisonOp_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineComparisonOp_>()
	{
		return EOnlineComparisonOp__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::Enumerators[] = {
		{ "EOnlineComparisonOp_::Equals", (int64)EOnlineComparisonOp_::Equals },
		{ "EOnlineComparisonOp_::NotEquals", (int64)EOnlineComparisonOp_::NotEquals },
		{ "EOnlineComparisonOp_::GreaterThan", (int64)EOnlineComparisonOp_::GreaterThan },
		{ "EOnlineComparisonOp_::GreaterThanEquals", (int64)EOnlineComparisonOp_::GreaterThanEquals },
		{ "EOnlineComparisonOp_::LessThan", (int64)EOnlineComparisonOp_::LessThan },
		{ "EOnlineComparisonOp_::LessThanEquals", (int64)EOnlineComparisonOp_::LessThanEquals },
		{ "EOnlineComparisonOp_::Near", (int64)EOnlineComparisonOp_::Near },
		{ "EOnlineComparisonOp_::In", (int64)EOnlineComparisonOp_::In },
		{ "EOnlineComparisonOp_::NotIn", (int64)EOnlineComparisonOp_::NotIn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equals.Name", "EOnlineComparisonOp_::Equals" },
		{ "GreaterThan.Name", "EOnlineComparisonOp_::GreaterThan" },
		{ "GreaterThanEquals.Name", "EOnlineComparisonOp_::GreaterThanEquals" },
		{ "In.Name", "EOnlineComparisonOp_::In" },
		{ "LessThan.Name", "EOnlineComparisonOp_::LessThan" },
		{ "LessThanEquals.Name", "EOnlineComparisonOp_::LessThanEquals" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "Near.Name", "EOnlineComparisonOp_::Near" },
		{ "NotEquals.Name", "EOnlineComparisonOp_::NotEquals" },
		{ "NotIn.Name", "EOnlineComparisonOp_::NotIn" },
		{ "ScriptName", "EOnlineComparisonOp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineComparisonOp_",
		"EOnlineComparisonOp_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineComparisonOp_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineComparisonOp_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineComparisonOp_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionSearchParamBP;
class UScriptStruct* FSessionSearchParamBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionSearchParamBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionSearchParamBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionSearchParamBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("SessionSearchParamBP"));
	}
	return Z_Registration_Info_UScriptStruct_SessionSearchParamBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FSessionSearchParamBP>()
{
	return FSessionSearchParamBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Op_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Op;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionSearchParamBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/* The value of the search parameter. */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The value of the search parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionSearchParamBP, Data), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Data_MetaData)) }; // 960401619
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Op_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Op_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/* The comparison operator. */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The comparison operator." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionSearchParamBP, Op), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineComparisonOp_, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Op_MetaData)) }; // 1778171160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/* The ID of the parameter - only used by some subsystems. */" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
		{ "ToolTip", "The ID of the parameter - only used by some subsystems." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionSearchParamBP, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Op_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_Op,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"SessionSearchParamBP",
		sizeof(FSessionSearchParamBP),
		alignof(FSessionSearchParamBP),
		Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionSearchParamBP()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionSearchParamBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionSearchParamBP.InnerSingleton, Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionSearchParamBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineSessionSearch::execGetSearchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineAsyncTaskState_*)Z_Param__Result=P_THIS->GetSearchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSessionSearch::execGetSearchResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOnlineSessionSearchResultBP>*)Z_Param__Result=P_THIS->GetSearchResults();
		P_NATIVE_END;
	}
	void UOnlineSessionSearch::StaticRegisterNativesUOnlineSessionSearch()
	{
		UClass* Class = UOnlineSessionSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSearchResults", &UOnlineSessionSearch::execGetSearchResults },
			{ "GetSearchState", &UOnlineSessionSearch::execGetSearchState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics
	{
		struct OnlineSessionSearch_eventGetSearchResults_Parms
		{
			TArray<FOnlineSessionSearchResultBP> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP, METADATA_PARAMS(nullptr, 0) }; // 1707739709
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSessionSearch_eventGetSearchResults_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1707739709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSessionSearch, nullptr, "GetSearchResults", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::OnlineSessionSearch_eventGetSearchResults_Parms), Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics
	{
		struct OnlineSessionSearch_eventGetSearchState_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSessionSearch_eventGetSearchState_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineAsyncTaskState_, METADATA_PARAMS(nullptr, 0) }; // 2744987233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSessionSearch, nullptr, "GetSearchState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::OnlineSessionSearch_eventGetSearchState_Parms), Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSessionSearch);
	UClass* Z_Construct_UClass_UOnlineSessionSearch_NoRegister()
	{
		return UOnlineSessionSearch::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSessionSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSearchResults_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLanQuery_MetaData[];
#endif
		static void NewProp_bIsLanQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLanQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingBucketSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PingBucketSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformHash_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutInSeconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SearchParams_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchParams_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SearchParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSessionSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineSessionSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineSessionSearch_GetSearchResults, "GetSearchResults" }, // 310608276
		{ &Z_Construct_UFunction_UOnlineSessionSearch_GetSearchState, "GetSearchState" }, // 3162605734
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSearch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Types/OSBSessionTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_MaxSearchResults_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_MaxSearchResults = { "MaxSearchResults", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSessionSearch, MaxSearchResults), METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_MaxSearchResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_MaxSearchResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_bIsLanQuery_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_bIsLanQuery_SetBit(void* Obj)
	{
		((UOnlineSessionSearch*)Obj)->bIsLanQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_bIsLanQuery = { "bIsLanQuery", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineSessionSearch), &Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_bIsLanQuery_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_bIsLanQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_bIsLanQuery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PingBucketSize_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PingBucketSize = { "PingBucketSize", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSessionSearch, PingBucketSize), METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PingBucketSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PingBucketSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PlatformHash_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PlatformHash = { "PlatformHash", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSessionSearch, PlatformHash), METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PlatformHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PlatformHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds = { "TimeoutInSeconds", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSessionSearch, TimeoutInSeconds), METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams_ValueProp = { "SearchParams", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSessionSearchParamBP, METADATA_PARAMS(nullptr, 0) }; // 1693905862
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams_Key_KeyProp = { "SearchParams_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSessionSearch, SearchParams), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams_MetaData)) }; // 1693905862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSessionSearch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_MaxSearchResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_bIsLanQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PingBucketSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_PlatformHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_TimeoutInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionSearch_Statics::NewProp_SearchParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSessionSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSessionSearch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSessionSearch_Statics::ClassParams = {
		&UOnlineSessionSearch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineSessionSearch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSessionSearch()
	{
		if (!Z_Registration_Info_UClass_UOnlineSessionSearch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSessionSearch.OuterSingleton, Z_Construct_UClass_UOnlineSessionSearch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSessionSearch.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineSessionSearch>()
	{
		return UOnlineSessionSearch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSessionSearch);
	UOnlineSessionSearch::~UOnlineSessionSearch() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::EnumInfo[] = {
		{ EOnJoinSessionCompleteResult__StaticEnum, TEXT("EOnJoinSessionCompleteResult_"), &Z_Registration_Info_UEnum_EOnJoinSessionCompleteResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3534825705U) },
		{ ESessionFailure__StaticEnum, TEXT("ESessionFailure_"), &Z_Registration_Info_UEnum_ESessionFailure_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2986550797U) },
		{ EOnlineSessionState__StaticEnum, TEXT("EOnlineSessionState_"), &Z_Registration_Info_UEnum_EOnlineSessionState_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 606189846U) },
		{ EOnSessionParticipantLeftReason__StaticEnum, TEXT("EOnSessionParticipantLeftReason_"), &Z_Registration_Info_UEnum_EOnSessionParticipantLeftReason_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2780740058U) },
		{ EOnlineDataAdvertisementType__StaticEnum, TEXT("EOnlineDataAdvertisementType_"), &Z_Registration_Info_UEnum_EOnlineDataAdvertisementType_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3841098638U) },
		{ EOnlineKeyValuePairDataType__StaticEnum, TEXT("EOnlineKeyValuePairDataType_"), &Z_Registration_Info_UEnum_EOnlineKeyValuePairDataType_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2115290296U) },
		{ EOnlineAsyncTaskState__StaticEnum, TEXT("EOnlineAsyncTaskState_"), &Z_Registration_Info_UEnum_EOnlineAsyncTaskState_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2744987233U) },
		{ EOnlineComparisonOp__StaticEnum, TEXT("EOnlineComparisonOp_"), &Z_Registration_Info_UEnum_EOnlineComparisonOp_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1778171160U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::ScriptStructInfo[] = {
		{ FVariantDataBP::StaticStruct, Z_Construct_UScriptStruct_FVariantDataBP_Statics::NewStructOps, TEXT("VariantDataBP"), &Z_Registration_Info_UScriptStruct_VariantDataBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVariantDataBP), 960401619U) },
		{ FOnlineSessionSettingBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineSessionSettingBP_Statics::NewStructOps, TEXT("OnlineSessionSettingBP"), &Z_Registration_Info_UScriptStruct_OnlineSessionSettingBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineSessionSettingBP), 2432035313U) },
		{ FOnlineSessionSettingsBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineSessionSettingsBP_Statics::NewStructOps, TEXT("OnlineSessionSettingsBP"), &Z_Registration_Info_UScriptStruct_OnlineSessionSettingsBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineSessionSettingsBP), 3864515173U) },
		{ FOnlineSessionBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineSessionBP_Statics::NewStructOps, TEXT("OnlineSessionBP"), &Z_Registration_Info_UScriptStruct_OnlineSessionBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineSessionBP), 4169064741U) },
		{ FNamedOnlineSessionBP::StaticStruct, Z_Construct_UScriptStruct_FNamedOnlineSessionBP_Statics::NewStructOps, TEXT("NamedOnlineSessionBP"), &Z_Registration_Info_UScriptStruct_NamedOnlineSessionBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedOnlineSessionBP), 1545584305U) },
		{ FOnlineSessionSearchResultBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP_Statics::NewStructOps, TEXT("OnlineSessionSearchResultBP"), &Z_Registration_Info_UScriptStruct_OnlineSessionSearchResultBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineSessionSearchResultBP), 1707739709U) },
		{ FSessionSearchParamBP::StaticStruct, Z_Construct_UScriptStruct_FSessionSearchParamBP_Statics::NewStructOps, TEXT("SessionSearchParamBP"), &Z_Registration_Info_UScriptStruct_SessionSearchParamBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionSearchParamBP), 1693905862U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSessionInfo, UOnlineSessionInfo::StaticClass, TEXT("UOnlineSessionInfo"), &Z_Registration_Info_UClass_UOnlineSessionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSessionInfo), 182654585U) },
		{ Z_Construct_UClass_UOnlineSessionSettings, UOnlineSessionSettings::StaticClass, TEXT("UOnlineSessionSettings"), &Z_Registration_Info_UClass_UOnlineSessionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSessionSettings), 1108679987U) },
		{ Z_Construct_UClass_UNamedOnlineSession, UNamedOnlineSession::StaticClass, TEXT("UNamedOnlineSession"), &Z_Registration_Info_UClass_UNamedOnlineSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedOnlineSession), 3672117701U) },
		{ Z_Construct_UClass_UOnlineSessionSearch, UOnlineSessionSearch::StaticClass, TEXT("UOnlineSessionSearch"), &Z_Registration_Info_UClass_UOnlineSessionSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSessionSearch), 821121146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_3088156866(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBSessionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
