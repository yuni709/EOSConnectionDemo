// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineChatSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineChatSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineChatSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			bool Param3;
			FString Param4;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static void NewProp_Param3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param3_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms*)Obj)->Param3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param3_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms, Param4), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::NewProp_Param4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomCreated_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomCreated_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			bool Param3;
			FString Param4;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static void NewProp_Param3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param3_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms*)Obj)->Param3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param3_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms, Param4), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::NewProp_Param4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomConfigured_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomConfigured_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			bool Param3;
			FString Param4;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static void NewProp_Param3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param3_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms*)Obj)->Param3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param3_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms, Param4), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::NewProp_Param4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomJoinPublic_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPublic_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			bool Param3;
			FString Param4;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static void NewProp_Param3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param3_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms*)Obj)->Param3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param3_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms, Param4), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::NewProp_Param4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomJoinPrivate_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomJoinPrivate_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			bool Param3;
			FString Param4;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static void NewProp_Param3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param3_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms*)Obj)->Param3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param3_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms, Param4), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::NewProp_Param4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomExit_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomExit_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberJoin_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			FUniqueNetIdRepl Param3;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberJoin_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberJoin_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberJoin_BP_Parms, Param3), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::NewProp_Param3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomMemberJoin_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberJoin_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberExit_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			FUniqueNetIdRepl Param3;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberExit_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberExit_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberExit_BP_Parms, Param3), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::NewProp_Param3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomMemberExit_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberExit_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberUpdate_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			FString Param2;
			FUniqueNetIdRepl Param3;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberUpdate_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberUpdate_BP_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberUpdate_BP_Parms, Param3), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::NewProp_Param3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Chat_ChatRoomMemberUpdate_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventChat_ChatRoomMemberUpdate_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineChatSubsystem::execDumpChatState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpChatState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineChatSubsystem::execGetJoinedRooms)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutRooms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetJoinedRooms(Z_Param_UserId,Z_Param_Out_OutRooms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineChatSubsystem::execIsChatAllowed)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_RecipientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChatAllowed(Z_Param_UserId,Z_Param_RecipientId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineChatSubsystem::execSendPrivateChat)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_RecipientId);
		P_GET_PROPERTY(FStrProperty,Z_Param_MsgBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPrivateChat(Z_Param_UserId,Z_Param_RecipientId,Z_Param_MsgBody);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineChatSubsystem::execSendRoomChat)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomId);
		P_GET_PROPERTY(FStrProperty,Z_Param_MsgBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendRoomChat(Z_Param_UserId,Z_Param_RoomId,Z_Param_MsgBody);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineChatSubsystem::execExitRoom)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExitRoom(Z_Param_UserId,Z_Param_RoomId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineChatSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineChatSubsystem::StaticRegisterNativesUOnlineChatSubsystem()
	{
		UClass* Class = UOnlineChatSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DumpChatState", &UOnlineChatSubsystem::execDumpChatState },
			{ "ExitRoom", &UOnlineChatSubsystem::execExitRoom },
			{ "GetJoinedRooms", &UOnlineChatSubsystem::execGetJoinedRooms },
			{ "IsChatAllowed", &UOnlineChatSubsystem::execIsChatAllowed },
			{ "IsSubsystemAvailable", &UOnlineChatSubsystem::execIsSubsystemAvailable },
			{ "SendPrivateChat", &UOnlineChatSubsystem::execSendPrivateChat },
			{ "SendRoomChat", &UOnlineChatSubsystem::execSendRoomChat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Chat" },
		{ "Comment", "// @generator-incompatible\n// bool IsMessageFromLocalUser(const FUniqueNetId& UserId, const FChatMessage& Message, const bool bIncludeExternalInstances);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nbool IsMessageFromLocalUser(const FUniqueNetId& UserId, const FChatMessage& Message, const bool bIncludeExternalInstances);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineChatSubsystem, nullptr, "DumpChatState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics
	{
		struct OnlineChatSubsystem_eventExitRoom_Parms
		{
			FUniqueNetIdRepl UserId;
			FString RoomId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventExitRoom_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventExitRoom_Parms, RoomId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineChatSubsystem_eventExitRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineChatSubsystem_eventExitRoom_Parms), &Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_RoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Chat" },
		{ "Comment", "// @generator-incompatible\n// bool JoinPrivateRoom(const FUniqueNetId& UserId, const FChatRoomId& RoomId, const FString& Nickname, const FChatRoomConfig& ChatRoomConfig);\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nbool JoinPrivateRoom(const FUniqueNetId& UserId, const FChatRoomId& RoomId, const FString& Nickname, const FChatRoomConfig& ChatRoomConfig);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineChatSubsystem, nullptr, "ExitRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::OnlineChatSubsystem_eventExitRoom_Parms), Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics
	{
		struct OnlineChatSubsystem_eventGetJoinedRooms_Parms
		{
			FUniqueNetIdRepl UserId;
			TArray<FString> OutRooms;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutRooms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventGetJoinedRooms_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::NewProp_OutRooms_Inner = { "OutRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::NewProp_OutRooms = { "OutRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventGetJoinedRooms_Parms, OutRooms), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::NewProp_OutRooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::NewProp_OutRooms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineChatSubsystem, nullptr, "GetJoinedRooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::OnlineChatSubsystem_eventGetJoinedRooms_Parms), Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics
	{
		struct OnlineChatSubsystem_eventIsChatAllowed_Parms
		{
			FUniqueNetIdRepl UserId;
			FUniqueNetIdRepl RecipientId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecipientId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventIsChatAllowed_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_RecipientId = { "RecipientId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventIsChatAllowed_Parms, RecipientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineChatSubsystem_eventIsChatAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineChatSubsystem_eventIsChatAllowed_Parms), &Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_RecipientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineChatSubsystem, nullptr, "IsChatAllowed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::OnlineChatSubsystem_eventIsChatAllowed_Parms), Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineChatSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineChatSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineChatSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineChatSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::OnlineChatSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics
	{
		struct OnlineChatSubsystem_eventSendPrivateChat_Parms
		{
			FUniqueNetIdRepl UserId;
			FUniqueNetIdRepl RecipientId;
			FString MsgBody;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecipientId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MsgBody;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventSendPrivateChat_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_RecipientId = { "RecipientId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventSendPrivateChat_Parms, RecipientId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_MsgBody = { "MsgBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventSendPrivateChat_Parms, MsgBody), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineChatSubsystem_eventSendPrivateChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineChatSubsystem_eventSendPrivateChat_Parms), &Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_RecipientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_MsgBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineChatSubsystem, nullptr, "SendPrivateChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::OnlineChatSubsystem_eventSendPrivateChat_Parms), Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics
	{
		struct OnlineChatSubsystem_eventSendRoomChat_Parms
		{
			FUniqueNetIdRepl UserId;
			FString RoomId;
			FString MsgBody;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MsgBody;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventSendRoomChat_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventSendRoomChat_Parms, RoomId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_MsgBody = { "MsgBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineChatSubsystem_eventSendRoomChat_Parms, MsgBody), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineChatSubsystem_eventSendRoomChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineChatSubsystem_eventSendRoomChat_Parms), &Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_RoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_MsgBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineChatSubsystem, nullptr, "SendRoomChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::OnlineChatSubsystem_eventSendRoomChat_Parms), Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineChatSubsystem);
	UClass* Z_Construct_UClass_UOnlineChatSubsystem_NoRegister()
	{
		return UOnlineChatSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineChatSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomConfigured_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomConfigured;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomJoinPublic_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomJoinPublic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomJoinPrivate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomJoinPrivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomExit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomMemberJoin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomMemberJoin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomMemberExit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomMemberExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChatRoomMemberUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatRoomMemberUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineChatSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineChatSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineChatSubsystem_DumpChatState, "DumpChatState" }, // 3683628136
		{ &Z_Construct_UFunction_UOnlineChatSubsystem_ExitRoom, "ExitRoom" }, // 352889092
		{ &Z_Construct_UFunction_UOnlineChatSubsystem_GetJoinedRooms, "GetJoinedRooms" }, // 43876448
		{ &Z_Construct_UFunction_UOnlineChatSubsystem_IsChatAllowed, "IsChatAllowed" }, // 2556541287
		{ &Z_Construct_UFunction_UOnlineChatSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 1999754994
		{ &Z_Construct_UFunction_UOnlineChatSubsystem_SendPrivateChat, "SendPrivateChat" }, // 2903438149
		{ &Z_Construct_UFunction_UOnlineChatSubsystem_SendRoomChat, "SendRoomChat" }, // 2993035399
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// @parameters-not-compatible\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChat_ChatPrivateMessageReceived_BP, const FUniqueNetId&, Param1, const TSharedRef<FChatMessage>&, Param2);\n" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
		{ "ToolTip", "@parameters-not-compatible\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChat_ChatPrivateMessageReceived_BP, const FUniqueNetId&, Param1, const TSharedRef<FChatMessage>&, Param2);" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomCreated_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomCreated = { "OnChatRoomCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomCreated), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomCreated_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomCreated_MetaData)) }; // 3936221496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomConfigured_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomConfigured = { "OnChatRoomConfigured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomConfigured), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomConfigured_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomConfigured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomConfigured_MetaData)) }; // 2744289315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPublic_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPublic = { "OnChatRoomJoinPublic", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomJoinPublic), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPublic_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPublic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPublic_MetaData)) }; // 1737454067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPrivate_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPrivate = { "OnChatRoomJoinPrivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomJoinPrivate), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomJoinPrivate_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPrivate_MetaData)) }; // 1395561439
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomExit_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomExit = { "OnChatRoomExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomExit), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomExit_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomExit_MetaData)) }; // 966800122
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberJoin_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberJoin = { "OnChatRoomMemberJoin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomMemberJoin), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberJoin_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberJoin_MetaData)) }; // 3608914466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberExit_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberExit = { "OnChatRoomMemberExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomMemberExit), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberExit_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberExit_MetaData)) }; // 3025512302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberUpdate_MetaData[] = {
		{ "Category", "Online|Chat" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineChatSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberUpdate = { "OnChatRoomMemberUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineChatSubsystem, OnChatRoomMemberUpdate), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Chat_ChatRoomMemberUpdate_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberUpdate_MetaData)) }; // 1084694653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineChatSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomConfigured,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPublic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomJoinPrivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberJoin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineChatSubsystem_Statics::NewProp_OnChatRoomMemberUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineChatSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineChatSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineChatSubsystem_Statics::ClassParams = {
		&UOnlineChatSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineChatSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineChatSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineChatSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineChatSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineChatSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineChatSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineChatSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineChatSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineChatSubsystem>()
	{
		return UOnlineChatSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineChatSubsystem);
	UOnlineChatSubsystem::~UOnlineChatSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineChatSubsystem, UOnlineChatSubsystem::StaticClass, TEXT("UOnlineChatSubsystem"), &Z_Registration_Info_UClass_UOnlineChatSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineChatSubsystem), 646036572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_1549633449(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineChatSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
