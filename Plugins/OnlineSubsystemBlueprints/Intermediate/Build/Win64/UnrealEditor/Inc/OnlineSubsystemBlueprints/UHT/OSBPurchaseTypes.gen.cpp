// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBPurchaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBPurchaseTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UPurchaseReceipt();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UPurchaseReceipt_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FLineItemInfoBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FReceiptOfferEntryBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FRedeemCodeRequestBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPurchaseTransactionState_;
	static UEnum* EPurchaseTransactionState__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPurchaseTransactionState_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPurchaseTransactionState_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EPurchaseTransactionState_"));
		}
		return Z_Registration_Info_UEnum_EPurchaseTransactionState_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPurchaseTransactionState_>()
	{
		return EPurchaseTransactionState__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::Enumerators[] = {
		{ "EPurchaseTransactionState_::NotStarted", (int64)EPurchaseTransactionState_::NotStarted },
		{ "EPurchaseTransactionState_::Processing", (int64)EPurchaseTransactionState_::Processing },
		{ "EPurchaseTransactionState_::Purchased", (int64)EPurchaseTransactionState_::Purchased },
		{ "EPurchaseTransactionState_::Failed", (int64)EPurchaseTransactionState_::Failed },
		{ "EPurchaseTransactionState_::Deferred", (int64)EPurchaseTransactionState_::Deferred },
		{ "EPurchaseTransactionState_::Canceled", (int64)EPurchaseTransactionState_::Canceled },
		{ "EPurchaseTransactionState_::Restored", (int64)EPurchaseTransactionState_::Restored },
		{ "EPurchaseTransactionState_::NotAllowed", (int64)EPurchaseTransactionState_::NotAllowed },
		{ "EPurchaseTransactionState_::Invalid", (int64)EPurchaseTransactionState_::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Canceled.Comment", "/** purchase canceled by user */" },
		{ "Canceled.Name", "EPurchaseTransactionState_::Canceled" },
		{ "Canceled.ToolTip", "purchase canceled by user" },
		{ "Deferred.Comment", "/** purchase has been deferred (neither failed nor completed) */" },
		{ "Deferred.Name", "EPurchaseTransactionState_::Deferred" },
		{ "Deferred.ToolTip", "purchase has been deferred (neither failed nor completed)" },
		{ "Failed.Comment", "/** purchase completed but failed */" },
		{ "Failed.Name", "EPurchaseTransactionState_::Failed" },
		{ "Failed.ToolTip", "purchase completed but failed" },
		{ "Invalid.Comment", "/** purchase failed as invalid */" },
		{ "Invalid.Name", "EPurchaseTransactionState_::Invalid" },
		{ "Invalid.ToolTip", "purchase failed as invalid" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
		{ "NotAllowed.Comment", "/** purchase failed as not allowed */" },
		{ "NotAllowed.Name", "EPurchaseTransactionState_::NotAllowed" },
		{ "NotAllowed.ToolTip", "purchase failed as not allowed" },
		{ "NotStarted.Comment", "/** processing has not started on the purchase */" },
		{ "NotStarted.Name", "EPurchaseTransactionState_::NotStarted" },
		{ "NotStarted.ToolTip", "processing has not started on the purchase" },
		{ "Processing.Comment", "/** currently processing the purchase */" },
		{ "Processing.Name", "EPurchaseTransactionState_::Processing" },
		{ "Processing.ToolTip", "currently processing the purchase" },
		{ "Purchased.Comment", "/** purchase completed successfully */" },
		{ "Purchased.Name", "EPurchaseTransactionState_::Purchased" },
		{ "Purchased.ToolTip", "purchase completed successfully" },
		{ "Restored.Comment", "/** prior purchase that has been restored */" },
		{ "Restored.Name", "EPurchaseTransactionState_::Restored" },
		{ "Restored.ToolTip", "prior purchase that has been restored" },
		{ "ScriptName", "EPurchaseTransactionState" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EPurchaseTransactionState_",
		"EPurchaseTransactionState_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState_()
	{
		if (!Z_Registration_Info_UEnum_EPurchaseTransactionState_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPurchaseTransactionState_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPurchaseTransactionState_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP;
class UScriptStruct* FRedeemCodeRequestBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRedeemCodeRequestBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("RedeemCodeRequestBP"));
	}
	return Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FRedeemCodeRequestBP>()
{
	return FRedeemCodeRequestBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodeUseId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CodeUseId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FulfillmentSource_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FulfillmentSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRedeemCodeRequestBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRedeemCodeRequestBP, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_CodeUseId_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_CodeUseId = { "CodeUseId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRedeemCodeRequestBP, CodeUseId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_CodeUseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_CodeUseId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_FulfillmentSource_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_FulfillmentSource = { "FulfillmentSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRedeemCodeRequestBP, FulfillmentSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_FulfillmentSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_FulfillmentSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_CodeUseId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewProp_FulfillmentSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"RedeemCodeRequestBP",
		sizeof(FRedeemCodeRequestBP),
		alignof(FRedeemCodeRequestBP),
		Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRedeemCodeRequestBP()
	{
		if (!Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP.InnerSingleton, Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineItemInfoBP;
class UScriptStruct* FLineItemInfoBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineItemInfoBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineItemInfoBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineItemInfoBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("LineItemInfoBP"));
	}
	return Z_Registration_Info_UScriptStruct_LineItemInfoBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FLineItemInfoBP>()
{
	return FLineItemInfoBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLineItemInfoBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValidationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineItemInfoBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineItemInfoBP, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineItemInfoBP, UniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ValidationInfo_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ValidationInfo = { "ValidationInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineItemInfoBP, ValidationInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ValidationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ValidationInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewProp_ValidationInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"LineItemInfoBP",
		sizeof(FLineItemInfoBP),
		alignof(FLineItemInfoBP),
		Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLineItemInfoBP()
	{
		if (!Z_Registration_Info_UScriptStruct_LineItemInfoBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineItemInfoBP.InnerSingleton, Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LineItemInfoBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP;
class UScriptStruct* FReceiptOfferEntryBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReceiptOfferEntryBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ReceiptOfferEntryBP"));
	}
	return Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FReceiptOfferEntryBP>()
{
	return FReceiptOfferEntryBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LineItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReceiptOfferEntryBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Namespace_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReceiptOfferEntryBP, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_OfferId_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReceiptOfferEntryBP, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_OfferId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_OfferId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReceiptOfferEntryBP, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_LineItems_Inner = { "LineItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLineItemInfoBP, METADATA_PARAMS(nullptr, 0) }; // 1190740266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_LineItems_MetaData[] = {
		{ "Category", "Online|Purchase" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_LineItems = { "LineItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReceiptOfferEntryBP, LineItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_LineItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_LineItems_MetaData)) }; // 1190740266
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_OfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_LineItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewProp_LineItems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ReceiptOfferEntryBP",
		sizeof(FReceiptOfferEntryBP),
		alignof(FReceiptOfferEntryBP),
		Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReceiptOfferEntryBP()
	{
		if (!Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP.InnerSingleton, Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP.InnerSingleton;
	}
	DEFINE_FUNCTION(UPurchaseReceipt::execGetReceiptOffers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FReceiptOfferEntryBP>*)Z_Param__Result=P_THIS->GetReceiptOffers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchaseReceipt::execGetPurchaseTransactionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPurchaseTransactionState_*)Z_Param__Result=P_THIS->GetPurchaseTransactionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchaseReceipt::execGetTransactionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTransactionId();
		P_NATIVE_END;
	}
	void UPurchaseReceipt::StaticRegisterNativesUPurchaseReceipt()
	{
		UClass* Class = UPurchaseReceipt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPurchaseTransactionState", &UPurchaseReceipt::execGetPurchaseTransactionState },
			{ "GetReceiptOffers", &UPurchaseReceipt::execGetReceiptOffers },
			{ "GetTransactionId", &UPurchaseReceipt::execGetTransactionId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics
	{
		struct PurchaseReceipt_eventGetPurchaseTransactionState_Parms
		{
			EPurchaseTransactionState_ ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PurchaseReceipt_eventGetPurchaseTransactionState_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemBlueprints_EPurchaseTransactionState_, METADATA_PARAMS(nullptr, 0) }; // 3470840077
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseReceipt, nullptr, "GetPurchaseTransactionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::PurchaseReceipt_eventGetPurchaseTransactionState_Parms), Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics
	{
		struct PurchaseReceipt_eventGetReceiptOffers_Parms
		{
			TArray<FReceiptOfferEntryBP> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FReceiptOfferEntryBP, METADATA_PARAMS(nullptr, 0) }; // 2731044848
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PurchaseReceipt_eventGetReceiptOffers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2731044848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseReceipt, nullptr, "GetReceiptOffers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::PurchaseReceipt_eventGetReceiptOffers_Parms), Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics
	{
		struct PurchaseReceipt_eventGetTransactionId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PurchaseReceipt_eventGetTransactionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseReceipt, nullptr, "GetTransactionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::PurchaseReceipt_eventGetTransactionId_Parms), Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPurchaseReceipt);
	UClass* Z_Construct_UClass_UPurchaseReceipt_NoRegister()
	{
		return UPurchaseReceipt::StaticClass();
	}
	struct Z_Construct_UClass_UPurchaseReceipt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPurchaseReceipt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPurchaseReceipt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPurchaseReceipt_GetPurchaseTransactionState, "GetPurchaseTransactionState" }, // 2617535907
		{ &Z_Construct_UFunction_UPurchaseReceipt_GetReceiptOffers, "GetReceiptOffers" }, // 2562530421
		{ &Z_Construct_UFunction_UPurchaseReceipt_GetTransactionId, "GetTransactionId" }, // 3399110641
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchaseReceipt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBPurchaseTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBPurchaseTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPurchaseReceipt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPurchaseReceipt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPurchaseReceipt_Statics::ClassParams = {
		&UPurchaseReceipt::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPurchaseReceipt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchaseReceipt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPurchaseReceipt()
	{
		if (!Z_Registration_Info_UClass_UPurchaseReceipt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPurchaseReceipt.OuterSingleton, Z_Construct_UClass_UPurchaseReceipt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPurchaseReceipt.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UPurchaseReceipt>()
	{
		return UPurchaseReceipt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPurchaseReceipt);
	UPurchaseReceipt::~UPurchaseReceipt() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::EnumInfo[] = {
		{ EPurchaseTransactionState__StaticEnum, TEXT("EPurchaseTransactionState_"), &Z_Registration_Info_UEnum_EPurchaseTransactionState_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3470840077U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::ScriptStructInfo[] = {
		{ FRedeemCodeRequestBP::StaticStruct, Z_Construct_UScriptStruct_FRedeemCodeRequestBP_Statics::NewStructOps, TEXT("RedeemCodeRequestBP"), &Z_Registration_Info_UScriptStruct_RedeemCodeRequestBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRedeemCodeRequestBP), 1921124768U) },
		{ FLineItemInfoBP::StaticStruct, Z_Construct_UScriptStruct_FLineItemInfoBP_Statics::NewStructOps, TEXT("LineItemInfoBP"), &Z_Registration_Info_UScriptStruct_LineItemInfoBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineItemInfoBP), 1190740266U) },
		{ FReceiptOfferEntryBP::StaticStruct, Z_Construct_UScriptStruct_FReceiptOfferEntryBP_Statics::NewStructOps, TEXT("ReceiptOfferEntryBP"), &Z_Registration_Info_UScriptStruct_ReceiptOfferEntryBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReceiptOfferEntryBP), 2731044848U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPurchaseReceipt, UPurchaseReceipt::StaticClass, TEXT("UPurchaseReceipt"), &Z_Registration_Info_UClass_UPurchaseReceipt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPurchaseReceipt), 4100390969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_535618963(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPurchaseTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
