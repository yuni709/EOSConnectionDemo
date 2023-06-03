// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBStoreV2Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBStoreV2Types() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreOffer();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreOffer_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStoreCategoryBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStoreFilterBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP;
class UScriptStruct* FOnlineStoreCategoryBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineStoreCategoryBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineStoreCategoryBP>()
{
	return FOnlineStoreCategoryBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineStoreCategoryBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Online|Store V2" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStoreCategoryBP, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Online|Store V2" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStoreCategoryBP, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineStoreCategoryBP",
		sizeof(FOnlineStoreCategoryBP),
		alignof(FOnlineStoreCategoryBP),
		Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineStoreCategoryBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP;
class UScriptStruct* FOnlineStoreFilterBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineStoreFilterBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineStoreFilterBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineStoreFilterBP>()
{
	return FOnlineStoreFilterBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keywords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeCategories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeCategories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineStoreFilterBP>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "Online|Store V2" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStoreFilterBP, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_Keywords_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_IncludeCategories_Inner = { "IncludeCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineStoreCategoryBP, METADATA_PARAMS(nullptr, 0) }; // 4269626221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_IncludeCategories_MetaData[] = {
		{ "Category", "Online|Store V2" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_IncludeCategories = { "IncludeCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStoreFilterBP, IncludeCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_IncludeCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_IncludeCategories_MetaData)) }; // 4269626221
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_ExcludeCategories_Inner = { "ExcludeCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineStoreCategoryBP, METADATA_PARAMS(nullptr, 0) }; // 4269626221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_ExcludeCategories_MetaData[] = {
		{ "Category", "Online|Store V2" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_ExcludeCategories = { "ExcludeCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineStoreFilterBP, ExcludeCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_ExcludeCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_ExcludeCategories_MetaData)) }; // 4269626221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_Keywords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_IncludeCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_IncludeCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_ExcludeCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewProp_ExcludeCategories,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineStoreFilterBP",
		sizeof(FOnlineStoreFilterBP),
		alignof(FOnlineStoreFilterBP),
		Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineStoreFilterBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execIsPurchasable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPurchasable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetDynamicFields)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetDynamicFields();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetExpirationDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetExpirationDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetReleaseDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetReleaseDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetCurrencyCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrencyCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetNumericPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetNumericPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetRegularPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetRegularPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetDisplayPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetDisplayRegularPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayRegularPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetLongDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetLongDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreOffer::execGetOfferId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOfferId();
		P_NATIVE_END;
	}
	void UOnlineStoreOffer::StaticRegisterNativesUOnlineStoreOffer()
	{
		UClass* Class = UOnlineStoreOffer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrencyCode", &UOnlineStoreOffer::execGetCurrencyCode },
			{ "GetDescription", &UOnlineStoreOffer::execGetDescription },
			{ "GetDisplayPrice", &UOnlineStoreOffer::execGetDisplayPrice },
			{ "GetDisplayRegularPrice", &UOnlineStoreOffer::execGetDisplayRegularPrice },
			{ "GetDynamicFields", &UOnlineStoreOffer::execGetDynamicFields },
			{ "GetExpirationDate", &UOnlineStoreOffer::execGetExpirationDate },
			{ "GetLongDescription", &UOnlineStoreOffer::execGetLongDescription },
			{ "GetNumericPrice", &UOnlineStoreOffer::execGetNumericPrice },
			{ "GetOfferId", &UOnlineStoreOffer::execGetOfferId },
			{ "GetRegularPrice", &UOnlineStoreOffer::execGetRegularPrice },
			{ "GetReleaseDate", &UOnlineStoreOffer::execGetReleaseDate },
			{ "GetTitle", &UOnlineStoreOffer::execGetTitle },
			{ "IsPurchasable", &UOnlineStoreOffer::execIsPurchasable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics
	{
		struct OnlineStoreOffer_eventGetCurrencyCode_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetCurrencyCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetCurrencyCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::OnlineStoreOffer_eventGetCurrencyCode_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics
	{
		struct OnlineStoreOffer_eventGetDescription_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::OnlineStoreOffer_eventGetDescription_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics
	{
		struct OnlineStoreOffer_eventGetDisplayPrice_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetDisplayPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetDisplayPrice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::OnlineStoreOffer_eventGetDisplayPrice_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics
	{
		struct OnlineStoreOffer_eventGetDisplayRegularPrice_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetDisplayRegularPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetDisplayRegularPrice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::OnlineStoreOffer_eventGetDisplayRegularPrice_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics
	{
		struct OnlineStoreOffer_eventGetDynamicFields_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetDynamicFields_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetDynamicFields", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::OnlineStoreOffer_eventGetDynamicFields_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics
	{
		struct OnlineStoreOffer_eventGetExpirationDate_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetExpirationDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetExpirationDate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::OnlineStoreOffer_eventGetExpirationDate_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics
	{
		struct OnlineStoreOffer_eventGetLongDescription_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetLongDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetLongDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::OnlineStoreOffer_eventGetLongDescription_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics
	{
		struct OnlineStoreOffer_eventGetNumericPrice_Parms
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
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetNumericPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetNumericPrice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::OnlineStoreOffer_eventGetNumericPrice_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics
	{
		struct OnlineStoreOffer_eventGetOfferId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetOfferId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetOfferId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::OnlineStoreOffer_eventGetOfferId_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics
	{
		struct OnlineStoreOffer_eventGetRegularPrice_Parms
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
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetRegularPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetRegularPrice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::OnlineStoreOffer_eventGetRegularPrice_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics
	{
		struct OnlineStoreOffer_eventGetReleaseDate_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetReleaseDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetReleaseDate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::OnlineStoreOffer_eventGetReleaseDate_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics
	{
		struct OnlineStoreOffer_eventGetTitle_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreOffer_eventGetTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "GetTitle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::OnlineStoreOffer_eventGetTitle_Parms), Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_GetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_GetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics
	{
		struct OnlineStoreOffer_eventIsPurchasable_Parms
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
	void Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineStoreOffer_eventIsPurchasable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineStoreOffer_eventIsPurchasable_Parms), &Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreOffer, nullptr, "IsPurchasable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::OnlineStoreOffer_eventIsPurchasable_Parms), Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStoreOffer);
	UClass* Z_Construct_UClass_UOnlineStoreOffer_NoRegister()
	{
		return UOnlineStoreOffer::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStoreOffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStoreOffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStoreOffer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetCurrencyCode, "GetCurrencyCode" }, // 1604796636
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetDescription, "GetDescription" }, // 1919308925
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayPrice, "GetDisplayPrice" }, // 1595079592
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetDisplayRegularPrice, "GetDisplayRegularPrice" }, // 446472456
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetDynamicFields, "GetDynamicFields" }, // 1205669472
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetExpirationDate, "GetExpirationDate" }, // 2048995140
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetLongDescription, "GetLongDescription" }, // 1159910063
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetNumericPrice, "GetNumericPrice" }, // 1960968214
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetOfferId, "GetOfferId" }, // 9776597
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetRegularPrice, "GetRegularPrice" }, // 3059629410
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetReleaseDate, "GetReleaseDate" }, // 2789443626
		{ &Z_Construct_UFunction_UOnlineStoreOffer_GetTitle, "GetTitle" }, // 953246074
		{ &Z_Construct_UFunction_UOnlineStoreOffer_IsPurchasable, "IsPurchasable" }, // 1825065224
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreOffer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBStoreV2Types.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBStoreV2Types.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStoreOffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStoreOffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStoreOffer_Statics::ClassParams = {
		&UOnlineStoreOffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreOffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreOffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStoreOffer()
	{
		if (!Z_Registration_Info_UClass_UOnlineStoreOffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStoreOffer.OuterSingleton, Z_Construct_UClass_UOnlineStoreOffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStoreOffer.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStoreOffer>()
	{
		return UOnlineStoreOffer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStoreOffer);
	UOnlineStoreOffer::~UOnlineStoreOffer() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_Statics::ScriptStructInfo[] = {
		{ FOnlineStoreCategoryBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineStoreCategoryBP_Statics::NewStructOps, TEXT("OnlineStoreCategoryBP"), &Z_Registration_Info_UScriptStruct_OnlineStoreCategoryBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineStoreCategoryBP), 4269626221U) },
		{ FOnlineStoreFilterBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineStoreFilterBP_Statics::NewStructOps, TEXT("OnlineStoreFilterBP"), &Z_Registration_Info_UScriptStruct_OnlineStoreFilterBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineStoreFilterBP), 3788779215U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineStoreOffer, UOnlineStoreOffer::StaticClass, TEXT("UOnlineStoreOffer"), &Z_Registration_Info_UClass_UOnlineStoreOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStoreOffer), 3117565692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_3390976227(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBStoreV2Types_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
