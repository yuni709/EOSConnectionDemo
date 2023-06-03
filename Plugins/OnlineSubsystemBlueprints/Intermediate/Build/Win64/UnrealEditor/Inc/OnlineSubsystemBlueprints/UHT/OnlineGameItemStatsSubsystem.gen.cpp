// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineGameItemStatsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineGameItemStatsSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineGameItemStatsSubsystem::StaticRegisterNativesUOnlineGameItemStatsSubsystem()
	{
		UClass* Class = UOnlineGameItemStatsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSubsystemAvailable", &UOnlineGameItemStatsSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineGameItemStatsSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineGameItemStatsSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineGameItemStatsSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|GameItemStats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameItemStatsSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::OnlineGameItemStatsSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameItemStatsSubsystem);
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister()
	{
		return UOnlineGameItemStatsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameItemStatsSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 441923369
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameItemStatsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::ClassParams = {
		&UOnlineGameItemStatsSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineGameItemStatsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameItemStatsSubsystem>()
	{
		return UOnlineGameItemStatsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameItemStatsSubsystem);
	UOnlineGameItemStatsSubsystem::~UOnlineGameItemStatsSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemUsageCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemUsageCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemUsageCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemUsageCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameItemStatsSubsystemItemUsage::execItemUsage)
	{
		P_GET_OBJECT(UOnlineGameItemStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemUsedBy);
		P_GET_TARRAY(FString,Z_Param_ItemsUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameItemStatsSubsystemItemUsage**)Z_Param__Result=UOnlineGameItemStatsSubsystemItemUsage::ItemUsage(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ItemUsedBy,Z_Param_ItemsUsed);
		P_NATIVE_END;
	}
	void UOnlineGameItemStatsSubsystemItemUsage::StaticRegisterNativesUOnlineGameItemStatsSubsystemItemUsage()
	{
		UClass* Class = UOnlineGameItemStatsSubsystemItemUsage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemUsage", &UOnlineGameItemStatsSubsystemItemUsage::execItemUsage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics
	{
		struct OnlineGameItemStatsSubsystemItemUsage_eventItemUsage_Parms
		{
			UOnlineGameItemStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ItemUsedBy;
			TArray<FString> ItemsUsed;
			UOnlineGameItemStatsSubsystemItemUsage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemUsedBy;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemsUsed_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsUsed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemUsage_eventItemUsage_Parms, Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemUsage_eventItemUsage_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ItemUsedBy = { "ItemUsedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemUsage_eventItemUsage_Parms, ItemUsedBy), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ItemsUsed_Inner = { "ItemsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ItemsUsed = { "ItemsUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemUsage_eventItemUsage_Parms, ItemsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemUsage_eventItemUsage_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ItemUsedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ItemsUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ItemsUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameItemStats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage, nullptr, "ItemUsage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::OnlineGameItemStatsSubsystemItemUsage_eventItemUsage_Parms), Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameItemStatsSubsystemItemUsage);
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_NoRegister()
	{
		return UOnlineGameItemStatsSubsystemItemUsage::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUsageComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUsageComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ItemUsedBy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ItemUsedBy;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ItemsUsed_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ItemsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__ItemsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemUsage_ItemUsage, "ItemUsage" }, // 2283945210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemUsage, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnCallFailed_MetaData)) }; // 2328330305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnItemUsageComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnItemUsageComplete = { "OnItemUsageComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemUsage, OnItemUsageComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemUsageCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnItemUsageComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnItemUsageComplete_MetaData)) }; // 2328330305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemUsage, __Store__Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemUsage, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemUsage, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemUsedBy_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemUsedBy = { "__Store__ItemUsedBy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemUsage, __Store__ItemUsedBy), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemUsedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemUsedBy_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemsUsed_Inner = { "__Store__ItemsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemsUsed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemsUsed = { "__Store__ItemsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemUsage, __Store__ItemsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemsUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp_OnItemUsageComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemUsedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemsUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::NewProp___Store__ItemsUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameItemStatsSubsystemItemUsage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::ClassParams = {
		&UOnlineGameItemStatsSubsystemItemUsage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemUsage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemUsage.OuterSingleton, Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemUsage.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameItemStatsSubsystemItemUsage>()
	{
		return UOnlineGameItemStatsSubsystemItemUsage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameItemStatsSubsystemItemUsage);
	UOnlineGameItemStatsSubsystemItemUsage::~UOnlineGameItemStatsSubsystemItemUsage() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemImpactCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemImpactCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemImpactCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemImpactCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameItemStatsSubsystemItemImpact::execItemImpact)
	{
		P_GET_OBJECT(UOnlineGameItemStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TARRAY(FString,Z_Param_TargetActors);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImpactInitiatedBy);
		P_GET_TARRAY(FString,Z_Param_ItemsUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameItemStatsSubsystemItemImpact**)Z_Param__Result=UOnlineGameItemStatsSubsystemItemImpact::ItemImpact(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_TargetActors,Z_Param_ImpactInitiatedBy,Z_Param_ItemsUsed);
		P_NATIVE_END;
	}
	void UOnlineGameItemStatsSubsystemItemImpact::StaticRegisterNativesUOnlineGameItemStatsSubsystemItemImpact()
	{
		UClass* Class = UOnlineGameItemStatsSubsystemItemImpact::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemImpact", &UOnlineGameItemStatsSubsystemItemImpact::execItemImpact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics
	{
		struct OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms
		{
			UOnlineGameItemStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TArray<FString> TargetActors;
			FString ImpactInitiatedBy;
			TArray<FString> ItemsUsed;
			UOnlineGameItemStatsSubsystemItemImpact* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImpactInitiatedBy;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemsUsed_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsUsed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms, Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ImpactInitiatedBy = { "ImpactInitiatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms, ImpactInitiatedBy), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ItemsUsed_Inner = { "ItemsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ItemsUsed = { "ItemsUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms, ItemsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_TargetActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_TargetActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ImpactInitiatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ItemsUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ItemsUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameItemStats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact, nullptr, "ItemImpact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::OnlineGameItemStatsSubsystemItemImpact_eventItemImpact_Parms), Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameItemStatsSubsystemItemImpact);
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_NoRegister()
	{
		return UOnlineGameItemStatsSubsystemItemImpact::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemImpactComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemImpactComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__TargetActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__TargetActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__TargetActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ImpactInitiatedBy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ImpactInitiatedBy;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ItemsUsed_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ItemsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__ItemsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemImpact_ItemImpact, "ItemImpact" }, // 668053342
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnCallFailed_MetaData)) }; // 2047362163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnItemImpactComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnItemImpactComplete = { "OnItemImpactComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, OnItemImpactComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemImpactCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnItemImpactComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnItemImpactComplete_MetaData)) }; // 2047362163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, __Store__Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__TargetActors_Inner = { "__Store__TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__TargetActors_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__TargetActors = { "__Store__TargetActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, __Store__TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__TargetActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ImpactInitiatedBy_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ImpactInitiatedBy = { "__Store__ImpactInitiatedBy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, __Store__ImpactInitiatedBy), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ImpactInitiatedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ImpactInitiatedBy_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ItemsUsed_Inner = { "__Store__ItemsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ItemsUsed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ItemsUsed = { "__Store__ItemsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemImpact, __Store__ItemsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ItemsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ItemsUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp_OnItemImpactComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__TargetActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__TargetActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ImpactInitiatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ItemsUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::NewProp___Store__ItemsUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameItemStatsSubsystemItemImpact>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::ClassParams = {
		&UOnlineGameItemStatsSubsystemItemImpact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemImpact.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemImpact.OuterSingleton, Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemImpact.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameItemStatsSubsystemItemImpact>()
	{
		return UOnlineGameItemStatsSubsystemItemImpact::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameItemStatsSubsystemItemImpact);
	UOnlineGameItemStatsSubsystemItemImpact::~UOnlineGameItemStatsSubsystemItemImpact() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemMitigationCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemMitigationCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemMitigationCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemMitigationCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameItemStatsSubsystemItemMitigation::execItemMitigation)
	{
		P_GET_OBJECT(UOnlineGameItemStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TARRAY(FString,Z_Param_ItemsUsed);
		P_GET_TARRAY(FString,Z_Param_ImpactItemsMitigated);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemUsedBy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameItemStatsSubsystemItemMitigation**)Z_Param__Result=UOnlineGameItemStatsSubsystemItemMitigation::ItemMitigation(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ItemsUsed,Z_Param_ImpactItemsMitigated,Z_Param_ItemUsedBy);
		P_NATIVE_END;
	}
	void UOnlineGameItemStatsSubsystemItemMitigation::StaticRegisterNativesUOnlineGameItemStatsSubsystemItemMitigation()
	{
		UClass* Class = UOnlineGameItemStatsSubsystemItemMitigation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemMitigation", &UOnlineGameItemStatsSubsystemItemMitigation::execItemMitigation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics
	{
		struct OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms
		{
			UOnlineGameItemStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TArray<FString> ItemsUsed;
			TArray<FString> ImpactItemsMitigated;
			FString ItemUsedBy;
			UOnlineGameItemStatsSubsystemItemMitigation* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemsUsed_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsUsed;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImpactItemsMitigated_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImpactItemsMitigated;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemUsedBy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms, Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ItemsUsed_Inner = { "ItemsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ItemsUsed = { "ItemsUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms, ItemsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ImpactItemsMitigated_Inner = { "ImpactItemsMitigated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ImpactItemsMitigated = { "ImpactItemsMitigated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms, ImpactItemsMitigated), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ItemUsedBy = { "ItemUsedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms, ItemUsedBy), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ItemsUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ItemsUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ImpactItemsMitigated_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ImpactItemsMitigated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ItemUsedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameItemStats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation, nullptr, "ItemMitigation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::OnlineGameItemStatsSubsystemItemMitigation_eventItemMitigation_Parms), Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameItemStatsSubsystemItemMitigation);
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_NoRegister()
	{
		return UOnlineGameItemStatsSubsystemItemMitigation::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemMitigationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemMitigationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ItemsUsed_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ItemsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__ItemsUsed;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ImpactItemsMitigated_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ImpactItemsMitigated_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__ImpactItemsMitigated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ItemUsedBy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ItemUsedBy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation, "ItemMitigation" }, // 3531239054
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnCallFailed_MetaData)) }; // 3548984717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnItemMitigationComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnItemMitigationComplete = { "OnItemMitigationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, OnItemMitigationComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemMitigationCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnItemMitigationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnItemMitigationComplete_MetaData)) }; // 3548984717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, __Store__Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemsUsed_Inner = { "__Store__ItemsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemsUsed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemsUsed = { "__Store__ItemsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ItemsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemsUsed_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ImpactItemsMitigated_Inner = { "__Store__ImpactItemsMitigated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ImpactItemsMitigated_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ImpactItemsMitigated = { "__Store__ImpactItemsMitigated", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ImpactItemsMitigated), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ImpactItemsMitigated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ImpactItemsMitigated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemUsedBy_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemUsedBy = { "__Store__ItemUsedBy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ItemUsedBy), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemUsedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemUsedBy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp_OnItemMitigationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemsUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemsUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ImpactItemsMitigated_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ImpactItemsMitigated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::NewProp___Store__ItemUsedBy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameItemStatsSubsystemItemMitigation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::ClassParams = {
		&UOnlineGameItemStatsSubsystemItemMitigation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemMitigation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemMitigation.OuterSingleton, Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemMitigation.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameItemStatsSubsystemItemMitigation>()
	{
		return UOnlineGameItemStatsSubsystemItemMitigation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameItemStatsSubsystemItemMitigation);
	UOnlineGameItemStatsSubsystemItemMitigation::~UOnlineGameItemStatsSubsystemItemMitigation() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameItemStatsSubsystemItemAvailabilityChange::execItemAvailabilityChange)
	{
		P_GET_OBJECT(UOnlineGameItemStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TARRAY(FString,Z_Param_AvailableItems);
		P_GET_TARRAY(FString,Z_Param_UnavailableItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameItemStatsSubsystemItemAvailabilityChange**)Z_Param__Result=UOnlineGameItemStatsSubsystemItemAvailabilityChange::ItemAvailabilityChange(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_AvailableItems,Z_Param_UnavailableItems);
		P_NATIVE_END;
	}
	void UOnlineGameItemStatsSubsystemItemAvailabilityChange::StaticRegisterNativesUOnlineGameItemStatsSubsystemItemAvailabilityChange()
	{
		UClass* Class = UOnlineGameItemStatsSubsystemItemAvailabilityChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemAvailabilityChange", &UOnlineGameItemStatsSubsystemItemAvailabilityChange::execItemAvailabilityChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics
	{
		struct OnlineGameItemStatsSubsystemItemAvailabilityChange_eventItemAvailabilityChange_Parms
		{
			UOnlineGameItemStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TArray<FString> AvailableItems;
			TArray<FString> UnavailableItems;
			UOnlineGameItemStatsSubsystemItemAvailabilityChange* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableItems;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnavailableItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnavailableItems;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemAvailabilityChange_eventItemAvailabilityChange_Parms, Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemAvailabilityChange_eventItemAvailabilityChange_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_AvailableItems_Inner = { "AvailableItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_AvailableItems = { "AvailableItems", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemAvailabilityChange_eventItemAvailabilityChange_Parms, AvailableItems), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_UnavailableItems_Inner = { "UnavailableItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_UnavailableItems = { "UnavailableItems", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemAvailabilityChange_eventItemAvailabilityChange_Parms, UnavailableItems), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemAvailabilityChange_eventItemAvailabilityChange_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_AvailableItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_AvailableItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_UnavailableItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_UnavailableItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameItemStats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange, nullptr, "ItemAvailabilityChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::OnlineGameItemStatsSubsystemItemAvailabilityChange_eventItemAvailabilityChange_Parms), Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameItemStatsSubsystemItemAvailabilityChange);
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_NoRegister()
	{
		return UOnlineGameItemStatsSubsystemItemAvailabilityChange::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAvailabilityChangeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAvailabilityChangeComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__AvailableItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__AvailableItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__AvailableItems;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__UnavailableItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UnavailableItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__UnavailableItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange, "ItemAvailabilityChange" }, // 4021575176
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemAvailabilityChange, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnCallFailed_MetaData)) }; // 4014871474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnItemAvailabilityChangeComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnItemAvailabilityChangeComplete = { "OnItemAvailabilityChangeComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemAvailabilityChange, OnItemAvailabilityChangeComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnItemAvailabilityChangeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnItemAvailabilityChangeComplete_MetaData)) }; // 4014871474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__AvailableItems_Inner = { "__Store__AvailableItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__AvailableItems_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__AvailableItems = { "__Store__AvailableItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__AvailableItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__AvailableItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__AvailableItems_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__UnavailableItems_Inner = { "__Store__UnavailableItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__UnavailableItems_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__UnavailableItems = { "__Store__UnavailableItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__UnavailableItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__UnavailableItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__UnavailableItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp_OnItemAvailabilityChangeComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__AvailableItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__AvailableItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__UnavailableItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::NewProp___Store__UnavailableItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameItemStatsSubsystemItemAvailabilityChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::ClassParams = {
		&UOnlineGameItemStatsSubsystemItemAvailabilityChange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange.OuterSingleton, Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameItemStatsSubsystemItemAvailabilityChange>()
	{
		return UOnlineGameItemStatsSubsystemItemAvailabilityChange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameItemStatsSubsystemItemAvailabilityChange);
	UOnlineGameItemStatsSubsystemItemAvailabilityChange::~UOnlineGameItemStatsSubsystemItemAvailabilityChange() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameItemStatsSubsystemItemInventoryChange::execItemInventoryChange)
	{
		P_GET_OBJECT(UOnlineGameItemStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TARRAY(FString,Z_Param_ItemsToAdd);
		P_GET_TARRAY(FString,Z_Param_ItemsToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameItemStatsSubsystemItemInventoryChange**)Z_Param__Result=UOnlineGameItemStatsSubsystemItemInventoryChange::ItemInventoryChange(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ItemsToAdd,Z_Param_ItemsToRemove);
		P_NATIVE_END;
	}
	void UOnlineGameItemStatsSubsystemItemInventoryChange::StaticRegisterNativesUOnlineGameItemStatsSubsystemItemInventoryChange()
	{
		UClass* Class = UOnlineGameItemStatsSubsystemItemInventoryChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemInventoryChange", &UOnlineGameItemStatsSubsystemItemInventoryChange::execItemInventoryChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics
	{
		struct OnlineGameItemStatsSubsystemItemInventoryChange_eventItemInventoryChange_Parms
		{
			UOnlineGameItemStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TArray<FString> ItemsToAdd;
			TArray<FString> ItemsToRemove;
			UOnlineGameItemStatsSubsystemItemInventoryChange* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemsToAdd_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToAdd;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemsToRemove_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToRemove;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemInventoryChange_eventItemInventoryChange_Parms, Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemInventoryChange_eventItemInventoryChange_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToAdd_Inner = { "ItemsToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToAdd = { "ItemsToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemInventoryChange_eventItemInventoryChange_Parms, ItemsToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToRemove_Inner = { "ItemsToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToRemove = { "ItemsToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemInventoryChange_eventItemInventoryChange_Parms, ItemsToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemInventoryChange_eventItemInventoryChange_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToAdd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToRemove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ItemsToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameItemStats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange, nullptr, "ItemInventoryChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::OnlineGameItemStatsSubsystemItemInventoryChange_eventItemInventoryChange_Parms), Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameItemStatsSubsystemItemInventoryChange);
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_NoRegister()
	{
		return UOnlineGameItemStatsSubsystemItemInventoryChange::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemInventoryChangeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemInventoryChangeComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ItemsToAdd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ItemsToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__ItemsToAdd;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ItemsToRemove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ItemsToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__ItemsToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange, "ItemInventoryChange" }, // 1846033502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemInventoryChange, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnCallFailed_MetaData)) }; // 3886809175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnItemInventoryChangeComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnItemInventoryChangeComplete = { "OnItemInventoryChangeComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemInventoryChange, OnItemInventoryChangeComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnItemInventoryChangeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnItemInventoryChangeComplete_MetaData)) }; // 3886809175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToAdd_Inner = { "__Store__ItemsToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToAdd_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToAdd = { "__Store__ItemsToAdd", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__ItemsToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToAdd_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToRemove_Inner = { "__Store__ItemsToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToRemove_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToRemove = { "__Store__ItemsToRemove", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__ItemsToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToRemove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp_OnItemInventoryChangeComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToAdd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToRemove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::NewProp___Store__ItemsToRemove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameItemStatsSubsystemItemInventoryChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::ClassParams = {
		&UOnlineGameItemStatsSubsystemItemInventoryChange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange.OuterSingleton, Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameItemStatsSubsystemItemInventoryChange>()
	{
		return UOnlineGameItemStatsSubsystemItemInventoryChange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameItemStatsSubsystemItemInventoryChange);
	UOnlineGameItemStatsSubsystemItemInventoryChange::~UOnlineGameItemStatsSubsystemItemInventoryChange() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin_Parms
		{
			FUniqueNetIdRepl LocalUserId;
			FOnlineErrorInfo Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin_Parms, Status), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineGameItemStatsSubsystemItemLoadoutChange::execItemLoadoutChange)
	{
		P_GET_OBJECT(UOnlineGameItemStatsSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_TARRAY(FString,Z_Param_EquippedItems);
		P_GET_TARRAY(FString,Z_Param_UnequippedItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineGameItemStatsSubsystemItemLoadoutChange**)Z_Param__Result=UOnlineGameItemStatsSubsystemItemLoadoutChange::ItemLoadoutChange(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_EquippedItems,Z_Param_UnequippedItems);
		P_NATIVE_END;
	}
	void UOnlineGameItemStatsSubsystemItemLoadoutChange::StaticRegisterNativesUOnlineGameItemStatsSubsystemItemLoadoutChange()
	{
		UClass* Class = UOnlineGameItemStatsSubsystemItemLoadoutChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemLoadoutChange", &UOnlineGameItemStatsSubsystemItemLoadoutChange::execItemLoadoutChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics
	{
		struct OnlineGameItemStatsSubsystemItemLoadoutChange_eventItemLoadoutChange_Parms
		{
			UOnlineGameItemStatsSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			TArray<FString> EquippedItems;
			TArray<FString> UnequippedItems;
			UOnlineGameItemStatsSubsystemItemLoadoutChange* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EquippedItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquippedItems;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnequippedItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnequippedItems;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemLoadoutChange_eventItemLoadoutChange_Parms, Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemLoadoutChange_eventItemLoadoutChange_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_EquippedItems_Inner = { "EquippedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_EquippedItems = { "EquippedItems", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemLoadoutChange_eventItemLoadoutChange_Parms, EquippedItems), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_UnequippedItems_Inner = { "UnequippedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_UnequippedItems = { "UnequippedItems", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemLoadoutChange_eventItemLoadoutChange_Parms, UnequippedItems), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGameItemStatsSubsystemItemLoadoutChange_eventItemLoadoutChange_Parms, ReturnValue), Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_EquippedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_EquippedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_UnequippedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_UnequippedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|GameItemStats" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange, nullptr, "ItemLoadoutChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::OnlineGameItemStatsSubsystemItemLoadoutChange_eventItemLoadoutChange_Parms), Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGameItemStatsSubsystemItemLoadoutChange);
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_NoRegister()
	{
		return UOnlineGameItemStatsSubsystemItemLoadoutChange::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemLoadoutChangeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemLoadoutChangeComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__EquippedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__EquippedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__EquippedItems;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__UnequippedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__UnequippedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__UnequippedItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange, "ItemLoadoutChange" }, // 3985960702
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemLoadoutChange, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnCallFailed_MetaData)) }; // 646955475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnItemLoadoutChangeComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnItemLoadoutChangeComplete = { "OnItemLoadoutChangeComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemLoadoutChange, OnItemLoadoutChangeComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnItemLoadoutChangeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnItemLoadoutChangeComplete_MetaData)) }; // 646955475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__Subsystem), Z_Construct_UClass_UOnlineGameItemStatsSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__EquippedItems_Inner = { "__Store__EquippedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__EquippedItems_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__EquippedItems = { "__Store__EquippedItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__EquippedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__EquippedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__EquippedItems_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__UnequippedItems_Inner = { "__Store__UnequippedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__UnequippedItems_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGameItemStatsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__UnequippedItems = { "__Store__UnequippedItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__UnequippedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__UnequippedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__UnequippedItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp_OnItemLoadoutChangeComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__EquippedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__EquippedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__UnequippedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::NewProp___Store__UnequippedItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameItemStatsSubsystemItemLoadoutChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::ClassParams = {
		&UOnlineGameItemStatsSubsystemItemLoadoutChange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange()
	{
		if (!Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange.OuterSingleton, Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGameItemStatsSubsystemItemLoadoutChange>()
	{
		return UOnlineGameItemStatsSubsystemItemLoadoutChange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameItemStatsSubsystemItemLoadoutChange);
	UOnlineGameItemStatsSubsystemItemLoadoutChange::~UOnlineGameItemStatsSubsystemItemLoadoutChange() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameItemStatsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameItemStatsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineGameItemStatsSubsystem, UOnlineGameItemStatsSubsystem::StaticClass, TEXT("UOnlineGameItemStatsSubsystem"), &Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameItemStatsSubsystem), 1461637322U) },
		{ Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemUsage, UOnlineGameItemStatsSubsystemItemUsage::StaticClass, TEXT("UOnlineGameItemStatsSubsystemItemUsage"), &Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemUsage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameItemStatsSubsystemItemUsage), 2909807611U) },
		{ Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemImpact, UOnlineGameItemStatsSubsystemItemImpact::StaticClass, TEXT("UOnlineGameItemStatsSubsystemItemImpact"), &Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemImpact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameItemStatsSubsystemItemImpact), 2246227631U) },
		{ Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemMitigation, UOnlineGameItemStatsSubsystemItemMitigation::StaticClass, TEXT("UOnlineGameItemStatsSubsystemItemMitigation"), &Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemMitigation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameItemStatsSubsystemItemMitigation), 4031818323U) },
		{ Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange, UOnlineGameItemStatsSubsystemItemAvailabilityChange::StaticClass, TEXT("UOnlineGameItemStatsSubsystemItemAvailabilityChange"), &Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemAvailabilityChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameItemStatsSubsystemItemAvailabilityChange), 2097438304U) },
		{ Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange, UOnlineGameItemStatsSubsystemItemInventoryChange::StaticClass, TEXT("UOnlineGameItemStatsSubsystemItemInventoryChange"), &Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemInventoryChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameItemStatsSubsystemItemInventoryChange), 4206809110U) },
		{ Z_Construct_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange, UOnlineGameItemStatsSubsystemItemLoadoutChange::StaticClass, TEXT("UOnlineGameItemStatsSubsystemItemLoadoutChange"), &Z_Registration_Info_UClass_UOnlineGameItemStatsSubsystemItemLoadoutChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGameItemStatsSubsystemItemLoadoutChange), 229961560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameItemStatsSubsystem_h_3532929192(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameItemStatsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGameItemStatsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
