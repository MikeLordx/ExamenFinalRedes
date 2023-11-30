// Copyright Epic Games, Inc. All Rights Reserved.

#include "Examen3erParcialGameMode.h"
#include "Examen3erParcialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExamen3erParcialGameMode::AExamen3erParcialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
