// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tool_One_PrjGameMode.h"
#include "Tool_One_PrjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATool_One_PrjGameMode::ATool_One_PrjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
