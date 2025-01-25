// Copyright Epic Games, Inc. All Rights Reserved.

#include "Testing_Mechanic_1GameMode.h"
#include "Testing_Mechanic_1Character.h"
#include "UObject/ConstructorHelpers.h"

ATesting_Mechanic_1GameMode::ATesting_Mechanic_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/Bluprints/BP_MainPlayer2"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
