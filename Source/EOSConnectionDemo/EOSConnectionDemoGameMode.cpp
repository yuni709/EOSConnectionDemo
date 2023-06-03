// Copyright Epic Games, Inc. All Rights Reserved.

#include "EOSConnectionDemoGameMode.h"
#include "EOSConnectionDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEOSConnectionDemoGameMode::AEOSConnectionDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
