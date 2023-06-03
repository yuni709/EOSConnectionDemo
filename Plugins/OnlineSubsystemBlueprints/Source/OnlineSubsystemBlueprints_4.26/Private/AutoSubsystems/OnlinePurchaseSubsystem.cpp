﻿// Copyright June Rhodes. All Rights Reserved.

#include "AutoSubsystems/OnlinePurchaseSubsystem.h"

#include "OnlineSubsystem.h"
#include "OnlineSubsystemBlueprintsModule.h"
#include "OnlineSubsystemUtils.h"
#include "OnlineSubsystemTypes.h"

FName UOnlinePurchaseSubsystem::OSSNameToAssignDuringConstruction = NAME_Default;

TSharedPtr<class IOnlinePurchase, ESPMode::ThreadSafe> UOnlinePurchaseSubsystem::GetHandle()
{
    if (this->HasAnyFlags(RF_BeginDestroyed))
    {
        auto BDCheck_GameInstance = this->GetGameInstance();
        check(IsValid(BDCheck_GameInstance));
    
        auto BDCheck_World = BDCheck_GameInstance->GetWorld();
        auto BDCheck_Pinned = this->HandleWk.Pin();

        if ((BDCheck_Pinned == nullptr || !BDCheck_Pinned.IsValid()) && !IsValid(BDCheck_World))
        {
            // The world and associated online subsystem interfaces have already been cleaned up.
            // The only caller of GetHandle() in this context is event deregistration, which doesn't
            // need to be done if the online subsystem itself is already gone.
            return nullptr;
        }
    }

    auto GameInstance = this->GetGameInstance();
    check(IsValid(GameInstance));

    auto World = GameInstance->GetWorld();
    if (World == nullptr)
    {
        // The world has already been freed; this GetHandle call might be happening in a callback
        // (where it is already handled as a "CallFailed" if GetHandle returns a nullptr).
        return nullptr;
    }

    auto CurrentWorldContext = GEngine->GetWorldContextFromWorld(World);
    if (CurrentWorldContext == nullptr ||
        !CurrentWorldContext->ContextHandle.IsEqual(this->WorldContext->ContextHandle))
    {
        // There is no world context for the current world. This can happen during
        // play-in-editor shutdown when using voice.
        return nullptr;
    }

    TSharedPtr<class IOnlinePurchase, ESPMode::ThreadSafe> Pinned = this->HandleWk.Pin();
    if (Pinned == nullptr || !Pinned.IsValid())
    {
        // Even though Online::GetSubsystem takes a UWorld* as it's argument, it only ever uses it
        // to get the world context, so that it can provide a different online subsystem per
        // play-in-editor context.
        //
        // There's one UGameInstance* per play-in-editor context, which also means game instance
        // subsystems get created per play-in-editor context. In contrast, the UWorld* gets reused
        // between contexts, which means that if we inherited from UWorldSubsystem, our lifetime
        // would span contexts and in turn make accessing the correct online subsystem instance
        // much harder.
        //
        // So we get the UWorld* of the UGameInstance*, which will be the same UWorld that's shared
        // between all other instances, but we'll have the right FWorldContext
        IOnlineSubsystem* Subsystem = nullptr;
        if (this->OSSName.IsEqual(NAME_Default))
        {
            Subsystem = Online::GetSubsystem(World);
        }
        else if (this->OSSName.IsEqual(FName(TEXT("Native"))))
        {
            Subsystem = IOnlineSubsystem::GetByPlatform();
        }
        else
        {
            Subsystem = Online::GetSubsystem(World, this->OSSName);
        }
        if (Subsystem == nullptr)
        {
            // No subsystem is available.
            return nullptr;
        }
        
        // Finish setup, store the reference to the interface.
        auto __Handle__ = Subsystem->GetPurchaseInterface();
        this->HandleWk = __Handle__;
        Pinned = __Handle__;
    }

    return Pinned;
}

bool UOnlinePurchaseSubsystem::IsHandleValid(const TSharedPtr<class IOnlinePurchase, ESPMode::ThreadSafe>& InHandle)
{
    return InHandle.IsValid();
}

