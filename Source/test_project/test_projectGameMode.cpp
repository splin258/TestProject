// Copyright Epic Games, Inc. All Rights Reserved.

#include "test_projectGameMode.h"
#include "test_projectHUD.h"
#include "test_projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atest_projectGameMode::Atest_projectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atest_projectHUD::StaticClass();
}
