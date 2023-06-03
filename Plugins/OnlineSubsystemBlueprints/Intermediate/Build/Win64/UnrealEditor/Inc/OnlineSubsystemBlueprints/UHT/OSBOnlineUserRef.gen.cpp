// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints/Public/Types/OSBOnlineUserRef.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSBOnlineUserRef() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserRef();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineUserRef_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UUserOnlineAccountRef();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UUserOnlineAccountRef_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineUserRef::execSetUserLocalAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserLocalAttribute_Implementation(Z_Param_Key,Z_Param_Value,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserRef::execGetUserAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_Found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserAttribute_Implementation(Z_Param_Key,Z_Param_Out_Found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserRef::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserRef::execGetRealName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRealName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineUserRef::execGetUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetUserId_Implementation();
		P_NATIVE_END;
	}
	struct OnlineUserRef_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
	struct OnlineUserRef_eventGetRealName_Parms
	{
		FString ReturnValue;
	};
	struct OnlineUserRef_eventGetUserAttribute_Parms
	{
		FString Key;
		bool Found;
		FString ReturnValue;
	};
	struct OnlineUserRef_eventGetUserId_Parms
	{
		FUniqueNetIdRepl ReturnValue;
	};
	struct OnlineUserRef_eventSetUserLocalAttribute_Parms
	{
		FString Key;
		FString Value;
		bool Success;
	};
	static FName NAME_UOnlineUserRef_GetDisplayName = FName(TEXT("GetDisplayName"));
	FString UOnlineUserRef::GetDisplayName()
	{
		OnlineUserRef_eventGetDisplayName_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UOnlineUserRef_GetDisplayName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UOnlineUserRef_GetRealName = FName(TEXT("GetRealName"));
	FString UOnlineUserRef::GetRealName()
	{
		OnlineUserRef_eventGetRealName_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UOnlineUserRef_GetRealName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UOnlineUserRef_GetUserAttribute = FName(TEXT("GetUserAttribute"));
	FString UOnlineUserRef::GetUserAttribute(const FString& Key, bool& Found)
	{
		OnlineUserRef_eventGetUserAttribute_Parms Parms;
		Parms.Key=Key;
		Parms.Found=Found ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UOnlineUserRef_GetUserAttribute),&Parms);
		Found=Parms.Found;
		return Parms.ReturnValue;
	}
	static FName NAME_UOnlineUserRef_GetUserId = FName(TEXT("GetUserId"));
	FUniqueNetIdRepl UOnlineUserRef::GetUserId()
	{
		OnlineUserRef_eventGetUserId_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UOnlineUserRef_GetUserId),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UOnlineUserRef_SetUserLocalAttribute = FName(TEXT("SetUserLocalAttribute"));
	void UOnlineUserRef::SetUserLocalAttribute(const FString& Key, const FString& Value, bool& Success)
	{
		OnlineUserRef_eventSetUserLocalAttribute_Parms Parms;
		Parms.Key=Key;
		Parms.Value=Value;
		Parms.Success=Success ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UOnlineUserRef_SetUserLocalAttribute),&Parms);
		Success=Parms.Success;
	}
	void UOnlineUserRef::StaticRegisterNativesUOnlineUserRef()
	{
		UClass* Class = UOnlineUserRef::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UOnlineUserRef::execGetDisplayName },
			{ "GetRealName", &UOnlineUserRef::execGetRealName },
			{ "GetUserAttribute", &UOnlineUserRef::execGetUserAttribute },
			{ "GetUserId", &UOnlineUserRef::execGetUserId },
			{ "SetUserLocalAttribute", &UOnlineUserRef::execSetUserLocalAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserRef_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns the display name for this user.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Returns the display name for this user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserRef, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(OnlineUserRef_eventGetDisplayName_Parms), Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserRef_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserRef_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserRef_eventGetRealName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns the real name of this user.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Returns the real name of this user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserRef, nullptr, "GetRealName", nullptr, nullptr, sizeof(OnlineUserRef_eventGetRealName_Parms), Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserRef_GetRealName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserRef_GetRealName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Found;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserRef_eventGetUserAttribute_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Found_SetBit(void* Obj)
	{
		((OnlineUserRef_eventGetUserAttribute_Parms*)Obj)->Found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserRef_eventGetUserAttribute_Parms), &Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserRef_eventGetUserAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns an attribute of the user, and whether or not the attribute was found.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Returns an attribute of the user, and whether or not the attribute was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserRef, nullptr, "GetUserAttribute", nullptr, nullptr, sizeof(OnlineUserRef_eventGetUserAttribute_Parms), Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserRef_eventGetUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns the unique player ID for this user.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Returns the unique player ID for this user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserRef, nullptr, "GetUserId", nullptr, nullptr, sizeof(OnlineUserRef_eventGetUserId_Parms), Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserRef_GetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserRef_GetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserRef_eventSetUserLocalAttribute_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineUserRef_eventSetUserLocalAttribute_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((OnlineUserRef_eventSetUserLocalAttribute_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineUserRef_eventSetUserLocalAttribute_Parms), &Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Attempt to set a local user attribute. Not supported by default.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Attempt to set a local user attribute. Not supported by default." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineUserRef, nullptr, "SetUserLocalAttribute", nullptr, nullptr, sizeof(OnlineUserRef_eventSetUserLocalAttribute_Parms), Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineUserRef);
	UClass* Z_Construct_UClass_UOnlineUserRef_NoRegister()
	{
		return UOnlineUserRef::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineUserRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineUserRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineUserRef_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineUserRef_GetDisplayName, "GetDisplayName" }, // 3689895911
		{ &Z_Construct_UFunction_UOnlineUserRef_GetRealName, "GetRealName" }, // 1749472507
		{ &Z_Construct_UFunction_UOnlineUserRef_GetUserAttribute, "GetUserAttribute" }, // 2005202441
		{ &Z_Construct_UFunction_UOnlineUserRef_GetUserId, "GetUserId" }, // 2289443957
		{ &Z_Construct_UFunction_UOnlineUserRef_SetUserLocalAttribute, "SetUserLocalAttribute" }, // 3563928320
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineUserRef_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBOnlineUserRef.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineUserRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineUserRef>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineUserRef_Statics::ClassParams = {
		&UOnlineUserRef::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineUserRef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineUserRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineUserRef()
	{
		if (!Z_Registration_Info_UClass_UOnlineUserRef.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineUserRef.OuterSingleton, Z_Construct_UClass_UOnlineUserRef_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineUserRef.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineUserRef>()
	{
		return UOnlineUserRef::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineUserRef);
	UOnlineUserRef::~UOnlineUserRef() {}
	DEFINE_FUNCTION(UUserOnlineAccountRef::execSetUserAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserAttribute(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserOnlineAccountRef::execGetAuthAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_Found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAuthAttribute(Z_Param_Key,Z_Param_Out_Found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserOnlineAccountRef::execGetAccessToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken();
		P_NATIVE_END;
	}
	void UUserOnlineAccountRef::StaticRegisterNativesUUserOnlineAccountRef()
	{
		UClass* Class = UUserOnlineAccountRef::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccessToken", &UUserOnlineAccountRef::execGetAccessToken },
			{ "GetAuthAttribute", &UUserOnlineAccountRef::execGetAuthAttribute },
			{ "SetUserAttribute", &UUserOnlineAccountRef::execSetUserAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics
	{
		struct UserOnlineAccountRef_eventGetAccessToken_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserOnlineAccountRef_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns the access token for this user.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Returns the access token for this user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserOnlineAccountRef, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::UserOnlineAccountRef_eventGetAccessToken_Parms), Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics
	{
		struct UserOnlineAccountRef_eventGetAuthAttribute_Parms
		{
			FString Key;
			bool Found;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Found;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserOnlineAccountRef_eventGetAuthAttribute_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_Found_SetBit(void* Obj)
	{
		((UserOnlineAccountRef_eventGetAuthAttribute_Parms*)Obj)->Found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserOnlineAccountRef_eventGetAuthAttribute_Parms), &Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_Found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserOnlineAccountRef_eventGetAuthAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Returns an authentication attribute of the user, and whether or not the attribute was found.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Returns an authentication attribute of the user, and whether or not the attribute was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserOnlineAccountRef, nullptr, "GetAuthAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::UserOnlineAccountRef_eventGetAuthAttribute_Parms), Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics
	{
		struct UserOnlineAccountRef_eventSetUserAttribute_Parms
		{
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserOnlineAccountRef_eventSetUserAttribute_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserOnlineAccountRef_eventSetUserAttribute_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserOnlineAccountRef_eventSetUserAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserOnlineAccountRef_eventSetUserAttribute_Parms), &Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "Comment", "/**\n     * Sets an attribute of the user, and whether or not it could be set.\n     */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Sets an attribute of the user, and whether or not it could be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserOnlineAccountRef, nullptr, "SetUserAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::UserOnlineAccountRef_eventSetUserAttribute_Parms), Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserOnlineAccountRef);
	UClass* Z_Construct_UClass_UUserOnlineAccountRef_NoRegister()
	{
		return UUserOnlineAccountRef::StaticClass();
	}
	struct Z_Construct_UClass_UUserOnlineAccountRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserOnlineAccountRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineUserRef,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserOnlineAccountRef_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserOnlineAccountRef_GetAccessToken, "GetAccessToken" }, // 1147751399
		{ &Z_Construct_UFunction_UUserOnlineAccountRef_GetAuthAttribute, "GetAuthAttribute" }, // 3863113266
		{ &Z_Construct_UFunction_UUserOnlineAccountRef_SetUserAttribute, "SetUserAttribute" }, // 993051519
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserOnlineAccountRef_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "IncludePath", "Types/OSBOnlineUserRef.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserOnlineAccountRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserOnlineAccountRef>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserOnlineAccountRef_Statics::ClassParams = {
		&UUserOnlineAccountRef::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserOnlineAccountRef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserOnlineAccountRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserOnlineAccountRef()
	{
		if (!Z_Registration_Info_UClass_UUserOnlineAccountRef.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserOnlineAccountRef.OuterSingleton, Z_Construct_UClass_UUserOnlineAccountRef_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserOnlineAccountRef.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UUserOnlineAccountRef>()
	{
		return UUserOnlineAccountRef::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserOnlineAccountRef);
	UUserOnlineAccountRef::~UUserOnlineAccountRef() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP;
class UScriptStruct* FExternalIdQueryOptionsBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP, Z_Construct_UPackage__Script_OnlineSubsystemBlueprints(), TEXT("ExternalIdQueryOptionsBP"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP.OuterSingleton;
}
template<> ONLINESUBSYSTEMBLUEPRINTS_API UScriptStruct* StaticStruct<FExternalIdQueryOptionsBP>()
{
	return FExternalIdQueryOptionsBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLookupByDisplayName_MetaData[];
#endif
		static void NewProp_bLookupByDisplayName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLookupByDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuthType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains the query options when looking up external IDs.\n */" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
		{ "ToolTip", "Contains the query options when looking up external IDs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalIdQueryOptionsBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_bLookupByDisplayName_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_bLookupByDisplayName_SetBit(void* Obj)
	{
		((FExternalIdQueryOptionsBP*)Obj)->bLookupByDisplayName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_bLookupByDisplayName = { "bLookupByDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FExternalIdQueryOptionsBP), &Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_bLookupByDisplayName_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_bLookupByDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_bLookupByDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_AuthType_MetaData[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Types/OSBOnlineUserRef.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_AuthType = { "AuthType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalIdQueryOptionsBP, AuthType), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_AuthType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_AuthType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_bLookupByDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewProp_AuthType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
		nullptr,
		&NewStructOps,
		"ExternalIdQueryOptionsBP",
		sizeof(FExternalIdQueryOptionsBP),
		alignof(FExternalIdQueryOptionsBP),
		Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP()
	{
		if (!Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP.InnerSingleton, Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_Statics::ScriptStructInfo[] = {
		{ FExternalIdQueryOptionsBP::StaticStruct, Z_Construct_UScriptStruct_FExternalIdQueryOptionsBP_Statics::NewStructOps, TEXT("ExternalIdQueryOptionsBP"), &Z_Registration_Info_UScriptStruct_ExternalIdQueryOptionsBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalIdQueryOptionsBP), 358778272U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineUserRef, UOnlineUserRef::StaticClass, TEXT("UOnlineUserRef"), &Z_Registration_Info_UClass_UOnlineUserRef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineUserRef), 1662766907U) },
		{ Z_Construct_UClass_UUserOnlineAccountRef, UUserOnlineAccountRef::StaticClass, TEXT("UUserOnlineAccountRef"), &Z_Registration_Info_UClass_UUserOnlineAccountRef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserOnlineAccountRef), 1269845937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_3437824764(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_Public_Types_OSBOnlineUserRef_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
