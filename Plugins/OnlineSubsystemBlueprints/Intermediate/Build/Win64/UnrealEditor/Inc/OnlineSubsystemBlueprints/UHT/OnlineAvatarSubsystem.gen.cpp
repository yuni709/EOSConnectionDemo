// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAvatarSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAvatarSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineAvatarSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineAvatarSubsystem::StaticRegisterNativesUOnlineAvatarSubsystem()
	{
		UClass* Class = UOnlineAvatarSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSubsystemAvailable", &UOnlineAvatarSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineAvatarSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineAvatarSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineAvatarSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Avatar" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAvatarSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::OnlineAvatarSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAvatarSubsystem);
	UClass* Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister()
	{
		return UOnlineAvatarSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAvatarSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAvatarSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 4102624053
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAvatarSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::ClassParams = {
		&UOnlineAvatarSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAvatarSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineAvatarSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAvatarSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineAvatarSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAvatarSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAvatarSubsystem>()
	{
		return UOnlineAvatarSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAvatarSubsystem);
	UOnlineAvatarSubsystem::~UOnlineAvatarSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarCallbackPin_Parms
		{
			bool bWasSuccessful;
			UTexture* ResultTexture;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::NewProp_ResultTexture = { "ResultTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarCallbackPin_Parms, ResultTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::NewProp_ResultTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineAvatarSubsystemGetAvatar::execGetAvatar)
	{
		P_GET_OBJECT(UOnlineAvatarSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_TargetUserId);
		P_GET_OBJECT(UTexture,Z_Param_DefaultTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineAvatarSubsystemGetAvatar**)Z_Param__Result=UOnlineAvatarSubsystemGetAvatar::GetAvatar(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_TargetUserId,Z_Param_DefaultTexture);
		P_NATIVE_END;
	}
	void UOnlineAvatarSubsystemGetAvatar::StaticRegisterNativesUOnlineAvatarSubsystemGetAvatar()
	{
		UClass* Class = UOnlineAvatarSubsystemGetAvatar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatar", &UOnlineAvatarSubsystemGetAvatar::execGetAvatar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics
	{
		struct OnlineAvatarSubsystemGetAvatar_eventGetAvatar_Parms
		{
			UOnlineAvatarSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FUniqueNetIdRepl TargetUserId;
			UTexture* DefaultTexture;
			UOnlineAvatarSubsystemGetAvatar* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatar_eventGetAvatar_Parms, Subsystem), Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatar_eventGetAvatar_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatar_eventGetAvatar_Parms, TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_DefaultTexture = { "DefaultTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatar_eventGetAvatar_Parms, DefaultTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatar_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_DefaultTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Avatar" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar, nullptr, "GetAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::OnlineAvatarSubsystemGetAvatar_eventGetAvatar_Parms), Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAvatarSubsystemGetAvatar);
	UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_NoRegister()
	{
		return UOnlineAvatarSubsystemGetAvatar::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetAvatarComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetAvatarComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__TargetUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__TargetUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__DefaultTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__DefaultTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatar_GetAvatar, "GetAvatar" }, // 2352955568
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatar, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnCallFailed_MetaData)) }; // 1230168142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnGetAvatarComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnGetAvatarComplete = { "OnGetAvatarComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatar, OnGetAvatarComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnGetAvatarComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnGetAvatarComplete_MetaData)) }; // 1230168142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatar, __Store__Subsystem), Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatar, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatar, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__TargetUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__TargetUserId = { "__Store__TargetUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatar, __Store__TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__TargetUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__DefaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__DefaultTexture = { "__Store__DefaultTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatar, __Store__DefaultTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__DefaultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__DefaultTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp_OnGetAvatarComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::NewProp___Store__DefaultTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAvatarSubsystemGetAvatar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::ClassParams = {
		&UOnlineAvatarSubsystemGetAvatar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar()
	{
		if (!Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatar.OuterSingleton, Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatar.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAvatarSubsystemGetAvatar>()
	{
		return UOnlineAvatarSubsystemGetAvatar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAvatarSubsystemGetAvatar);
	UOnlineAvatarSubsystemGetAvatar::~UOnlineAvatarSubsystemGetAvatar() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarUrlCallbackPin_Parms
		{
			bool bWasSuccessful;
			FString ResultAvatarUrl;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResultAvatarUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarUrlCallbackPin_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarUrlCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::NewProp_ResultAvatarUrl = { "ResultAvatarUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarUrlCallbackPin_Parms, ResultAvatarUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::NewProp_ResultAvatarUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineAvatarSubsystemGetAvatarUrlCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineAvatarSubsystemGetAvatarUrl::execGetAvatarUrl)
	{
		P_GET_OBJECT(UOnlineAvatarSubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LocalUserId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_TargetUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultAvatarUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineAvatarSubsystemGetAvatarUrl**)Z_Param__Result=UOnlineAvatarSubsystemGetAvatarUrl::GetAvatarUrl(Z_Param_Subsystem,Z_Param_LocalUserId,Z_Param_TargetUserId,Z_Param_DefaultAvatarUrl);
		P_NATIVE_END;
	}
	void UOnlineAvatarSubsystemGetAvatarUrl::StaticRegisterNativesUOnlineAvatarSubsystemGetAvatarUrl()
	{
		UClass* Class = UOnlineAvatarSubsystemGetAvatarUrl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatarUrl", &UOnlineAvatarSubsystemGetAvatarUrl::execGetAvatarUrl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics
	{
		struct OnlineAvatarSubsystemGetAvatarUrl_eventGetAvatarUrl_Parms
		{
			UOnlineAvatarSubsystem* Subsystem;
			FUniqueNetIdRepl LocalUserId;
			FUniqueNetIdRepl TargetUserId;
			FString DefaultAvatarUrl;
			UOnlineAvatarSubsystemGetAvatarUrl* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultAvatarUrl;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatarUrl_eventGetAvatarUrl_Parms, Subsystem), Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatarUrl_eventGetAvatarUrl_Parms, LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatarUrl_eventGetAvatarUrl_Parms, TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_DefaultAvatarUrl = { "DefaultAvatarUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatarUrl_eventGetAvatarUrl_Parms, DefaultAvatarUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineAvatarSubsystemGetAvatarUrl_eventGetAvatarUrl_Parms, ReturnValue), Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_DefaultAvatarUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Avatar" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl, nullptr, "GetAvatarUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::OnlineAvatarSubsystemGetAvatarUrl_eventGetAvatarUrl_Parms), Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineAvatarSubsystemGetAvatarUrl);
	UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_NoRegister()
	{
		return UOnlineAvatarSubsystemGetAvatarUrl::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetAvatarUrlComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetAvatarUrlComplete;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__TargetUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp___Store__TargetUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__DefaultAvatarUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__DefaultAvatarUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl, "GetAvatarUrl" }, // 1261730587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatarUrl, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnCallFailed_MetaData)) }; // 2300816150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnGetAvatarUrlComplete_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnGetAvatarUrlComplete = { "OnGetAvatarUrlComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatarUrl, OnGetAvatarUrlComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineAvatarSubsystemGetAvatarUrlCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnGetAvatarUrlComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnGetAvatarUrlComplete_MetaData)) }; // 2300816150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatarUrl, __Store__Subsystem), Z_Construct_UClass_UOnlineAvatarSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatarUrl, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__LocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__LocalUserId = { "__Store__LocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatarUrl, __Store__LocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__LocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__TargetUserId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__TargetUserId = { "__Store__TargetUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatarUrl, __Store__TargetUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__TargetUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__DefaultAvatarUrl_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineAvatarSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__DefaultAvatarUrl = { "__Store__DefaultAvatarUrl", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineAvatarSubsystemGetAvatarUrl, __Store__DefaultAvatarUrl), METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__DefaultAvatarUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__DefaultAvatarUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp_OnGetAvatarUrlComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__LocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__TargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::NewProp___Store__DefaultAvatarUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAvatarSubsystemGetAvatarUrl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::ClassParams = {
		&UOnlineAvatarSubsystemGetAvatarUrl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl()
	{
		if (!Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatarUrl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatarUrl.OuterSingleton, Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatarUrl.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineAvatarSubsystemGetAvatarUrl>()
	{
		return UOnlineAvatarSubsystemGetAvatarUrl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAvatarSubsystemGetAvatarUrl);
	UOnlineAvatarSubsystemGetAvatarUrl::~UOnlineAvatarSubsystemGetAvatarUrl() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineAvatarSubsystem, UOnlineAvatarSubsystem::StaticClass, TEXT("UOnlineAvatarSubsystem"), &Z_Registration_Info_UClass_UOnlineAvatarSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAvatarSubsystem), 2838693688U) },
		{ Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatar, UOnlineAvatarSubsystemGetAvatar::StaticClass, TEXT("UOnlineAvatarSubsystemGetAvatar"), &Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAvatarSubsystemGetAvatar), 3274643078U) },
		{ Z_Construct_UClass_UOnlineAvatarSubsystemGetAvatarUrl, UOnlineAvatarSubsystemGetAvatarUrl::StaticClass, TEXT("UOnlineAvatarSubsystemGetAvatarUrl"), &Z_Registration_Info_UClass_UOnlineAvatarSubsystemGetAvatarUrl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineAvatarSubsystemGetAvatarUrl), 1355205072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_3328160478(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineAvatarSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
