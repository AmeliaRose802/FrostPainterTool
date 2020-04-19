// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FrostPainter.h"
#include "FrostPainterEdMode.h"

#define LOCTEXT_NAMESPACE "FFrostPainterModule"

void FFrostPainterModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FFrostPainterEdMode>(FFrostPainterEdMode::EM_FrostPainterEdModeId, LOCTEXT("FrostPainterEdModeName", "FrostPainterEdMode"), FSlateIcon(), true);
}

void FFrostPainterModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FFrostPainterEdMode::EM_FrostPainterEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFrostPainterModule, FrostPainter)