// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineSharedCloudSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSharedCloudSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UFileData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSharedCloudSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSharedCloudSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineSharedCloudSubsystem::execWriteSharedFile)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_OBJECT_REF(UFileData,Z_Param_Out_Contents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteSharedFile(Z_Param_UserId,Z_Param_Filename,Z_Param_Out_Contents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSharedCloudSubsystem::execClearSharedFiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearSharedFiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSharedCloudSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineSharedCloudSubsystem::StaticRegisterNativesUOnlineSharedCloudSubsystem()
	{
		UClass* Class = UOnlineSharedCloudSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSharedFiles", &UOnlineSharedCloudSubsystem::execClearSharedFiles },
			{ "IsSubsystemAvailable", &UOnlineSharedCloudSubsystem::execIsSubsystemAvailable },
			{ "WriteSharedFile", &UOnlineSharedCloudSubsystem::execWriteSharedFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics
	{
		struct OnlineSharedCloudSubsystem_eventClearSharedFiles_Parms
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
	void Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineSharedCloudSubsystem_eventClearSharedFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineSharedCloudSubsystem_eventClearSharedFiles_Parms), &Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|SharedCloud" },
		{ "Comment", "// @generator-incompatible\n// bool GetSharedFileContents(const FSharedContentHandle& SharedHandle, TArray<uint8>& FileContents);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharedCloudSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nbool GetSharedFileContents(const FSharedContentHandle& SharedHandle, TArray<uint8>& FileContents);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSharedCloudSubsystem, nullptr, "ClearSharedFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::OnlineSharedCloudSubsystem_eventClearSharedFiles_Parms), Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineSharedCloudSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineSharedCloudSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineSharedCloudSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|SharedCloud" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharedCloudSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSharedCloudSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::OnlineSharedCloudSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics
	{
		struct OnlineSharedCloudSubsystem_eventWriteSharedFile_Parms
		{
			FUniqueNetIdRepl UserId;
			FString Filename;
			UFileData* Contents;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Contents;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSharedCloudSubsystem_eventWriteSharedFile_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSharedCloudSubsystem_eventWriteSharedFile_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSharedCloudSubsystem_eventWriteSharedFile_Parms, Contents), Z_Construct_UClass_UFileData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineSharedCloudSubsystem_eventWriteSharedFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineSharedCloudSubsystem_eventWriteSharedFile_Parms), &Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_Contents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|SharedCloud" },
		{ "Comment", "// @generator-incompatible\n// bool ReadSharedFile(const FSharedContentHandle& SharedHandle);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharedCloudSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nbool ReadSharedFile(const FSharedContentHandle& SharedHandle);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSharedCloudSubsystem, nullptr, "WriteSharedFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::OnlineSharedCloudSubsystem_eventWriteSharedFile_Parms), Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSharedCloudSubsystem);
	UClass* Z_Construct_UClass_UOnlineSharedCloudSubsystem_NoRegister()
	{
		return UOnlineSharedCloudSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineSharedCloudSubsystem_ClearSharedFiles, "ClearSharedFiles" }, // 1646658593
		{ &Z_Construct_UFunction_UOnlineSharedCloudSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 3168036627
		{ &Z_Construct_UFunction_UOnlineSharedCloudSubsystem_WriteSharedFile, "WriteSharedFile" }, // 4180900844
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// @parameters-not-compatible\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSharedCloud_WriteSharedFileComplete_BP, bool, Param1, const FUniqueNetId&, Param2, const FString&, Param3, const TSharedRef<FSharedContentHandle>&, Param4);\n" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineSharedCloudSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharedCloudSubsystem.h" },
		{ "ToolTip", "@parameters-not-compatible\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSharedCloud_WriteSharedFileComplete_BP, bool, Param1, const FUniqueNetId&, Param2, const FString&, Param3, const TSharedRef<FSharedContentHandle>&, Param4);" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSharedCloudSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::ClassParams = {
		&UOnlineSharedCloudSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSharedCloudSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineSharedCloudSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSharedCloudSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineSharedCloudSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSharedCloudSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineSharedCloudSubsystem>()
	{
		return UOnlineSharedCloudSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSharedCloudSubsystem);
	UOnlineSharedCloudSubsystem::~UOnlineSharedCloudSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharedCloudSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharedCloudSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSharedCloudSubsystem, UOnlineSharedCloudSubsystem::StaticClass, TEXT("UOnlineSharedCloudSubsystem"), &Z_Registration_Info_UClass_UOnlineSharedCloudSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSharedCloudSubsystem), 2831402653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharedCloudSubsystem_h_2163864179(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharedCloudSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharedCloudSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
