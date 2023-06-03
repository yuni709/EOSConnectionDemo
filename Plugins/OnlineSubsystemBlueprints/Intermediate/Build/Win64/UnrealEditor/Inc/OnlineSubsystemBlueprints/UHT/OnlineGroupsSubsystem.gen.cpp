// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineGroupsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineGroupsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGroupsSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineGroupsSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineGroupsSubsystem::execGetNamespace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNamespace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGroupsSubsystem::execSetNamespace)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Ns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNamespace(Z_Param_Ns);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGroupsSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineGroupsSubsystem::StaticRegisterNativesUOnlineGroupsSubsystem()
	{
		UClass* Class = UOnlineGroupsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNamespace", &UOnlineGroupsSubsystem::execGetNamespace },
			{ "IsSubsystemAvailable", &UOnlineGroupsSubsystem::execIsSubsystemAvailable },
			{ "SetNamespace", &UOnlineGroupsSubsystem::execSetNamespace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics
	{
		struct OnlineGroupsSubsystem_eventGetNamespace_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGroupsSubsystem_eventGetNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Groups" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGroupsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGroupsSubsystem, nullptr, "GetNamespace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::OnlineGroupsSubsystem_eventGetNamespace_Parms), Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineGroupsSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineGroupsSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineGroupsSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Groups" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGroupsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGroupsSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::OnlineGroupsSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics
	{
		struct OnlineGroupsSubsystem_eventSetNamespace_Parms
		{
			FString Ns;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::NewProp_Ns = { "Ns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineGroupsSubsystem_eventSetNamespace_Parms, Ns), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::NewProp_Ns,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Groups" },
		{ "Comment", "// @result-delegates-not-compatible: FOnGroupsRequestCompleted(FGroupsResult Param1)\n// void DeleteGroup(FUniqueNetIdRepl ContextUserId, FUniqueNetIdRepl GroupId);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGroupsSubsystem.h" },
		{ "ToolTip", "@result-delegates-not-compatible: FOnGroupsRequestCompleted(FGroupsResult Param1)\nvoid DeleteGroup(FUniqueNetIdRepl ContextUserId, FUniqueNetIdRepl GroupId);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGroupsSubsystem, nullptr, "SetNamespace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::OnlineGroupsSubsystem_eventSetNamespace_Parms), Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineGroupsSubsystem);
	UClass* Z_Construct_UClass_UOnlineGroupsSubsystem_NoRegister()
	{
		return UOnlineGroupsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGroupsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGroupsSubsystem_GetNamespace, "GetNamespace" }, // 2028886758
		{ &Z_Construct_UFunction_UOnlineGroupsSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 753088625
		{ &Z_Construct_UFunction_UOnlineGroupsSubsystem_SetNamespace, "SetNamespace" }, // 3808121359
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineGroupsSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineGroupsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGroupsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::ClassParams = {
		&UOnlineGroupsSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGroupsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineGroupsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineGroupsSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineGroupsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineGroupsSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineGroupsSubsystem>()
	{
		return UOnlineGroupsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGroupsSubsystem);
	UOnlineGroupsSubsystem::~UOnlineGroupsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGroupsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGroupsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineGroupsSubsystem, UOnlineGroupsSubsystem::StaticClass, TEXT("UOnlineGroupsSubsystem"), &Z_Registration_Info_UClass_UOnlineGroupsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineGroupsSubsystem), 3588788920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGroupsSubsystem_h_1688587090(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGroupsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineGroupsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