UOnlinePurchaseSubsystem::UOnlinePurchaseSubsystem()
{
    if (this->HasAnyFlags(RF_ClassDefaultObject))
    {
        return;
    }

    this->OSSName = UOnlinePurchaseSubsystem::OSSNameToAssignDuringConstruction;
    UOnlinePurchaseSubsystem::OSSNameToAssignDuringConstruction = NAME_Default;

    auto GameInstance = this->GetGameInstance();
    check(IsValid(GameInstance));

    auto World = GameInstance->GetWorld();
    check(IsValid(World));
    
    // Store the WorldContext so we can assert that it never changes later during our
    // operation (required for semantic correctness).
    this->WorldContext = GEngine->GetWorldContextFromWorld(World);
    check(WorldContext != nullptr);
    UE_LOG(LogOnlineBlueprint, Verbose, TEXT("OnlinePurchaseSubsystem subsystem initialized in context %s"), *WorldContext->ContextHandle.ToString());

    // Perform the initial cache of the online subsystem pointer. Calling GetHandle()
    // is enough to cache the weak pointer.
    this->HandleWk = nullptr;
    this->GetHandle();

    // Now, register events.
    
    TSharedPtr<class IOnlinePurchase, ESPMode::ThreadSafe> Handle = this->GetHandle();
    if (Handle.IsValid())
    {
        for (auto i = 0; i < MAX_LOCAL_PLAYERS; i++)
        {
        }
        this->DelegateHandle_OnUnexpectedPurchaseReceipt = Handle->AddOnUnexpectedPurchaseReceiptDelegate_Handle(
            FOnUnexpectedPurchaseReceipt::FDelegate::CreateWeakLambda(this, [this](const FUniqueNetId& UserId) {
                this->OnUnexpectedPurchaseReceipt.Broadcast(ConvertDangerousUniqueNetIdToRepl(UserId));
            })
        );
    }
}

void UOnlinePurchaseSubsystem::BeginDestroy()
{
    if (this->HasAnyFlags(RF_ClassDefaultObject))
    {
        Super::BeginDestroy();
        return;
    }

    TSharedPtr<class IOnlinePurchase, ESPMode::ThreadSafe> Handle = this->GetHandle();
    if (Handle.IsValid())
    {
        for (auto i = 0; i < MAX_LOCAL_PLAYERS; i++)
        {
        }
        Handle->ClearOnUnexpectedPurchaseReceiptDelegate_Handle(this->DelegateHandle_OnUnexpectedPurchaseReceipt);
        
    }

    Super::BeginDestroy();
}

bool UOnlinePurchaseSubsystem::IsSubsystemAvailable()
{
    check(!this->HasAnyFlags(RF_ClassDefaultObject));
    return this->IsHandleValid(this->GetHandle());
}

bool UOnlinePurchaseSubsystem::IsAllowedToPurchase(FUniqueNetIdRepl UserId)
{
    check(!this->HasAnyFlags(RF_ClassDefaultObject));
    auto Handle = this->GetHandle();
    if (!this->IsHandleValid(Handle))
    {
        return false;
    }
    if (!(UserId.IsValid() && UserId.GetUniqueNetId().IsValid()))
    {
        return false;
    }


    auto __Result = Handle->IsAllowedToPurchase(UserId.GetUniqueNetId().ToSharedRef().Get());

    return __Result;
}

UOnlinePurchaseSubsystemCheckout* UOnlinePurchaseSubsystemCheckout::Checkout(UOnlinePurchaseSubsystem* Subsystem ,FUniqueNetIdRepl UserId, FPurchaseCheckoutRequestBP CheckoutRequest)
{
    if (!IsValid(Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("OnlinePurchaseSubsystem is not available. It's possible the online subsystem you are using doesn't support it. Alternatively, make sure that you are not attempting to use Online Subsystem Blueprints during the Init event in a GameInstance. Add a 'Delay 0.1' node between the Init event and the rest of your logic if you need to use Online Subsystem Blueprints this early in game startup."));
        return nullptr;
    }

    check(!Subsystem->HasAnyFlags(RF_ClassDefaultObject));

    UOnlinePurchaseSubsystemCheckout* Node = NewObject<UOnlinePurchaseSubsystemCheckout>();
    Node->__Store__Subsystem = Subsystem;
    Node->__Store__CallUniquenessId = TEXT("");
    Node->__Store__UserId = UserId;
    Node->__Store__CheckoutRequest = CheckoutRequest;
    return Node;
}

