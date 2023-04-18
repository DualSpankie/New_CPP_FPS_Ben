// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_FPSGameMode.h"
#include "CPP_FPSHUD.h"
#include "CPP_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_FPSGameMode::ACPP_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPP_FPSHUD::StaticClass();
}
