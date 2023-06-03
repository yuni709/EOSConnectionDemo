// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSharingSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSharingSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineSharingSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventSharing_RequestNewReadPermissionsComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool Param1;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewReadPermissionsComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewReadPermissionsComplete_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewReadPermissionsComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewReadPermissionsComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventSharing_RequestNewPublishPermissionsComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool Param1;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewPublishPermissionsComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewPublishPermissionsComplete_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewPublishPermissionsComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::NewProp_Param1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventSharing_RequestNewPublishPermissionsComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventSharing_ReadNewsFeedComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool Param1;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventSharing_ReadNewsFeedComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventSharing_ReadNewsFeedComplete_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventSharing_ReadNewsFeedComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::NewProp_Param1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Sharing_ReadNewsFeedComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventSharing_ReadNewsFeedComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventSharing_SharePostComplete_BP_Parms
		{
			int32 LocalUserNum;
			bool Param1;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventSharing_SharePostComplete_BP_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventSharing_SharePostComplete_BP_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventSharing_SharePostComplete_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::NewProp_Param1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Sharing_SharePostComplete_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventSharing_SharePostComplete_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineSharingSubsystem::execReadNewsFeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPostsToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadNewsFeed(Z_Param_LocalUserNum,Z_Param_NumPostsToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineSharingSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineSharingSubsystem::StaticRegisterNativesUOnlineSharingSubsystem()
	{
		UClass* Class = UOnlineSharingSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSubsystemAvailable", &UOnlineSharingSubsystem::execIsSubsystemAvailable },
			{ "ReadNewsFeed", &UOnlineSharingSubsystem::execReadNewsFeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineSharingSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineSharingSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineSharingSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Sharing" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSharingSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::OnlineSharingSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics
	{
		struct OnlineSharingSubsystem_eventReadNewsFeed_Parms
		{
			int32 LocalUserNum;
			int32 NumPostsToRead;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPostsToRead;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSharingSubsystem_eventReadNewsFeed_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_NumPostsToRead = { "NumPostsToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineSharingSubsystem_eventReadNewsFeed_Parms, NumPostsToRead), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineSharingSubsystem_eventReadNewsFeed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineSharingSubsystem_eventReadNewsFeed_Parms), &Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_NumPostsToRead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Sharing" },
		{ "Comment", "// @generator-incompatible\n// bool RequestNewPublishPermissions(int32 LocalUserNum, EOnlineSharingCategory NewPermissions, EOnlineStatusUpdatePrivacy Privacy);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nbool RequestNewPublishPermissions(int32 LocalUserNum, EOnlineSharingCategory NewPermissions, EOnlineStatusUpdatePrivacy Privacy);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineSharingSubsystem, nullptr, "ReadNewsFeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::OnlineSharingSubsystem_eventReadNewsFeed_Parms), Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSharingSubsystem);
	UClass* Z_Construct_UClass_UOnlineSharingSubsystem_NoRegister()
	{
		return UOnlineSharingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSharingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestNewReadPermissionsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestNewReadPermissionsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestNewPublishPermissionsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestNewPublishPermissionsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadNewsFeedComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadNewsFeedComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSharePostComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSharePostComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSharingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineSharingSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineSharingSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 923270137
		{ &Z_Construct_UFunction_UOnlineSharingSubsystem_ReadNewsFeed, "ReadNewsFeed" }, // 2929787543
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSharingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewReadPermissionsComplete_MetaData[] = {
		{ "Category", "Online|Sharing" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewReadPermissionsComplete = { "OnRequestNewReadPermissionsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSharingSubsystem, OnRequestNewReadPermissionsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewReadPermissionsComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewReadPermissionsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewReadPermissionsComplete_MetaData)) }; // 657342896
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewPublishPermissionsComplete_MetaData[] = {
		{ "Category", "Online|Sharing" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewPublishPermissionsComplete = { "OnRequestNewPublishPermissionsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSharingSubsystem, OnRequestNewPublishPermissionsComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_RequestNewPublishPermissionsComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewPublishPermissionsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewPublishPermissionsComplete_MetaData)) }; // 1843080720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnReadNewsFeedComplete_MetaData[] = {
		{ "Category", "Online|Sharing" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnReadNewsFeedComplete = { "OnReadNewsFeedComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSharingSubsystem, OnReadNewsFeedComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_ReadNewsFeedComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnReadNewsFeedComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnReadNewsFeedComplete_MetaData)) }; // 370203786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnSharePostComplete_MetaData[] = {
		{ "Category", "Online|Sharing" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineSharingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnSharePostComplete = { "OnSharePostComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineSharingSubsystem, OnSharePostComplete), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Sharing_SharePostComplete_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnSharePostComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnSharePostComplete_MetaData)) }; // 3293396015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSharingSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewReadPermissionsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnRequestNewPublishPermissionsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnReadNewsFeedComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSharingSubsystem_Statics::NewProp_OnSharePostComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSharingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSharingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSharingSubsystem_Statics::ClassParams = {
		&UOnlineSharingSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineSharingSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSharingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSharingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineSharingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSharingSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineSharingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSharingSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineSharingSubsystem>()
	{
		return UOnlineSharingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSharingSubsystem);
	UOnlineSharingSubsystem::~UOnlineSharingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSharingSubsystem, UOnlineSharingSubsystem::StaticClass, TEXT("UOnlineSharingSubsystem"), &Z_Registration_Info_UClass_UOnlineSharingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSharingSubsystem), 729269927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_2174222858(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineSharingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
