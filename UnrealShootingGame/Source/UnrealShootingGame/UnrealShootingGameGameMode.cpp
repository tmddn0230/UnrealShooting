// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealShootingGameGameMode.h"
#include "UnrealShootingGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealShootingGameGameMode::AUnrealShootingGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
