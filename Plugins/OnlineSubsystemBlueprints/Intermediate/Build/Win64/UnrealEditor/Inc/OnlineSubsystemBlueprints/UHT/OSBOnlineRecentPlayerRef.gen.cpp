// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineRecentPlayerRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBOnlineRecentPlayerRef() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineRecentPlayerRef();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineRecentPlayerRef_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserRef();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineRecentPlayerRef::execGetLastSeen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetLastSeen();
		P_NATIVE_END;
	}
	void UOnlineRecentPlayerRef::StaticRegisterNativesUOnlineRecentPlayerRef()
	{
		UClass* Class = UOnlineRecentPlayerRef::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastSeen", &UOnlineRecentPlayerRef::execGetLastSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics
	{
		struct OnlineRecentPlayerRef_eventGetLastSeen_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineRecentPlayerRef_eventGetLastSeen_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns the last time this user was seen.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineRecentPlayerRef.h" },
		{ "ToolTip", "Returns the last time this user was seen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineRecentPlayerRef, nullptr, "GetLastSeen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::OnlineRecentPlayerRef_eventGetLastSeen_Parms), Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineRecentPlayerRef);
	UClass* Z_Construct_UClass_UOnlineRecentPlayerRef_NoRegister()
	{
		return UOnlineRecentPlayerRef::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineRecentPlayerRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineUserRef,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineRecentPlayerRef_GetLastSeen, "GetLastSeen" }, // 288303762
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBOnlineRecentPlayerRef.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineRecentPlayerRef.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineRecentPlayerRef>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::ClassParams = {
		&UOnlineRecentPlayerRef::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineRecentPlayerRef()
	{
		if (!Z_Registration_Info_UClass_UOnlineRecentPlayerRef.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineRecentPlayerRef.OuterSingleton, Z_Construct_UClass_UOnlineRecentPlayerRef_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineRecentPlayerRef.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineRecentPlayerRef>()
	{
		return UOnlineRecentPlayerRef::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineRecentPlayerRef);
	UOnlineRecentPlayerRef::~UOnlineRecentPlayerRef() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineRecentPlayerRef_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineRecentPlayerRef_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineRecentPlayerRef, UOnlineRecentPlayerRef::StaticClass, TEXT("UOnlineRecentPlayerRef"), &Z_Registration_Info_UClass_UOnlineRecentPlayerRef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineRecentPlayerRef), 1138303583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineRecentPlayerRef_h_4269079204(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineRecentPlayerRef_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineRecentPlayerRef_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
