// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBStatsTypes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBStatsTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatUpdateBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineStatModificationType_;
	static UEnum* EOnlineStatModificationType__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineStatModificationType_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineStatModificationType_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineStatModificationType_"));
		}
		return Z_Registration_Info_UEnum_EOnlineStatModificationType_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineStatModificationType_>()
	{
		return EOnlineStatModificationType__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::Enumerators[] = {
		{ "EOnlineStatModificationType_::Unknown", (int64)EOnlineStatModificationType_::Unknown },
		{ "EOnlineStatModificationType_::Sum", (int64)EOnlineStatModificationType_::Sum },
		{ "EOnlineStatModificationType_::Set", (int64)EOnlineStatModificationType_::Set },
		{ "EOnlineStatModificationType_::Largest", (int64)EOnlineStatModificationType_::Largest },
		{ "EOnlineStatModificationType_::Smallest", (int64)EOnlineStatModificationType_::Smallest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Largest.Comment", "/** Only replace previous value if new value is larger */" },
		{ "Largest.Name", "EOnlineStatModificationType_::Largest" },
		{ "Largest.ToolTip", "Only replace previous value if new value is larger" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
		{ "ScriptName", "EOnlineStatModificationType" },
		{ "Set.Comment", "/** Overwrite previous value with the new value */" },
		{ "Set.Name", "EOnlineStatModificationType_::Set" },
		{ "Set.ToolTip", "Overwrite previous value with the new value" },
		{ "Smallest.Comment", "/** Only replace previous value if new value is smaller */" },
		{ "Smallest.Name", "EOnlineStatModificationType_::Smallest" },
		{ "Smallest.ToolTip", "Only replace previous value if new value is smaller" },
		{ "Sum.Comment", "/** Add the new value to the previous value */" },
		{ "Sum.Name", "EOnlineStatModificationType_::Sum" },
		{ "Sum.ToolTip", "Add the new value to the previous value" },
		{ "Unknown.Comment", "/** Let the backend decide how to update this value (or set to new value if backend does not decide) */" },
		{ "Unknown.Name", "EOnlineStatModificationType_::Unknown" },
		{ "Unknown.ToolTip", "Let the backend decide how to update this value (or set to new value if backend does not decide)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineStatModificationType_",
		"EOnlineStatModificationType_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineStatModificationType_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineStatModificationType_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineStatModificationType_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP;
class UScriptStruct* FOnlineStatsUserStatsBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineStatsUserStatsBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineStatsUserStatsBP>()
{
	return FOnlineStatsUserStatsBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Stats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineStatsUserStatsBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsUserStatsBP, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_PlayerId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsUserStatsBP, Stats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewProp_Stats,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineStatsUserStatsBP",
		sizeof(FOnlineStatsUserStatsBP),
		alignof(FOnlineStatsUserStatsBP),
		Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP;
class UScriptStruct* FOnlineStatUpdateBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineStatUpdateBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineStatUpdateBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineStatUpdateBP>()
{
	return FOnlineStatUpdateBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineStatUpdateBP>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatUpdateBP, Type), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineStatModificationType_, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Type_MetaData)) }; // 318381196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatUpdateBP, Value), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Value_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineStatUpdateBP",
		sizeof(FOnlineStatUpdateBP),
		alignof(FOnlineStatUpdateBP),
		Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatUpdateBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP;
class UScriptStruct* FOnlineStatsUserUpdatedStatsBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineStatsUserUpdatedStatsBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineStatsUserUpdatedStatsBP>()
{
	return FOnlineStatsUserUpdatedStatsBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Stats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineStatsUserUpdatedStatsBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsUserUpdatedStatsBP, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_PlayerId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FOnlineStatUpdateBP, METADATA_PARAMS(nullptr, 0) }; // 1225162306
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "Online|Stats" },
		{ "ModuleRelativePath", "Public/Types/OSBStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStatsUserUpdatedStatsBP, Stats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats_MetaData)) }; // 1225162306
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewProp_Stats,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineStatsUserUpdatedStatsBP",
		sizeof(FOnlineStatsUserUpdatedStatsBP),
		alignof(FOnlineStatsUserUpdatedStatsBP),
		Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_Statics::EnumInfo[] = {
		{ EOnlineStatModificationType__StaticEnum, TEXT("EOnlineStatModificationType_"), &Z_Registration_Info_UEnum_EOnlineStatModificationType_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 318381196U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_Statics::ScriptStructInfo[] = {
		{ FOnlineStatsUserStatsBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineStatsUserStatsBP_Statics::NewStructOps, TEXT("OnlineStatsUserStatsBP"), &Z_Registration_Info_UScriptStruct_OnlineStatsUserStatsBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineStatsUserStatsBP), 1151985947U) },
		{ FOnlineStatUpdateBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineStatUpdateBP_Statics::NewStructOps, TEXT("OnlineStatUpdateBP"), &Z_Registration_Info_UScriptStruct_OnlineStatUpdateBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineStatUpdateBP), 1225162306U) },
		{ FOnlineStatsUserUpdatedStatsBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineStatsUserUpdatedStatsBP_Statics::NewStructOps, TEXT("OnlineStatsUserUpdatedStatsBP"), &Z_Registration_Info_UScriptStruct_OnlineStatsUserUpdatedStatsBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineStatsUserUpdatedStatsBP), 3742940526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_2541424999(TEXT("/Script/OnlineSubsystemBlueprints"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStatsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
