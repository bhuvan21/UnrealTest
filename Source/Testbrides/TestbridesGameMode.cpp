// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestbridesGameMode.h"
#include "TestbridesHUD.h"
#include "TestbridesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestbridesGameMode::ATestbridesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestbridesHUD::StaticClass();
}