void UOnlinePurchaseSubsystemCheckout::Activate()
{
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem value not valid when Activate() was called"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }
    if (!(this->__Store__UserId.IsValid() && this->__Store__UserId.GetUniqueNetId().IsValid()))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Parameter 'UserId' was not valid"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }

    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        if (this->__Store__Subsystem->__InFlightRequests.Contains(this->__Store__CallUniquenessId))
        {
            UE_LOG(LogOnlineBlueprint, Error, TEXT("There is already a request running with ID '%s'. Wait until it is complete before starting another request with the same parameters."), *this->__Store__CallUniquenessId);
            this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
            return;
        }

        this->__Store__Subsystem->__InFlightRequests.Add(this->__Store__CallUniquenessId);
    }

    auto __DelegateHandle_OnPurchaseCheckoutComplete = FOnPurchaseCheckoutComplete::CreateUObject(this, &UOnlinePurchaseSubsystemCheckout::HandleCallback_OnPurchaseCheckoutComplete);

    Handle->Checkout(this->__Store__UserId.GetUniqueNetId().ToSharedRef().Get(), this->__Store__CheckoutRequest.ToNative(), __DelegateHandle_OnPurchaseCheckoutComplete);
}

void UOnlinePurchaseSubsystemCheckout::HandleCallback_OnPurchaseCheckoutComplete(const FOnlineError& Result, const TSharedRef<FPurchaseReceipt>& Receipt)
{
    if (!IsValid(this->__Store__Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem handle was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }
    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        this->__Store__Subsystem->__InFlightRequests.Remove(this->__Store__CallUniquenessId);
    }

    this->OnPurchaseCheckoutComplete.Broadcast(FOnlineErrorInfo::FromNative(Result), UPurchaseReceipt::FromNative(Receipt));
}

UOnlinePurchaseSubsystemRedeemCode* UOnlinePurchaseSubsystemRedeemCode::RedeemCode(UOnlinePurchaseSubsystem* Subsystem ,FUniqueNetIdRepl UserId, FRedeemCodeRequestBP RedeemCodeRequest)
{
    if (!IsValid(Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("OnlinePurchaseSubsystem is not available. It's possible the online subsystem you are using doesn't support it. Alternatively, make sure that you are not attempting to use Online Subsystem Blueprints during the Init event in a GameInstance. Add a 'Delay 0.1' node between the Init event and the rest of your logic if you need to use Online Subsystem Blueprints this early in game startup."));
        return nullptr;
    }

    check(!Subsystem->HasAnyFlags(RF_ClassDefaultObject));

    UOnlinePurchaseSubsystemRedeemCode* Node = NewObject<UOnlinePurchaseSubsystemRedeemCode>();
    Node->__Store__Subsystem = Subsystem;
    Node->__Store__CallUniquenessId = TEXT("");
    Node->__Store__UserId = UserId;
    Node->__Store__RedeemCodeRequest = RedeemCodeRequest;
    return Node;
}

void UOnlinePurchaseSubsystemRedeemCode::Activate()
{
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem value not valid when Activate() was called"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }
    if (!(this->__Store__UserId.IsValid() && this->__Store__UserId.GetUniqueNetId().IsValid()))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Parameter 'UserId' was not valid"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }

    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        if (this->__Store__Subsystem->__InFlightRequests.Contains(this->__Store__CallUniquenessId))
        {
            UE_LOG(LogOnlineBlueprint, Error, TEXT("There is already a request running with ID '%s'. Wait until it is complete before starting another request with the same parameters."), *this->__Store__CallUniquenessId);
            this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
            return;
        }

        this->__Store__Subsystem->__InFlightRequests.Add(this->__Store__CallUniquenessId);
    }

    auto __DelegateHandle_OnPurchaseRedeemCodeComplete = FOnPurchaseRedeemCodeComplete::CreateUObject(this, &UOnlinePurchaseSubsystemRedeemCode::HandleCallback_OnPurchaseRedeemCodeComplete);

    Handle->RedeemCode(this->__Store__UserId.GetUniqueNetId().ToSharedRef().Get(), this->__Store__RedeemCodeRequest.ToNative(), __DelegateHandle_OnPurchaseRedeemCodeComplete);
}

