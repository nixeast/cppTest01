// Copyright Epic Games, Inc. All Rights Reserved.

#include "cppTest01GameMode.h"
#include "cppTest01Character.h"
#include "UObject/ConstructorHelpers.h"

AcppTest01GameMode::AcppTest01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
