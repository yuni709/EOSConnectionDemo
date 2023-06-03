// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemBlueprints_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineTurnBasedSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystem();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID();
	ONLINESUBSYSTEMBLUEPRINTS_API UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_NoRegister();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature();
	ONLINESUBSYSTEMBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineTurnBasedSubsystem::execGetMatchDataSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMatchDataSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineTurnBasedSubsystem::execIsSubsystemAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubsystemAvailable();
		P_NATIVE_END;
	}
	void UOnlineTurnBasedSubsystem::StaticRegisterNativesUOnlineTurnBasedSubsystem()
	{
		UClass* Class = UOnlineTurnBasedSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMatchDataSize", &UOnlineTurnBasedSubsystem::execGetMatchDataSize },
			{ "IsSubsystemAvailable", &UOnlineTurnBasedSubsystem::execIsSubsystemAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics
	{
		struct OnlineTurnBasedSubsystem_eventGetMatchDataSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTurnBasedSubsystem_eventGetMatchDataSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "Comment", "// @generator-incompatible\n// UObject* GetTurnBasedMatchInterfaceObject();\n" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
		{ "ToolTip", "@generator-incompatible\nUObject* GetTurnBasedMatchInterfaceObject();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTurnBasedSubsystem, nullptr, "GetMatchDataSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::OnlineTurnBasedSubsystem_eventGetMatchDataSize_Parms), Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics
	{
		struct OnlineTurnBasedSubsystem_eventIsSubsystemAvailable_Parms
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
	void Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineTurnBasedSubsystem_eventIsSubsystemAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OnlineTurnBasedSubsystem_eventIsSubsystemAvailable_Parms), &Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTurnBasedSubsystem, nullptr, "IsSubsystemAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::OnlineTurnBasedSubsystem_eventIsSubsystemAvailable_Parms), Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineTurnBasedSubsystem);
	UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister()
	{
		return UOnlineTurnBasedSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineTurnBasedSubsystem_GetMatchDataSize, "GetMatchDataSize" }, // 4181262018
		{ &Z_Construct_UFunction_UOnlineTurnBasedSubsystem_IsSubsystemAvailable, "IsSubsystemAvailable" }, // 1416603512
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineTurnBasedSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::ClassParams = {
		&UOnlineTurnBasedSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineTurnBasedSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineTurnBasedSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineTurnBasedSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineTurnBasedSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineTurnBasedSubsystem>()
	{
		return UOnlineTurnBasedSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTurnBasedSubsystem);
	UOnlineTurnBasedSubsystem::~UOnlineTurnBasedSubsystem() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadAllMatchesCallbackPin_Parms
		{
			TArray<FString> Param1;
			bool Param2;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Param1;
		static void NewProp_Param2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param1_Inner = { "Param1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadAllMatchesCallbackPin_Parms, Param1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param1_MetaData)) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param2_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadAllMatchesCallbackPin_Parms*)Obj)->Param2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadAllMatchesCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param2_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::NewProp_Param2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadAllMatchesCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineTurnBasedSubsystemLoadAllMatches::execLoadAllMatches)
	{
		P_GET_OBJECT(UOnlineTurnBasedSubsystem,Z_Param_Subsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTurnBasedSubsystemLoadAllMatches**)Z_Param__Result=UOnlineTurnBasedSubsystemLoadAllMatches::LoadAllMatches(Z_Param_Subsystem);
		P_NATIVE_END;
	}
	void UOnlineTurnBasedSubsystemLoadAllMatches::StaticRegisterNativesUOnlineTurnBasedSubsystemLoadAllMatches()
	{
		UClass* Class = UOnlineTurnBasedSubsystemLoadAllMatches::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAllMatches", &UOnlineTurnBasedSubsystemLoadAllMatches::execLoadAllMatches },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics
	{
		struct OnlineTurnBasedSubsystemLoadAllMatches_eventLoadAllMatches_Parms
		{
			UOnlineTurnBasedSubsystem* Subsystem;
			UOnlineTurnBasedSubsystemLoadAllMatches* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTurnBasedSubsystemLoadAllMatches_eventLoadAllMatches_Parms, Subsystem), Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTurnBasedSubsystemLoadAllMatches_eventLoadAllMatches_Parms, ReturnValue), Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches, nullptr, "LoadAllMatches", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::OnlineTurnBasedSubsystemLoadAllMatches_eventLoadAllMatches_Parms), Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineTurnBasedSubsystemLoadAllMatches);
	UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_NoRegister()
	{
		return UOnlineTurnBasedSubsystemLoadAllMatches::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadTurnBasedMatchesSignature_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadTurnBasedMatchesSignature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches, "LoadAllMatches" }, // 3117539261
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadAllMatches, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_OnCallFailed_MetaData)) }; // 3953632338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_LoadTurnBasedMatchesSignature_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_LoadTurnBasedMatchesSignature = { "LoadTurnBasedMatchesSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadAllMatches, LoadTurnBasedMatchesSignature), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_LoadTurnBasedMatchesSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_LoadTurnBasedMatchesSignature_MetaData)) }; // 3953632338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadAllMatches, __Store__Subsystem), Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadAllMatches, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp_LoadTurnBasedMatchesSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::NewProp___Store__CallUniquenessId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineTurnBasedSubsystemLoadAllMatches>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::ClassParams = {
		&UOnlineTurnBasedSubsystemLoadAllMatches::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches()
	{
		if (!Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadAllMatches.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadAllMatches.OuterSingleton, Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadAllMatches.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineTurnBasedSubsystemLoadAllMatches>()
	{
		return UOnlineTurnBasedSubsystemLoadAllMatches::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTurnBasedSubsystemLoadAllMatches);
	UOnlineTurnBasedSubsystemLoadAllMatches::~UOnlineTurnBasedSubsystemLoadAllMatches() {}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin_Parms
		{
			FString Param1;
			bool Param2;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param1;
		static void NewProp_Param2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin_Parms, Param1), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::NewProp_Param2_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin_Parms*)Obj)->Param2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::NewProp_Param2_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::NewProp_Param2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints, nullptr, "OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::_Script_OnlineSubsystemBlueprints_eventOnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlineTurnBasedSubsystemLoadMatchWithID::execLoadMatchWithID)
	{
		P_GET_OBJECT(UOnlineTurnBasedSubsystem,Z_Param_Subsystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineTurnBasedSubsystemLoadMatchWithID**)Z_Param__Result=UOnlineTurnBasedSubsystemLoadMatchWithID::LoadMatchWithID(Z_Param_Subsystem,Z_Param_MatchID);
		P_NATIVE_END;
	}
	void UOnlineTurnBasedSubsystemLoadMatchWithID::StaticRegisterNativesUOnlineTurnBasedSubsystemLoadMatchWithID()
	{
		UClass* Class = UOnlineTurnBasedSubsystemLoadMatchWithID::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMatchWithID", &UOnlineTurnBasedSubsystemLoadMatchWithID::execLoadMatchWithID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics
	{
		struct OnlineTurnBasedSubsystemLoadMatchWithID_eventLoadMatchWithID_Parms
		{
			UOnlineTurnBasedSubsystem* Subsystem;
			FString MatchID;
			UOnlineTurnBasedSubsystemLoadMatchWithID* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTurnBasedSubsystemLoadMatchWithID_eventLoadMatchWithID_Parms, Subsystem), Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTurnBasedSubsystemLoadMatchWithID_eventLoadMatchWithID_Parms, MatchID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OnlineTurnBasedSubsystemLoadMatchWithID_eventLoadMatchWithID_Parms, ReturnValue), Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::NewProp_MatchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID, nullptr, "LoadMatchWithID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::OnlineTurnBasedSubsystemLoadMatchWithID_eventLoadMatchWithID_Parms), Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineTurnBasedSubsystemLoadMatchWithID);
	UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_NoRegister()
	{
		return UOnlineTurnBasedSubsystemLoadMatchWithID::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadTurnBasedMatchWithIDSignature_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadTurnBasedMatchWithIDSignature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp___Store__Subsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__CallUniquenessId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__CallUniquenessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___Store__MatchID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp___Store__MatchID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID, "LoadMatchWithID" }, // 2767260203
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadMatchWithID, OnCallFailed), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_OnCallFailed_MetaData)) }; // 2316775285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_LoadTurnBasedMatchWithIDSignature_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_LoadTurnBasedMatchWithIDSignature = { "LoadTurnBasedMatchWithIDSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadMatchWithID, LoadTurnBasedMatchWithIDSignature), Z_Construct_UDelegateFunction_OnlineSubsystemBlueprints_OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_LoadTurnBasedMatchWithIDSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_LoadTurnBasedMatchWithIDSignature_MetaData)) }; // 2316775285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__Subsystem = { "__Store__Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__Subsystem), Z_Construct_UClass_UOnlineTurnBasedSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__Subsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__CallUniquenessId_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__CallUniquenessId = { "__Store__CallUniquenessId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__CallUniquenessId), METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__CallUniquenessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__CallUniquenessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__MatchID_MetaData[] = {
		{ "ModuleRelativePath", "_5.1/Private/AutoSubsystems/OnlineTurnBasedSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__MatchID = { "__Store__MatchID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__MatchID), METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__MatchID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp_LoadTurnBasedMatchWithIDSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__CallUniquenessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::NewProp___Store__MatchID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineTurnBasedSubsystemLoadMatchWithID>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::ClassParams = {
		&UOnlineTurnBasedSubsystemLoadMatchWithID::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID()
	{
		if (!Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID.OuterSingleton, Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMBLUEPRINTS_API UClass* StaticClass<UOnlineTurnBasedSubsystemLoadMatchWithID>()
	{
		return UOnlineTurnBasedSubsystemLoadMatchWithID::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTurnBasedSubsystemLoadMatchWithID);
	UOnlineTurnBasedSubsystemLoadMatchWithID::~UOnlineTurnBasedSubsystemLoadMatchWithID() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTurnBasedSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTurnBasedSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineTurnBasedSubsystem, UOnlineTurnBasedSubsystem::StaticClass, TEXT("UOnlineTurnBasedSubsystem"), &Z_Registration_Info_UClass_UOnlineTurnBasedSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineTurnBasedSubsystem), 3852986422U) },
		{ Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadAllMatches, UOnlineTurnBasedSubsystemLoadAllMatches::StaticClass, TEXT("UOnlineTurnBasedSubsystemLoadAllMatches"), &Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadAllMatches, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineTurnBasedSubsystemLoadAllMatches), 4096636010U) },
		{ Z_Construct_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID, UOnlineTurnBasedSubsystemLoadMatchWithID::StaticClass, TEXT("UOnlineTurnBasedSubsystemLoadMatchWithID"), &Z_Registration_Info_UClass_UOnlineTurnBasedSubsystemLoadMatchWithID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineTurnBasedSubsystemLoadMatchWithID), 438544700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTurnBasedSubsystem_h_1402879912(TEXT("/Script/OnlineSubsystemBlueprints"),
		Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTurnBasedSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_EOSConnectionDemo_Plugins_OnlineSubsystemBlueprints_Source_OnlineSubsystemBlueprints_5_1_Private_AutoSubsystems_OnlineTurnBasedSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
