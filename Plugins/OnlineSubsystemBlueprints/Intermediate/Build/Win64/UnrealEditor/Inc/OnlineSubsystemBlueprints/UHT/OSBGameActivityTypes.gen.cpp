// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBGameActivityTypes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBGameActivityTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineActivityOutcome_;
	static UEnum* EOnlineActivityOutcome__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineActivityOutcome_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineActivityOutcome_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineActivityOutcome_"));
		}
		return Z_Registration_Info_UEnum_EOnlineActivityOutcome_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineActivityOutcome_>()
	{
		return EOnlineActivityOutcome__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::Enumerators[] = {
		{ "EOnlineActivityOutcome_::Completed", (int64)EOnlineActivityOutcome_::Completed },
		{ "EOnlineActivityOutcome_::Failed", (int64)EOnlineActivityOutcome_::Failed },
		{ "EOnlineActivityOutcome_::Cancelled", (int64)EOnlineActivityOutcome_::Cancelled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Comment", "/** The activity was cancelled */" },
		{ "Cancelled.Name", "EOnlineActivityOutcome_::Cancelled" },
		{ "Cancelled.ToolTip", "The activity was cancelled" },
		{ "Completed.Comment", "/** Activity has been completed successfully */" },
		{ "Completed.Name", "EOnlineActivityOutcome_::Completed" },
		{ "Completed.ToolTip", "Activity has been completed successfully" },
		{ "Failed.Comment", "/** Activity attempt failed to be completed */" },
		{ "Failed.Name", "EOnlineActivityOutcome_::Failed" },
		{ "Failed.ToolTip", "Activity attempt failed to be completed" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
		{ "ScriptName", "EOnlineActivityOutcome" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineActivityOutcome_",
		"EOnlineActivityOutcome_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineActivityOutcome_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineActivityOutcome_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineActivityOutcome__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineActivityOutcome_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP;
class UScriptStruct* FOnlineActivityTasksToResetBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineActivityTasksToResetBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineActivityTasksToResetBP>()
{
	return FOnlineActivityTasksToResetBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSet_MetaData[];
#endif
		static void NewProp_bSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InProgressTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgressTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InProgressTasks;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompletedTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedTasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineActivityTasksToResetBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_bSet_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "Comment", "/** If the structure values are set */" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
		{ "ToolTip", "If the structure values are set" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((FOnlineActivityTasksToResetBP*)Obj)->bSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineActivityTasksToResetBP), &Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_bSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_bSet_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_InProgressTasks_Inner = { "InProgressTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_InProgressTasks_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_InProgressTasks = { "InProgressTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineActivityTasksToResetBP, InProgressTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_InProgressTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_InProgressTasks_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_CompletedTasks_Inner = { "CompletedTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_CompletedTasks_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_CompletedTasks = { "CompletedTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineActivityTasksToResetBP, CompletedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_CompletedTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_CompletedTasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_bSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_InProgressTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_InProgressTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_CompletedTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewProp_CompletedTasks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineActivityTasksToResetBP",
		sizeof(FOnlineActivityTasksToResetBP),
		alignof(FOnlineActivityTasksToResetBP),
		Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP;
class UScriptStruct* FOnlineActivityPlayerLocationBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineActivityPlayerLocationBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineActivityPlayerLocationBP>()
{
	return FOnlineActivityPlayerLocationBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSet_MetaData[];
#endif
		static void NewProp_bSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineActivityPlayerLocationBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_bSet_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "Comment", "/** If the structure values are set */" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
		{ "ToolTip", "If the structure values are set" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((FOnlineActivityPlayerLocationBP*)Obj)->bSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineActivityPlayerLocationBP), &Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_bSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_bSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_ZoneId_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "Comment", "/** Current reported zone*/" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
		{ "ToolTip", "Current reported zone" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_ZoneId = { "ZoneId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineActivityPlayerLocationBP, ZoneId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_ZoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_ZoneId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_Coordinates_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "Comment", "/** Coordinates */" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
		{ "ToolTip", "Coordinates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineActivityPlayerLocationBP, Coordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_Coordinates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_bSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_ZoneId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewProp_Coordinates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineActivityPlayerLocationBP",
		sizeof(FOnlineActivityPlayerLocationBP),
		alignof(FOnlineActivityPlayerLocationBP),
		Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP;
class UScriptStruct* FOptionalOnlineSessionSearchResultBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OptionalOnlineSessionSearchResultBP"));
	}
	return Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOptionalOnlineSessionSearchResultBP>()
{
	return FOptionalOnlineSessionSearchResultBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSet_MetaData[];
#endif
		static void NewProp_bSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionalOnlineSessionSearchResultBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_bSet_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "Comment", "/** If the search result is available */" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
		{ "ToolTip", "If the search result is available" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((FOptionalOnlineSessionSearchResultBP*)Obj)->bSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOptionalOnlineSessionSearchResultBP), &Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_bSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_bSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_SearchResult_MetaData[] = {
		{ "Category", "Online|GameActivity" },
		{ "Comment", "/** The search result data, if available */" },
		{ "ModuleRelativePath", "Public/Types/OSBGameActivityTypes.h" },
		{ "ToolTip", "The search result data, if available" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptionalOnlineSessionSearchResultBP, SearchResult), Z_Construct_UScriptStruct_FOnlineSessionSearchResultBP, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_SearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_SearchResult_MetaData)) }; // 1707739709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_bSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewProp_SearchResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OptionalOnlineSessionSearchResultBP",
		sizeof(FOptionalOnlineSessionSearchResultBP),
		alignof(FOptionalOnlineSessionSearchResultBP),
		Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP.InnerSingleton, Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_Statics::EnumInfo[] = {
		{ EOnlineActivityOutcome__StaticEnum, TEXT("EOnlineActivityOutcome_"), &Z_Registration_Info_UEnum_EOnlineActivityOutcome_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1448097034U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_Statics::ScriptStructInfo[] = {
		{ FOnlineActivityTasksToResetBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineActivityTasksToResetBP_Statics::NewStructOps, TEXT("OnlineActivityTasksToResetBP"), &Z_Registration_Info_UScriptStruct_OnlineActivityTasksToResetBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineActivityTasksToResetBP), 875293676U) },
		{ FOnlineActivityPlayerLocationBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineActivityPlayerLocationBP_Statics::NewStructOps, TEXT("OnlineActivityPlayerLocationBP"), &Z_Registration_Info_UScriptStruct_OnlineActivityPlayerLocationBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineActivityPlayerLocationBP), 3889927454U) },
		{ FOptionalOnlineSessionSearchResultBP::StaticStruct, Z_Construct_UScriptStruct_FOptionalOnlineSessionSearchResultBP_Statics::NewStructOps, TEXT("OptionalOnlineSessionSearchResultBP"), &Z_Registration_Info_UScriptStruct_OptionalOnlineSessionSearchResultBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptionalOnlineSessionSearchResultBP), 2002691867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_2777063115(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBGameActivityTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
