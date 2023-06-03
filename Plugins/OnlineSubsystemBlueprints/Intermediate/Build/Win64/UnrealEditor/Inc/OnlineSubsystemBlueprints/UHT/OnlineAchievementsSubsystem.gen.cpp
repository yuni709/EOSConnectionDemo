// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBAchievementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAchievementsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsWrite_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAchievementBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAchievementDescBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventAchievements_AchievementUnlocked_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventAchievements_AchievementUnlocked_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventAchievements_AchievementUnlocked_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::NewProp_Param2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Achievements_AchievementUnlocked_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventAchievements_AchievementUnlocked_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineAchievementsSubsystem::execGetCachedAchievementDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementId);
		P_GET_STRUCT_REF(FOnlineAchievementDescBP,Z_Param_Out_OutAchievementDesc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineCachedResult_*)Z_Param__Result=P_THIS->GetCachedAchievementDescription(Z_Param_AchievementId,Z_Param_Out_OutAchievementDesc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineAchievementsSubsystem::execGetCachedAchievements)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_TARRAY_REF(FOnlineAchievementBP,Z_Param_Out_OutAchievements);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineCachedResult_*)Z_Param__Result=P_THIS->GetCachedAchievements(Z_Param_PlayerId,Z_Param_Out_OutAchievements);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineAchievementsSubsystem::execGetCachedAchievement)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementId);
		P_GET_STRUCT_REF(FOnlineAchievementBP,Z_Param_Out_OutAchievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineCachedResult_*)Z_Param__Result=P_THIS->GetCachedAchievement(Z_Param_PlayerId,Z_Param_AchievementId,Z_Param_Out_OutAchievement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineAchievementsSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineAchievementsSubsystem::StaticRegisterNativesUOnlineAchievementsSubsystem()
	{
		UClass* Class = UOnlineAchievementsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedAchievement", &UOnlineAchievementsSubsystem::execGetCachedAchievement },
			{ "GetCachedAchievementDescription", &UOnlineAchievementsSubsystem::execGetCachedAchievementDescription },
			{ "GetCachedAchievements", &UOnlineAchievementsSubsystem::execGetCachedAchievements },
			{ "IsSubsystemAvailable", &UOnlineAchievementsSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics
	{
		struct OnlineAchievementsSubsystem_eventGetCachedAchievement_Parms
		{
			FUniqueNetIdRepl PlayerId;
			FString AchievementId;
			FOnlineAchievementBP OutAchievement;
			EOnlineCachedResult_ ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAchievement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievement_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievement_Parms, AchievementId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_OutAchievement = { "OutAchievement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievement_Parms, OutAchievement), Z_Construct_UScriptStruct_FOnlineAchievementBP, METADATA_PARAMS(nullptr, 0) }; // 2208567671
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievement_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_, METADATA_PARAMS(nullptr, 0) }; // 514511364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_AchievementId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_OutAchievement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsSubsystem, nullptr, "GetCachedAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::OnlineAchievementsSubsystem_eventGetCachedAchievement_Parms), Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics
	{
		struct OnlineAchievementsSubsystem_eventGetCachedAchievementDescription_Parms
		{
			FString AchievementId;
			FOnlineAchievementDescBP OutAchievementDesc;
			EOnlineCachedResult_ ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAchievementDesc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievementDescription_Parms, AchievementId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_OutAchievementDesc = { "OutAchievementDesc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievementDescription_Parms, OutAchievementDesc), Z_Construct_UScriptStruct_FOnlineAchievementDescBP, METADATA_PARAMS(nullptr, 0) }; // 442279888
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievementDescription_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_, METADATA_PARAMS(nullptr, 0) }; // 514511364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_AchievementId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_OutAchievementDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsSubsystem, nullptr, "GetCachedAchievementDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::OnlineAchievementsSubsystem_eventGetCachedAchievementDescription_Parms), Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics
	{
		struct OnlineAchievementsSubsystem_eventGetCachedAchievements_Parms
		{
			FUniqueNetIdRepl PlayerId;
			TArray<FOnlineAchievementBP> OutAchievements;
			EOnlineCachedResult_ ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAchievements_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAchievements;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievements_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_OutAchievements_Inner = { "OutAchievements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineAchievementBP, METADATA_PARAMS(nullptr, 0) }; // 2208567671
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_OutAchievements = { "OutAchievements", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievements_Parms, OutAchievements), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2208567671
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystem_eventGetCachedAchievements_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineCachedResult_, METADATA_PARAMS(nullptr, 0) }; // 514511364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_OutAchievements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_OutAchievements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsSubsystem, nullptr, "GetCachedAchievements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::OnlineAchievementsSubsystem_eventGetCachedAchievements_Parms), Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineAchievementsSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineAchievementsSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineAchievementsSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::OnlineAchievementsSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAchievementsSubsystem);
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister()
	{
		return UOnlineAchievementsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAchievementUnlocked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAchievementUnlocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievement, "GetCachedAchievement" }, // 3461009339
		{ &Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievementDescription, "GetCachedAchievementDescription" }, // 734656970
		{ &Z_Construct_UFunction_UOnlineAchievementsSubsystem_GetCachedAchievements, "GetCachedAchievements" }, // 3460427024
		{ &Z_Construct_UFunction_UOnlineAchievementsSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3724753405
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::NewProp_OnAchievementUnlocked_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::NewProp_OnAchievementUnlocked = { "OnAchievementUnlocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystem, OnAchievementUnlocked), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Achievements_AchievementUnlocked_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::NewProp_OnAchievementUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::NewProp_OnAchievementUnlocked_MetaData)) }; // 446251488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::NewProp_OnAchievementUnlocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAchievementsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::ClassParams = {
		&UOnlineAchievementsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineAchievementsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAchievementsSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineAchievementsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAchievementsSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAchievementsSubsystem>()
	{
		return UOnlineAchievementsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAchievementsSubsystem);
	UOnlineAchievementsSubsystem::~UOnlineAchievementsSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemWriteAchievementsCallbackPin_Parms
		{
			FUniqueNetIdRepl Param1;
			bool Param2;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static void NewProp_Param2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemWriteAchievementsCallbackPin_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::NewProp_Param2_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemWriteAchievementsCallbackPin_Parms*)Obj)->Param2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemWriteAchievementsCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::NewProp_Param2_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::NewProp_Param2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemWriteAchievementsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineAchievementsSubsystemWriteAchievements::execWriteAchievements)
	{
		P_GET_OBJECT(UOnlineAchievementsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_OBJECT(UOnlineAchievementsWrite,Z_Param_WriteObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineAchievementsSubsystemWriteAchievements**)Z_Param__Result=UOnlineAchievementsSubsystemWriteAchievements::WriteAchievements(Z_Param_Subsystem,Z_Param_PlayerId,Z_Param_WriteObject);
		P_NATIVE_END;
	}
	void UOnlineAchievementsSubsystemWriteAchievements::StaticRegisterNativesUOnlineAchievementsSubsystemWriteAchievements()
	{
		UClass* Class = UOnlineAchievementsSubsystemWriteAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WriteAchievements", &UOnlineAchievementsSubsystemWriteAchievements::execWriteAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics
	{
		struct OnlineAchievementsSubsystemWriteAchievements_eventWriteAchievements_Parms
		{
			UOnlineAchievementsSubsystem* Subsystem;
			FUniqueNetIdRepl PlayerId;
			UOnlineAchievementsWrite* WriteObject;
			UOnlineAchievementsSubsystemWriteAchievements* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WriteObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemWriteAchievements_eventWriteAchievements_Parms, Subsystem), Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemWriteAchievements_eventWriteAchievements_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_WriteObject = { "WriteObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemWriteAchievements_eventWriteAchievements_Parms, WriteObject), Z_Construct_UClass_UOnlineAchievementsWrite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemWriteAchievements_eventWriteAchievements_Parms, ReturnValue), Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_WriteObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements, nullptr, "WriteAchievements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::OnlineAchievementsSubsystemWriteAchievements_eventWriteAchievements_Parms), Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAchievementsSubsystemWriteAchievements);
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_NoRegister()
	{
		return UOnlineAchievementsSubsystemWriteAchievements::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAchievementsWritten_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAchievementsWritten;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__PlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__WriteObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__WriteObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements, "WriteAchievements" }, // 1132874399
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemWriteAchievements, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnCallFailed_MetaData)) }; // 3481869125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnAchievementsWritten_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnAchievementsWritten = { "OnAchievementsWritten", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemWriteAchievements, OnAchievementsWritten), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemWriteAchievementsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnAchievementsWritten_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnAchievementsWritten_MetaData)) }; // 3481869125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemWriteAchievements, __Store__Subsystem), Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemWriteAchievements, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__PlayerId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__PlayerId = { "__Store__PlayerId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemWriteAchievements, __Store__PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__PlayerId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__WriteObject_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__WriteObject = { "__Store__WriteObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemWriteAchievements, __Store__WriteObject), Z_Construct_UClass_UOnlineAchievementsWrite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__WriteObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__WriteObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp_OnAchievementsWritten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::NewProp___Store__WriteObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAchievementsSubsystemWriteAchievements>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::ClassParams = {
		&UOnlineAchievementsSubsystemWriteAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements()
	{
		if (!Z_Registration_Info_UClass_UOnlineAchievementsSubsystemWriteAchievements.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAchievementsSubsystemWriteAchievements.OuterSingleton, Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAchievementsSubsystemWriteAchievements.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAchievementsSubsystemWriteAchievements>()
	{
		return UOnlineAchievementsSubsystemWriteAchievements::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAchievementsSubsystemWriteAchievements);
	UOnlineAchievementsSubsystemWriteAchievements::~UOnlineAchievementsSubsystemWriteAchievements() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementsCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementsCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementsCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementsCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineAchievementsSubsystemQueryAchievements::execQueryAchievements)
	{
		P_GET_OBJECT(UOnlineAchievementsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineAchievementsSubsystemQueryAchievements**)Z_Param__Result=UOnlineAchievementsSubsystemQueryAchievements::QueryAchievements(Z_Param_Subsystem,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	void UOnlineAchievementsSubsystemQueryAchievements::StaticRegisterNativesUOnlineAchievementsSubsystemQueryAchievements()
	{
		UClass* Class = UOnlineAchievementsSubsystemQueryAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryAchievements", &UOnlineAchievementsSubsystemQueryAchievements::execQueryAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics
	{
		struct OnlineAchievementsSubsystemQueryAchievements_eventQueryAchievements_Parms
		{
			UOnlineAchievementsSubsystem* Subsystem;
			FUniqueNetIdRepl PlayerId;
			UOnlineAchievementsSubsystemQueryAchievements* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemQueryAchievements_eventQueryAchievements_Parms, Subsystem), Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemQueryAchievements_eventQueryAchievements_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemQueryAchievements_eventQueryAchievements_Parms, ReturnValue), Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements, nullptr, "QueryAchievements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::OnlineAchievementsSubsystemQueryAchievements_eventQueryAchievements_Parms), Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAchievementsSubsystemQueryAchievements);
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_NoRegister()
	{
		return UOnlineAchievementsSubsystemQueryAchievements::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryAchievementsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryAchievementsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__PlayerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements, "QueryAchievements" }, // 3917103489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievements, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnCallFailed_MetaData)) }; // 1681192802
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnQueryAchievementsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnQueryAchievementsComplete = { "OnQueryAchievementsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievements, OnQueryAchievementsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnQueryAchievementsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnQueryAchievementsComplete_MetaData)) }; // 1681192802
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievements, __Store__Subsystem), Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievements, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__PlayerId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__PlayerId = { "__Store__PlayerId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievements, __Store__PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__PlayerId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp_OnQueryAchievementsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::NewProp___Store__PlayerId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAchievementsSubsystemQueryAchievements>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::ClassParams = {
		&UOnlineAchievementsSubsystemQueryAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements()
	{
		if (!Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievements.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievements.OuterSingleton, Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievements.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAchievementsSubsystemQueryAchievements>()
	{
		return UOnlineAchievementsSubsystemQueryAchievements::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAchievementsSubsystemQueryAchievements);
	UOnlineAchievementsSubsystemQueryAchievements::~UOnlineAchievementsSubsystemQueryAchievements() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineAchievementsSubsystemQueryAchievementDescriptions::execQueryAchievementDescriptions)
	{
		P_GET_OBJECT(UOnlineAchievementsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineAchievementsSubsystemQueryAchievementDescriptions**)Z_Param__Result=UOnlineAchievementsSubsystemQueryAchievementDescriptions::QueryAchievementDescriptions(Z_Param_Subsystem,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	void UOnlineAchievementsSubsystemQueryAchievementDescriptions::StaticRegisterNativesUOnlineAchievementsSubsystemQueryAchievementDescriptions()
	{
		UClass* Class = UOnlineAchievementsSubsystemQueryAchievementDescriptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryAchievementDescriptions", &UOnlineAchievementsSubsystemQueryAchievementDescriptions::execQueryAchievementDescriptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics
	{
		struct OnlineAchievementsSubsystemQueryAchievementDescriptions_eventQueryAchievementDescriptions_Parms
		{
			UOnlineAchievementsSubsystem* Subsystem;
			FUniqueNetIdRepl PlayerId;
			UOnlineAchievementsSubsystemQueryAchievementDescriptions* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemQueryAchievementDescriptions_eventQueryAchievementDescriptions_Parms, Subsystem), Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemQueryAchievementDescriptions_eventQueryAchievementDescriptions_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsSubsystemQueryAchievementDescriptions_eventQueryAchievementDescriptions_Parms, ReturnValue), Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions, nullptr, "QueryAchievementDescriptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::OnlineAchievementsSubsystemQueryAchievementDescriptions_eventQueryAchievementDescriptions_Parms), Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAchievementsSubsystemQueryAchievementDescriptions);
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_NoRegister()
	{
		return UOnlineAchievementsSubsystemQueryAchievementDescriptions::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryAchievementsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryAchievementsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__PlayerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions, "QueryAchievementDescriptions" }, // 3985044667
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievementDescriptions, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnCallFailed_MetaData)) }; // 3968843929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnQueryAchievementsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnQueryAchievementsComplete = { "OnQueryAchievementsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievementDescriptions, OnQueryAchievementsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnQueryAchievementsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnQueryAchievementsComplete_MetaData)) }; // 3968843929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__Subsystem), Z_Construct_UClass_UOnlineAchievementsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__PlayerId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAchievementsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__PlayerId = { "__Store__PlayerId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__PlayerId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp_OnQueryAchievementsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::NewProp___Store__PlayerId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAchievementsSubsystemQueryAchievementDescriptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::ClassParams = {
		&UOnlineAchievementsSubsystemQueryAchievementDescriptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions()
	{
		if (!Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions.OuterSingleton, Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAchievementsSubsystemQueryAchievementDescriptions>()
	{
		return UOnlineAchievementsSubsystemQueryAchievementDescriptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAchievementsSubsystemQueryAchievementDescriptions);
	UOnlineAchievementsSubsystemQueryAchievementDescriptions::~UOnlineAchievementsSubsystemQueryAchievementDescriptions() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAchievementsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAchievementsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineAchievementsSubsystem, UOnlineAchievementsSubsystem::StaticClass, TEXT("UOnlineAchievementsSubsystem"), &Z_Registration_Info_UClass_UOnlineAchievementsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAchievementsSubsystem), 1324727620U) },
		{ Z_Construct_UClass_UOnlineAchievementsSubsystemWriteAchievements, UOnlineAchievementsSubsystemWriteAchievements::StaticClass, TEXT("UOnlineAchievementsSubsystemWriteAchievements"), &Z_Registration_Info_UClass_UOnlineAchievementsSubsystemWriteAchievements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAchievementsSubsystemWriteAchievements), 1100162776U) },
		{ Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievements, UOnlineAchievementsSubsystemQueryAchievements::StaticClass, TEXT("UOnlineAchievementsSubsystemQueryAchievements"), &Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAchievementsSubsystemQueryAchievements), 3498588240U) },
		{ Z_Construct_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions, UOnlineAchievementsSubsystemQueryAchievementDescriptions::StaticClass, TEXT("UOnlineAchievementsSubsystemQueryAchievementDescriptions"), &Z_Registration_Info_UClass_UOnlineAchievementsSubsystemQueryAchievementDescriptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAchievementsSubsystemQueryAchievementDescriptions), 3382143599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAchievementsSubsystem_h_1843581258(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAchievementsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAchievementsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
