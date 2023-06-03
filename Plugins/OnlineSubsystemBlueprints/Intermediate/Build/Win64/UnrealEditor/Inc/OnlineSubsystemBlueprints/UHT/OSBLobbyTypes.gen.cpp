// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBLobbyTypes.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBLobbyTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_ULobby();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_ULobby_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_ULobbyId();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_ULobbyId_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbyMemberTransaction();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbyMemberTransaction_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbyTransaction();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator_();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDataBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyId::execToDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToDebugString();
		P_NATIVE_END;
	}
	void ULobbyId::StaticRegisterNativesULobbyId()
	{
		UClass* Class = ULobbyId::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToDebugString", &ULobbyId::execToDebugString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyId_ToDebugString_Statics
	{
		struct LobbyId_eventToDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyId_eventToDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyId, nullptr, "ToDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::LobbyId_eventToDebugString_Parms), Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyId_ToDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyId_ToDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULobbyId);
	UClass* Z_Construct_UClass_ULobbyId_NoRegister()
	{
		return ULobbyId::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyId_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyId_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyId_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyId_ToDebugString, "ToDebugString" }, // 729076961
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyId_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBLobbyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyId_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyId>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyId_Statics::ClassParams = {
		&ULobbyId::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULobbyId_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyId_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyId()
	{
		if (!Z_Registration_Info_UClass_ULobbyId.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyId.OuterSingleton, Z_Construct_UClass_ULobbyId_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULobbyId.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<ULobbyId>()
	{
		return ULobbyId::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyId);
	ULobbyId::~ULobbyId() {}
	DEFINE_FUNCTION(ULobby::execGetOwnerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetOwnerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobby::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULobbyId**)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void ULobby::StaticRegisterNativesULobby()
	{
		UClass* Class = ULobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetId", &ULobby::execGetId },
			{ "GetOwnerId", &ULobby::execGetOwnerId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobby_GetId_Statics
	{
		struct Lobby_eventGetId_Parms
		{
			ULobbyId* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULobby_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Lobby_eventGetId_Parms, ReturnValue), Z_Construct_UClass_ULobbyId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobby_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobby_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobby_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobby_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobby, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULobby_GetId_Statics::Lobby_eventGetId_Parms), Z_Construct_UFunction_ULobby_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobby_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobby_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobby_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobby_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobby_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobby_GetOwnerId_Statics
	{
		struct Lobby_eventGetOwnerId_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULobby_GetOwnerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Lobby_eventGetOwnerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobby_GetOwnerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobby_GetOwnerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobby_GetOwnerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobby_GetOwnerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobby, nullptr, "GetOwnerId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULobby_GetOwnerId_Statics::Lobby_eventGetOwnerId_Parms), Z_Construct_UFunction_ULobby_GetOwnerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobby_GetOwnerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobby_GetOwnerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobby_GetOwnerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobby_GetOwnerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobby_GetOwnerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULobby);
	UClass* Z_Construct_UClass_ULobby_NoRegister()
	{
		return ULobby::StaticClass();
	}
	struct Z_Construct_UClass_ULobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobby_GetId, "GetId" }, // 2457386450
		{ &Z_Construct_UFunction_ULobby_GetOwnerId, "GetOwnerId" }, // 2630098855
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBLobbyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobby>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobby_Statics::ClassParams = {
		&ULobby::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobby()
	{
		if (!Z_Registration_Info_UClass_ULobby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobby.OuterSingleton, Z_Construct_UClass_ULobby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULobby.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<ULobby>()
	{
		return ULobby::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobby);
	ULobby::~ULobby() {}
	DEFINE_FUNCTION(UOnlineLobbyTransaction::execSetPublic)
	{
		P_GET_UBOOL(Z_Param_Public);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPublic(Z_Param_Public);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyTransaction::execSetCapacity)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Capacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapacity(Z_Param_Capacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyTransaction::execSetLocked)
	{
		P_GET_UBOOL(Z_Param_Locked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocked(Z_Param_Locked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyTransaction::execDeleteMetadataByArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MetadataKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteMetadataByArray(Z_Param_Out_MetadataKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyTransaction::execDeleteMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteMetadata(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyTransaction::execSetMetadataByMap)
	{
		P_GET_TMAP_REF(FString,FVariantDataBP,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMetadataByMap(Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyTransaction::execSetMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVariantDataBP,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMetadata(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UOnlineLobbyTransaction::StaticRegisterNativesUOnlineLobbyTransaction()
	{
		UClass* Class = UOnlineLobbyTransaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteMetadata", &UOnlineLobbyTransaction::execDeleteMetadata },
			{ "DeleteMetadataByArray", &UOnlineLobbyTransaction::execDeleteMetadataByArray },
			{ "SetCapacity", &UOnlineLobbyTransaction::execSetCapacity },
			{ "SetLocked", &UOnlineLobbyTransaction::execSetLocked },
			{ "SetMetadata", &UOnlineLobbyTransaction::execSetMetadata },
			{ "SetMetadataByMap", &UOnlineLobbyTransaction::execSetMetadataByMap },
			{ "SetPublic", &UOnlineLobbyTransaction::execSetPublic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics
	{
		struct OnlineLobbyTransaction_eventDeleteMetadata_Parms
		{
			FString Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyTransaction_eventDeleteMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyTransaction, nullptr, "DeleteMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::OnlineLobbyTransaction_eventDeleteMetadata_Parms), Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics
	{
		struct OnlineLobbyTransaction_eventDeleteMetadataByArray_Parms
		{
			TArray<FString> MetadataKeys;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetadataKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_Inner = { "MetadataKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys = { "MetadataKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyTransaction_eventDeleteMetadataByArray_Parms, MetadataKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyTransaction, nullptr, "DeleteMetadataByArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::OnlineLobbyTransaction_eventDeleteMetadataByArray_Parms), Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics
	{
		struct OnlineLobbyTransaction_eventSetCapacity_Parms
		{
			int64 Capacity;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Capacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyTransaction_eventSetCapacity_Parms, Capacity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::NewProp_Capacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyTransaction, nullptr, "SetCapacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::OnlineLobbyTransaction_eventSetCapacity_Parms), Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics
	{
		struct OnlineLobbyTransaction_eventSetLocked_Parms
		{
			bool Locked;
		};
		static void NewProp_Locked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::NewProp_Locked_SetBit(void* Obj)
	{
		((OnlineLobbyTransaction_eventSetLocked_Parms*)Obj)->Locked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLobbyTransaction_eventSetLocked_Parms), &Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::NewProp_Locked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyTransaction, nullptr, "SetLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::OnlineLobbyTransaction_eventSetLocked_Parms), Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics
	{
		struct OnlineLobbyTransaction_eventSetMetadata_Parms
		{
			FString Key;
			FVariantDataBP Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyTransaction_eventSetMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyTransaction_eventSetMetadata_Parms, Value), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Value_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyTransaction, nullptr, "SetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::OnlineLobbyTransaction_eventSetMetadata_Parms), Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics
	{
		struct OnlineLobbyTransaction_eventSetMetadataByMap_Parms
		{
			TMap<FString,FVariantDataBP> Metadata;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyTransaction_eventSetMetadataByMap_Parms, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyTransaction, nullptr, "SetMetadataByMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::OnlineLobbyTransaction_eventSetMetadataByMap_Parms), Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics
	{
		struct OnlineLobbyTransaction_eventSetPublic_Parms
		{
			bool Public;
		};
		static void NewProp_Public_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Public;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::NewProp_Public_SetBit(void* Obj)
	{
		((OnlineLobbyTransaction_eventSetPublic_Parms*)Obj)->Public = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::NewProp_Public = { "Public", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineLobbyTransaction_eventSetPublic_Parms), &Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::NewProp_Public_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::NewProp_Public,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyTransaction, nullptr, "SetPublic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::OnlineLobbyTransaction_eventSetPublic_Parms), Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbyTransaction);
	UClass* Z_Construct_UClass_UOnlineLobbyTransaction_NoRegister()
	{
		return UOnlineLobbyTransaction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbyTransaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbyTransaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbyTransaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadata, "DeleteMetadata" }, // 3797665657
		{ &Z_Construct_UFunction_UOnlineLobbyTransaction_DeleteMetadataByArray, "DeleteMetadataByArray" }, // 937785953
		{ &Z_Construct_UFunction_UOnlineLobbyTransaction_SetCapacity, "SetCapacity" }, // 4104138101
		{ &Z_Construct_UFunction_UOnlineLobbyTransaction_SetLocked, "SetLocked" }, // 1279441479
		{ &Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadata, "SetMetadata" }, // 3187170943
		{ &Z_Construct_UFunction_UOnlineLobbyTransaction_SetMetadataByMap, "SetMetadataByMap" }, // 1120586700
		{ &Z_Construct_UFunction_UOnlineLobbyTransaction_SetPublic, "SetPublic" }, // 449035597
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbyTransaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBLobbyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbyTransaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbyTransaction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbyTransaction_Statics::ClassParams = {
		&UOnlineLobbyTransaction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbyTransaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbyTransaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbyTransaction()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbyTransaction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbyTransaction.OuterSingleton, Z_Construct_UClass_UOnlineLobbyTransaction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbyTransaction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbyTransaction>()
	{
		return UOnlineLobbyTransaction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbyTransaction);
	UOnlineLobbyTransaction::~UOnlineLobbyTransaction() {}
	DEFINE_FUNCTION(UOnlineLobbyMemberTransaction::execDeleteMetadataByArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MetadataKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteMetadataByArray(Z_Param_Out_MetadataKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyMemberTransaction::execDeleteMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteMetadata(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyMemberTransaction::execSetMetadataByMap)
	{
		P_GET_TMAP_REF(FString,FVariantDataBP,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMetadataByMap(Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineLobbyMemberTransaction::execSetMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVariantDataBP,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMetadata(Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UOnlineLobbyMemberTransaction::StaticRegisterNativesUOnlineLobbyMemberTransaction()
	{
		UClass* Class = UOnlineLobbyMemberTransaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteMetadata", &UOnlineLobbyMemberTransaction::execDeleteMetadata },
			{ "DeleteMetadataByArray", &UOnlineLobbyMemberTransaction::execDeleteMetadataByArray },
			{ "SetMetadata", &UOnlineLobbyMemberTransaction::execSetMetadata },
			{ "SetMetadataByMap", &UOnlineLobbyMemberTransaction::execSetMetadataByMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics
	{
		struct OnlineLobbyMemberTransaction_eventDeleteMetadata_Parms
		{
			FString Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyMemberTransaction_eventDeleteMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyMemberTransaction, nullptr, "DeleteMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::OnlineLobbyMemberTransaction_eventDeleteMetadata_Parms), Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics
	{
		struct OnlineLobbyMemberTransaction_eventDeleteMetadataByArray_Parms
		{
			TArray<FString> MetadataKeys;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetadataKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_Inner = { "MetadataKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys = { "MetadataKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyMemberTransaction_eventDeleteMetadataByArray_Parms, MetadataKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::NewProp_MetadataKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyMemberTransaction, nullptr, "DeleteMetadataByArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::OnlineLobbyMemberTransaction_eventDeleteMetadataByArray_Parms), Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics
	{
		struct OnlineLobbyMemberTransaction_eventSetMetadata_Parms
		{
			FString Key;
			FVariantDataBP Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyMemberTransaction_eventSetMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyMemberTransaction_eventSetMetadata_Parms, Value), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Value_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyMemberTransaction, nullptr, "SetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::OnlineLobbyMemberTransaction_eventSetMetadata_Parms), Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics
	{
		struct OnlineLobbyMemberTransaction_eventSetMetadataByMap_Parms
		{
			TMap<FString,FVariantDataBP> Metadata;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(nullptr, 0) }; // 960401619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineLobbyMemberTransaction_eventSetMetadataByMap_Parms, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata_MetaData)) }; // 960401619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineLobbyMemberTransaction, nullptr, "SetMetadataByMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::OnlineLobbyMemberTransaction_eventSetMetadataByMap_Parms), Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineLobbyMemberTransaction);
	UClass* Z_Construct_UClass_UOnlineLobbyMemberTransaction_NoRegister()
	{
		return UOnlineLobbyMemberTransaction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadata, "DeleteMetadata" }, // 2827955302
		{ &Z_Construct_UFunction_UOnlineLobbyMemberTransaction_DeleteMetadataByArray, "DeleteMetadataByArray" }, // 3353004093
		{ &Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadata, "SetMetadata" }, // 626370208
		{ &Z_Construct_UFunction_UOnlineLobbyMemberTransaction_SetMetadataByMap, "SetMetadataByMap" }, // 3113245573
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBLobbyTypes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineLobbyMemberTransaction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::ClassParams = {
		&UOnlineLobbyMemberTransaction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineLobbyMemberTransaction()
	{
		if (!Z_Registration_Info_UClass_UOnlineLobbyMemberTransaction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineLobbyMemberTransaction.OuterSingleton, Z_Construct_UClass_UOnlineLobbyMemberTransaction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineLobbyMemberTransaction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineLobbyMemberTransaction>()
	{
		return UOnlineLobbyMemberTransaction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineLobbyMemberTransaction);
	UOnlineLobbyMemberTransaction::~UOnlineLobbyMemberTransaction() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_;
	static UEnum* EOnlineLobbySearchQueryFilterComparator__StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator_, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("EOnlineLobbySearchQueryFilterComparator_"));
		}
		return Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UEnum* StaticEnum<EOnlineLobbySearchQueryFilterComparator_>()
	{
		return EOnlineLobbySearchQueryFilterComparator__StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::Enumerators[] = {
		{ "EOnlineLobbySearchQueryFilterComparator_::Equal", (int64)EOnlineLobbySearchQueryFilterComparator_::Equal },
		{ "EOnlineLobbySearchQueryFilterComparator_::NotEqual", (int64)EOnlineLobbySearchQueryFilterComparator_::NotEqual },
		{ "EOnlineLobbySearchQueryFilterComparator_::LessThan", (int64)EOnlineLobbySearchQueryFilterComparator_::LessThan },
		{ "EOnlineLobbySearchQueryFilterComparator_::LessThanOrEqual", (int64)EOnlineLobbySearchQueryFilterComparator_::LessThanOrEqual },
		{ "EOnlineLobbySearchQueryFilterComparator_::GreaterThan", (int64)EOnlineLobbySearchQueryFilterComparator_::GreaterThan },
		{ "EOnlineLobbySearchQueryFilterComparator_::GreaterThanOrEqual", (int64)EOnlineLobbySearchQueryFilterComparator_::GreaterThanOrEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equal.Name", "EOnlineLobbySearchQueryFilterComparator_::Equal" },
		{ "GreaterThan.Name", "EOnlineLobbySearchQueryFilterComparator_::GreaterThan" },
		{ "GreaterThanOrEqual.Name", "EOnlineLobbySearchQueryFilterComparator_::GreaterThanOrEqual" },
		{ "LessThan.Name", "EOnlineLobbySearchQueryFilterComparator_::LessThan" },
		{ "LessThanOrEqual.Name", "EOnlineLobbySearchQueryFilterComparator_::LessThanOrEqual" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
		{ "NotEqual.Name", "EOnlineLobbySearchQueryFilterComparator_::NotEqual" },
		{ "ScriptName", "EOnlineLobbySearchQueryFilterComparator" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		"EOnlineLobbySearchQueryFilterComparator_",
		"EOnlineLobbySearchQueryFilterComparator_",
		Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator_()
	{
		if (!Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator__Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP;
class UScriptStruct* FOnlineLobbySearchQueryFilterBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineLobbySearchQueryFilterBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineLobbySearchQueryFilterBP>()
{
	return FOnlineLobbySearchQueryFilterBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineLobbySearchQueryFilterBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineLobbySearchQueryFilterBP, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineLobbySearchQueryFilterBP, Value), Z_Construct_UScriptStruct_FVariantDataBP, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Value_MetaData)) }; // 960401619
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Comparison_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineLobbySearchQueryFilterBP, Comparison), Z_Construct_UEnum_OnlineSubsystemBlueprints_EOnlineLobbySearchQueryFilterComparator_, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Comparison_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Comparison_MetaData)) }; // 1773282293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Comparison_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewProp_Comparison,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineLobbySearchQueryFilterBP",
		sizeof(FOnlineLobbySearchQueryFilterBP),
		alignof(FOnlineLobbySearchQueryFilterBP),
		Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP;
class UScriptStruct* FOnlineLobbySearchQueryBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("OnlineLobbySearchQueryBP"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FOnlineLobbySearchQueryBP>()
{
	return FOnlineLobbySearchQueryBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasLimit_MetaData[];
#endif
		static void NewProp_HasLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineLobbySearchQueryBP>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP, METADATA_PARAMS(nullptr, 0) }; // 1796018351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Filters_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The search filters. */" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
		{ "ToolTip", "The search filters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineLobbySearchQueryBP, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Filters_MetaData)) }; // 1796018351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Limit_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** The number of results to return, if HasLimit is true. */" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
		{ "ToolTip", "The number of results to return, if HasLimit is true." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineLobbySearchQueryBP, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Limit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_HasLimit_MetaData[] = {
		{ "Category", "Online" },
		{ "Comment", "/** If false, an unlimited number of results will be returned. */" },
		{ "ModuleRelativePath", "Public/Types/OSBLobbyTypes.h" },
		{ "ToolTip", "If false, an unlimited number of results will be returned." },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_HasLimit_SetBit(void* Obj)
	{
		((FOnlineLobbySearchQueryBP*)Obj)->HasLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_HasLimit = { "HasLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineLobbySearchQueryBP), &Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_HasLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_HasLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_HasLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Filters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Filters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewProp_HasLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"OnlineLobbySearchQueryBP",
		sizeof(FOnlineLobbySearchQueryBP),
		alignof(FOnlineLobbySearchQueryBP),
		Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP.InnerSingleton, Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::EnumInfo[] = {
		{ EOnlineLobbySearchQueryFilterComparator__StaticEnum, TEXT("EOnlineLobbySearchQueryFilterComparator_"), &Z_Registration_Info_UEnum_EOnlineLobbySearchQueryFilterComparator_, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1773282293U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::ScriptStructInfo[] = {
		{ FOnlineLobbySearchQueryFilterBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineLobbySearchQueryFilterBP_Statics::NewStructOps, TEXT("OnlineLobbySearchQueryFilterBP"), &Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryFilterBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineLobbySearchQueryFilterBP), 1796018351U) },
		{ FOnlineLobbySearchQueryBP::StaticStruct, Z_Construct_UScriptStruct_FOnlineLobbySearchQueryBP_Statics::NewStructOps, TEXT("OnlineLobbySearchQueryBP"), &Z_Registration_Info_UScriptStruct_OnlineLobbySearchQueryBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineLobbySearchQueryBP), 1213570340U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyId, ULobbyId::StaticClass, TEXT("ULobbyId"), &Z_Registration_Info_UClass_ULobbyId, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyId), 2837542508U) },
		{ Z_Construct_UClass_ULobby, ULobby::StaticClass, TEXT("ULobby"), &Z_Registration_Info_UClass_ULobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobby), 571609049U) },
		{ Z_Construct_UClass_UOnlineLobbyTransaction, UOnlineLobbyTransaction::StaticClass, TEXT("UOnlineLobbyTransaction"), &Z_Registration_Info_UClass_UOnlineLobbyTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbyTransaction), 3894454505U) },
		{ Z_Construct_UClass_UOnlineLobbyMemberTransaction, UOnlineLobbyMemberTransaction::StaticClass, TEXT("UOnlineLobbyMemberTransaction"), &Z_Registration_Info_UClass_UOnlineLobbyMemberTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineLobbyMemberTransaction), 1744212136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_2590776011(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBLobbyTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
