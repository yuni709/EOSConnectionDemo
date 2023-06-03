// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemBP() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineChatSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlementsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEventsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineFriendsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGroupsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePartySubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSessionSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSharedCloudSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSharingSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTimeSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTournamentSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedVoiceAdminSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineVoiceAdminSubsystem**)Z_Param__Result=P_THIS->GetNamedVoiceAdminSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedVoiceSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineVoiceSubsystem**)Z_Param__Result=P_THIS->GetNamedVoiceSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedUserCloudSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserCloudSubsystem**)Z_Param__Result=P_THIS->GetNamedUserCloudSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedUserSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineUserSubsystem**)Z_Param__Result=P_THIS->GetNamedUserSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedTurnBasedSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTurnBasedSubsystem**)Z_Param__Result=P_THIS->GetNamedTurnBasedSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedTournamentSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTournamentSubsystem**)Z_Param__Result=P_THIS->GetNamedTournamentSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedTitleFileSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTitleFileSubsystem**)Z_Param__Result=P_THIS->GetNamedTitleFileSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedTimeSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTimeSubsystem**)Z_Param__Result=P_THIS->GetNamedTimeSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedStoreV2Subsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStoreV2Subsystem**)Z_Param__Result=P_THIS->GetNamedStoreV2Subsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedStatsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStatsSubsystem**)Z_Param__Result=P_THIS->GetNamedStatsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedSharingSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineSharingSubsystem**)Z_Param__Result=P_THIS->GetNamedSharingSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedSharedCloudSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineSharedCloudSubsystem**)Z_Param__Result=P_THIS->GetNamedSharedCloudSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedSessionSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineSessionSubsystem**)Z_Param__Result=P_THIS->GetNamedSessionSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedPurchaseSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePurchaseSubsystem**)Z_Param__Result=P_THIS->GetNamedPurchaseSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedPresenceSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePresenceSubsystem**)Z_Param__Result=P_THIS->GetNamedPresenceSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedPartySubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlinePartySubsystem**)Z_Param__Result=P_THIS->GetNamedPartySubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedMessageSanitizerSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineMessageSanitizerSubsystem**)Z_Param__Result=P_THIS->GetNamedMessageSanitizerSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedMessageSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineMessageSubsystem**)Z_Param__Result=P_THIS->GetNamedMessageSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedLobbySubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLobbySubsystem**)Z_Param__Result=P_THIS->GetNamedLobbySubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedLeaderboardsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineLeaderboardsSubsystem**)Z_Param__Result=P_THIS->GetNamedLeaderboardsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedIdentitySubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineIdentitySubsystem**)Z_Param__Result=P_THIS->GetNamedIdentitySubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedGroupsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGroupsSubsystem**)Z_Param__Result=P_THIS->GetNamedGroupsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedGameItemStatsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameItemStatsSubsystem**)Z_Param__Result=P_THIS->GetNamedGameItemStatsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedGameActivitySubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameActivitySubsystem**)Z_Param__Result=P_THIS->GetNamedGameActivitySubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedFriendsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineFriendsSubsystem**)Z_Param__Result=P_THIS->GetNamedFriendsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedExternalUISubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineExternalUISubsystem**)Z_Param__Result=P_THIS->GetNamedExternalUISubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedEventsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineEventsSubsystem**)Z_Param__Result=P_THIS->GetNamedEventsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedEntitlementsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineEntitlementsSubsystem**)Z_Param__Result=P_THIS->GetNamedEntitlementsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedChatSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineChatSubsystem**)Z_Param__Result=P_THIS->GetNamedChatSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedAvatarSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineAvatarSubsystem**)Z_Param__Result=P_THIS->GetNamedAvatarSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSubsystem::execGetNamedAchievementsSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubsystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineAchievementsSubsystem**)Z_Param__Result=P_THIS->GetNamedAchievementsSubsystem(Z_Param_SubsystemName);
		P_NATIVE_END;
	}
	void UOnlineSubsystem::StaticRegisterNativesUOnlineSubsystem()
	{
		UClass* Class = UOnlineSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNamedAchievementsSubsystem", &UOnlineSubsystem::execGetNamedAchievementsSubsystem },
			{ "GetNamedAvatarSubsystem", &UOnlineSubsystem::execGetNamedAvatarSubsystem },
			{ "GetNamedChatSubsystem", &UOnlineSubsystem::execGetNamedChatSubsystem },
			{ "GetNamedEntitlementsSubsystem", &UOnlineSubsystem::execGetNamedEntitlementsSubsystem },
			{ "GetNamedEventsSubsystem", &UOnlineSubsystem::execGetNamedEventsSubsystem },
			{ "GetNamedExternalUISubsystem", &UOnlineSubsystem::execGetNamedExternalUISubsystem },
			{ "GetNamedFriendsSubsystem", &UOnlineSubsystem::execGetNamedFriendsSubsystem },
			{ "GetNamedGameActivitySubsystem", &UOnlineSubsystem::execGetNamedGameActivitySubsystem },
			{ "GetNamedGameItemStatsSubsystem", &UOnlineSubsystem::execGetNamedGameItemStatsSubsystem },
			{ "GetNamedGroupsSubsystem", &UOnlineSubsystem::execGetNamedGroupsSubsystem },
			{ "GetNamedIdentitySubsystem", &UOnlineSubsystem::execGetNamedIdentitySubsystem },
			{ "GetNamedLeaderboardsSubsystem", &UOnlineSubsystem::execGetNamedLeaderboardsSubsystem },
			{ "GetNamedLobbySubsystem", &UOnlineSubsystem::execGetNamedLobbySubsystem },
			{ "GetNamedMessageSanitizerSubsystem", &UOnlineSubsystem::execGetNamedMessageSanitizerSubsystem },
			{ "GetNamedMessageSubsystem", &UOnlineSubsystem::execGetNamedMessageSubsystem },
			{ "GetNamedPartySubsystem", &UOnlineSubsystem::execGetNamedPartySubsystem },
			{ "GetNamedPresenceSubsystem", &UOnlineSubsystem::execGetNamedPresenceSubsystem },
			{ "GetNamedPurchaseSubsystem", &UOnlineSubsystem::execGetNamedPurchaseSubsystem },
			{ "GetNamedSessionSubsystem", &UOnlineSubsystem::execGetNamedSessionSubsystem },
			{ "GetNamedSharedCloudSubsystem", &UOnlineSubsystem::execGetNamedSharedCloudSubsystem },
			{ "GetNamedSharingSubsystem", &UOnlineSubsystem::execGetNamedSharingSubsystem },
			{ "GetNamedStatsSubsystem", &UOnlineSubsystem::execGetNamedStatsSubsystem },
			{ "GetNamedStoreV2Subsystem", &UOnlineSubsystem::execGetNamedStoreV2Subsystem },
			{ "GetNamedTimeSubsystem", &UOnlineSubsystem::execGetNamedTimeSubsystem },
			{ "GetNamedTitleFileSubsystem", &UOnlineSubsystem::execGetNamedTitleFileSubsystem },
			{ "GetNamedTournamentSubsystem", &UOnlineSubsystem::execGetNamedTournamentSubsystem },
			{ "GetNamedTurnBasedSubsystem", &UOnlineSubsystem::execGetNamedTurnBasedSubsystem },
			{ "GetNamedUserCloudSubsystem", &UOnlineSubsystem::execGetNamedUserCloudSubsystem },
			{ "GetNamedUserSubsystem", &UOnlineSubsystem::execGetNamedUserSubsystem },
			{ "GetNamedVoiceAdminSubsystem", &UOnlineSubsystem::execGetNamedVoiceAdminSubsystem },
			{ "GetNamedVoiceSubsystem", &UOnlineSubsystem::execGetNamedVoiceSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedAchievementsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineAchievementsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedAchievementsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedAchievementsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Achievements interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineAchievementsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Achievements interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineAchievementsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedAchievementsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::OnlineSubsystem_eventGetNamedAchievementsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedAvatarSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineAvatarSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedAvatarSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedAvatarSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Avatar interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineAvatarSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Avatar interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineAvatarSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedAvatarSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::OnlineSubsystem_eventGetNamedAvatarSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedChatSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineChatSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedChatSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedChatSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineChatSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Chat interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineChatSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Chat interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineChatSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedChatSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::OnlineSubsystem_eventGetNamedChatSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedEntitlementsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineEntitlementsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedEntitlementsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedEntitlementsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineEntitlementsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Entitlements interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineEntitlementsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Entitlements interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineEntitlementsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedEntitlementsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::OnlineSubsystem_eventGetNamedEntitlementsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedEventsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineEventsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedEventsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedEventsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineEventsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Events interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineEventsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Events interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineEventsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedEventsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::OnlineSubsystem_eventGetNamedEventsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedExternalUISubsystem_Parms
		{
			FName SubsystemName;
			UOnlineExternalUISubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedExternalUISubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedExternalUISubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineExternalUISubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the ExternalUI interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineExternalUISubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the ExternalUI interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineExternalUISubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedExternalUISubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::OnlineSubsystem_eventGetNamedExternalUISubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedFriendsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineFriendsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedFriendsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedFriendsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineFriendsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Friends interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineFriendsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Friends interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineFriendsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedFriendsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::OnlineSubsystem_eventGetNamedFriendsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedGameActivitySubsystem_Parms
		{
			FName SubsystemName;
			UOnlineGameActivitySubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedGameActivitySubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedGameActivitySubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameActivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the GameActivity interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineGameActivitySubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the GameActivity interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineGameActivitySubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedGameActivitySubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::OnlineSubsystem_eventGetNamedGameActivitySubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedGameItemStatsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineGameItemStatsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedGameItemStatsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedGameItemStatsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the GameItemStats interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineGameItemStatsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the GameItemStats interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineGameItemStatsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedGameItemStatsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::OnlineSubsystem_eventGetNamedGameItemStatsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedGroupsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineGroupsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedGroupsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedGroupsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineGroupsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Groups interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineGroupsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Groups interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineGroupsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedGroupsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::OnlineSubsystem_eventGetNamedGroupsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedIdentitySubsystem_Parms
		{
			FName SubsystemName;
			UOnlineIdentitySubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedIdentitySubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedIdentitySubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineIdentitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Identity interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineIdentitySubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Identity interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineIdentitySubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedIdentitySubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::OnlineSubsystem_eventGetNamedIdentitySubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedLeaderboardsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineLeaderboardsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedLeaderboardsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedLeaderboardsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineLeaderboardsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Leaderboards interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineLeaderboardsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Leaderboards interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineLeaderboardsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedLeaderboardsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::OnlineSubsystem_eventGetNamedLeaderboardsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedLobbySubsystem_Parms
		{
			FName SubsystemName;
			UOnlineLobbySubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedLobbySubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedLobbySubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineLobbySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Lobby interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineLobbySubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Lobby interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineLobbySubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedLobbySubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::OnlineSubsystem_eventGetNamedLobbySubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedMessageSanitizerSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineMessageSanitizerSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedMessageSanitizerSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedMessageSanitizerSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the MessageSanitizer interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineMessageSanitizerSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the MessageSanitizer interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineMessageSanitizerSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedMessageSanitizerSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::OnlineSubsystem_eventGetNamedMessageSanitizerSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedMessageSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineMessageSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedMessageSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedMessageSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineMessageSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Message interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineMessageSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Message interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineMessageSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedMessageSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::OnlineSubsystem_eventGetNamedMessageSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedPartySubsystem_Parms
		{
			FName SubsystemName;
			UOnlinePartySubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedPartySubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedPartySubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlinePartySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Party interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlinePartySubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Party interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlinePartySubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedPartySubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::OnlineSubsystem_eventGetNamedPartySubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedPresenceSubsystem_Parms
		{
			FName SubsystemName;
			UOnlinePresenceSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedPresenceSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedPresenceSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlinePresenceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Presence interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlinePresenceSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Presence interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlinePresenceSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedPresenceSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::OnlineSubsystem_eventGetNamedPresenceSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedPurchaseSubsystem_Parms
		{
			FName SubsystemName;
			UOnlinePurchaseSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedPurchaseSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedPurchaseSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlinePurchaseSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Purchase interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlinePurchaseSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Purchase interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlinePurchaseSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedPurchaseSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::OnlineSubsystem_eventGetNamedPurchaseSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedSessionSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineSessionSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedSessionSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedSessionSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineSessionSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Session interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineSessionSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Session interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineSessionSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedSessionSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::OnlineSubsystem_eventGetNamedSessionSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedSharedCloudSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineSharedCloudSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedSharedCloudSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedSharedCloudSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineSharedCloudSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the SharedCloud interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineSharedCloudSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the SharedCloud interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineSharedCloudSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedSharedCloudSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::OnlineSubsystem_eventGetNamedSharedCloudSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedSharingSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineSharingSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedSharingSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedSharingSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineSharingSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Sharing interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineSharingSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Sharing interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineSharingSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedSharingSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::OnlineSubsystem_eventGetNamedSharingSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedStatsSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineStatsSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedStatsSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedStatsSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Stats interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineStatsSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Stats interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineStatsSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedStatsSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::OnlineSubsystem_eventGetNamedStatsSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedStoreV2Subsystem_Parms
		{
			FName SubsystemName;
			UOnlineStoreV2Subsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedStoreV2Subsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedStoreV2Subsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the StoreV2 interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineStoreV2Subsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the StoreV2 interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineStoreV2Subsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedStoreV2Subsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::OnlineSubsystem_eventGetNamedStoreV2Subsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedTimeSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineTimeSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTimeSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTimeSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineTimeSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Time interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineTimeSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Time interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineTimeSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedTimeSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::OnlineSubsystem_eventGetNamedTimeSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedTitleFileSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineTitleFileSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTitleFileSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTitleFileSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineTitleFileSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the TitleFile interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineTitleFileSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the TitleFile interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineTitleFileSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedTitleFileSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::OnlineSubsystem_eventGetNamedTitleFileSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedTournamentSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineTournamentSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTournamentSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTournamentSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineTournamentSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Tournament interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineTournamentSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Tournament interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineTournamentSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedTournamentSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::OnlineSubsystem_eventGetNamedTournamentSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedTurnBasedSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineTurnBasedSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTurnBasedSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedTurnBasedSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the TurnBased interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineTurnBasedSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the TurnBased interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineTurnBasedSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedTurnBasedSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::OnlineSubsystem_eventGetNamedTurnBasedSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedUserCloudSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineUserCloudSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedUserCloudSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedUserCloudSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserCloudSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the UserCloud interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineUserCloudSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the UserCloud interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineUserCloudSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedUserCloudSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::OnlineSubsystem_eventGetNamedUserCloudSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedUserSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineUserSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedUserSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedUserSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the User interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineUserSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the User interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineUserSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedUserSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::OnlineSubsystem_eventGetNamedUserSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedVoiceAdminSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineVoiceAdminSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedVoiceAdminSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedVoiceAdminSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the VoiceAdmin interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineVoiceAdminSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the VoiceAdmin interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineVoiceAdminSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedVoiceAdminSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::OnlineSubsystem_eventGetNamedVoiceAdminSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics
	{
		struct OnlineSubsystem_eventGetNamedVoiceSubsystem_Parms
		{
			FName SubsystemName;
			UOnlineVoiceSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubsystemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::NewProp_SubsystemName = { "SubsystemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedVoiceSubsystem_Parms, SubsystemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSubsystem_eventGetNamedVoiceSubsystem_Parms, ReturnValue), Z_Construct_UClass_UOnlineVoiceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::NewProp_SubsystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/** \n     * Gets the Voice interface for the subsystem with the given name.\n     * \n     * This can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default. \n     * \n     * If you pass NAME_Default, this is the same as using the main \"UOnlineVoiceSubsystem\" class from blueprints.\n     * \n     * If you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n     * \n     * This function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime.\n     * */" },
		{ "CPP_Default_SubsystemName", "Default" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ToolTip", "Gets the Voice interface for the subsystem with the given name.\n\nThis can be used to access functionality on specific platforms (like Steam), even when you're not using that platform's online subsystem as the default.\n\nIf you pass NAME_Default, this is the same as using the main \"UOnlineVoiceSubsystem\" class from blueprints.\n\nIf you pass \"Native\" as the name, this returns the subsystem for the native OSS implementation on the current platform, as specified by NativePlatformService= in your Engine.ini file.\n\nThis function always returns a valid object, but its IsSubsystemAvailable() blueprint node will return false if the targeted subsystem name is not currently available or does not implement the requested interface. Therefore you should always check the result of IsSubsystemAvailable() before calling blueprints nodes off the returned subsystem at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSubsystem, nullptr, "GetNamedVoiceSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::OnlineSubsystem_eventGetNamedVoiceSubsystem_Parms), Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSubsystem);
	UClass* Z_Construct_UClass_UOnlineSubsystem_NoRegister()
	{
		return UOnlineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubsystemCache_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubsystemCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsystemCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubsystemCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedAchievementsSubsystem, "GetNamedAchievementsSubsystem" }, // 65434547
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedAvatarSubsystem, "GetNamedAvatarSubsystem" }, // 275247954
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedChatSubsystem, "GetNamedChatSubsystem" }, // 2050517525
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedEntitlementsSubsystem, "GetNamedEntitlementsSubsystem" }, // 4108964884
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedEventsSubsystem, "GetNamedEventsSubsystem" }, // 2251283008
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedExternalUISubsystem, "GetNamedExternalUISubsystem" }, // 560410900
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedFriendsSubsystem, "GetNamedFriendsSubsystem" }, // 42205984
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameActivitySubsystem, "GetNamedGameActivitySubsystem" }, // 4520193
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedGameItemStatsSubsystem, "GetNamedGameItemStatsSubsystem" }, // 1627259067
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedGroupsSubsystem, "GetNamedGroupsSubsystem" }, // 39086818
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedIdentitySubsystem, "GetNamedIdentitySubsystem" }, // 3963575385
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedLeaderboardsSubsystem, "GetNamedLeaderboardsSubsystem" }, // 3586711644
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedLobbySubsystem, "GetNamedLobbySubsystem" }, // 1335828197
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSanitizerSubsystem, "GetNamedMessageSanitizerSubsystem" }, // 1251853459
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedMessageSubsystem, "GetNamedMessageSubsystem" }, // 1605820147
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedPartySubsystem, "GetNamedPartySubsystem" }, // 920766692
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedPresenceSubsystem, "GetNamedPresenceSubsystem" }, // 2646889481
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedPurchaseSubsystem, "GetNamedPurchaseSubsystem" }, // 1919421118
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedSessionSubsystem, "GetNamedSessionSubsystem" }, // 2596558783
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharedCloudSubsystem, "GetNamedSharedCloudSubsystem" }, // 3055048300
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedSharingSubsystem, "GetNamedSharingSubsystem" }, // 543929767
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedStatsSubsystem, "GetNamedStatsSubsystem" }, // 3337010947
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedStoreV2Subsystem, "GetNamedStoreV2Subsystem" }, // 1319513739
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedTimeSubsystem, "GetNamedTimeSubsystem" }, // 3234044863
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedTitleFileSubsystem, "GetNamedTitleFileSubsystem" }, // 4250510305
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedTournamentSubsystem, "GetNamedTournamentSubsystem" }, // 2455897908
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedTurnBasedSubsystem, "GetNamedTurnBasedSubsystem" }, // 3584017783
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserCloudSubsystem, "GetNamedUserCloudSubsystem" }, // 1319792362
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedUserSubsystem, "GetNamedUserSubsystem" }, // 98239683
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceAdminSubsystem, "GetNamedVoiceAdminSubsystem" }, // 4164339658
		{ &Z_Construct_UFunction_UOnlineSubsystem_GetNamedVoiceSubsystem, "GetNamedVoiceSubsystem" }, // 1053792256
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache_ValueProp = { "SubsystemCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UGameInstanceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache_Key_KeyProp = { "SubsystemCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSubsystemBP.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache = { "SubsystemCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSubsystem, SubsystemCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSubsystem_Statics::NewProp_SubsystemCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSubsystem_Statics::ClassParams = {
		&UOnlineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineSubsystem>()
	{
		return UOnlineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSubsystem);
	UOnlineSubsystem::~UOnlineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSubsystemBP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSubsystemBP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSubsystem, UOnlineSubsystem::StaticClass, TEXT("UOnlineSubsystem"), &Z_Registration_Info_UClass_UOnlineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSubsystem), 612984923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSubsystemBP_h_797524916(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSubsystemBP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSubsystemBP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
