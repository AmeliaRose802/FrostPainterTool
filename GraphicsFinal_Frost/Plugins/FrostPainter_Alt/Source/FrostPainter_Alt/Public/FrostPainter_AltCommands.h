// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "FrostPainter_AltStyle.h"

class FFrostPainter_AltCommands : public TCommands<FFrostPainter_AltCommands>
{
public:

	FFrostPainter_AltCommands()
		: TCommands<FFrostPainter_AltCommands>(TEXT("FrostPainter_Alt"), NSLOCTEXT("Contexts", "FrostPainter_Alt", "FrostPainter_Alt Plugin"), NAME_None, FFrostPainter_AltStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
