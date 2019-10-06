// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ClientAPlayerController.h"

AClientAPlayerController::AClientAPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
