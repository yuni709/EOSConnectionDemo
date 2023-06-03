// Copyright June Rhodes. All Rights Reserved.

#include "AutoSubsystems/OnlineSharingSubsystem.h"

#include "OnlineSubsystem.h"
#include "OnlineSubsystemBlueprintsModule.h"
#include "OnlineSubsystemUtils.h"
#include "OnlineSubsystemTypes.h"

FName UOnlineSharingSubsystem::OSSNameToAssignDuringConstruction = NAME_Default;

TSharedPtr<class IOnlineSharing, ESPMode::ThreadSafe> UOnlineSharingSubsystem::GetHandle()
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

    TSharedPtr<class IOnlineSharing, ESPMode::ThreadSafe> Pinned = this->HandleWk.Pin();
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
        auto __Handle__ = Subsystem->GetSharingInterface();
        this->HandleWk = __Handle__;
        Pinned = __Handle__;
    }

    return Pinned;
}

bool UOnlineSharingSubsystem::IsHandleValid(const TSharedPtr<class IOnlineSharing, ESPMode::ThreadSafe>& InHandle)
{
    return InHandle.IsValid();
}

UOnlineSharingSubsystem::UOnlineSharingSubsystem()
{
    if (this->HasAnyFlags(RF_ClassDefaultObject))
    {
        return;
    }

    this->OSSName = UOnlineSharingSubsystem::OSSNameToAssignDuringConstruction;
    UOnlineSharingSubsystem::OSSNameToAssignDuringConstruction = NAME_Default;

    auto GameInstance = this->GetGameInstance();
    check(IsValid(GameInstance));

    auto World = GameInstance->GetWorld();
    check(IsValid(World));
    
    // Store the WorldContext so we can assert that it never changes later during our
    // operation (required for semantic correctness).
    this->WorldContext = GEngine->GetWorldContextFromWorld(World);
    check(WorldContext != nullptr);
    UE_LOG(LogOnlineBlueprint, Verbose, TEXT("OnlineSharingSubsystem subsystem initialized in context %s"), *WorldContext->ContextHandle.ToString());

    // Perform the initial cache of the online subsystem pointer. Calling GetHandle()
    // is enough to cache the weak pointer.
    this->HandleWk = nullptr;
    this->GetHandle();

    // Now, register events.
    
    TSharedPtr<class IOnlineSharing, ESPMode::ThreadSafe> Handle = this->GetHandle();
    if (Handle.IsValid())
    {
        for (auto i = 0; i < MAX_LOCAL_PLAYERS; i++)
        {
            this->DelegateHandle_OnRequestNewReadPermissionsComplete.Add(Handle->AddOnRequestNewReadPermissionsCompleteDelegate_Handle(
                i,
                FOnRequestNewReadPermissionsComplete::FDelegate::CreateWeakLambda(this, [this, i](int32 _UnusedLocalUserNum, bool Param1) {
                    this->OnRequestNewReadPermissionsComplete.Broadcast(i, Param1);
                })
            ));
            this->DelegateHandle_OnRequestNewPublishPermissionsComplete.Add(Handle->AddOnRequestNewPublishPermissionsCompleteDelegate_Handle(
                i,
                FOnRequestNewPublishPermissionsComplete::FDelegate::CreateWeakLambda(this, [this, i](int32 _UnusedLocalUserNum, bool Param1) {
                    this->OnRequestNewPublishPermissionsComplete.Broadcast(i, Param1);
                })
            ));
            this->DelegateHandle_OnReadNewsFeedComplete.Add(Handle->AddOnReadNewsFeedCompleteDelegate_Handle(
                i,
                FOnReadNewsFeedComplete::FDelegate::CreateWeakLambda(this, [this, i](int32 _UnusedLocalUserNum, bool Param1) {
                    this->OnReadNewsFeedComplete.Broadcast(i, Param1);
                })
            ));
            this->DelegateHandle_OnSharePostComplete.Add(Handle->AddOnSharePostCompleteDelegate_Handle(
                i,
                FOnSharePostComplete::FDelegate::CreateWeakLambda(this, [this, i](int32 _UnusedLocalUserNum, bool Param1) {
                    this->OnSharePostComplete.Broadcast(i, Param1);
                })
            ));
        }
    }
}

void UOnlineSharingSubsystem::BeginDestroy()
{
    if (this->HasAnyFlags(RF_ClassDefaultObject))
    {
        Super::BeginDestroy();
        return;
    }

    TSharedPtr<class IOnlineSharing, ESPMode::ThreadSafe> Handle = this->GetHandle();
    if (Handle.IsValid())
    {
        for (auto i = 0; i < MAX_LOCAL_PLAYERS; i++)
        {
            Handle->ClearOnRequestNewReadPermissionsCompleteDelegate_Handle(i, this->DelegateHandle_OnRequestNewReadPermissionsComplete[i]);
            Handle->ClearOnRequestNewPublishPermissionsCompleteDelegate_Handle(i, this->DelegateHandle_OnRequestNewPublishPermissionsComplete[i]);
            Handle->ClearOnReadNewsFeedCompleteDelegate_Handle(i, this->DelegateHandle_OnReadNewsFeedComplete[i]);
            Handle->ClearOnSharePostCompleteDelegate_Handle(i, this->DelegateHandle_OnSharePostComplete[i]);
        }
        
    }

    Super::BeginDestroy();
}

bool UOnlineSharingSubsystem::IsSubsystemAvailable()
{
    check(!this->HasAnyFlags(RF_ClassDefaultObject));
    return this->IsHandleValid(this->GetHandle());
}

bool UOnlineSharingSubsystem::ReadNewsFeed(int32 LocalUserNum, int32 NumPostsToRead)
{
    check(!this->HasAnyFlags(RF_ClassDefaultObject));
    auto Handle = this->GetHandle();
    if (!this->IsHandleValid(Handle))
    {
        return false;
    }


    auto __Result = Handle->ReadNewsFeed(LocalUserNum, NumPostsToRead);

    return __Result;
}
