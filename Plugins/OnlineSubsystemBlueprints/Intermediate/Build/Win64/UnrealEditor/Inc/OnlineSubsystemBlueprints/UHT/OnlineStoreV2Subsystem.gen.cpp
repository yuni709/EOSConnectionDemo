// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBStoreV2Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineStoreV2Subsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreOffer_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2Subsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStoreCategoryBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineStoreFilterBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventStoreV2_QueryForAvailablePurchasesComplete_BP_Parms
		{
			bool Param1;
		};
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventStoreV2_QueryForAvailablePurchasesComplete_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventStoreV2_QueryForAvailablePurchasesComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::NewProp_Param1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventStoreV2_QueryForAvailablePurchasesComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineStoreV2Subsystem::execGetOffer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OfferId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStoreOffer**)Z_Param__Result=P_THIS->GetOffer(Z_Param_OfferId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreV2Subsystem::execGetOffers)
	{
		P_GET_TARRAY_REF(UOnlineStoreOffer*,Z_Param_Out_OutOffers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOffers(Z_Param_Out_OutOffers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreV2Subsystem::execGetCategories)
	{
		P_GET_TARRAY_REF(FOnlineStoreCategoryBP,Z_Param_Out_OutCategories);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCategories(Z_Param_Out_OutCategories);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineStoreV2Subsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineStoreV2Subsystem::StaticRegisterNativesUOnlineStoreV2Subsystem()
	{
		UClass* Class = UOnlineStoreV2Subsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategories", &UOnlineStoreV2Subsystem::execGetCategories },
			{ "GetOffer", &UOnlineStoreV2Subsystem::execGetOffer },
			{ "GetOffers", &UOnlineStoreV2Subsystem::execGetOffers },
			{ "IsSubsystemAvailable", &UOnlineStoreV2Subsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics
	{
		struct OnlineStoreV2Subsystem_eventGetCategories_Parms
		{
			TArray<FOnlineStoreCategoryBP> OutCategories;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCategories_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCategories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::NewProp_OutCategories_Inner = { "OutCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineStoreCategoryBP, METADATA_PARAMS(nullptr, 0) }; // 4269626221
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::NewProp_OutCategories = { "OutCategories", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2Subsystem_eventGetCategories_Parms, OutCategories), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4269626221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::NewProp_OutCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::NewProp_OutCategories,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreV2Subsystem, nullptr, "GetCategories", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::OnlineStoreV2Subsystem_eventGetCategories_Parms), Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics
	{
		struct OnlineStoreV2Subsystem_eventGetOffer_Parms
		{
			FString OfferId;
			UOnlineStoreOffer* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2Subsystem_eventGetOffer_Parms, OfferId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2Subsystem_eventGetOffer_Parms, ReturnValue), Z_Construct_UClass_UOnlineStoreOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::NewProp_OfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreV2Subsystem, nullptr, "GetOffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::OnlineStoreV2Subsystem_eventGetOffer_Parms), Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics
	{
		struct OnlineStoreV2Subsystem_eventGetOffers_Parms
		{
			TArray<UOnlineStoreOffer*> OutOffers;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutOffers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::NewProp_OutOffers_Inner = { "OutOffers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOnlineStoreOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::NewProp_OutOffers = { "OutOffers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2Subsystem_eventGetOffers_Parms, OutOffers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::NewProp_OutOffers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::NewProp_OutOffers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreV2Subsystem, nullptr, "GetOffers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::OnlineStoreV2Subsystem_eventGetOffers_Parms), Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineStoreV2Subsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineStoreV2Subsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineStoreV2Subsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreV2Subsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::OnlineStoreV2Subsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStoreV2Subsystem);
	UClass* Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister()
	{
		return UOnlineStoreV2Subsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryForAvailablePurchasesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryForAvailablePurchasesComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetCategories, "GetCategories" }, // 4224019097
		{ &Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffer, "GetOffer" }, // 1535433222
		{ &Z_Construct_UFunction_UOnlineStoreV2Subsystem_GetOffers, "GetOffers" }, // 6553827
		{ &Z_Construct_UFunction_UOnlineStoreV2Subsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 2675415598
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::NewProp_OnQueryForAvailablePurchasesComplete_MetaData[] = {
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::NewProp_OnQueryForAvailablePurchasesComplete = { "OnQueryForAvailablePurchasesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2Subsystem, OnQueryForAvailablePurchasesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_StoreV2_QueryForAvailablePurchasesComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::NewProp_OnQueryForAvailablePurchasesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::NewProp_OnQueryForAvailablePurchasesComplete_MetaData)) }; // 2970949241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::NewProp_OnQueryForAvailablePurchasesComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStoreV2Subsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::ClassParams = {
		&UOnlineStoreV2Subsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStoreV2Subsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineStoreV2Subsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStoreV2Subsystem.OuterSingleton, Z_Construct_UClass_UOnlineStoreV2Subsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStoreV2Subsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStoreV2Subsystem>()
	{
		return UOnlineStoreV2Subsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStoreV2Subsystem);
	UOnlineStoreV2Subsystem::~UOnlineStoreV2Subsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryCategoriesCallbackPin_Parms
		{
			bool bWasSuccessful;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryCategoriesCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryCategoriesCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryCategoriesCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryCategoriesCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineStoreV2SubsystemQueryCategories::execQueryCategories)
	{
		P_GET_OBJECT(UOnlineStoreV2Subsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStoreV2SubsystemQueryCategories**)Z_Param__Result=UOnlineStoreV2SubsystemQueryCategories::QueryCategories(Z_Param_Subsystem,Z_Param_UserId);
		P_NATIVE_END;
	}
	void UOnlineStoreV2SubsystemQueryCategories::StaticRegisterNativesUOnlineStoreV2SubsystemQueryCategories()
	{
		UClass* Class = UOnlineStoreV2SubsystemQueryCategories::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryCategories", &UOnlineStoreV2SubsystemQueryCategories::execQueryCategories },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics
	{
		struct OnlineStoreV2SubsystemQueryCategories_eventQueryCategories_Parms
		{
			UOnlineStoreV2Subsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			UOnlineStoreV2SubsystemQueryCategories* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryCategories_eventQueryCategories_Parms, Subsystem), Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryCategories_eventQueryCategories_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryCategories_eventQueryCategories_Parms, ReturnValue), Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories, nullptr, "QueryCategories", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::OnlineStoreV2SubsystemQueryCategories_eventQueryCategories_Parms), Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStoreV2SubsystemQueryCategories);
	UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_NoRegister()
	{
		return UOnlineStoreV2SubsystemQueryCategories::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryOnlineStoreCategoriesComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryOnlineStoreCategoriesComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryCategories_QueryCategories, "QueryCategories" }, // 3648068839
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryCategories, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnCallFailed_MetaData)) }; // 1027765728
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnQueryOnlineStoreCategoriesComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnQueryOnlineStoreCategoriesComplete = { "OnQueryOnlineStoreCategoriesComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryCategories, OnQueryOnlineStoreCategoriesComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryCategoriesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnQueryOnlineStoreCategoriesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnQueryOnlineStoreCategoriesComplete_MetaData)) }; // 1027765728
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryCategories, __Store__Subsystem), Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryCategories, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryCategories, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp_OnQueryOnlineStoreCategoriesComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::NewProp___Store__UserId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStoreV2SubsystemQueryCategories>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::ClassParams = {
		&UOnlineStoreV2SubsystemQueryCategories::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories()
	{
		if (!Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryCategories.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryCategories.OuterSingleton, Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryCategories.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStoreV2SubsystemQueryCategories>()
	{
		return UOnlineStoreV2SubsystemQueryCategories::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStoreV2SubsystemQueryCategories);
	UOnlineStoreV2SubsystemQueryCategories::~UOnlineStoreV2SubsystemQueryCategories() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByFilterCallbackPin_Parms
		{
			bool bWasSuccessful;
			TArray<FString> OfferIds;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfferIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OfferIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByFilterCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByFilterCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_Inner = { "OfferIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_OfferIds = { "OfferIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByFilterCallbackPin_Parms, OfferIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByFilterCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_OfferIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByFilterCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineStoreV2SubsystemQueryOffersByFilter::execQueryOffersByFilter)
	{
		P_GET_OBJECT(UOnlineStoreV2Subsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FOnlineStoreFilterBP,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStoreV2SubsystemQueryOffersByFilter**)Z_Param__Result=UOnlineStoreV2SubsystemQueryOffersByFilter::QueryOffersByFilter(Z_Param_Subsystem,Z_Param_UserId,Z_Param_Filter);
		P_NATIVE_END;
	}
	void UOnlineStoreV2SubsystemQueryOffersByFilter::StaticRegisterNativesUOnlineStoreV2SubsystemQueryOffersByFilter()
	{
		UClass* Class = UOnlineStoreV2SubsystemQueryOffersByFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryOffersByFilter", &UOnlineStoreV2SubsystemQueryOffersByFilter::execQueryOffersByFilter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics
	{
		struct OnlineStoreV2SubsystemQueryOffersByFilter_eventQueryOffersByFilter_Parms
		{
			UOnlineStoreV2Subsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			FOnlineStoreFilterBP Filter;
			UOnlineStoreV2SubsystemQueryOffersByFilter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersByFilter_eventQueryOffersByFilter_Parms, Subsystem), Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersByFilter_eventQueryOffersByFilter_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersByFilter_eventQueryOffersByFilter_Parms, Filter), Z_Construct_UScriptStruct_FOnlineStoreFilterBP, METADATA_PARAMS(nullptr, 0) }; // 3788779215
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersByFilter_eventQueryOffersByFilter_Parms, ReturnValue), Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter, nullptr, "QueryOffersByFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::OnlineStoreV2SubsystemQueryOffersByFilter_eventQueryOffersByFilter_Parms), Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStoreV2SubsystemQueryOffersByFilter);
	UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_NoRegister()
	{
		return UOnlineStoreV2SubsystemQueryOffersByFilter::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryOnlineStoreOffersComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryOnlineStoreOffersComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter, "QueryOffersByFilter" }, // 2054765714
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersByFilter, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnCallFailed_MetaData)) }; // 3292401697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnQueryOnlineStoreOffersComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnQueryOnlineStoreOffersComplete = { "OnQueryOnlineStoreOffersComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersByFilter, OnQueryOnlineStoreOffersComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnQueryOnlineStoreOffersComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnQueryOnlineStoreOffersComplete_MetaData)) }; // 3292401697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__Subsystem), Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Filter_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Filter = { "__Store__Filter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__Filter), Z_Construct_UScriptStruct_FOnlineStoreFilterBP, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Filter_MetaData)) }; // 3788779215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp_OnQueryOnlineStoreOffersComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::NewProp___Store__Filter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStoreV2SubsystemQueryOffersByFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::ClassParams = {
		&UOnlineStoreV2SubsystemQueryOffersByFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter()
	{
		if (!Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter.OuterSingleton, Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStoreV2SubsystemQueryOffersByFilter>()
	{
		return UOnlineStoreV2SubsystemQueryOffersByFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStoreV2SubsystemQueryOffersByFilter);
	UOnlineStoreV2SubsystemQueryOffersByFilter::~UOnlineStoreV2SubsystemQueryOffersByFilter() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByIdCallbackPin_Parms
		{
			bool bWasSuccessful;
			TArray<FString> OfferIds;
			FString Error;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfferIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OfferIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByIdCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByIdCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_Inner = { "OfferIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_OfferIds = { "OfferIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByIdCallbackPin_Parms, OfferIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByIdCallbackPin_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_OfferIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_OfferIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineStoreV2SubsystemQueryOffersByIdCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineStoreV2SubsystemQueryOffersById::execQueryOffersById)
	{
		P_GET_OBJECT(UOnlineStoreV2Subsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_TARRAY(FString,Z_Param_OfferIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineStoreV2SubsystemQueryOffersById**)Z_Param__Result=UOnlineStoreV2SubsystemQueryOffersById::QueryOffersById(Z_Param_Subsystem,Z_Param_UserId,Z_Param_OfferIds);
		P_NATIVE_END;
	}
	void UOnlineStoreV2SubsystemQueryOffersById::StaticRegisterNativesUOnlineStoreV2SubsystemQueryOffersById()
	{
		UClass* Class = UOnlineStoreV2SubsystemQueryOffersById::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryOffersById", &UOnlineStoreV2SubsystemQueryOffersById::execQueryOffersById },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics
	{
		struct OnlineStoreV2SubsystemQueryOffersById_eventQueryOffersById_Parms
		{
			UOnlineStoreV2Subsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			TArray<FString> OfferIds;
			UOnlineStoreV2SubsystemQueryOffersById* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OfferIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersById_eventQueryOffersById_Parms, Subsystem), Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersById_eventQueryOffersById_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_OfferIds_Inner = { "OfferIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_OfferIds = { "OfferIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersById_eventQueryOffersById_Parms, OfferIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineStoreV2SubsystemQueryOffersById_eventQueryOffersById_Parms, ReturnValue), Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_OfferIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_OfferIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|StoreV2" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById, nullptr, "QueryOffersById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::OnlineStoreV2SubsystemQueryOffersById_eventQueryOffersById_Parms), Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineStoreV2SubsystemQueryOffersById);
	UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_NoRegister()
	{
		return UOnlineStoreV2SubsystemQueryOffersById::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryOnlineStoreOffersComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryOnlineStoreOffersComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__OfferIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__OfferIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__OfferIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById, "QueryOffersById" }, // 1492601430
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersById, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnCallFailed_MetaData)) }; // 1507319276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnQueryOnlineStoreOffersComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnQueryOnlineStoreOffersComplete = { "OnQueryOnlineStoreOffersComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersById, OnQueryOnlineStoreOffersComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineStoreV2SubsystemQueryOffersByIdCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnQueryOnlineStoreOffersComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnQueryOnlineStoreOffersComplete_MetaData)) }; // 1507319276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersById, __Store__Subsystem), Z_Construct_UClass_UOnlineStoreV2Subsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersById, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__UserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__UserId = { "__Store__UserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersById, __Store__UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__UserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__OfferIds_Inner = { "__Store__OfferIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__OfferIds_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineStoreV2Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__OfferIds = { "__Store__OfferIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineStoreV2SubsystemQueryOffersById, __Store__OfferIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__OfferIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__OfferIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp_OnQueryOnlineStoreOffersComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__OfferIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::NewProp___Store__OfferIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineStoreV2SubsystemQueryOffersById>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::ClassParams = {
		&UOnlineStoreV2SubsystemQueryOffersById::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById()
	{
		if (!Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersById.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersById.OuterSingleton, Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersById.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineStoreV2SubsystemQueryOffersById>()
	{
		return UOnlineStoreV2SubsystemQueryOffersById::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineStoreV2SubsystemQueryOffersById);
	UOnlineStoreV2SubsystemQueryOffersById::~UOnlineStoreV2SubsystemQueryOffersById() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStoreV2Subsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStoreV2Subsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineStoreV2Subsystem, UOnlineStoreV2Subsystem::StaticClass, TEXT("UOnlineStoreV2Subsystem"), &Z_Registration_Info_UClass_UOnlineStoreV2Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStoreV2Subsystem), 1191358809U) },
		{ Z_Construct_UClass_UOnlineStoreV2SubsystemQueryCategories, UOnlineStoreV2SubsystemQueryCategories::StaticClass, TEXT("UOnlineStoreV2SubsystemQueryCategories"), &Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStoreV2SubsystemQueryCategories), 2816894375U) },
		{ Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter, UOnlineStoreV2SubsystemQueryOffersByFilter::StaticClass, TEXT("UOnlineStoreV2SubsystemQueryOffersByFilter"), &Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersByFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStoreV2SubsystemQueryOffersByFilter), 3381682806U) },
		{ Z_Construct_UClass_UOnlineStoreV2SubsystemQueryOffersById, UOnlineStoreV2SubsystemQueryOffersById::StaticClass, TEXT("UOnlineStoreV2SubsystemQueryOffersById"), &Z_Registration_Info_UClass_UOnlineStoreV2SubsystemQueryOffersById, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineStoreV2SubsystemQueryOffersById), 2813142462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStoreV2Subsystem_h_530218787(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStoreV2Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineStoreV2Subsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
