// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBEntitlementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBEntitlementTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlement();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineEntitlement_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseOfferEntryBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP;
class UScriptStruct* FPurchaseOfferEntryBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("PurchaseOfferEntryBP"));
	}
	return Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FPurchaseOfferEntryBP>()
{
	return FPurchaseOfferEntryBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfferNamespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferNamespace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseOfferEntryBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferNamespace_MetaData[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferNamespace = { "OfferNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseOfferEntryBP, OfferNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferNamespace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferId_MetaData[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseOfferEntryBP, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseOfferEntryBP, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferNamespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_OfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"PurchaseOfferEntryBP",
		sizeof(FPurchaseOfferEntryBP),
		alignof(FPurchaseOfferEntryBP),
		Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseOfferEntryBP()
	{
		if (!Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP.InnerSingleton, Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP;
class UScriptStruct* FPurchaseCheckoutRequestBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("PurchaseCheckoutRequestBP"));
	}
	return Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FPurchaseCheckoutRequestBP>()
{
	return FPurchaseCheckoutRequestBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PurchaseOffers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PurchaseOffers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PurchaseOffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseCheckoutRequestBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_AccountId_MetaData[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseCheckoutRequestBP, AccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_AccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_AccountId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_PurchaseOffers_Inner = { "PurchaseOffers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPurchaseOfferEntryBP, METADATA_PARAMS(nullptr, 0) }; // 650961923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_PurchaseOffers_MetaData[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_PurchaseOffers = { "PurchaseOffers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseCheckoutRequestBP, PurchaseOffers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_PurchaseOffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_PurchaseOffers_MetaData)) }; // 650961923
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_AccountId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_PurchaseOffers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewProp_PurchaseOffers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"PurchaseCheckoutRequestBP",
		sizeof(FPurchaseCheckoutRequestBP),
		alignof(FPurchaseCheckoutRequestBP),
		Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP()
	{
		if (!Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP.InnerSingleton, Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetEndDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEndDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetStartDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStartDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetConsumedCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConsumedCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetRemainingCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainingCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execIsConsumable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConsumable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetNamespace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNamespace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetItemId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetItemId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineEntitlement::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void UOnlineEntitlement::StaticRegisterNativesUOnlineEntitlement()
	{
		UClass* Class = UOnlineEntitlement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConsumedCount", &UOnlineEntitlement::execGetConsumedCount },
			{ "GetEndDate", &UOnlineEntitlement::execGetEndDate },
			{ "GetId", &UOnlineEntitlement::execGetId },
			{ "GetItemId", &UOnlineEntitlement::execGetItemId },
			{ "GetName", &UOnlineEntitlement::execGetName },
			{ "GetNamespace", &UOnlineEntitlement::execGetNamespace },
			{ "GetRemainingCount", &UOnlineEntitlement::execGetRemainingCount },
			{ "GetStartDate", &UOnlineEntitlement::execGetStartDate },
			{ "GetStatus", &UOnlineEntitlement::execGetStatus },
			{ "IsConsumable", &UOnlineEntitlement::execIsConsumable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics
	{
		struct OnlineEntitlement_eventGetConsumedCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetConsumedCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetConsumedCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::OnlineEntitlement_eventGetConsumedCount_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics
	{
		struct OnlineEntitlement_eventGetEndDate_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetEndDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetEndDate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::OnlineEntitlement_eventGetEndDate_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetEndDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetEndDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics
	{
		struct OnlineEntitlement_eventGetId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::OnlineEntitlement_eventGetId_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics
	{
		struct OnlineEntitlement_eventGetItemId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetItemId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetItemId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::OnlineEntitlement_eventGetItemId_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics
	{
		struct OnlineEntitlement_eventGetName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::OnlineEntitlement_eventGetName_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics
	{
		struct OnlineEntitlement_eventGetNamespace_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetNamespace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::OnlineEntitlement_eventGetNamespace_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics
	{
		struct OnlineEntitlement_eventGetRemainingCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetRemainingCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetRemainingCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::OnlineEntitlement_eventGetRemainingCount_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics
	{
		struct OnlineEntitlement_eventGetStartDate_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetStartDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetStartDate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::OnlineEntitlement_eventGetStartDate_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetStartDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetStartDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics
	{
		struct OnlineEntitlement_eventGetStatus_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineEntitlement_eventGetStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::OnlineEntitlement_eventGetStatus_Parms), Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics
	{
		struct OnlineEntitlement_eventIsConsumable_Parms
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
	void Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineEntitlement_eventIsConsumable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineEntitlement_eventIsConsumable_Parms), &Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Entitlement" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineEntitlement, nullptr, "IsConsumable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::OnlineEntitlement_eventIsConsumable_Parms), Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineEntitlement_IsConsumable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineEntitlement_IsConsumable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineEntitlement);
	UClass* Z_Construct_UClass_UOnlineEntitlement_NoRegister()
	{
		return UOnlineEntitlement::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineEntitlement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineEntitlement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineEntitlement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetConsumedCount, "GetConsumedCount" }, // 4275219182
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetEndDate, "GetEndDate" }, // 325973070
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetId, "GetId" }, // 2730389020
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetItemId, "GetItemId" }, // 2870925546
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetName, "GetName" }, // 3213194033
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetNamespace, "GetNamespace" }, // 273146862
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetRemainingCount, "GetRemainingCount" }, // 1667050774
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetStartDate, "GetStartDate" }, // 803529327
		{ &Z_Construct_UFunction_UOnlineEntitlement_GetStatus, "GetStatus" }, // 3081580379
		{ &Z_Construct_UFunction_UOnlineEntitlement_IsConsumable, "IsConsumable" }, // 1164884236
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEntitlement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBEntitlementTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBEntitlementTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineEntitlement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEntitlement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEntitlement_Statics::ClassParams = {
		&UOnlineEntitlement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineEntitlement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEntitlement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineEntitlement()
	{
		if (!Z_Registration_Info_UClass_UOnlineEntitlement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineEntitlement.OuterSingleton, Z_Construct_UClass_UOnlineEntitlement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineEntitlement.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineEntitlement>()
	{
		return UOnlineEntitlement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEntitlement);
	UOnlineEntitlement::~UOnlineEntitlement() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_Statics::ScriptStructInfo[] = {
		{ FPurchaseOfferEntryBP::StaticStruct, Z_Construct_UScriptStruct_FPurchaseOfferEntryBP_Statics::NewStructOps, TEXT("PurchaseOfferEntryBP"), &Z_Registration_Info_UScriptStruct_PurchaseOfferEntryBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPurchaseOfferEntryBP), 650961923U) },
		{ FPurchaseCheckoutRequestBP::StaticStruct, Z_Construct_UScriptStruct_FPurchaseCheckoutRequestBP_Statics::NewStructOps, TEXT("PurchaseCheckoutRequestBP"), &Z_Registration_Info_UScriptStruct_PurchaseCheckoutRequestBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPurchaseCheckoutRequestBP), 2762426904U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineEntitlement, UOnlineEntitlement::StaticClass, TEXT("UOnlineEntitlement"), &Z_Registration_Info_UClass_UOnlineEntitlement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineEntitlement), 2412216586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_4077510036(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBEntitlementTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
