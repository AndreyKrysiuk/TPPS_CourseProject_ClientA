// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ClientAGameMode.h"
#include "ClientAPlayerController.h"
#include "ClientAPawn.h"

AClientAGameMode::AClientAGameMode()
{
	// no pawn by default
	DefaultPawnClass = AClientAPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AClientAPlayerController::StaticClass();
}
