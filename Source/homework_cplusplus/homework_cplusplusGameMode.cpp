// Copyright Epic Games, Inc. All Rights Reserved.

#include "homework_cplusplusGameMode.h"
#include "homework_cplusplusCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ahomework_cplusplusGameMode::Ahomework_cplusplusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