void UOnlinePurchaseSubsystemRedeemCode::HandleCallback_OnPurchaseRedeemCodeComplete(const FOnlineError& Result, const TSharedRef<FPurchaseReceipt>& Receipt)
{
    if (!IsValid(this->__Store__Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem handle was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), nullptr);
        return;
    }
    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        this->__Store__Subsystem->__InFlightRequests.Remove(this->__Store__CallUniquenessId);
    }

    this->OnPurchaseRedeemCodeComplete.Broadcast(FOnlineErrorInfo::FromNative(Result), UPurchaseReceipt::FromNative(Receipt));
}

UOnlinePurchaseSubsystemQueryReceipts* UOnlinePurchaseSubsystemQueryReceipts::QueryReceipts(UOnlinePurchaseSubsystem* Subsystem ,FUniqueNetIdRepl UserId, bool bRestoreReceipts)
{
    if (!IsValid(Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("OnlinePurchaseSubsystem is not available. It's possible the online subsystem you are using doesn't support it. Alternatively, make sure that you are not attempting to use Online Subsystem Blueprints during the Init event in a GameInstance. Add a 'Delay 0.1' node between the Init event and the rest of your logic if you need to use Online Subsystem Blueprints this early in game startup."));
        return nullptr;
    }

    check(!Subsystem->HasAnyFlags(RF_ClassDefaultObject));

    UOnlinePurchaseSubsystemQueryReceipts* Node = NewObject<UOnlinePurchaseSubsystemQueryReceipts>();
    Node->__Store__Subsystem = Subsystem;
    Node->__Store__CallUniquenessId = TEXT("");
    Node->__Store__UserId = UserId;
    Node->__Store__bRestoreReceipts = bRestoreReceipts;
    return Node;
}

void UOnlinePurchaseSubsystemQueryReceipts::Activate()
{
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem value not valid when Activate() was called"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo());
        return;
    }
    if (!(this->__Store__UserId.IsValid() && this->__Store__UserId.GetUniqueNetId().IsValid()))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Parameter 'UserId' was not valid"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo());
        return;
    }

    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        if (this->__Store__Subsystem->__InFlightRequests.Contains(this->__Store__CallUniquenessId))
        {
            UE_LOG(LogOnlineBlueprint, Error, TEXT("There is already a request running with ID '%s'. Wait until it is complete before starting another request with the same parameters."), *this->__Store__CallUniquenessId);
            this->OnCallFailed.Broadcast(FOnlineErrorInfo());
            return;
        }

        this->__Store__Subsystem->__InFlightRequests.Add(this->__Store__CallUniquenessId);
    }

    auto __DelegateHandle_OnQueryReceiptsComplete = FOnQueryReceiptsComplete::CreateUObject(this, &UOnlinePurchaseSubsystemQueryReceipts::HandleCallback_OnQueryReceiptsComplete);

    Handle->QueryReceipts(this->__Store__UserId.GetUniqueNetId().ToSharedRef().Get(), this->__Store__bRestoreReceipts, __DelegateHandle_OnQueryReceiptsComplete);
}

void UOnlinePurchaseSubsystemQueryReceipts::HandleCallback_OnQueryReceiptsComplete(const FOnlineError& Result)
{
    if (!IsValid(this->__Store__Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo());
        return;
    }
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem handle was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo());
        return;
    }
    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        this->__Store__Subsystem->__InFlightRequests.Remove(this->__Store__CallUniquenessId);
    }

    this->OnQueryReceiptsComplete.Broadcast(FOnlineErrorInfo::FromNative(Result));
}

