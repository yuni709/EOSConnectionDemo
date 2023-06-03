// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineErrorInfo.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBVoiceChatTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineVoiceAdminSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineErrorInfo();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineVoiceAdminSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineVoiceAdminSubsystem::StaticRegisterNativesUOnlineVoiceAdminSubsystem()
	{
		UClass* Class = UOnlineVoiceAdminSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSubsystemAvailable", &UOnlineVoiceAdminSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineVoiceAdminSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceAdminSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceAdminSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|VoiceAdmin" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceAdminSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::OnlineVoiceAdminSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineVoiceAdminSubsystem);
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister()
	{
		return UOnlineVoiceAdminSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineVoiceAdminSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 304223678
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineVoiceAdminSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::ClassParams = {
		&UOnlineVoiceAdminSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineVoiceAdminSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineVoiceAdminSubsystem>()
	{
		return UOnlineVoiceAdminSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineVoiceAdminSubsystem);
	UOnlineVoiceAdminSubsystem::~UOnlineVoiceAdminSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin_Parms
		{
			FOnlineErrorInfo Result;
			FUniqueNetIdRepl LocalUserId;
			TArray<FVoiceAdminChannelCredentialsBP> Credentials;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Credentials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Credentials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Credentials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin_Parms, Result), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Credentials_Inner = { "Credentials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVoiceAdminChannelCredentialsBP, METADATA_PARAMS(nullptr, 0) }; // 425560329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Credentials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Credentials = { "Credentials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin_Parms, Credentials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Credentials_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Credentials_MetaData)) }; // 425560329
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Credentials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::NewProp_Credentials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineVoiceAdminSubsystemCreateChannelCredentials::execCreateChannelCredentials)
	{
		P_GET_OBJECT(UOnlineVoiceAdminSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
		P_GET_TARRAY(FUniqueNetIdRepl,Z_Param_TargetUserIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineVoiceAdminSubsystemCreateChannelCredentials**)Z_Param__Result=UOnlineVoiceAdminSubsystemCreateChannelCredentials::CreateChannelCredentials(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ChannelName,Z_Param_TargetUserIds);
		P_NATIVE_END;
	}
	void UOnlineVoiceAdminSubsystemCreateChannelCredentials::StaticRegisterNativesUOnlineVoiceAdminSubsystemCreateChannelCredentials()
	{
		UClass* Class = UOnlineVoiceAdminSubsystemCreateChannelCredentials::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateChannelCredentials", &UOnlineVoiceAdminSubsystemCreateChannelCredentials::execCreateChannelCredentials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics
	{
		struct OnlineVoiceAdminSubsystemCreateChannelCredentials_eventCreateChannelCredentials_Parms
		{
			UOnlineVoiceAdminSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ChannelName;
			TArray<FUniqueNetIdRepl> TargetUserIds;
			UOnlineVoiceAdminSubsystemCreateChannelCredentials* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetUserIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemCreateChannelCredentials_eventCreateChannelCredentials_Parms, Subsystem), Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemCreateChannelCredentials_eventCreateChannelCredentials_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemCreateChannelCredentials_eventCreateChannelCredentials_Parms, ChannelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_TargetUserIds_Inner = { "TargetUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_TargetUserIds = { "TargetUserIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemCreateChannelCredentials_eventCreateChannelCredentials_Parms, TargetUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemCreateChannelCredentials_eventCreateChannelCredentials_Parms, ReturnValue), Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_TargetUserIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_TargetUserIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|VoiceAdmin" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials, nullptr, "CreateChannelCredentials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::OnlineVoiceAdminSubsystemCreateChannelCredentials_eventCreateChannelCredentials_Parms), Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineVoiceAdminSubsystemCreateChannelCredentials);
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_NoRegister()
	{
		return UOnlineVoiceAdminSubsystemCreateChannelCredentials::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVoiceAdminCreateChannelCredentialsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceAdminCreateChannelCredentialsComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ChannelName;
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__TargetUserIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__TargetUserIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__TargetUserIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials, "CreateChannelCredentials" }, // 4124928480
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemCreateChannelCredentials, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnCallFailed_MetaData)) }; // 2559037943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnVoiceAdminCreateChannelCredentialsComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnVoiceAdminCreateChannelCredentialsComplete = { "OnVoiceAdminCreateChannelCredentialsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemCreateChannelCredentials, OnVoiceAdminCreateChannelCredentialsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnVoiceAdminCreateChannelCredentialsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnVoiceAdminCreateChannelCredentialsComplete_MetaData)) }; // 2559037943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__Subsystem), Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__ChannelName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__ChannelName = { "__Store__ChannelName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__ChannelName), METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__ChannelName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__TargetUserIds_Inner = { "__Store__TargetUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__TargetUserIds_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__TargetUserIds = { "__Store__TargetUserIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__TargetUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__TargetUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__TargetUserIds_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp_OnVoiceAdminCreateChannelCredentialsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__TargetUserIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::NewProp___Store__TargetUserIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineVoiceAdminSubsystemCreateChannelCredentials>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::ClassParams = {
		&UOnlineVoiceAdminSubsystemCreateChannelCredentials::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials()
	{
		if (!Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials.OuterSingleton, Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineVoiceAdminSubsystemCreateChannelCredentials>()
	{
		return UOnlineVoiceAdminSubsystemCreateChannelCredentials::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineVoiceAdminSubsystemCreateChannelCredentials);
	UOnlineVoiceAdminSubsystemCreateChannelCredentials::~UOnlineVoiceAdminSubsystemCreateChannelCredentials() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemKickParticipantCallbackPin_Parms
		{
			FOnlineErrorInfo Result;
			FUniqueNetIdRepl LocalUserId;
			FUniqueNetIdRepl TargetUserId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemKickParticipantCallbackPin_Parms, Result), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemKickParticipantCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemKickParticipantCallbackPin_Parms, TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::NewProp_TargetUserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemKickParticipantCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineVoiceAdminSubsystemKickParticipant::execKickParticipant)
	{
		P_GET_OBJECT(UOnlineVoiceAdminSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_TargetUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineVoiceAdminSubsystemKickParticipant**)Z_Param__Result=UOnlineVoiceAdminSubsystemKickParticipant::KickParticipant(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ChannelName,Z_Param_TargetUserId);
		P_NATIVE_END;
	}
	void UOnlineVoiceAdminSubsystemKickParticipant::StaticRegisterNativesUOnlineVoiceAdminSubsystemKickParticipant()
	{
		UClass* Class = UOnlineVoiceAdminSubsystemKickParticipant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KickParticipant", &UOnlineVoiceAdminSubsystemKickParticipant::execKickParticipant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics
	{
		struct OnlineVoiceAdminSubsystemKickParticipant_eventKickParticipant_Parms
		{
			UOnlineVoiceAdminSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ChannelName;
			FUniqueNetIdRepl TargetUserId;
			UOnlineVoiceAdminSubsystemKickParticipant* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemKickParticipant_eventKickParticipant_Parms, Subsystem), Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemKickParticipant_eventKickParticipant_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemKickParticipant_eventKickParticipant_Parms, ChannelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemKickParticipant_eventKickParticipant_Parms, TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemKickParticipant_eventKickParticipant_Parms, ReturnValue), Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|VoiceAdmin" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant, nullptr, "KickParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::OnlineVoiceAdminSubsystemKickParticipant_eventKickParticipant_Parms), Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineVoiceAdminSubsystemKickParticipant);
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_NoRegister()
	{
		return UOnlineVoiceAdminSubsystemKickParticipant::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVoiceAdminKickParticipantComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceAdminKickParticipantComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ChannelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__TargetUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__TargetUserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant, "KickParticipant" }, // 1637516096
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemKickParticipant, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnCallFailed_MetaData)) }; // 1383613208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnVoiceAdminKickParticipantComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnVoiceAdminKickParticipantComplete = { "OnVoiceAdminKickParticipantComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemKickParticipant, OnVoiceAdminKickParticipantComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemKickParticipantCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnVoiceAdminKickParticipantComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnVoiceAdminKickParticipantComplete_MetaData)) }; // 1383613208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemKickParticipant, __Store__Subsystem), Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemKickParticipant, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemKickParticipant, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__ChannelName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__ChannelName = { "__Store__ChannelName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemKickParticipant, __Store__ChannelName), METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__ChannelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__TargetUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__TargetUserId = { "__Store__TargetUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemKickParticipant, __Store__TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__TargetUserId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp_OnVoiceAdminKickParticipantComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::NewProp___Store__TargetUserId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineVoiceAdminSubsystemKickParticipant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::ClassParams = {
		&UOnlineVoiceAdminSubsystemKickParticipant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant()
	{
		if (!Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemKickParticipant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemKickParticipant.OuterSingleton, Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemKickParticipant.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineVoiceAdminSubsystemKickParticipant>()
	{
		return UOnlineVoiceAdminSubsystemKickParticipant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineVoiceAdminSubsystemKickParticipant);
	UOnlineVoiceAdminSubsystemKickParticipant::~UOnlineVoiceAdminSubsystemKickParticipant() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin_Parms
		{
			FOnlineErrorInfo Result;
			FUniqueNetIdRepl LocalUserId;
			FUniqueNetIdRepl TargetUserId;
			bool bIsNowMuted;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static void NewProp_bIsNowMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNowMuted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin_Parms, Result), Z_Construct_UScriptStruct_FOnlineErrorInfo, METADATA_PARAMS(nullptr, 0) }; // 93036015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin_Parms, TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_bIsNowMuted_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin_Parms*)Obj)->bIsNowMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_bIsNowMuted = { "bIsNowMuted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_bIsNowMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::NewProp_bIsNowMuted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineVoiceAdminSubsystemSetParticipantHardMute::execSetParticipantHardMute)
	{
		P_GET_OBJECT(UOnlineVoiceAdminSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_TargetUserId);
		P_GET_UBOOL(Z_Param_bMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineVoiceAdminSubsystemSetParticipantHardMute**)Z_Param__Result=UOnlineVoiceAdminSubsystemSetParticipantHardMute::SetParticipantHardMute(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_ChannelName,Z_Param_TargetUserId,Z_Param_bMuted);
		P_NATIVE_END;
	}
	void UOnlineVoiceAdminSubsystemSetParticipantHardMute::StaticRegisterNativesUOnlineVoiceAdminSubsystemSetParticipantHardMute()
	{
		UClass* Class = UOnlineVoiceAdminSubsystemSetParticipantHardMute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetParticipantHardMute", &UOnlineVoiceAdminSubsystemSetParticipantHardMute::execSetParticipantHardMute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics
	{
		struct OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms
		{
			UOnlineVoiceAdminSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FString ChannelName;
			FUniqueNetIdRepl TargetUserId;
			bool bMuted;
			UOnlineVoiceAdminSubsystemSetParticipantHardMute* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static void NewProp_bMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuted;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms, Subsystem), Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms, ChannelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms, TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_bMuted_SetBit(void* Obj)
	{
		((OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms*)Obj)->bMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_bMuted = { "bMuted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms), &Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_bMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms, ReturnValue), Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_bMuted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|VoiceAdmin" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute, nullptr, "SetParticipantHardMute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::OnlineVoiceAdminSubsystemSetParticipantHardMute_eventSetParticipantHardMute_Parms), Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineVoiceAdminSubsystemSetParticipantHardMute);
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_NoRegister()
	{
		return UOnlineVoiceAdminSubsystemSetParticipantHardMute::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVoiceAdminSetParticipantHardMuteComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceAdminSetParticipantHardMuteComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__ChannelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__TargetUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__TargetUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__bMuted_MetaData[];
#endif
		static void NewProp___Store__bMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp___Store__bMuted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute, "SetParticipantHardMute" }, // 672609337
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemSetParticipantHardMute, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnCallFailed_MetaData)) }; // 3947385597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnVoiceAdminSetParticipantHardMuteComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnVoiceAdminSetParticipantHardMuteComplete = { "OnVoiceAdminSetParticipantHardMuteComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemSetParticipantHardMute, OnVoiceAdminSetParticipantHardMuteComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnVoiceAdminSetParticipantHardMuteComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnVoiceAdminSetParticipantHardMuteComplete_MetaData)) }; // 3947385597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__Subsystem), Z_Construct_UClass_UOnlineVoiceAdminSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__ChannelName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__ChannelName = { "__Store__ChannelName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__ChannelName), METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__ChannelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__TargetUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__TargetUserId = { "__Store__TargetUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__TargetUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__bMuted_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceAdminSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__bMuted_SetBit(void* Obj)
	{
		((UOnlineVoiceAdminSubsystemSetParticipantHardMute*)Obj)->__Store__bMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__bMuted = { "__Store__bMuted", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineVoiceAdminSubsystemSetParticipantHardMute), &Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__bMuted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__bMuted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__bMuted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp_OnVoiceAdminSetParticipantHardMuteComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::NewProp___Store__bMuted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineVoiceAdminSubsystemSetParticipantHardMute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::ClassParams = {
		&UOnlineVoiceAdminSubsystemSetParticipantHardMute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute()
	{
		if (!Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute.OuterSingleton, Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineVoiceAdminSubsystemSetParticipantHardMute>()
	{
		return UOnlineVoiceAdminSubsystemSetParticipantHardMute::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineVoiceAdminSubsystemSetParticipantHardMute);
	UOnlineVoiceAdminSubsystemSetParticipantHardMute::~UOnlineVoiceAdminSubsystemSetParticipantHardMute() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceAdminSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceAdminSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineVoiceAdminSubsystem, UOnlineVoiceAdminSubsystem::StaticClass, TEXT("UOnlineVoiceAdminSubsystem"), &Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineVoiceAdminSubsystem), 3362620459U) },
		{ Z_Construct_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials, UOnlineVoiceAdminSubsystemCreateChannelCredentials::StaticClass, TEXT("UOnlineVoiceAdminSubsystemCreateChannelCredentials"), &Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemCreateChannelCredentials, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineVoiceAdminSubsystemCreateChannelCredentials), 1537721580U) },
		{ Z_Construct_UClass_UOnlineVoiceAdminSubsystemKickParticipant, UOnlineVoiceAdminSubsystemKickParticipant::StaticClass, TEXT("UOnlineVoiceAdminSubsystemKickParticipant"), &Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemKickParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineVoiceAdminSubsystemKickParticipant), 834163256U) },
		{ Z_Construct_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute, UOnlineVoiceAdminSubsystemSetParticipantHardMute::StaticClass, TEXT("UOnlineVoiceAdminSubsystemSetParticipantHardMute"), &Z_Registration_Info_UClass_UOnlineVoiceAdminSubsystemSetParticipantHardMute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineVoiceAdminSubsystemSetParticipantHardMute), 2296532262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceAdminSubsystem_h_2955204503(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceAdminSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceAdminSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
