// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBAchievementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBAchievementTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsWrite();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAchievementsWrite_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAchievementBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAchievementDescBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineAchievementBP;
class UScriptStruct* FOnlineAchievementBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineAchievementBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineAchievementBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineAchievementBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineAchievementBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineAchievementBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineAchievementBP>()
{
	return FOnlineAchievementBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineAchievementBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** The id of the achievement */" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "The id of the achievement" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAchievementBP, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** The progress towards completing this achievement: 0.0-100.0 */" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "The progress towards completing this achievement: 0.0-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAchievementBP, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Progress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewProp_Progress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineAchievementBP",
		sizeof(FOnlineAchievementBP),
		alignof(FOnlineAchievementBP),
		Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineAchievementBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineAchievementBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineAchievementBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineAchievementBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP;
class UScriptStruct* FOnlineAchievementDescBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineAchievementDescBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineAchievementDescBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineAchievementDescBP>()
{
	return FOnlineAchievementDescBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedDesc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LockedDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedDesc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UnlockedDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[];
#endif
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineAchievementDescBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** The localized title of the achievement */" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "The localized title of the achievement" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAchievementDescBP, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_LockedDesc_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** The localized locked description of the achievement */" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "The localized locked description of the achievement" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_LockedDesc = { "LockedDesc", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAchievementDescBP, LockedDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_LockedDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_LockedDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockedDesc_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** The localized unlocked description of the achievement */" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "The localized unlocked description of the achievement" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockedDesc = { "UnlockedDesc", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAchievementDescBP, UnlockedDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockedDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockedDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_bIsHidden_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** Flag for whether the achievement is hidden */" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "Flag for whether the achievement is hidden" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((FOnlineAchievementDescBP*)Obj)->bIsHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineAchievementDescBP), &Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_bIsHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_bIsHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockTime_MetaData[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** The date/time the achievement was unlocked */" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "The date/time the achievement was unlocked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineAchievementDescBP, UnlockTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_LockedDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockedDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_bIsHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewProp_UnlockTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineAchievementDescBP",
		sizeof(FOnlineAchievementDescBP),
		alignof(FOnlineAchievementDescBP),
		Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineAchievementDescBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineAchievementsWrite::execSetAchievementProgress)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AchievementId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AchievementProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAchievementProgress(Z_Param_AchievementId,Z_Param_AchievementProgress);
		P_NATIVE_END;
	}
	void UOnlineAchievementsWrite::StaticRegisterNativesUOnlineAchievementsWrite()
	{
		UClass* Class = UOnlineAchievementsWrite::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAchievementProgress", &UOnlineAchievementsWrite::execSetAchievementProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics
	{
		struct OnlineAchievementsWrite_eventSetAchievementProgress_Parms
		{
			FName AchievementId;
			float AchievementProgress;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AchievementId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AchievementProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsWrite_eventSetAchievementProgress_Parms, AchievementId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::NewProp_AchievementProgress = { "AchievementProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAchievementsWrite_eventSetAchievementProgress_Parms, AchievementProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::NewProp_AchievementId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::NewProp_AchievementProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/** Sets an achievement to be unlocked via it's ID or name. WARNING: OSS implementations differ wildly in their implementation of WriteAchievements. This function is only meant to be used with OSS implementations that misuse the WriteAchievements function to do direct achievement unlocks. If you are using Epic's EOS implementation, you must use UpdateStats on the Online Stats subsystem instead! */" },
		{ "DisplayName", "Set Achievement Progress (READ WARNING IN FUNCTION DESCRIPTION)" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ToolTip", "Sets an achievement to be unlocked via it's ID or name. WARNING: OSS implementations differ wildly in their implementation of WriteAchievements. This function is only meant to be used with OSS implementations that misuse the WriteAchievements function to do direct achievement unlocks. If you are using Epic's EOS implementation, you must use UpdateStats on the Online Stats subsystem instead!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAchievementsWrite, nullptr, "SetAchievementProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::OnlineAchievementsWrite_eventSetAchievementProgress_Parms), Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAchievementsWrite);
	UClass* Z_Construct_UClass_UOnlineAchievementsWrite_NoRegister()
	{
		return UOnlineAchievementsWrite::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAchievementsWrite_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAchievementsWrite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAchievementsWrite_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAchievementsWrite_SetAchievementProgress, "SetAchievementProgress" }, // 2900790109
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAchievementsWrite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The achievement writing object. WARNING: OSS implementations differ wildly in their implementation of WriteAchievements. This class is only meant to be used with OSS implementations that misuse the WriteAchievements function to do direct achievement unlocks. If you are using Epic's EOS implementation, you must use UpdateStats on the Online Stats subsystem instead!\n */" },
		{ "IncludePath", "Types/OSBAchievementTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBAchievementTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The achievement writing object. WARNING: OSS implementations differ wildly in their implementation of WriteAchievements. This class is only meant to be used with OSS implementations that misuse the WriteAchievements function to do direct achievement unlocks. If you are using Epic's EOS implementation, you must use UpdateStats on the Online Stats subsystem instead!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAchievementsWrite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAchievementsWrite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAchievementsWrite_Statics::ClassParams = {
		&UOnlineAchievementsWrite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAchievementsWrite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAchievementsWrite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAchievementsWrite()
	{
		if (!Z_Registration_Info_UClass_UOnlineAchievementsWrite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAchievementsWrite.OuterSingleton, Z_Construct_UClass_UOnlineAchievementsWrite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAchievementsWrite.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAchievementsWrite>()
	{
		return UOnlineAchievementsWrite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAchievementsWrite);
	UOnlineAchievementsWrite::~UOnlineAchievementsWrite() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_Statics::ScriptStructInfo[] = {
		{ FOnlineAchievementBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineAchievementBP_Statics::NewStructOps, TEXT("OnlineAchievementBP"), &Z_Registration_Info_UScriptStruct_OnlineAchievementBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineAchievementBP), 2208567671U) },
		{ FOnlineAchievementDescBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineAchievementDescBP_Statics::NewStructOps, TEXT("OnlineAchievementDescBP"), &Z_Registration_Info_UScriptStruct_OnlineAchievementDescBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineAchievementDescBP), 442279888U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineAchievementsWrite, UOnlineAchievementsWrite::StaticClass, TEXT("UOnlineAchievementsWrite"), &Z_Registration_Info_UClass_UOnlineAchievementsWrite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAchievementsWrite), 1186079547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_3643238592(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBAchievementTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
