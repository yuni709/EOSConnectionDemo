// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBFileTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBFileTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UFileData();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UFileData_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FCloudFileHeaderBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FPagedQueryBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	void UFileData::StaticRegisterNativesUFileData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileData);
	UClass* Z_Construct_UClass_UFileData_NoRegister()
	{
		return UFileData::StaticClass();
	}
	struct Z_Construct_UClass_UFileData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBFileTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileData_Statics::ClassParams = {
		&UFileData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFileData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileData()
	{
		if (!Z_Registration_Info_UClass_UFileData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileData.OuterSingleton, Z_Construct_UClass_UFileData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileData.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UFileData>()
	{
		return UFileData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileData);
	UFileData::~UFileData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudFileHeaderBP;
class UScriptStruct* FCloudFileHeaderBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudFileHeaderBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudFileHeaderBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudFileHeaderBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("CloudFileHeaderBP"));
	}
	return Z_Registration_Info_UScriptStruct_CloudFileHeaderBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FCloudFileHeaderBP>()
{
	return FCloudFileHeaderBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HashType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DLName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkID_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ChunkID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudFileHeaderBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_Hash_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** Hash value, if applicable, of the given file contents */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "Hash value, if applicable, of the given file contents" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCloudFileHeaderBP, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_HashType_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** The hash algorithm used to sign this file */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "The hash algorithm used to sign this file" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_HashType = { "HashType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCloudFileHeaderBP, HashType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_HashType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_HashType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_DLName_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** Filename as downloaded */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "Filename as downloaded" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_DLName = { "DLName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCloudFileHeaderBP, DLName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_DLName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_DLName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** Logical filename, maps to the downloaded filename */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "Logical filename, maps to the downloaded filename" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCloudFileHeaderBP, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileSize_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** File size */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "File size" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCloudFileHeaderBP, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** The full URL to download the file if it is stored in a CDN or separate host site */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "The full URL to download the file if it is stored in a CDN or separate host site" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCloudFileHeaderBP, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_ChunkID_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** The chunk id this file represents */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "The chunk id this file represents" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_ChunkID = { "ChunkID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCloudFileHeaderBP, ChunkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_ChunkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_ChunkID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_Hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_HashType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_DLName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_FileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewProp_ChunkID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"CloudFileHeaderBP",
		sizeof(FCloudFileHeaderBP),
		alignof(FCloudFileHeaderBP),
		Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudFileHeaderBP()
	{
		if (!Z_Registration_Info_UScriptStruct_CloudFileHeaderBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudFileHeaderBP.InnerSingleton, Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CloudFileHeaderBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PagedQueryBP;
class UScriptStruct* FPagedQueryBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PagedQueryBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PagedQueryBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPagedQueryBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("PagedQueryBP"));
	}
	return Z_Registration_Info_UScriptStruct_PagedQueryBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FPagedQueryBP>()
{
	return FPagedQueryBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPagedQueryBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPagedQueryBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPagedQueryBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** The first entry to fetch, starting at 0. */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "The first entry to fetch, starting at 0." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPagedQueryBP, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Online|Files" },
		{ "Comment", "/** The number of entries to fetch. -1 means ALL. */" },
		{ "ModuleRelativePath", "Public/Types/OSBFileTypes.h" },
		{ "ToolTip", "The number of entries to fetch. -1 means ALL." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPagedQueryBP, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPagedQueryBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPagedQueryBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"PagedQueryBP",
		sizeof(FPagedQueryBP),
		alignof(FPagedQueryBP),
		Z_Construct_UScriptStruct_FPagedQueryBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPagedQueryBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPagedQueryBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPagedQueryBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPagedQueryBP()
	{
		if (!Z_Registration_Info_UScriptStruct_PagedQueryBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PagedQueryBP.InnerSingleton, Z_Construct_UScriptStruct_FPagedQueryBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PagedQueryBP.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_Statics::ScriptStructInfo[] = {
		{ FCloudFileHeaderBP::StaticStruct, Z_Construct_UScriptStruct_FCloudFileHeaderBP_Statics::NewStructOps, TEXT("CloudFileHeaderBP"), &Z_Registration_Info_UScriptStruct_CloudFileHeaderBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudFileHeaderBP), 4143067514U) },
		{ FPagedQueryBP::StaticStruct, Z_Construct_UScriptStruct_FPagedQueryBP_Statics::NewStructOps, TEXT("PagedQueryBP"), &Z_Registration_Info_UScriptStruct_PagedQueryBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPagedQueryBP), 2694390678U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileData, UFileData::StaticClass, TEXT("UFileData"), &Z_Registration_Info_UClass_UFileData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileData), 3986992815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_2380282970(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBFileTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
