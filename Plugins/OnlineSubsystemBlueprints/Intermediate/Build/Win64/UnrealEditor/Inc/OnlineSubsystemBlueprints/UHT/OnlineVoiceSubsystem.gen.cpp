// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineVoiceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineVoiceSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventVoice_PlayerTalkingStateChanged_BP_Parms
		{
			FUniqueNetIdRepl Param1;
			bool Param2;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
		static void NewProp_Param2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventVoice_PlayerTalkingStateChanged_BP_Parms, Param1), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::NewProp_Param2_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventVoice_PlayerTalkingStateChanged_BP_Parms*)Obj)->Param2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventVoice_PlayerTalkingStateChanged_BP_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::NewProp_Param2_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::NewProp_Param2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "Voice_PlayerTalkingStateChanged_BP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventVoice_PlayerTalkingStateChanged_BP_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execDisconnectAllEndpoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectAllEndpoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execPatchLocalTalkerOutputToEndpoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDeviceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PatchLocalTalkerOutputToEndpoint(Z_Param_InDeviceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execPatchRemoteTalkerOutputToEndpoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDeviceName);
		P_GET_UBOOL(Z_Param_bMuteInGameOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PatchRemoteTalkerOutputToEndpoint(Z_Param_InDeviceName,Z_Param_bMuteInGameOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execGetAmplitudeOfRemoteTalker)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAmplitudeOfRemoteTalker(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execGetVoiceDebugState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVoiceDebugState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execClearVoicePackets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearVoicePackets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execGetNumLocalTalkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLocalTalkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execUnmuteRemoteTalker)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_UBOOL(Z_Param_bIsSystemWide);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnmuteRemoteTalker(Z_Param_LocalUserNum,Z_Param_PlayerId,Z_Param_bIsSystemWide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execMuteRemoteTalker)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_UBOOL(Z_Param_bIsSystemWide);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MuteRemoteTalker(Z_Param_LocalUserNum,Z_Param_PlayerId,Z_Param_bIsSystemWide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execIsMuted)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LocalUserNum);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMuted(Z_Param_LocalUserNum,Z_Param_UniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execIsRemotePlayerTalking)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRemotePlayerTalking(Z_Param_UniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execIsLocalPlayerTalking)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalPlayerTalking(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execIsHeadsetPresent)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeadsetPresent(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execRemoveAllRemoteTalkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllRemoteTalkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execUnregisterRemoteTalker)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterRemoteTalker(Z_Param_UniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execRegisterRemoteTalker)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterRemoteTalker(Z_Param_UniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execUnregisterLocalTalkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterLocalTalkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execUnregisterLocalTalker)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterLocalTalker(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execRegisterLocalTalkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterLocalTalkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execRegisterLocalTalker)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterLocalTalker(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execStopNetworkedVoice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopNetworkedVoice(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execStartNetworkedVoice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartNetworkedVoice(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execProcessMuteChangeNotification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessMuteChangeNotification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineVoiceSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineVoiceSubsystem::StaticRegisterNativesUOnlineVoiceSubsystem()
	{
		UClass* Class = UOnlineVoiceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearVoicePackets", &UOnlineVoiceSubsystem::execClearVoicePackets },
			{ "DisconnectAllEndpoints", &UOnlineVoiceSubsystem::execDisconnectAllEndpoints },
			{ "GetAmplitudeOfRemoteTalker", &UOnlineVoiceSubsystem::execGetAmplitudeOfRemoteTalker },
			{ "GetNumLocalTalkers", &UOnlineVoiceSubsystem::execGetNumLocalTalkers },
			{ "GetVoiceDebugState", &UOnlineVoiceSubsystem::execGetVoiceDebugState },
			{ "IsHeadsetPresent", &UOnlineVoiceSubsystem::execIsHeadsetPresent },
			{ "IsLocalPlayerTalking", &UOnlineVoiceSubsystem::execIsLocalPlayerTalking },
			{ "IsMuted", &UOnlineVoiceSubsystem::execIsMuted },
			{ "IsRemotePlayerTalking", &UOnlineVoiceSubsystem::execIsRemotePlayerTalking },
			{ "IsSubsystemAvailable", &UOnlineVoiceSubsystem::execIsSubsystemAvailable },
			{ "MuteRemoteTalker", &UOnlineVoiceSubsystem::execMuteRemoteTalker },
			{ "PatchLocalTalkerOutputToEndpoint", &UOnlineVoiceSubsystem::execPatchLocalTalkerOutputToEndpoint },
			{ "PatchRemoteTalkerOutputToEndpoint", &UOnlineVoiceSubsystem::execPatchRemoteTalkerOutputToEndpoint },
			{ "ProcessMuteChangeNotification", &UOnlineVoiceSubsystem::execProcessMuteChangeNotification },
			{ "RegisterLocalTalker", &UOnlineVoiceSubsystem::execRegisterLocalTalker },
			{ "RegisterLocalTalkers", &UOnlineVoiceSubsystem::execRegisterLocalTalkers },
			{ "RegisterRemoteTalker", &UOnlineVoiceSubsystem::execRegisterRemoteTalker },
			{ "RemoveAllRemoteTalkers", &UOnlineVoiceSubsystem::execRemoveAllRemoteTalkers },
			{ "StartNetworkedVoice", &UOnlineVoiceSubsystem::execStartNetworkedVoice },
			{ "StopNetworkedVoice", &UOnlineVoiceSubsystem::execStopNetworkedVoice },
			{ "UnmuteRemoteTalker", &UOnlineVoiceSubsystem::execUnmuteRemoteTalker },
			{ "UnregisterLocalTalker", &UOnlineVoiceSubsystem::execUnregisterLocalTalker },
			{ "UnregisterLocalTalkers", &UOnlineVoiceSubsystem::execUnregisterLocalTalkers },
			{ "UnregisterRemoteTalker", &UOnlineVoiceSubsystem::execUnregisterRemoteTalker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "ClearVoicePackets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "DisconnectAllEndpoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics
	{
		struct OnlineVoiceSubsystem_eventGetAmplitudeOfRemoteTalker_Parms
		{
			FUniqueNetIdRepl PlayerId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventGetAmplitudeOfRemoteTalker_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventGetAmplitudeOfRemoteTalker_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "GetAmplitudeOfRemoteTalker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::OnlineVoiceSubsystem_eventGetAmplitudeOfRemoteTalker_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics
	{
		struct OnlineVoiceSubsystem_eventGetNumLocalTalkers_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventGetNumLocalTalkers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "GetNumLocalTalkers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::OnlineVoiceSubsystem_eventGetNumLocalTalkers_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics
	{
		struct OnlineVoiceSubsystem_eventGetVoiceDebugState_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventGetVoiceDebugState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "GetVoiceDebugState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::OnlineVoiceSubsystem_eventGetVoiceDebugState_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics
	{
		struct OnlineVoiceSubsystem_eventIsHeadsetPresent_Parms
		{
			int64 LocalUserNum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventIsHeadsetPresent_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventIsHeadsetPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventIsHeadsetPresent_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "IsHeadsetPresent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::OnlineVoiceSubsystem_eventIsHeadsetPresent_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics
	{
		struct OnlineVoiceSubsystem_eventIsLocalPlayerTalking_Parms
		{
			int64 LocalUserNum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventIsLocalPlayerTalking_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventIsLocalPlayerTalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventIsLocalPlayerTalking_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "IsLocalPlayerTalking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::OnlineVoiceSubsystem_eventIsLocalPlayerTalking_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics
	{
		struct OnlineVoiceSubsystem_eventIsMuted_Parms
		{
			int64 LocalUserNum;
			FUniqueNetIdRepl UniqueId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventIsMuted_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventIsMuted_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventIsMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventIsMuted_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "IsMuted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::OnlineVoiceSubsystem_eventIsMuted_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics
	{
		struct OnlineVoiceSubsystem_eventIsRemotePlayerTalking_Parms
		{
			FUniqueNetIdRepl UniqueId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventIsRemotePlayerTalking_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventIsRemotePlayerTalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventIsRemotePlayerTalking_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "IsRemotePlayerTalking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::OnlineVoiceSubsystem_eventIsRemotePlayerTalking_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineVoiceSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::OnlineVoiceSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics
	{
		struct OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms
		{
			int32 LocalUserNum;
			FUniqueNetIdRepl PlayerId;
			bool bIsSystemWide;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_bIsSystemWide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_bIsSystemWide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "MuteRemoteTalker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::OnlineVoiceSubsystem_eventMuteRemoteTalker_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics
	{
		struct OnlineVoiceSubsystem_eventPatchLocalTalkerOutputToEndpoint_Parms
		{
			FString InDeviceName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDeviceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::NewProp_InDeviceName = { "InDeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventPatchLocalTalkerOutputToEndpoint_Parms, InDeviceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventPatchLocalTalkerOutputToEndpoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventPatchLocalTalkerOutputToEndpoint_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::NewProp_InDeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "PatchLocalTalkerOutputToEndpoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::OnlineVoiceSubsystem_eventPatchLocalTalkerOutputToEndpoint_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics
	{
		struct OnlineVoiceSubsystem_eventPatchRemoteTalkerOutputToEndpoint_Parms
		{
			FString InDeviceName;
			bool bMuteInGameOutput;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDeviceName;
		static void NewProp_bMuteInGameOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuteInGameOutput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_InDeviceName = { "InDeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventPatchRemoteTalkerOutputToEndpoint_Parms, InDeviceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_bMuteInGameOutput_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventPatchRemoteTalkerOutputToEndpoint_Parms*)Obj)->bMuteInGameOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_bMuteInGameOutput = { "bMuteInGameOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventPatchRemoteTalkerOutputToEndpoint_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_bMuteInGameOutput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventPatchRemoteTalkerOutputToEndpoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventPatchRemoteTalkerOutputToEndpoint_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_InDeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_bMuteInGameOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "PatchRemoteTalkerOutputToEndpoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::OnlineVoiceSubsystem_eventPatchRemoteTalkerOutputToEndpoint_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "ProcessMuteChangeNotification", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics
	{
		struct OnlineVoiceSubsystem_eventRegisterLocalTalker_Parms
		{
			int64 LocalUserNum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventRegisterLocalTalker_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventRegisterLocalTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventRegisterLocalTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "RegisterLocalTalker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::OnlineVoiceSubsystem_eventRegisterLocalTalker_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "RegisterLocalTalkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics
	{
		struct OnlineVoiceSubsystem_eventRegisterRemoteTalker_Parms
		{
			FUniqueNetIdRepl UniqueId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventRegisterRemoteTalker_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventRegisterRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventRegisterRemoteTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "RegisterRemoteTalker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::OnlineVoiceSubsystem_eventRegisterRemoteTalker_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "RemoveAllRemoteTalkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics
	{
		struct OnlineVoiceSubsystem_eventStartNetworkedVoice_Parms
		{
			int32 LocalUserNum;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventStartNetworkedVoice_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::NewProp_LocalUserNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "StartNetworkedVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::OnlineVoiceSubsystem_eventStartNetworkedVoice_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics
	{
		struct OnlineVoiceSubsystem_eventStopNetworkedVoice_Parms
		{
			int32 LocalUserNum;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventStopNetworkedVoice_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::NewProp_LocalUserNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "StopNetworkedVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::OnlineVoiceSubsystem_eventStopNetworkedVoice_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics
	{
		struct OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms
		{
			int32 LocalUserNum;
			FUniqueNetIdRepl PlayerId;
			bool bIsSystemWide;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_bIsSystemWide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "UnmuteRemoteTalker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::OnlineVoiceSubsystem_eventUnmuteRemoteTalker_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics
	{
		struct OnlineVoiceSubsystem_eventUnregisterLocalTalker_Parms
		{
			int64 LocalUserNum;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventUnregisterLocalTalker_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventUnregisterLocalTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventUnregisterLocalTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "UnregisterLocalTalker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::OnlineVoiceSubsystem_eventUnregisterLocalTalker_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "UnregisterLocalTalkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics
	{
		struct OnlineVoiceSubsystem_eventUnregisterRemoteTalker_Parms
		{
			FUniqueNetIdRepl UniqueId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineVoiceSubsystem_eventUnregisterRemoteTalker_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	void Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineVoiceSubsystem_eventUnregisterRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineVoiceSubsystem_eventUnregisterRemoteTalker_Parms), &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineVoiceSubsystem, nullptr, "UnregisterRemoteTalker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::OnlineVoiceSubsystem_eventUnregisterRemoteTalker_Parms), Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineVoiceSubsystem);
	UClass* Z_Construct_UClass_UOnlineVoiceSubsystem_NoRegister()
	{
		return UOnlineVoiceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineVoiceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerTalkingStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerTalkingStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_ClearVoicePackets, "ClearVoicePackets" }, // 3684517139
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_DisconnectAllEndpoints, "DisconnectAllEndpoints" }, // 1803403939
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker, "GetAmplitudeOfRemoteTalker" }, // 464254036
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_GetNumLocalTalkers, "GetNumLocalTalkers" }, // 2004637630
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_GetVoiceDebugState, "GetVoiceDebugState" }, // 2645183649
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsHeadsetPresent, "IsHeadsetPresent" }, // 3463637349
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsLocalPlayerTalking, "IsLocalPlayerTalking" }, // 2458195639
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsMuted, "IsMuted" }, // 2473556261
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsRemotePlayerTalking, "IsRemotePlayerTalking" }, // 2457209267
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 1744912705
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_MuteRemoteTalker, "MuteRemoteTalker" }, // 3514904194
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint, "PatchLocalTalkerOutputToEndpoint" }, // 930652021
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint, "PatchRemoteTalkerOutputToEndpoint" }, // 188713410
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_ProcessMuteChangeNotification, "ProcessMuteChangeNotification" }, // 2349568434
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalker, "RegisterLocalTalker" }, // 3439697122
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterLocalTalkers, "RegisterLocalTalkers" }, // 458726141
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_RegisterRemoteTalker, "RegisterRemoteTalker" }, // 1291285177
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_RemoveAllRemoteTalkers, "RemoveAllRemoteTalkers" }, // 1705044996
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_StartNetworkedVoice, "StartNetworkedVoice" }, // 3496495029
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_StopNetworkedVoice, "StopNetworkedVoice" }, // 3692875210
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnmuteRemoteTalker, "UnmuteRemoteTalker" }, // 3818798987
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalker, "UnregisterLocalTalker" }, // 155908043
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterLocalTalkers, "UnregisterLocalTalkers" }, // 404828874
		{ &Z_Construct_UFunction_UOnlineVoiceSubsystem_UnregisterRemoteTalker, "UnregisterRemoteTalker" }, // 2383462951
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::NewProp_OnPlayerTalkingStateChanged_MetaData[] = {
		{ "Category", "Online|Voice" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineVoiceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::NewProp_OnPlayerTalkingStateChanged = { "OnPlayerTalkingStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineVoiceSubsystem, OnPlayerTalkingStateChanged), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_Voice_PlayerTalkingStateChanged_BP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::NewProp_OnPlayerTalkingStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::NewProp_OnPlayerTalkingStateChanged_MetaData)) }; // 1974396287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::NewProp_OnPlayerTalkingStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineVoiceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::ClassParams = {
		&UOnlineVoiceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineVoiceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineVoiceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineVoiceSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineVoiceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineVoiceSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineVoiceSubsystem>()
	{
		return UOnlineVoiceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineVoiceSubsystem);
	UOnlineVoiceSubsystem::~UOnlineVoiceSubsystem() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineVoiceSubsystem, UOnlineVoiceSubsystem::StaticClass, TEXT("UOnlineVoiceSubsystem"), &Z_Registration_Info_UClass_UOnlineVoiceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineVoiceSubsystem), 4287995260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_829986576(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineVoiceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
