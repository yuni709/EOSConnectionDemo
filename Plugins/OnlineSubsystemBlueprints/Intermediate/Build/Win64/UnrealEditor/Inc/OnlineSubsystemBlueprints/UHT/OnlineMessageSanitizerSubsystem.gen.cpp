// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBBlockedQueryResultInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineMessageSanitizerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FBlockedQueryResultInfo();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineMessageSanitizerSubsystem::execResetBlockedUserCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBlockedUserCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineMessageSanitizerSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineMessageSanitizerSubsystem::StaticRegisterNativesUOnlineMessageSanitizerSubsystem()
	{
		UClass* Class = UOnlineMessageSanitizerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSubsystemAvailable", &UOnlineMessageSanitizerSubsystem::execIsSubsystemAvailable },
			{ "ResetBlockedUserCache", &UOnlineMessageSanitizerSubsystem::execResetBlockedUserCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineMessageSanitizerSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineMessageSanitizerSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineMessageSanitizerSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|MessageSanitizer" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSanitizerSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::OnlineMessageSanitizerSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|MessageSanitizer" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSanitizerSubsystem, nullptr, "ResetBlockedUserCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineMessageSanitizerSubsystem);
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister()
	{
		return UOnlineMessageSanitizerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 4084577354
		{ &Z_Construct_UFunction_UOnlineMessageSanitizerSubsystem_ResetBlockedUserCache, "ResetBlockedUserCache" }, // 217593982
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineMessageSanitizerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::ClassParams = {
		&UOnlineMessageSanitizerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineMessageSanitizerSubsystem>()
	{
		return UOnlineMessageSanitizerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineMessageSanitizerSubsystem);
	UOnlineMessageSanitizerSubsystem::~UOnlineMessageSanitizerSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin_Parms
		{
			bool bSuccess;
			FString SanitizedMessage;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SanitizedMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessage = { "SanitizedMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin_Parms, SanitizedMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineMessageSanitizerSubsystemSanitizeDisplayName::execSanitizeDisplayName)
	{
		P_GET_OBJECT(UOnlineMessageSanitizerSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineMessageSanitizerSubsystemSanitizeDisplayName**)Z_Param__Result=UOnlineMessageSanitizerSubsystemSanitizeDisplayName::SanitizeDisplayName(Z_Param_Subsystem,Z_Param_DisplayName);
		P_NATIVE_END;
	}
	void UOnlineMessageSanitizerSubsystemSanitizeDisplayName::StaticRegisterNativesUOnlineMessageSanitizerSubsystemSanitizeDisplayName()
	{
		UClass* Class = UOnlineMessageSanitizerSubsystemSanitizeDisplayName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SanitizeDisplayName", &UOnlineMessageSanitizerSubsystemSanitizeDisplayName::execSanitizeDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics
	{
		struct OnlineMessageSanitizerSubsystemSanitizeDisplayName_eventSanitizeDisplayName_Parms
		{
			UOnlineMessageSanitizerSubsystem* Subsystem;
			FString DisplayName;
			UOnlineMessageSanitizerSubsystemSanitizeDisplayName* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemSanitizeDisplayName_eventSanitizeDisplayName_Parms, Subsystem), Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemSanitizeDisplayName_eventSanitizeDisplayName_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemSanitizeDisplayName_eventSanitizeDisplayName_Parms, ReturnValue), Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|MessageSanitizer" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName, nullptr, "SanitizeDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::OnlineMessageSanitizerSubsystemSanitizeDisplayName_eventSanitizeDisplayName_Parms), Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineMessageSanitizerSubsystemSanitizeDisplayName);
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_NoRegister()
	{
		return UOnlineMessageSanitizerSubsystemSanitizeDisplayName::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageProcessed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageProcessed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName, "SanitizeDisplayName" }, // 3012738778
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnCallFailed_MetaData)) }; // 1906427906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnMessageProcessed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnMessageProcessed = { "OnMessageProcessed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, OnMessageProcessed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnMessageProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnMessageProcessed_MetaData)) }; // 1906427906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__Subsystem), Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__DisplayName = { "__Store__DisplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__DisplayName), METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp_OnMessageProcessed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::NewProp___Store__DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineMessageSanitizerSubsystemSanitizeDisplayName>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::ClassParams = {
		&UOnlineMessageSanitizerSubsystemSanitizeDisplayName::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName()
	{
		if (!Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName.OuterSingleton, Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineMessageSanitizerSubsystemSanitizeDisplayName>()
	{
		return UOnlineMessageSanitizerSubsystemSanitizeDisplayName::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineMessageSanitizerSubsystemSanitizeDisplayName);
	UOnlineMessageSanitizerSubsystemSanitizeDisplayName::~UOnlineMessageSanitizerSubsystemSanitizeDisplayName() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin_Parms
		{
			bool bSuccess;
			TArray<FString> SanitizedMessages;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SanitizedMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SanitizedMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SanitizedMessages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessages_Inner = { "SanitizedMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessages = { "SanitizedMessages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin_Parms, SanitizedMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessages_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::NewProp_SanitizedMessages,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::execSanitizeDisplayNames)
	{
		P_GET_OBJECT(UOnlineMessageSanitizerSubsystem,Z_Param_Subsystem);
		P_GET_TARRAY(FString,Z_Param_DisplayNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames**)Z_Param__Result=UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::SanitizeDisplayNames(Z_Param_Subsystem,Z_Param_DisplayNames);
		P_NATIVE_END;
	}
	void UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::StaticRegisterNativesUOnlineMessageSanitizerSubsystemSanitizeDisplayNames()
	{
		UClass* Class = UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SanitizeDisplayNames", &UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::execSanitizeDisplayNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics
	{
		struct OnlineMessageSanitizerSubsystemSanitizeDisplayNames_eventSanitizeDisplayNames_Parms
		{
			UOnlineMessageSanitizerSubsystem* Subsystem;
			TArray<FString> DisplayNames;
			UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemSanitizeDisplayNames_eventSanitizeDisplayNames_Parms, Subsystem), Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames_Inner = { "DisplayNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames = { "DisplayNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemSanitizeDisplayNames_eventSanitizeDisplayNames_Parms, DisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemSanitizeDisplayNames_eventSanitizeDisplayNames_Parms, ReturnValue), Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|MessageSanitizer" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, nullptr, "SanitizeDisplayNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::OnlineMessageSanitizerSubsystemSanitizeDisplayNames_eventSanitizeDisplayNames_Parms), Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames);
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_NoRegister()
	{
		return UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageArrayProcessed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageArrayProcessed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__DisplayNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__DisplayNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp___Store__DisplayNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames, "SanitizeDisplayNames" }, // 972085831
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnCallFailed_MetaData)) }; // 690380357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnMessageArrayProcessed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnMessageArrayProcessed = { "OnMessageArrayProcessed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, OnMessageArrayProcessed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnMessageArrayProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnMessageArrayProcessed_MetaData)) }; // 690380357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__Subsystem), Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__DisplayNames_Inner = { "__Store__DisplayNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__DisplayNames_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__DisplayNames = { "__Store__DisplayNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__DisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__DisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__DisplayNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp_OnMessageArrayProcessed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__DisplayNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::NewProp___Store__DisplayNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineMessageSanitizerSubsystemSanitizeDisplayNames>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::ClassParams = {
		&UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames()
	{
		if (!Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames.OuterSingleton, Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineMessageSanitizerSubsystemSanitizeDisplayNames>()
	{
		return UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames);
	UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::~UOnlineMessageSanitizerSubsystemSanitizeDisplayNames() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin_Parms
		{
			FBlockedQueryResultInfo QueryResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::NewProp_QueryResult = { "QueryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin_Parms, QueryResult), Z_Construct_UScriptStruct_FBlockedQueryResultInfo, METADATA_PARAMS(nullptr, 0) }; // 3087577829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::NewProp_QueryResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineMessageSanitizerSubsystemQueryBlockedUser::execQueryBlockedUser)
	{
		P_GET_OBJECT(UOnlineMessageSanitizerSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY(FStrProperty,Z_Param_FromUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FromPlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineMessageSanitizerSubsystemQueryBlockedUser**)Z_Param__Result=UOnlineMessageSanitizerSubsystemQueryBlockedUser::QueryBlockedUser(Z_Param_Subsystem,Z_Param_LocalUserNum,Z_Param_FromUserId,Z_Param_FromPlatform);
		P_NATIVE_END;
	}
	void UOnlineMessageSanitizerSubsystemQueryBlockedUser::StaticRegisterNativesUOnlineMessageSanitizerSubsystemQueryBlockedUser()
	{
		UClass* Class = UOnlineMessageSanitizerSubsystemQueryBlockedUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryBlockedUser", &UOnlineMessageSanitizerSubsystemQueryBlockedUser::execQueryBlockedUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics
	{
		struct OnlineMessageSanitizerSubsystemQueryBlockedUser_eventQueryBlockedUser_Parms
		{
			UOnlineMessageSanitizerSubsystem* Subsystem;
			int32 LocalUserNum;
			FString FromUserId;
			FString FromPlatform;
			UOnlineMessageSanitizerSubsystemQueryBlockedUser* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromPlatform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemQueryBlockedUser_eventQueryBlockedUser_Parms, Subsystem), Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemQueryBlockedUser_eventQueryBlockedUser_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_FromUserId = { "FromUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemQueryBlockedUser_eventQueryBlockedUser_Parms, FromUserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_FromPlatform = { "FromPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemQueryBlockedUser_eventQueryBlockedUser_Parms, FromPlatform), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineMessageSanitizerSubsystemQueryBlockedUser_eventQueryBlockedUser_Parms, ReturnValue), Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_FromUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_FromPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|MessageSanitizer" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser, nullptr, "QueryBlockedUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::OnlineMessageSanitizerSubsystemQueryBlockedUser_eventQueryBlockedUser_Parms), Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineMessageSanitizerSubsystemQueryBlockedUser);
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_NoRegister()
	{
		return UOnlineMessageSanitizerSubsystemQueryBlockedUser::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserBlockedResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryUserBlockedResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp___Store__LocalUserNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__FromUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__FromUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__FromPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__FromPlatform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser, "QueryBlockedUser" }, // 3406677070
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemQueryBlockedUser, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnCallFailed_MetaData)) }; // 2163197003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnQueryUserBlockedResponse_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnQueryUserBlockedResponse = { "OnQueryUserBlockedResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemQueryBlockedUser, OnQueryUserBlockedResponse), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnQueryUserBlockedResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnQueryUserBlockedResponse_MetaData)) }; // 2163197003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__Subsystem), Z_Construct_UClass_UOnlineMessageSanitizerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__LocalUserNum_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__LocalUserNum = { "__Store__LocalUserNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__LocalUserNum), METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__LocalUserNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromUserId = { "__Store__FromUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__FromUserId), METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromUserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromPlatform_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineMessageSanitizerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromPlatform = { "__Store__FromPlatform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__FromPlatform), METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromPlatform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp_OnQueryUserBlockedResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::NewProp___Store__FromPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineMessageSanitizerSubsystemQueryBlockedUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::ClassParams = {
		&UOnlineMessageSanitizerSubsystemQueryBlockedUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser()
	{
		if (!Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser.OuterSingleton, Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineMessageSanitizerSubsystemQueryBlockedUser>()
	{
		return UOnlineMessageSanitizerSubsystemQueryBlockedUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineMessageSanitizerSubsystemQueryBlockedUser);
	UOnlineMessageSanitizerSubsystemQueryBlockedUser::~UOnlineMessageSanitizerSubsystemQueryBlockedUser() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSanitizerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSanitizerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineMessageSanitizerSubsystem, UOnlineMessageSanitizerSubsystem::StaticClass, TEXT("UOnlineMessageSanitizerSubsystem"), &Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineMessageSanitizerSubsystem), 400850725U) },
		{ Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName, UOnlineMessageSanitizerSubsystemSanitizeDisplayName::StaticClass, TEXT("UOnlineMessageSanitizerSubsystemSanitizeDisplayName"), &Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName), 2532814557U) },
		{ Z_Construct_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, UOnlineMessageSanitizerSubsystemSanitizeDisplayNames::StaticClass, TEXT("UOnlineMessageSanitizerSubsystemSanitizeDisplayNames"), &Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames), 2475982199U) },
		{ Z_Construct_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser, UOnlineMessageSanitizerSubsystemQueryBlockedUser::StaticClass, TEXT("UOnlineMessageSanitizerSubsystemQueryBlockedUser"), &Z_Registration_Info_UClass_UOnlineMessageSanitizerSubsystemQueryBlockedUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineMessageSanitizerSubsystemQueryBlockedUser), 2410444527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSanitizerSubsystem_h_997969031(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSanitizerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineMessageSanitizerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
