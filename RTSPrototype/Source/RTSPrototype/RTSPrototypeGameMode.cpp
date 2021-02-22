// Copyright Epic Games, Inc. All Rights Reserved.

#include "RTSPrototypeGameMode.h"
#include "RTSPrototypePlayerController.h"
#include "RTSPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARTSPrototypeGameMode::ARTSPrototypeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARTSPrototypePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}