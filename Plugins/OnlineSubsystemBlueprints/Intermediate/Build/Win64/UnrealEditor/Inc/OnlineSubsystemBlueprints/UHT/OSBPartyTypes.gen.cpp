// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBPartyTypes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBPartyTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UBlueprintPartyMember();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UBlueprintPartyMember_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UMutablePartyData();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UMutablePartyData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePartyJoinInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlinePartyJoinInfo_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UParty();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UParty_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UPartyId();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UPartyId_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UReadablePartyData();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UReadablePartyData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult_();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyConfiguration();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UParty::execGetLeaderId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetLeaderId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParty::execGetPartyTypeId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetPartyTypeId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParty::execGetPartyId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPartyId**)Z_Param__Result=P_THIS->GetPartyId();
		P_NATIVE_END;
	}
	void UParty::StaticRegisterNativesUParty()
	{
		UClass* Class = UParty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeaderId", &UParty::execGetLeaderId },
			{ "GetPartyId", &UParty::execGetPartyId },
			{ "GetPartyTypeId", &UParty::execGetPartyTypeId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParty_GetLeaderId_Statics
	{
		struct Party_eventGetLeaderId_Parms
		{
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParty_GetLeaderId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Party_eventGetLeaderId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParty_GetLeaderId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParty_GetLeaderId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParty_GetLeaderId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParty_GetLeaderId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParty, nullptr, "GetLeaderId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParty_GetLeaderId_Statics::Party_eventGetLeaderId_Parms), Z_Construct_UFunction_UParty_GetLeaderId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParty_GetLeaderId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParty_GetLeaderId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParty_GetLeaderId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParty_GetLeaderId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParty_GetLeaderId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParty_GetPartyId_Statics
	{
		struct Party_eventGetPartyId_Parms
		{
			UPartyId* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParty_GetPartyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Party_eventGetPartyId_Parms, ReturnValue), Z_Construct_UClass_UPartyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParty_GetPartyId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParty_GetPartyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParty_GetPartyId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParty_GetPartyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParty, nullptr, "GetPartyId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParty_GetPartyId_Statics::Party_eventGetPartyId_Parms), Z_Construct_UFunction_UParty_GetPartyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParty_GetPartyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParty_GetPartyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParty_GetPartyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParty_GetPartyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParty_GetPartyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParty_GetPartyTypeId_Statics
	{
		struct Party_eventGetPartyTypeId_Parms
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
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Party_eventGetPartyTypeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParty, nullptr, "GetPartyTypeId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::Party_eventGetPartyTypeId_Parms), Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParty_GetPartyTypeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParty_GetPartyTypeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParty);
	UClass* Z_Construct_UClass_UParty_NoRegister()
	{
		return UParty::StaticClass();
	}
	struct Z_Construct_UClass_UParty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParty_GetLeaderId, "GetLeaderId" }, // 1127013914
		{ &Z_Construct_UFunction_UParty_GetPartyId, "GetPartyId" }, // 1969804723
		{ &Z_Construct_UFunction_UParty_GetPartyTypeId, "GetPartyTypeId" }, // 802128099
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBPartyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParty_Statics::ClassParams = {
		&UParty::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParty()
	{
		if (!Z_Registration_Info_UClass_UParty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParty.OuterSingleton, Z_Construct_UClass_UParty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParty.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UParty>()
	{
		return UParty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParty);
	UParty::~UParty() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMemberConnectionStatus_;
	static UEnum* EMemberConnectionStatus__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMemberConnectionStatus_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMemberConnectionStatus_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EMemberConnectionStatus_"));
		}
		return Z_Registration_Info_UEnum_EMemberConnectionStatus_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EMemberConnectionStatus_>()
	{
		return EMemberConnectionStatus__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::Enumerators[] = {
		{ "EMemberConnectionStatus_::Uninitialized", (int64)EMemberConnectionStatus_::Uninitialized },
		{ "EMemberConnectionStatus_::Disconnected", (int64)EMemberConnectionStatus_::Disconnected },
		{ "EMemberConnectionStatus_::Initializing", (int64)EMemberConnectionStatus_::Initializing },
		{ "EMemberConnectionStatus_::Connected", (int64)EMemberConnectionStatus_::Connected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Connected.Name", "EMemberConnectionStatus_::Connected" },
		{ "Disconnected.Name", "EMemberConnectionStatus_::Disconnected" },
		{ "Initializing.Name", "EMemberConnectionStatus_::Initializing" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "ScriptName", "EMemberConnectionStatus" },
		{ "Uninitialized.Name", "EMemberConnectionStatus_::Uninitialized" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EMemberConnectionStatus_",
		"EMemberConnectionStatus_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus_()
	{
		if (!Z_Registration_Info_UEnum_EMemberConnectionStatus_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMemberConnectionStatus_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMemberConnectionStatus_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMemberExitedReason_;
	static UEnum* EMemberExitedReason__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMemberExitedReason_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMemberExitedReason_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EMemberExitedReason_"));
		}
		return Z_Registration_Info_UEnum_EMemberExitedReason_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EMemberExitedReason_>()
	{
		return EMemberExitedReason__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::Enumerators[] = {
		{ "EMemberExitedReason_::Unknown", (int64)EMemberExitedReason_::Unknown },
		{ "EMemberExitedReason_::Left", (int64)EMemberExitedReason_::Left },
		{ "EMemberExitedReason_::Removed", (int64)EMemberExitedReason_::Removed },
		{ "EMemberExitedReason_::Kicked", (int64)EMemberExitedReason_::Kicked },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Kicked.Name", "EMemberExitedReason_::Kicked" },
		{ "Left.Name", "EMemberExitedReason_::Left" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "Removed.Name", "EMemberExitedReason_::Removed" },
		{ "ScriptName", "EMemberExitedReason" },
		{ "Unknown.Name", "EMemberExitedReason_::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EMemberExitedReason_",
		"EMemberExitedReason_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason_()
	{
		if (!Z_Registration_Info_UEnum_EMemberExitedReason_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMemberExitedReason_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberExitedReason__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMemberExitedReason_.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms
		{
			FUniqueNetIdRepl ChangedUserId;
			FString Attribute;
			FString NewValue;
			FString OldValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangedUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_ChangedUserId = { "ChangedUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms, ChangedUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms, Attribute), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_ChangedUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "PartyMemberAttributeChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventPartyMemberAttributeChanged_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventPartyMemberConnectionStatusChanged_Parms
		{
			FUniqueNetIdRepl ChangedUserId;
			EMemberConnectionStatus_ NewStatus;
			EMemberConnectionStatus_ PreviousStatus;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangedUserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_ChangedUserId = { "ChangedUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPartyMemberConnectionStatusChanged_Parms, ChangedUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPartyMemberConnectionStatusChanged_Parms, NewStatus), Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus_, METADATA_PARAMS(nullptr, 0) }; // 1290978864
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_PreviousStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_PreviousStatus = { "PreviousStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventPartyMemberConnectionStatusChanged_Parms, PreviousStatus), Z_Construct_UEnum_OnlineSubsystemBlueprints_EMemberConnectionStatus_, METADATA_PARAMS(nullptr, 0) }; // 1290978864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_ChangedUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_NewStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_NewStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_PreviousStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::NewProp_PreviousStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "PartyMemberConnectionStatusChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventPartyMemberConnectionStatusChanged_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBlueprintPartyMember::execGetUserAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttrName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAttrValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserAttribute(Z_Param_AttrName,Z_Param_Out_OutAttrValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPartyMember::execGetDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayName(Z_Param_Platform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPartyMember::execGetRealName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRealName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPartyMember::execGetUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetUserId();
		P_NATIVE_END;
	}
	void UBlueprintPartyMember::StaticRegisterNativesUBlueprintPartyMember()
	{
		UClass* Class = UBlueprintPartyMember::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UBlueprintPartyMember::execGetDisplayName },
			{ "GetRealName", &UBlueprintPartyMember::execGetRealName },
			{ "GetUserAttribute", &UBlueprintPartyMember::execGetUserAttribute },
			{ "GetUserId", &UBlueprintPartyMember::execGetUserId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics
	{
		struct BlueprintPartyMember_eventGetDisplayName_Parms
		{
			FString Platform;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::NewProp_Platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPartyMember_eventGetDisplayName_Parms, Platform), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::NewProp_Platform_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPartyMember_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPartyMember, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::BlueprintPartyMember_eventGetDisplayName_Parms), Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics
	{
		struct BlueprintPartyMember_eventGetRealName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPartyMember_eventGetRealName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPartyMember, nullptr, "GetRealName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::BlueprintPartyMember_eventGetRealName_Parms), Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPartyMember_GetRealName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPartyMember_GetRealName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics
	{
		struct BlueprintPartyMember_eventGetUserAttribute_Parms
		{
			FString AttrName;
			FString OutAttrValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttrName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttrName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttrValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_AttrName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_AttrName = { "AttrName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPartyMember_eventGetUserAttribute_Parms, AttrName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_AttrName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_AttrName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_OutAttrValue = { "OutAttrValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPartyMember_eventGetUserAttribute_Parms, OutAttrValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintPartyMember_eventGetUserAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintPartyMember_eventGetUserAttribute_Parms), &Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_AttrName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_OutAttrValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPartyMember, nullptr, "GetUserAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::BlueprintPartyMember_eventGetUserAttribute_Parms), Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics
	{
		struct BlueprintPartyMember_eventGetUserId_Parms
		{
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPartyMember_eventGetUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPartyMember, nullptr, "GetUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::BlueprintPartyMember_eventGetUserId_Parms), Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPartyMember_GetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPartyMember_GetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintPartyMember);
	UClass* Z_Construct_UClass_UBlueprintPartyMember_NoRegister()
	{
		return UBlueprintPartyMember::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintPartyMember_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionStatusChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionStatusChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintPartyMember_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintPartyMember_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintPartyMember_GetDisplayName, "GetDisplayName" }, // 2023594434
		{ &Z_Construct_UFunction_UBlueprintPartyMember_GetRealName, "GetRealName" }, // 3981261431
		{ &Z_Construct_UFunction_UBlueprintPartyMember_GetUserAttribute, "GetUserAttribute" }, // 256419376
		{ &Z_Construct_UFunction_UBlueprintPartyMember_GetUserId, "GetUserId" }, // 1264201148
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPartyMember_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBPartyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnAttributeChanged_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintPartyMember, OnAttributeChanged), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberAttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnAttributeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnAttributeChanged_MetaData)) }; // 2978212854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnConnectionStatusChanged_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnConnectionStatusChanged = { "OnConnectionStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintPartyMember, OnConnectionStatusChanged), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_PartyMemberConnectionStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnConnectionStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnConnectionStatusChanged_MetaData)) }; // 688894603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintPartyMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnAttributeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPartyMember_Statics::NewProp_OnConnectionStatusChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintPartyMember_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintPartyMember>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintPartyMember_Statics::ClassParams = {
		&UBlueprintPartyMember::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlueprintPartyMember_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPartyMember_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintPartyMember_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPartyMember_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintPartyMember()
	{
		if (!Z_Registration_Info_UClass_UBlueprintPartyMember.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintPartyMember.OuterSingleton, Z_Construct_UClass_UBlueprintPartyMember_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintPartyMember.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UBlueprintPartyMember>()
	{
		return UBlueprintPartyMember::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPartyMember);
	UBlueprintPartyMember::~UBlueprintPartyMember() {}
	DEFINE_FUNCTION(UReadablePartyData::execGetAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttrName);
		P_GET_UBOOL_REF(Z_Param_Out_OutFound);
		P_GET_STRUCT_REF(FVariantDataBP,Z_Param_Out_OutAttrValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttribute(Z_Param_AttrName,Z_Param_Out_OutFound,Z_Param_Out_OutAttrValue);
		P_NATIVE_END;
	}
	void UReadablePartyData::StaticRegisterNativesUReadablePartyData()
	{
		UClass* Class = UReadablePartyData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttribute", &UReadablePartyData::execGetAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics
	{
		struct ReadablePartyData_eventGetAttribute_Parms
		{
			FString AttrName;
			bool OutFound;
			FVariantDataBP OutAttrValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttrName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttrName;
		static void NewProp_OutFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttrValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_AttrName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_AttrName = { "AttrName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadablePartyData_eventGetAttribute_Parms, AttrName), METADATA_PARAMS(Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_AttrName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_AttrName_MetaData)) };
	void Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_OutFound_SetBit(void* Obj)
	{
		((ReadablePartyData_eventGetAttribute_Parms*)Obj)->OutFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_OutFound = { "OutFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReadablePartyData_eventGetAttribute_Parms), &Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_OutFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_OutAttrValue = { "OutAttrValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadablePartyData_eventGetAttribute_Parms, OutAttrValue), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_AttrName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_OutFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::NewProp_OutAttrValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadablePartyData, nullptr, "GetAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::ReadablePartyData_eventGetAttribute_Parms), Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadablePartyData_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadablePartyData_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadablePartyData);
	UClass* Z_Construct_UClass_UReadablePartyData_NoRegister()
	{
		return UReadablePartyData::StaticClass();
	}
	struct Z_Construct_UClass_UReadablePartyData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadablePartyData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadablePartyData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadablePartyData_GetAttribute, "GetAttribute" }, // 3629381632
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadablePartyData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBPartyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadablePartyData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadablePartyData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadablePartyData_Statics::ClassParams = {
		&UReadablePartyData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReadablePartyData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadablePartyData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadablePartyData()
	{
		if (!Z_Registration_Info_UClass_UReadablePartyData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadablePartyData.OuterSingleton, Z_Construct_UClass_UReadablePartyData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadablePartyData.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UReadablePartyData>()
	{
		return UReadablePartyData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadablePartyData);
	UReadablePartyData::~UReadablePartyData() {}
	DEFINE_FUNCTION(UMutablePartyData::execRemoveAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttrName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAttribute(Z_Param_AttrName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMutablePartyData::execSetAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttrName);
		P_GET_STRUCT(FVariantDataBP,Z_Param_AttrValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttribute(Z_Param_AttrName,Z_Param_AttrValue);
		P_NATIVE_END;
	}
	void UMutablePartyData::StaticRegisterNativesUMutablePartyData()
	{
		UClass* Class = UMutablePartyData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveAttribute", &UMutablePartyData::execRemoveAttribute },
			{ "SetAttribute", &UMutablePartyData::execSetAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics
	{
		struct MutablePartyData_eventRemoveAttribute_Parms
		{
			FString AttrName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttrName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttrName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::NewProp_AttrName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::NewProp_AttrName = { "AttrName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MutablePartyData_eventRemoveAttribute_Parms, AttrName), METADATA_PARAMS(Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::NewProp_AttrName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::NewProp_AttrName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::NewProp_AttrName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMutablePartyData, nullptr, "RemoveAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::MutablePartyData_eventRemoveAttribute_Parms), Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMutablePartyData_RemoveAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMutablePartyData_RemoveAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics
	{
		struct MutablePartyData_eventSetAttribute_Parms
		{
			FString AttrName;
			FVariantDataBP AttrValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttrName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttrName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttrValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::NewProp_AttrName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::NewProp_AttrName = { "AttrName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MutablePartyData_eventSetAttribute_Parms, AttrName), METADATA_PARAMS(Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::NewProp_AttrName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::NewProp_AttrName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::NewProp_AttrValue = { "AttrValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MutablePartyData_eventSetAttribute_Parms, AttrValue), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::NewProp_AttrName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::NewProp_AttrValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMutablePartyData, nullptr, "SetAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::MutablePartyData_eventSetAttribute_Parms), Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMutablePartyData_SetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMutablePartyData_SetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMutablePartyData);
	UClass* Z_Construct_UClass_UMutablePartyData_NoRegister()
	{
		return UMutablePartyData::StaticClass();
	}
	struct Z_Construct_UClass_UMutablePartyData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMutablePartyData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReadablePartyData,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMutablePartyData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMutablePartyData_RemoveAttribute, "RemoveAttribute" }, // 870391691
		{ &Z_Construct_UFunction_UMutablePartyData_SetAttribute, "SetAttribute" }, // 615700037
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutablePartyData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBPartyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMutablePartyData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMutablePartyData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMutablePartyData_Statics::ClassParams = {
		&UMutablePartyData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMutablePartyData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMutablePartyData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMutablePartyData()
	{
		if (!Z_Registration_Info_UClass_UMutablePartyData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMutablePartyData.OuterSingleton, Z_Construct_UClass_UMutablePartyData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMutablePartyData.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UMutablePartyData>()
	{
		return UMutablePartyData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMutablePartyData);
	UMutablePartyData::~UMutablePartyData() {}
	DEFINE_FUNCTION(UPartyId::execToDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToDebugString();
		P_NATIVE_END;
	}
	void UPartyId::StaticRegisterNativesUPartyId()
	{
		UClass* Class = UPartyId::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToDebugString", &UPartyId::execToDebugString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPartyId_ToDebugString_Statics
	{
		struct PartyId_eventToDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPartyId_ToDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyId_eventToDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPartyId_ToDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPartyId_ToDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPartyId_ToDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPartyId_ToDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPartyId, nullptr, "ToDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPartyId_ToDebugString_Statics::PartyId_eventToDebugString_Parms), Z_Construct_UFunction_UPartyId_ToDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPartyId_ToDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPartyId_ToDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPartyId_ToDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPartyId_ToDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPartyId_ToDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyId);
	UClass* Z_Construct_UClass_UPartyId_NoRegister()
	{
		return UPartyId::StaticClass();
	}
	struct Z_Construct_UClass_UPartyId_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyId_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPartyId_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPartyId_ToDebugString, "ToDebugString" }, // 2374339669
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyId_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBPartyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyId_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyId>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyId_Statics::ClassParams = {
		&UPartyId::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPartyId_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyId_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyId()
	{
		if (!Z_Registration_Info_UClass_UPartyId.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyId.OuterSingleton, Z_Construct_UClass_UPartyId_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyId.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UPartyId>()
	{
		return UPartyId::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyId);
	UPartyId::~UPartyId() {}
	DEFINE_FUNCTION(UOnlinePartyJoinInfo::execToDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePartyJoinInfo::execGetSourceUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetSourceUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePartyJoinInfo::execGetSourceDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSourceDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePartyJoinInfo::execGetPartyId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPartyId**)Z_Param__Result=P_THIS->GetPartyId();
		P_NATIVE_END;
	}
	void UOnlinePartyJoinInfo::StaticRegisterNativesUOnlinePartyJoinInfo()
	{
		UClass* Class = UOnlinePartyJoinInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPartyId", &UOnlinePartyJoinInfo::execGetPartyId },
			{ "GetSourceDisplayName", &UOnlinePartyJoinInfo::execGetSourceDisplayName },
			{ "GetSourceUserId", &UOnlinePartyJoinInfo::execGetSourceUserId },
			{ "ToDebugString", &UOnlinePartyJoinInfo::execToDebugString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics
	{
		struct OnlinePartyJoinInfo_eventGetPartyId_Parms
		{
			UPartyId* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePartyJoinInfo_eventGetPartyId_Parms, ReturnValue), Z_Construct_UClass_UPartyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Get the ID of the party that this join info is for.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "ToolTip", "Get the ID of the party that this join info is for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePartyJoinInfo, nullptr, "GetPartyId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::OnlinePartyJoinInfo_eventGetPartyId_Parms), Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics
	{
		struct OnlinePartyJoinInfo_eventGetSourceDisplayName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePartyJoinInfo_eventGetSourceDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Get the source display name; For invites, this is the display name of the user that sent the invite.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "ToolTip", "Get the source display name; For invites, this is the display name of the user that sent the invite." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePartyJoinInfo, nullptr, "GetSourceDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::OnlinePartyJoinInfo_eventGetSourceDisplayName_Parms), Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics
	{
		struct OnlinePartyJoinInfo_eventGetSourceUserId_Parms
		{
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePartyJoinInfo_eventGetSourceUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Get the source user ID; For invites, this is the ID of the user that sent the invite.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "ToolTip", "Get the source user ID; For invites, this is the ID of the user that sent the invite." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePartyJoinInfo, nullptr, "GetSourceUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::OnlinePartyJoinInfo_eventGetSourceUserId_Parms), Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics
	{
		struct OnlinePartyJoinInfo_eventToDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlinePartyJoinInfo_eventToDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePartyJoinInfo, nullptr, "ToDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::OnlinePartyJoinInfo_eventToDebugString_Parms), Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePartyJoinInfo);
	UClass* Z_Construct_UClass_UOnlinePartyJoinInfo_NoRegister()
	{
		return UOnlinePartyJoinInfo::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePartyJoinInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePartyJoinInfo_GetPartyId, "GetPartyId" }, // 3938975196
		{ &Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceDisplayName, "GetSourceDisplayName" }, // 297712543
		{ &Z_Construct_UFunction_UOnlinePartyJoinInfo_GetSourceUserId, "GetSourceUserId" }, // 1544721589
		{ &Z_Construct_UFunction_UOnlinePartyJoinInfo_ToDebugString, "ToDebugString" }, // 1245678270
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBPartyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePartyJoinInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::ClassParams = {
		&UOnlinePartyJoinInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePartyJoinInfo()
	{
		if (!Z_Registration_Info_UClass_UOnlinePartyJoinInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePartyJoinInfo.OuterSingleton, Z_Construct_UClass_UOnlinePartyJoinInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePartyJoinInfo.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlinePartyJoinInfo>()
	{
		return UOnlinePartyJoinInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePartyJoinInfo);
	UOnlinePartyJoinInfo::~UOnlinePartyJoinInfo() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyState_;
	static UEnum* EPartyState__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartyState_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartyState_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EPartyState_"));
		}
		return Z_Registration_Info_UEnum_EPartyState_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPartyState_>()
	{
		return EPartyState__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::Enumerators[] = {
		{ "EPartyState_::None", (int64)EPartyState_::None },
		{ "EPartyState_::CreatePending", (int64)EPartyState_::CreatePending },
		{ "EPartyState_::JoinPending", (int64)EPartyState_::JoinPending },
		{ "EPartyState_::RejoinPending", (int64)EPartyState_::RejoinPending },
		{ "EPartyState_::LeavePending", (int64)EPartyState_::LeavePending },
		{ "EPartyState_::Active", (int64)EPartyState_::Active },
		{ "EPartyState_::Disconnected", (int64)EPartyState_::Disconnected },
		{ "EPartyState_::CleanUp", (int64)EPartyState_::CleanUp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "EPartyState_::Active" },
		{ "BlueprintType", "true" },
		{ "CleanUp.Name", "EPartyState_::CleanUp" },
		{ "CreatePending.Name", "EPartyState_::CreatePending" },
		{ "Disconnected.Name", "EPartyState_::Disconnected" },
		{ "JoinPending.Name", "EPartyState_::JoinPending" },
		{ "LeavePending.Name", "EPartyState_::LeavePending" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "None.Name", "EPartyState_::None" },
		{ "RejoinPending.Name", "EPartyState_::RejoinPending" },
		{ "ScriptName", "EPartyState" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EPartyState_",
		"EPartyState_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState_()
	{
		if (!Z_Registration_Info_UEnum_EPartyState_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyState_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartyState__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartyState_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartySystemPermissions;
	static UEnum* EPartySystemPermissions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartySystemPermissions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartySystemPermissions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EPartySystemPermissions"));
		}
		return Z_Registration_Info_UEnum_EPartySystemPermissions.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPartySystemPermissions>()
	{
		return EPartySystemPermissions_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::Enumerators[] = {
		{ "EPartySystemPermissions::Noone", (int64)EPartySystemPermissions::Noone },
		{ "EPartySystemPermissions::Leader", (int64)EPartySystemPermissions::Leader },
		{ "EPartySystemPermissions::Friends", (int64)EPartySystemPermissions::Friends },
		{ "EPartySystemPermissions::Anyone", (int64)EPartySystemPermissions::Anyone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::Enum_MetaDataParams[] = {
		{ "Anyone.Comment", "/** Available to anyone */" },
		{ "Anyone.Name", "EPartySystemPermissions::Anyone" },
		{ "Anyone.ToolTip", "Available to anyone" },
		{ "BlueprintType", "true" },
		{ "Friends.Comment", "/** Available to the leader and friends of the leader only */" },
		{ "Friends.Name", "EPartySystemPermissions::Friends" },
		{ "Friends.ToolTip", "Available to the leader and friends of the leader only" },
		{ "Leader.Comment", "/** Available to the leader only */" },
		{ "Leader.Name", "EPartySystemPermissions::Leader" },
		{ "Leader.ToolTip", "Available to the leader only" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "Noone.Comment", "/** Noone has access to do that action */" },
		{ "Noone.Name", "EPartySystemPermissions::Noone" },
		{ "Noone.ToolTip", "Noone has access to do that action" },
		{ "ScriptName", "EPartySystemPermissions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EPartySystemPermissions",
		"EPartySystemPermissions",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions()
	{
		if (!Z_Registration_Info_UEnum_EPartySystemPermissions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartySystemPermissions.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartySystemPermissions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJoinRequestAction_;
	static UEnum* EJoinRequestAction__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJoinRequestAction_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJoinRequestAction_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EJoinRequestAction_"));
		}
		return Z_Registration_Info_UEnum_EJoinRequestAction_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EJoinRequestAction_>()
	{
		return EJoinRequestAction__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::Enumerators[] = {
		{ "EJoinRequestAction_::Manual", (int64)EJoinRequestAction_::Manual },
		{ "EJoinRequestAction_::AutoApprove", (int64)EJoinRequestAction_::AutoApprove },
		{ "EJoinRequestAction_::AutoReject", (int64)EJoinRequestAction_::AutoReject },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::Enum_MetaDataParams[] = {
		{ "AutoApprove.Name", "EJoinRequestAction_::AutoApprove" },
		{ "AutoReject.Name", "EJoinRequestAction_::AutoReject" },
		{ "BlueprintType", "true" },
		{ "Manual.Name", "EJoinRequestAction_::Manual" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "ScriptName", "EJoinRequestAction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EJoinRequestAction_",
		"EJoinRequestAction_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction_()
	{
		if (!Z_Registration_Info_UEnum_EJoinRequestAction_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoinRequestAction_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJoinRequestAction_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration;
class UScriptStruct* FOnlinePartyConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlinePartyConfiguration, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlinePartyConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlinePartyConfiguration>()
{
	return FOnlinePartyConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_JoinRequestAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinRequestAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_JoinRequestAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PresencePermissions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresencePermissions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PresencePermissions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InvitePermissions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvitePermissions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InvitePermissions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEnabled_MetaData[];
#endif
		static void NewProp_ChatEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChatEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldRemoveOnDisconnection_MetaData[];
#endif
		static void NewProp_ShouldRemoveOnDisconnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldRemoveOnDisconnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAcceptingMembers_MetaData[];
#endif
		static void NewProp_IsAcceptingMembers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAcceptingMembers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotAcceptingMembersReason_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NotAcceptingMembersReason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMembers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nickname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlinePartyConfiguration>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_JoinRequestAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_JoinRequestAction_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_JoinRequestAction = { "JoinRequestAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, JoinRequestAction), Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinRequestAction_, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_JoinRequestAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_JoinRequestAction_MetaData)) }; // 2772145005
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_PresencePermissions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_PresencePermissions_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/* Who can see this party and join it through presence? */" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "ToolTip", "Who can see this party and join it through presence?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_PresencePermissions = { "PresencePermissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, PresencePermissions), Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_PresencePermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_PresencePermissions_MetaData)) }; // 1778280791
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_InvitePermissions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_InvitePermissions_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/* Who can send out invites to other users when they're in this party? */" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "ToolTip", "Who can send out invites to other users when they're in this party?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_InvitePermissions = { "InvitePermissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, InvitePermissions), Z_Construct_UEnum_OnlineSubsystemBlueprints_EPartySystemPermissions, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_InvitePermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_InvitePermissions_MetaData)) }; // 1778280791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ChatEnabled_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ChatEnabled_SetBit(void* Obj)
	{
		((FOnlinePartyConfiguration*)Obj)->ChatEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ChatEnabled = { "ChatEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlinePartyConfiguration), &Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ChatEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ChatEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ChatEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ShouldRemoveOnDisconnection_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ShouldRemoveOnDisconnection_SetBit(void* Obj)
	{
		((FOnlinePartyConfiguration*)Obj)->ShouldRemoveOnDisconnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ShouldRemoveOnDisconnection = { "ShouldRemoveOnDisconnection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlinePartyConfiguration), &Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ShouldRemoveOnDisconnection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ShouldRemoveOnDisconnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ShouldRemoveOnDisconnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_IsAcceptingMembers_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_IsAcceptingMembers_SetBit(void* Obj)
	{
		((FOnlinePartyConfiguration*)Obj)->IsAcceptingMembers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_IsAcceptingMembers = { "IsAcceptingMembers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlinePartyConfiguration), &Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_IsAcceptingMembers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_IsAcceptingMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_IsAcceptingMembers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_NotAcceptingMembersReason_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_NotAcceptingMembersReason = { "NotAcceptingMembersReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, NotAcceptingMembersReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_NotAcceptingMembersReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_NotAcceptingMembersReason_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_MaxMembers_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, MaxMembers), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_MaxMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_MaxMembers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Nickname_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, Nickname), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Nickname_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlinePartyConfiguration, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Password_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_JoinRequestAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_JoinRequestAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_PresencePermissions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_PresencePermissions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_InvitePermissions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_InvitePermissions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ChatEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_ShouldRemoveOnDisconnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_IsAcceptingMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_NotAcceptingMembersReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_MaxMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Nickname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewProp_Password,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlinePartyConfiguration",
		sizeof(FOnlinePartyConfiguration),
		alignof(FOnlinePartyConfiguration),
		Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreatePartyCompletionResult_;
	static UEnum* ECreatePartyCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECreatePartyCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECreatePartyCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ECreatePartyCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_ECreatePartyCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ECreatePartyCompletionResult_>()
	{
		return ECreatePartyCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::Enumerators[] = {
		{ "ECreatePartyCompletionResult_::UnknownClientFailure", (int64)ECreatePartyCompletionResult_::UnknownClientFailure },
		{ "ECreatePartyCompletionResult_::AlreadyInPartyOfSpecifiedType", (int64)ECreatePartyCompletionResult_::AlreadyInPartyOfSpecifiedType },
		{ "ECreatePartyCompletionResult_::AlreadyCreatingParty", (int64)ECreatePartyCompletionResult_::AlreadyCreatingParty },
		{ "ECreatePartyCompletionResult_::AlreadyInParty", (int64)ECreatePartyCompletionResult_::AlreadyInParty },
		{ "ECreatePartyCompletionResult_::FailedToCreateMucRoom", (int64)ECreatePartyCompletionResult_::FailedToCreateMucRoom },
		{ "ECreatePartyCompletionResult_::NoResponse", (int64)ECreatePartyCompletionResult_::NoResponse },
		{ "ECreatePartyCompletionResult_::LoggedOut", (int64)ECreatePartyCompletionResult_::LoggedOut },
		{ "ECreatePartyCompletionResult_::NotPrimaryUser", (int64)ECreatePartyCompletionResult_::NotPrimaryUser },
		{ "ECreatePartyCompletionResult_::UnknownInternalFailure", (int64)ECreatePartyCompletionResult_::UnknownInternalFailure },
		{ "ECreatePartyCompletionResult_::Succeeded", (int64)ECreatePartyCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "AlreadyCreatingParty.Name", "ECreatePartyCompletionResult_::AlreadyCreatingParty" },
		{ "AlreadyInParty.Name", "ECreatePartyCompletionResult_::AlreadyInParty" },
		{ "AlreadyInPartyOfSpecifiedType.Name", "ECreatePartyCompletionResult_::AlreadyInPartyOfSpecifiedType" },
		{ "BlueprintType", "true" },
		{ "FailedToCreateMucRoom.Name", "ECreatePartyCompletionResult_::FailedToCreateMucRoom" },
		{ "LoggedOut.Name", "ECreatePartyCompletionResult_::LoggedOut" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoResponse.Name", "ECreatePartyCompletionResult_::NoResponse" },
		{ "NotPrimaryUser.Name", "ECreatePartyCompletionResult_::NotPrimaryUser" },
		{ "ScriptName", "ECreatePartyCompletionResult" },
		{ "Succeeded.Name", "ECreatePartyCompletionResult_::Succeeded" },
		{ "UnknownClientFailure.Name", "ECreatePartyCompletionResult_::UnknownClientFailure" },
		{ "UnknownInternalFailure.Name", "ECreatePartyCompletionResult_::UnknownInternalFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"ECreatePartyCompletionResult_",
		"ECreatePartyCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_ECreatePartyCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreatePartyCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_ECreatePartyCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECreatePartyCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJoinPartyCompletionResult_;
	static UEnum* EJoinPartyCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJoinPartyCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJoinPartyCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EJoinPartyCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_EJoinPartyCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EJoinPartyCompletionResult_>()
	{
		return EJoinPartyCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::Enumerators[] = {
		{ "EJoinPartyCompletionResult_::UnknownClientFailure", (int64)EJoinPartyCompletionResult_::UnknownClientFailure },
		{ "EJoinPartyCompletionResult_::BadBuild", (int64)EJoinPartyCompletionResult_::BadBuild },
		{ "EJoinPartyCompletionResult_::InvalidAccessKey", (int64)EJoinPartyCompletionResult_::InvalidAccessKey },
		{ "EJoinPartyCompletionResult_::AlreadyInLeadersJoiningList", (int64)EJoinPartyCompletionResult_::AlreadyInLeadersJoiningList },
		{ "EJoinPartyCompletionResult_::AlreadyInLeadersPartyRoster", (int64)EJoinPartyCompletionResult_::AlreadyInLeadersPartyRoster },
		{ "EJoinPartyCompletionResult_::NoSpace", (int64)EJoinPartyCompletionResult_::NoSpace },
		{ "EJoinPartyCompletionResult_::NotApproved", (int64)EJoinPartyCompletionResult_::NotApproved },
		{ "EJoinPartyCompletionResult_::RequesteeNotMember", (int64)EJoinPartyCompletionResult_::RequesteeNotMember },
		{ "EJoinPartyCompletionResult_::RequesteeNotLeader", (int64)EJoinPartyCompletionResult_::RequesteeNotLeader },
		{ "EJoinPartyCompletionResult_::NoResponse", (int64)EJoinPartyCompletionResult_::NoResponse },
		{ "EJoinPartyCompletionResult_::LoggedOut", (int64)EJoinPartyCompletionResult_::LoggedOut },
		{ "EJoinPartyCompletionResult_::UnableToRejoin", (int64)EJoinPartyCompletionResult_::UnableToRejoin },
		{ "EJoinPartyCompletionResult_::IncompatiblePlatform", (int64)EJoinPartyCompletionResult_::IncompatiblePlatform },
		{ "EJoinPartyCompletionResult_::AlreadyJoiningParty", (int64)EJoinPartyCompletionResult_::AlreadyJoiningParty },
		{ "EJoinPartyCompletionResult_::AlreadyInParty", (int64)EJoinPartyCompletionResult_::AlreadyInParty },
		{ "EJoinPartyCompletionResult_::JoinInfoInvalid", (int64)EJoinPartyCompletionResult_::JoinInfoInvalid },
		{ "EJoinPartyCompletionResult_::AlreadyInPartyOfSpecifiedType", (int64)EJoinPartyCompletionResult_::AlreadyInPartyOfSpecifiedType },
		{ "EJoinPartyCompletionResult_::MessagingFailure", (int64)EJoinPartyCompletionResult_::MessagingFailure },
		{ "EJoinPartyCompletionResult_::GameSpecificReason", (int64)EJoinPartyCompletionResult_::GameSpecificReason },
		{ "EJoinPartyCompletionResult_::UnknownInternalFailure", (int64)EJoinPartyCompletionResult_::UnknownInternalFailure },
		{ "EJoinPartyCompletionResult_::Succeeded", (int64)EJoinPartyCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInLeadersJoiningList.Comment", "/** The party leader already has you in the joining players list */" },
		{ "AlreadyInLeadersJoiningList.Name", "EJoinPartyCompletionResult_::AlreadyInLeadersJoiningList" },
		{ "AlreadyInLeadersJoiningList.ToolTip", "The party leader already has you in the joining players list" },
		{ "AlreadyInLeadersPartyRoster.Comment", "/** The party leader already has you in the party members list */" },
		{ "AlreadyInLeadersPartyRoster.Name", "EJoinPartyCompletionResult_::AlreadyInLeadersPartyRoster" },
		{ "AlreadyInLeadersPartyRoster.ToolTip", "The party leader already has you in the party members list" },
		{ "AlreadyInParty.Comment", "/** We are already in the party that you are attempting to join.  No message sent to the party leader. */" },
		{ "AlreadyInParty.Name", "EJoinPartyCompletionResult_::AlreadyInParty" },
		{ "AlreadyInParty.ToolTip", "We are already in the party that you are attempting to join.  No message sent to the party leader." },
		{ "AlreadyInPartyOfSpecifiedType.Comment", "/** We are already in a party of the specified type.  No message sent to the party leader. */" },
		{ "AlreadyInPartyOfSpecifiedType.Name", "EJoinPartyCompletionResult_::AlreadyInPartyOfSpecifiedType" },
		{ "AlreadyInPartyOfSpecifiedType.ToolTip", "We are already in a party of the specified type.  No message sent to the party leader." },
		{ "AlreadyJoiningParty.Comment", "/** We are currently waiting for a response for a previous join request for the specified party.  No message sent to\n       party leader. */" },
		{ "AlreadyJoiningParty.Name", "EJoinPartyCompletionResult_::AlreadyJoiningParty" },
		{ "AlreadyJoiningParty.ToolTip", "We are currently waiting for a response for a previous join request for the specified party.  No message sent to\n      party leader." },
		{ "BadBuild.Comment", "/** Your build id does not match the build id of the party */" },
		{ "BadBuild.Name", "EJoinPartyCompletionResult_::BadBuild" },
		{ "BadBuild.ToolTip", "Your build id does not match the build id of the party" },
		{ "BlueprintType", "true" },
		{ "GameSpecificReason.Comment", "/** Game specific reason, indicated by the NotApprovedReason parameter.  Message might or might not have been sent\n       to party leader. */" },
		{ "GameSpecificReason.Name", "EJoinPartyCompletionResult_::GameSpecificReason" },
		{ "GameSpecificReason.ToolTip", "Game specific reason, indicated by the NotApprovedReason parameter.  Message might or might not have been sent\n      to party leader." },
		{ "IncompatiblePlatform.Comment", "/** Your platform is not compatible with the party */" },
		{ "IncompatiblePlatform.Name", "EJoinPartyCompletionResult_::IncompatiblePlatform" },
		{ "IncompatiblePlatform.ToolTip", "Your platform is not compatible with the party" },
		{ "InvalidAccessKey.Comment", "/** Your provided access key does not match the party's access key */" },
		{ "InvalidAccessKey.Name", "EJoinPartyCompletionResult_::InvalidAccessKey" },
		{ "InvalidAccessKey.ToolTip", "Your provided access key does not match the party's access key" },
		{ "JoinInfoInvalid.Comment", "/** The party join info is invalid.  No message sent to the party leader. */" },
		{ "JoinInfoInvalid.Name", "EJoinPartyCompletionResult_::JoinInfoInvalid" },
		{ "JoinInfoInvalid.ToolTip", "The party join info is invalid.  No message sent to the party leader." },
		{ "LoggedOut.Comment", "/** You were logged out while attempting to join the party */" },
		{ "LoggedOut.Name", "EJoinPartyCompletionResult_::LoggedOut" },
		{ "LoggedOut.ToolTip", "You were logged out while attempting to join the party" },
		{ "MessagingFailure.Comment", "/** Failed to send a message to the party leader.  No message sent to the party leader. */" },
		{ "MessagingFailure.Name", "EJoinPartyCompletionResult_::MessagingFailure" },
		{ "MessagingFailure.ToolTip", "Failed to send a message to the party leader.  No message sent to the party leader." },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoResponse.Comment", "/** A response was not received from the party leader in a timely manner, the join attempt is considered failed */" },
		{ "NoResponse.Name", "EJoinPartyCompletionResult_::NoResponse" },
		{ "NoResponse.ToolTip", "A response was not received from the party leader in a timely manner, the join attempt is considered failed" },
		{ "NoSpace.Comment", "/** The party leader rejected your join request because the party is full*/" },
		{ "NoSpace.Name", "EJoinPartyCompletionResult_::NoSpace" },
		{ "NoSpace.ToolTip", "The party leader rejected your join request because the party is full" },
		{ "NotApproved.Comment", "/** The party leader rejected your join request for a game specific reason, indicated by the NotApprovedReason\n       parameter */" },
		{ "NotApproved.Name", "EJoinPartyCompletionResult_::NotApproved" },
		{ "NotApproved.ToolTip", "The party leader rejected your join request for a game specific reason, indicated by the NotApprovedReason\n      parameter" },
		{ "RequesteeNotLeader.Comment", "/** The player you send the join request to is not the leader of the specified party */" },
		{ "RequesteeNotLeader.Name", "EJoinPartyCompletionResult_::RequesteeNotLeader" },
		{ "RequesteeNotLeader.ToolTip", "The player you send the join request to is not the leader of the specified party" },
		{ "RequesteeNotMember.Comment", "/** The player you send the join request to is not a member of the specified party */" },
		{ "RequesteeNotMember.Name", "EJoinPartyCompletionResult_::RequesteeNotMember" },
		{ "RequesteeNotMember.ToolTip", "The player you send the join request to is not a member of the specified party" },
		{ "ScriptName", "EJoinPartyCompletionResult" },
		{ "Succeeded.Comment", "/** Successully joined the party */" },
		{ "Succeeded.Name", "EJoinPartyCompletionResult_::Succeeded" },
		{ "Succeeded.ToolTip", "Successully joined the party" },
		{ "UnableToRejoin.Comment", "/** You were unable to rejoin the party */" },
		{ "UnableToRejoin.Name", "EJoinPartyCompletionResult_::UnableToRejoin" },
		{ "UnableToRejoin.ToolTip", "You were unable to rejoin the party" },
		{ "UnknownClientFailure.Comment", "/** Unspecified error.  No message sent to party leader. */" },
		{ "UnknownClientFailure.Name", "EJoinPartyCompletionResult_::UnknownClientFailure" },
		{ "UnknownClientFailure.ToolTip", "Unspecified error.  No message sent to party leader." },
		{ "UnknownInternalFailure.Comment", "/** DEPRECATED */" },
		{ "UnknownInternalFailure.Name", "EJoinPartyCompletionResult_::UnknownInternalFailure" },
		{ "UnknownInternalFailure.ToolTip", "DEPRECATED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EJoinPartyCompletionResult_",
		"EJoinPartyCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_EJoinPartyCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoinPartyCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EJoinPartyCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJoinPartyCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeavePartyCompletionResult_;
	static UEnum* ELeavePartyCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELeavePartyCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELeavePartyCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ELeavePartyCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_ELeavePartyCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ELeavePartyCompletionResult_>()
	{
		return ELeavePartyCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::Enumerators[] = {
		{ "ELeavePartyCompletionResult_::UnknownClientFailure", (int64)ELeavePartyCompletionResult_::UnknownClientFailure },
		{ "ELeavePartyCompletionResult_::NoResponse", (int64)ELeavePartyCompletionResult_::NoResponse },
		{ "ELeavePartyCompletionResult_::LoggedOut", (int64)ELeavePartyCompletionResult_::LoggedOut },
		{ "ELeavePartyCompletionResult_::UnknownParty", (int64)ELeavePartyCompletionResult_::UnknownParty },
		{ "ELeavePartyCompletionResult_::LeavePending", (int64)ELeavePartyCompletionResult_::LeavePending },
		{ "ELeavePartyCompletionResult_::UnknownLocalUser", (int64)ELeavePartyCompletionResult_::UnknownLocalUser },
		{ "ELeavePartyCompletionResult_::NotMember", (int64)ELeavePartyCompletionResult_::NotMember },
		{ "ELeavePartyCompletionResult_::MessagingFailure", (int64)ELeavePartyCompletionResult_::MessagingFailure },
		{ "ELeavePartyCompletionResult_::UnknownTransportFailure", (int64)ELeavePartyCompletionResult_::UnknownTransportFailure },
		{ "ELeavePartyCompletionResult_::UnknownInternalFailure", (int64)ELeavePartyCompletionResult_::UnknownInternalFailure },
		{ "ELeavePartyCompletionResult_::Succeeded", (int64)ELeavePartyCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeavePending.Comment", "/** You are already leaving the party.  No message sent. */" },
		{ "LeavePending.Name", "ELeavePartyCompletionResult_::LeavePending" },
		{ "LeavePending.ToolTip", "You are already leaving the party.  No message sent." },
		{ "LoggedOut.Comment", "/** You were logged out while attempting to leave the party.  Party has been left. */" },
		{ "LoggedOut.Name", "ELeavePartyCompletionResult_::LoggedOut" },
		{ "LoggedOut.ToolTip", "You were logged out while attempting to leave the party.  Party has been left." },
		{ "MessagingFailure.Comment", "/** DEPRECATED! */" },
		{ "MessagingFailure.Name", "ELeavePartyCompletionResult_::MessagingFailure" },
		{ "MessagingFailure.ToolTip", "DEPRECATED!" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoResponse.Comment", "/** Timed out waiting for a response to the message.  Party has been left. */" },
		{ "NoResponse.Name", "ELeavePartyCompletionResult_::NoResponse" },
		{ "NoResponse.ToolTip", "Timed out waiting for a response to the message.  Party has been left." },
		{ "NotMember.Comment", "/** DEPRECATED! */" },
		{ "NotMember.Name", "ELeavePartyCompletionResult_::NotMember" },
		{ "NotMember.ToolTip", "DEPRECATED!" },
		{ "ScriptName", "ELeavePartyCompletionResult" },
		{ "Succeeded.Comment", "/** Successfully left the party */" },
		{ "Succeeded.Name", "ELeavePartyCompletionResult_::Succeeded" },
		{ "Succeeded.ToolTip", "Successfully left the party" },
		{ "UnknownClientFailure.Comment", "/** Unspecified error.  No message sent. */" },
		{ "UnknownClientFailure.Name", "ELeavePartyCompletionResult_::UnknownClientFailure" },
		{ "UnknownClientFailure.ToolTip", "Unspecified error.  No message sent." },
		{ "UnknownInternalFailure.Comment", "/** DEPRECATED! */" },
		{ "UnknownInternalFailure.Name", "ELeavePartyCompletionResult_::UnknownInternalFailure" },
		{ "UnknownInternalFailure.ToolTip", "DEPRECATED!" },
		{ "UnknownLocalUser.Comment", "/** DEPRECATED! */" },
		{ "UnknownLocalUser.Name", "ELeavePartyCompletionResult_::UnknownLocalUser" },
		{ "UnknownLocalUser.ToolTip", "DEPRECATED!" },
		{ "UnknownParty.Comment", "/** You are not in the specified party.  No message sent. */" },
		{ "UnknownParty.Name", "ELeavePartyCompletionResult_::UnknownParty" },
		{ "UnknownParty.ToolTip", "You are not in the specified party.  No message sent." },
		{ "UnknownTransportFailure.Comment", "/** DEPRECATED! */" },
		{ "UnknownTransportFailure.Name", "ELeavePartyCompletionResult_::UnknownTransportFailure" },
		{ "UnknownTransportFailure.ToolTip", "DEPRECATED!" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"ELeavePartyCompletionResult_",
		"ELeavePartyCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_ELeavePartyCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeavePartyCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_ELeavePartyCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELeavePartyCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_;
	static UEnum* EUpdateConfigCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EUpdateConfigCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EUpdateConfigCompletionResult_>()
	{
		return EUpdateConfigCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::Enumerators[] = {
		{ "EUpdateConfigCompletionResult_::UnknownClientFailure", (int64)EUpdateConfigCompletionResult_::UnknownClientFailure },
		{ "EUpdateConfigCompletionResult_::UnknownParty", (int64)EUpdateConfigCompletionResult_::UnknownParty },
		{ "EUpdateConfigCompletionResult_::LocalMemberNotMember", (int64)EUpdateConfigCompletionResult_::LocalMemberNotMember },
		{ "EUpdateConfigCompletionResult_::LocalMemberNotLeader", (int64)EUpdateConfigCompletionResult_::LocalMemberNotLeader },
		{ "EUpdateConfigCompletionResult_::RemoteMemberNotMember", (int64)EUpdateConfigCompletionResult_::RemoteMemberNotMember },
		{ "EUpdateConfigCompletionResult_::MessagingFailure", (int64)EUpdateConfigCompletionResult_::MessagingFailure },
		{ "EUpdateConfigCompletionResult_::NoResponse", (int64)EUpdateConfigCompletionResult_::NoResponse },
		{ "EUpdateConfigCompletionResult_::UnknownInternalFailure", (int64)EUpdateConfigCompletionResult_::UnknownInternalFailure },
		{ "EUpdateConfigCompletionResult_::Succeeded", (int64)EUpdateConfigCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LocalMemberNotLeader.Name", "EUpdateConfigCompletionResult_::LocalMemberNotLeader" },
		{ "LocalMemberNotMember.Name", "EUpdateConfigCompletionResult_::LocalMemberNotMember" },
		{ "MessagingFailure.Name", "EUpdateConfigCompletionResult_::MessagingFailure" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoResponse.Name", "EUpdateConfigCompletionResult_::NoResponse" },
		{ "RemoteMemberNotMember.Name", "EUpdateConfigCompletionResult_::RemoteMemberNotMember" },
		{ "ScriptName", "EUpdateConfigCompletionResult" },
		{ "Succeeded.Name", "EUpdateConfigCompletionResult_::Succeeded" },
		{ "UnknownClientFailure.Name", "EUpdateConfigCompletionResult_::UnknownClientFailure" },
		{ "UnknownInternalFailure.Name", "EUpdateConfigCompletionResult_::UnknownInternalFailure" },
		{ "UnknownParty.Name", "EUpdateConfigCompletionResult_::UnknownParty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EUpdateConfigCompletionResult_",
		"EUpdateConfigCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EUpdateConfigCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_;
	static UEnum* ERequestPartyInvitationCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ERequestPartyInvitationCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ERequestPartyInvitationCompletionResult_>()
	{
		return ERequestPartyInvitationCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::Enumerators[] = {
		{ "ERequestPartyInvitationCompletionResult_::NotLoggedIn", (int64)ERequestPartyInvitationCompletionResult_::NotLoggedIn },
		{ "ERequestPartyInvitationCompletionResult_::InvitePending", (int64)ERequestPartyInvitationCompletionResult_::InvitePending },
		{ "ERequestPartyInvitationCompletionResult_::AlreadyInParty", (int64)ERequestPartyInvitationCompletionResult_::AlreadyInParty },
		{ "ERequestPartyInvitationCompletionResult_::PartyFull", (int64)ERequestPartyInvitationCompletionResult_::PartyFull },
		{ "ERequestPartyInvitationCompletionResult_::NoPermission", (int64)ERequestPartyInvitationCompletionResult_::NoPermission },
		{ "ERequestPartyInvitationCompletionResult_::UnknownInternalFailure", (int64)ERequestPartyInvitationCompletionResult_::UnknownInternalFailure },
		{ "ERequestPartyInvitationCompletionResult_::Succeeded", (int64)ERequestPartyInvitationCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInParty.Name", "ERequestPartyInvitationCompletionResult_::AlreadyInParty" },
		{ "BlueprintType", "true" },
		{ "InvitePending.Name", "ERequestPartyInvitationCompletionResult_::InvitePending" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoPermission.Name", "ERequestPartyInvitationCompletionResult_::NoPermission" },
		{ "NotLoggedIn.Name", "ERequestPartyInvitationCompletionResult_::NotLoggedIn" },
		{ "PartyFull.Name", "ERequestPartyInvitationCompletionResult_::PartyFull" },
		{ "ScriptName", "ERequestPartyInvitationCompletionResult" },
		{ "Succeeded.Name", "ERequestPartyInvitationCompletionResult_::Succeeded" },
		{ "UnknownInternalFailure.Name", "ERequestPartyInvitationCompletionResult_::UnknownInternalFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"ERequestPartyInvitationCompletionResult_",
		"ERequestPartyInvitationCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_ERequestPartyInvitationCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_;
	static UEnum* ESendPartyInvitationCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ESendPartyInvitationCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ESendPartyInvitationCompletionResult_>()
	{
		return ESendPartyInvitationCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::Enumerators[] = {
		{ "ESendPartyInvitationCompletionResult_::NotLoggedIn", (int64)ESendPartyInvitationCompletionResult_::NotLoggedIn },
		{ "ESendPartyInvitationCompletionResult_::InvitePending", (int64)ESendPartyInvitationCompletionResult_::InvitePending },
		{ "ESendPartyInvitationCompletionResult_::AlreadyInParty", (int64)ESendPartyInvitationCompletionResult_::AlreadyInParty },
		{ "ESendPartyInvitationCompletionResult_::PartyFull", (int64)ESendPartyInvitationCompletionResult_::PartyFull },
		{ "ESendPartyInvitationCompletionResult_::NoPermission", (int64)ESendPartyInvitationCompletionResult_::NoPermission },
		{ "ESendPartyInvitationCompletionResult_::RateLimited", (int64)ESendPartyInvitationCompletionResult_::RateLimited },
		{ "ESendPartyInvitationCompletionResult_::UnknownInternalFailure", (int64)ESendPartyInvitationCompletionResult_::UnknownInternalFailure },
		{ "ESendPartyInvitationCompletionResult_::Succeeded", (int64)ESendPartyInvitationCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInParty.Name", "ESendPartyInvitationCompletionResult_::AlreadyInParty" },
		{ "BlueprintType", "true" },
		{ "InvitePending.Name", "ESendPartyInvitationCompletionResult_::InvitePending" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoPermission.Name", "ESendPartyInvitationCompletionResult_::NoPermission" },
		{ "NotLoggedIn.Name", "ESendPartyInvitationCompletionResult_::NotLoggedIn" },
		{ "PartyFull.Name", "ESendPartyInvitationCompletionResult_::PartyFull" },
		{ "RateLimited.Name", "ESendPartyInvitationCompletionResult_::RateLimited" },
		{ "ScriptName", "ESendPartyInvitationCompletionResult" },
		{ "Succeeded.Name", "ESendPartyInvitationCompletionResult_::Succeeded" },
		{ "UnknownInternalFailure.Name", "ESendPartyInvitationCompletionResult_::UnknownInternalFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"ESendPartyInvitationCompletionResult_",
		"ESendPartyInvitationCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_ESendPartyInvitationCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_;
	static UEnum* EAcceptPartyInvitationCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EAcceptPartyInvitationCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EAcceptPartyInvitationCompletionResult_>()
	{
		return EAcceptPartyInvitationCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::Enumerators[] = {
		{ "EAcceptPartyInvitationCompletionResult_::NotLoggedIn", (int64)EAcceptPartyInvitationCompletionResult_::NotLoggedIn },
		{ "EAcceptPartyInvitationCompletionResult_::InvitePending", (int64)EAcceptPartyInvitationCompletionResult_::InvitePending },
		{ "EAcceptPartyInvitationCompletionResult_::AlreadyInParty", (int64)EAcceptPartyInvitationCompletionResult_::AlreadyInParty },
		{ "EAcceptPartyInvitationCompletionResult_::PartyFull", (int64)EAcceptPartyInvitationCompletionResult_::PartyFull },
		{ "EAcceptPartyInvitationCompletionResult_::NoPermission", (int64)EAcceptPartyInvitationCompletionResult_::NoPermission },
		{ "EAcceptPartyInvitationCompletionResult_::UnknownInternalFailure", (int64)EAcceptPartyInvitationCompletionResult_::UnknownInternalFailure },
		{ "EAcceptPartyInvitationCompletionResult_::Succeeded", (int64)EAcceptPartyInvitationCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInParty.Name", "EAcceptPartyInvitationCompletionResult_::AlreadyInParty" },
		{ "BlueprintType", "true" },
		{ "InvitePending.Name", "EAcceptPartyInvitationCompletionResult_::InvitePending" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoPermission.Name", "EAcceptPartyInvitationCompletionResult_::NoPermission" },
		{ "NotLoggedIn.Name", "EAcceptPartyInvitationCompletionResult_::NotLoggedIn" },
		{ "PartyFull.Name", "EAcceptPartyInvitationCompletionResult_::PartyFull" },
		{ "ScriptName", "EAcceptPartyInvitationCompletionResult" },
		{ "Succeeded.Name", "EAcceptPartyInvitationCompletionResult_::Succeeded" },
		{ "UnknownInternalFailure.Name", "EAcceptPartyInvitationCompletionResult_::UnknownInternalFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EAcceptPartyInvitationCompletionResult_",
		"EAcceptPartyInvitationCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EAcceptPartyInvitationCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_;
	static UEnum* ERejectPartyInvitationCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ERejectPartyInvitationCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<ERejectPartyInvitationCompletionResult_>()
	{
		return ERejectPartyInvitationCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::Enumerators[] = {
		{ "ERejectPartyInvitationCompletionResult_::NotLoggedIn", (int64)ERejectPartyInvitationCompletionResult_::NotLoggedIn },
		{ "ERejectPartyInvitationCompletionResult_::InvitePending", (int64)ERejectPartyInvitationCompletionResult_::InvitePending },
		{ "ERejectPartyInvitationCompletionResult_::AlreadyInParty", (int64)ERejectPartyInvitationCompletionResult_::AlreadyInParty },
		{ "ERejectPartyInvitationCompletionResult_::PartyFull", (int64)ERejectPartyInvitationCompletionResult_::PartyFull },
		{ "ERejectPartyInvitationCompletionResult_::NoPermission", (int64)ERejectPartyInvitationCompletionResult_::NoPermission },
		{ "ERejectPartyInvitationCompletionResult_::UnknownInternalFailure", (int64)ERejectPartyInvitationCompletionResult_::UnknownInternalFailure },
		{ "ERejectPartyInvitationCompletionResult_::Succeeded", (int64)ERejectPartyInvitationCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInParty.Name", "ERejectPartyInvitationCompletionResult_::AlreadyInParty" },
		{ "BlueprintType", "true" },
		{ "InvitePending.Name", "ERejectPartyInvitationCompletionResult_::InvitePending" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoPermission.Name", "ERejectPartyInvitationCompletionResult_::NoPermission" },
		{ "NotLoggedIn.Name", "ERejectPartyInvitationCompletionResult_::NotLoggedIn" },
		{ "PartyFull.Name", "ERejectPartyInvitationCompletionResult_::PartyFull" },
		{ "ScriptName", "ERejectPartyInvitationCompletionResult" },
		{ "Succeeded.Name", "ERejectPartyInvitationCompletionResult_::Succeeded" },
		{ "UnknownInternalFailure.Name", "ERejectPartyInvitationCompletionResult_::UnknownInternalFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"ERejectPartyInvitationCompletionResult_",
		"ERejectPartyInvitationCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_ERejectPartyInvitationCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKickMemberCompletionResult_;
	static UEnum* EKickMemberCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKickMemberCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKickMemberCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EKickMemberCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_EKickMemberCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EKickMemberCompletionResult_>()
	{
		return EKickMemberCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::Enumerators[] = {
		{ "EKickMemberCompletionResult_::UnknownClientFailure", (int64)EKickMemberCompletionResult_::UnknownClientFailure },
		{ "EKickMemberCompletionResult_::UnknownParty", (int64)EKickMemberCompletionResult_::UnknownParty },
		{ "EKickMemberCompletionResult_::LocalMemberNotMember", (int64)EKickMemberCompletionResult_::LocalMemberNotMember },
		{ "EKickMemberCompletionResult_::LocalMemberNotLeader", (int64)EKickMemberCompletionResult_::LocalMemberNotLeader },
		{ "EKickMemberCompletionResult_::RemoteMemberNotMember", (int64)EKickMemberCompletionResult_::RemoteMemberNotMember },
		{ "EKickMemberCompletionResult_::MessagingFailure", (int64)EKickMemberCompletionResult_::MessagingFailure },
		{ "EKickMemberCompletionResult_::NoResponse", (int64)EKickMemberCompletionResult_::NoResponse },
		{ "EKickMemberCompletionResult_::LoggedOut", (int64)EKickMemberCompletionResult_::LoggedOut },
		{ "EKickMemberCompletionResult_::UnknownInternalFailure", (int64)EKickMemberCompletionResult_::UnknownInternalFailure },
		{ "EKickMemberCompletionResult_::Succeeded", (int64)EKickMemberCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LocalMemberNotLeader.Name", "EKickMemberCompletionResult_::LocalMemberNotLeader" },
		{ "LocalMemberNotMember.Name", "EKickMemberCompletionResult_::LocalMemberNotMember" },
		{ "LoggedOut.Name", "EKickMemberCompletionResult_::LoggedOut" },
		{ "MessagingFailure.Name", "EKickMemberCompletionResult_::MessagingFailure" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoResponse.Name", "EKickMemberCompletionResult_::NoResponse" },
		{ "RemoteMemberNotMember.Name", "EKickMemberCompletionResult_::RemoteMemberNotMember" },
		{ "ScriptName", "EKickMemberCompletionResult" },
		{ "Succeeded.Name", "EKickMemberCompletionResult_::Succeeded" },
		{ "UnknownClientFailure.Name", "EKickMemberCompletionResult_::UnknownClientFailure" },
		{ "UnknownInternalFailure.Name", "EKickMemberCompletionResult_::UnknownInternalFailure" },
		{ "UnknownParty.Name", "EKickMemberCompletionResult_::UnknownParty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EKickMemberCompletionResult_",
		"EKickMemberCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_EKickMemberCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKickMemberCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EKickMemberCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKickMemberCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_;
	static UEnum* EPromoteMemberCompletionResult__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EPromoteMemberCompletionResult_"));
		}
		return Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EPromoteMemberCompletionResult_>()
	{
		return EPromoteMemberCompletionResult__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::Enumerators[] = {
		{ "EPromoteMemberCompletionResult_::UnknownClientFailure", (int64)EPromoteMemberCompletionResult_::UnknownClientFailure },
		{ "EPromoteMemberCompletionResult_::UnknownServiceFailure", (int64)EPromoteMemberCompletionResult_::UnknownServiceFailure },
		{ "EPromoteMemberCompletionResult_::UnknownParty", (int64)EPromoteMemberCompletionResult_::UnknownParty },
		{ "EPromoteMemberCompletionResult_::LocalMemberNotMember", (int64)EPromoteMemberCompletionResult_::LocalMemberNotMember },
		{ "EPromoteMemberCompletionResult_::LocalMemberNotLeader", (int64)EPromoteMemberCompletionResult_::LocalMemberNotLeader },
		{ "EPromoteMemberCompletionResult_::PromotionAlreadyPending", (int64)EPromoteMemberCompletionResult_::PromotionAlreadyPending },
		{ "EPromoteMemberCompletionResult_::TargetIsSelf", (int64)EPromoteMemberCompletionResult_::TargetIsSelf },
		{ "EPromoteMemberCompletionResult_::TargetNotMember", (int64)EPromoteMemberCompletionResult_::TargetNotMember },
		{ "EPromoteMemberCompletionResult_::MessagingFailure", (int64)EPromoteMemberCompletionResult_::MessagingFailure },
		{ "EPromoteMemberCompletionResult_::NoResponse", (int64)EPromoteMemberCompletionResult_::NoResponse },
		{ "EPromoteMemberCompletionResult_::LoggedOut", (int64)EPromoteMemberCompletionResult_::LoggedOut },
		{ "EPromoteMemberCompletionResult_::UnknownInternalFailure", (int64)EPromoteMemberCompletionResult_::UnknownInternalFailure },
		{ "EPromoteMemberCompletionResult_::Succeeded", (int64)EPromoteMemberCompletionResult_::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LocalMemberNotLeader.Name", "EPromoteMemberCompletionResult_::LocalMemberNotLeader" },
		{ "LocalMemberNotMember.Name", "EPromoteMemberCompletionResult_::LocalMemberNotMember" },
		{ "LoggedOut.Name", "EPromoteMemberCompletionResult_::LoggedOut" },
		{ "MessagingFailure.Name", "EPromoteMemberCompletionResult_::MessagingFailure" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "NoResponse.Name", "EPromoteMemberCompletionResult_::NoResponse" },
		{ "PromotionAlreadyPending.Name", "EPromoteMemberCompletionResult_::PromotionAlreadyPending" },
		{ "ScriptName", "EPromoteMemberCompletionResult" },
		{ "Succeeded.Name", "EPromoteMemberCompletionResult_::Succeeded" },
		{ "TargetIsSelf.Name", "EPromoteMemberCompletionResult_::TargetIsSelf" },
		{ "TargetNotMember.Name", "EPromoteMemberCompletionResult_::TargetNotMember" },
		{ "UnknownClientFailure.Name", "EPromoteMemberCompletionResult_::UnknownClientFailure" },
		{ "UnknownInternalFailure.Name", "EPromoteMemberCompletionResult_::UnknownInternalFailure" },
		{ "UnknownParty.Name", "EPromoteMemberCompletionResult_::UnknownParty" },
		{ "UnknownServiceFailure.Name", "EPromoteMemberCompletionResult_::UnknownServiceFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EPromoteMemberCompletionResult_",
		"EPromoteMemberCompletionResult_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult_()
	{
		if (!Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EPromoteMemberCompletionResult__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInvitationResponse_;
	static UEnum* EInvitationResponse__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInvitationResponse_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInvitationResponse_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EInvitationResponse_"));
		}
		return Z_Registration_Info_UEnum_EInvitationResponse_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EInvitationResponse_>()
	{
		return EInvitationResponse__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::Enumerators[] = {
		{ "EInvitationResponse_::UnknownFailure", (int64)EInvitationResponse_::UnknownFailure },
		{ "EInvitationResponse_::BadBuild", (int64)EInvitationResponse_::BadBuild },
		{ "EInvitationResponse_::Rejected", (int64)EInvitationResponse_::Rejected },
		{ "EInvitationResponse_::Accepted", (int64)EInvitationResponse_::Accepted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::Enum_MetaDataParams[] = {
		{ "Accepted.Name", "EInvitationResponse_::Accepted" },
		{ "BadBuild.Name", "EInvitationResponse_::BadBuild" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBPartyTypes.h" },
		{ "Rejected.Name", "EInvitationResponse_::Rejected" },
		{ "ScriptName", "EInvitationResponse" },
		{ "UnknownFailure.Name", "EInvitationResponse_::UnknownFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EInvitationResponse_",
		"EInvitationResponse_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse_()
	{
		if (!Z_Registration_Info_UEnum_EInvitationResponse_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInvitationResponse_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EInvitationResponse__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInvitationResponse_.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::EnumInfo[] = {
		{ EMemberConnectionStatus__StaticEnum, TEXT("EMemberConnectionStatus_"), &Z_Registration_Info_UEnum_EMemberConnectionStatus_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1290978864U) },
		{ EMemberExitedReason__StaticEnum, TEXT("EMemberExitedReason_"), &Z_Registration_Info_UEnum_EMemberExitedReason_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3777270958U) },
		{ EPartyState__StaticEnum, TEXT("EPartyState_"), &Z_Registration_Info_UEnum_EPartyState_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2498032405U) },
		{ EPartySystemPermissions_StaticEnum, TEXT("EPartySystemPermissions"), &Z_Registration_Info_UEnum_EPartySystemPermissions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1778280791U) },
		{ EJoinRequestAction__StaticEnum, TEXT("EJoinRequestAction_"), &Z_Registration_Info_UEnum_EJoinRequestAction_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2772145005U) },
		{ ECreatePartyCompletionResult__StaticEnum, TEXT("ECreatePartyCompletionResult_"), &Z_Registration_Info_UEnum_ECreatePartyCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3276375972U) },
		{ EJoinPartyCompletionResult__StaticEnum, TEXT("EJoinPartyCompletionResult_"), &Z_Registration_Info_UEnum_EJoinPartyCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4004831350U) },
		{ ELeavePartyCompletionResult__StaticEnum, TEXT("ELeavePartyCompletionResult_"), &Z_Registration_Info_UEnum_ELeavePartyCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3259514118U) },
		{ EUpdateConfigCompletionResult__StaticEnum, TEXT("EUpdateConfigCompletionResult_"), &Z_Registration_Info_UEnum_EUpdateConfigCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1782688926U) },
		{ ERequestPartyInvitationCompletionResult__StaticEnum, TEXT("ERequestPartyInvitationCompletionResult_"), &Z_Registration_Info_UEnum_ERequestPartyInvitationCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1551415764U) },
		{ ESendPartyInvitationCompletionResult__StaticEnum, TEXT("ESendPartyInvitationCompletionResult_"), &Z_Registration_Info_UEnum_ESendPartyInvitationCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2409326852U) },
		{ EAcceptPartyInvitationCompletionResult__StaticEnum, TEXT("EAcceptPartyInvitationCompletionResult_"), &Z_Registration_Info_UEnum_EAcceptPartyInvitationCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3434485831U) },
		{ ERejectPartyInvitationCompletionResult__StaticEnum, TEXT("ERejectPartyInvitationCompletionResult_"), &Z_Registration_Info_UEnum_ERejectPartyInvitationCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 361524657U) },
		{ EKickMemberCompletionResult__StaticEnum, TEXT("EKickMemberCompletionResult_"), &Z_Registration_Info_UEnum_EKickMemberCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 501676892U) },
		{ EPromoteMemberCompletionResult__StaticEnum, TEXT("EPromoteMemberCompletionResult_"), &Z_Registration_Info_UEnum_EPromoteMemberCompletionResult_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 953130480U) },
		{ EInvitationResponse__StaticEnum, TEXT("EInvitationResponse_"), &Z_Registration_Info_UEnum_EInvitationResponse_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1885497179U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::ScriptStructInfo[] = {
		{ FOnlinePartyConfiguration::StaticStruct, Z_Construct_UScriptStruct_FOnlinePartyConfiguration_Statics::NewStructOps, TEXT("OnlinePartyConfiguration"), &Z_Registration_Info_UScriptStruct_OnlinePartyConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlinePartyConfiguration), 1752554292U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParty, UParty::StaticClass, TEXT("UParty"), &Z_Registration_Info_UClass_UParty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParty), 4015923891U) },
		{ Z_Construct_UClass_UBlueprintPartyMember, UBlueprintPartyMember::StaticClass, TEXT("UBlueprintPartyMember"), &Z_Registration_Info_UClass_UBlueprintPartyMember, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintPartyMember), 866371894U) },
		{ Z_Construct_UClass_UReadablePartyData, UReadablePartyData::StaticClass, TEXT("UReadablePartyData"), &Z_Registration_Info_UClass_UReadablePartyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadablePartyData), 2423532112U) },
		{ Z_Construct_UClass_UMutablePartyData, UMutablePartyData::StaticClass, TEXT("UMutablePartyData"), &Z_Registration_Info_UClass_UMutablePartyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMutablePartyData), 2709931003U) },
		{ Z_Construct_UClass_UPartyId, UPartyId::StaticClass, TEXT("UPartyId"), &Z_Registration_Info_UClass_UPartyId, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyId), 301338504U) },
		{ Z_Construct_UClass_UOnlinePartyJoinInfo, UOnlinePartyJoinInfo::StaticClass, TEXT("UOnlinePartyJoinInfo"), &Z_Registration_Info_UClass_UOnlinePartyJoinInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePartyJoinInfo), 2233142265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_4155981516(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBPartyTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