void UOnlinePurchaseSubsystem::GetReceipts(FUniqueNetIdRepl UserId, TArray<UPurchaseReceipt*>& OutReceipts)
{
    check(!this->HasAnyFlags(RF_ClassDefaultObject));
    auto Handle = this->GetHandle();
    if (!this->IsHandleValid(Handle))
    {
        return ;
    }
    if (!(UserId.IsValid() && UserId.GetUniqueNetId().IsValid()))
    {
        return ;
    }

    TArray<FPurchaseReceipt> __StoreTemp__OutReceipts;

    Handle->GetReceipts(UserId.GetUniqueNetId().ToSharedRef().Get(), __StoreTemp__OutReceipts);
    OutReceipts = ConvertArrayElements<FPurchaseReceipt, UPurchaseReceipt*>(__StoreTemp__OutReceipts, [](const FPurchaseReceipt& Val) { return UPurchaseReceipt::FromNative(Val); });
}

UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::FinalizeReceiptValidationInfo(UOnlinePurchaseSubsystem* Subsystem ,FUniqueNetIdRepl UserId, FString InReceiptValidationInfo)
{
    if (!IsValid(Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("OnlinePurchaseSubsystem is not available. It's possible the online subsystem you are using doesn't support it. Alternatively, make sure that you are not attempting to use Online Subsystem Blueprints during the Init event in a GameInstance. Add a 'Delay 0.1' node between the Init event and the rest of your logic if you need to use Online Subsystem Blueprints this early in game startup."));
        return nullptr;
    }

    check(!Subsystem->HasAnyFlags(RF_ClassDefaultObject));

    UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* Node = NewObject<UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo>();
    Node->__Store__Subsystem = Subsystem;
    Node->__Store__CallUniquenessId = TEXT("");
    Node->__Store__UserId = UserId;
    Node->__Store__InReceiptValidationInfo = InReceiptValidationInfo;
    return Node;
}

void UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::Activate()
{
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem value not valid when Activate() was called"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), TEXT(""));
        return;
    }
    if (!(this->__Store__UserId.IsValid() && this->__Store__UserId.GetUniqueNetId().IsValid()))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Parameter 'UserId' was not valid"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), TEXT(""));
        return;
    }

    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        if (this->__Store__Subsystem->__InFlightRequests.Contains(this->__Store__CallUniquenessId))
        {
            UE_LOG(LogOnlineBlueprint, Error, TEXT("There is already a request running with ID '%s'. Wait until it is complete before starting another request with the same parameters."), *this->__Store__CallUniquenessId);
            this->OnCallFailed.Broadcast(FOnlineErrorInfo(), TEXT(""));
            return;
        }

        this->__Store__Subsystem->__InFlightRequests.Add(this->__Store__CallUniquenessId);
    }

    auto __DelegateHandle_OnFinalizeReceiptValidationInfoComplete = FOnFinalizeReceiptValidationInfoComplete::CreateUObject(this, &UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::HandleCallback_OnFinalizeReceiptValidationInfoComplete);

    Handle->FinalizeReceiptValidationInfo(this->__Store__UserId.GetUniqueNetId().ToSharedRef().Get(), this->__Store__InReceiptValidationInfo, __DelegateHandle_OnFinalizeReceiptValidationInfoComplete);
}

void UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo::HandleCallback_OnFinalizeReceiptValidationInfoComplete(const FOnlineError& Result, const FString& ValidationInfo)
{
    if (!IsValid(this->__Store__Subsystem))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), TEXT(""));
        return;
    }
    auto Handle = this->__Store__Subsystem->GetHandle();
    if (!this->__Store__Subsystem->IsHandleValid(Handle))
    {
        UE_LOG(LogOnlineBlueprint, Error, TEXT("Subsystem handle was not valid during callback handling"));
        this->OnCallFailed.Broadcast(FOnlineErrorInfo(), TEXT(""));
        return;
    }
    if (this->__Store__CallUniquenessId != TEXT(""))
    {
        this->__Store__Subsystem->__InFlightRequests.Remove(this->__Store__CallUniquenessId);
    }

    this->OnFinalizeReceiptValidationInfoComplete.Broadcast(FOnlineErrorInfo::FromNative(Result), ValidationInfo);
}
