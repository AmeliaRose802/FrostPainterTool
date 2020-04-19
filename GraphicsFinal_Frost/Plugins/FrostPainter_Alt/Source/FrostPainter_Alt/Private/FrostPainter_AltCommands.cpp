// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FrostPainter_AltCommands.h"

#define LOCTEXT_NAMESPACE "FFrostPainter_AltModule"

void FFrostPainter_AltCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "FrostPainter_Alt", "Execute FrostPainter_Alt action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
