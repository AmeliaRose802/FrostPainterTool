// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FrostPainterEdMode.h"
#include "FrostPainterEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FFrostPainterEdMode::EM_FrostPainterEdModeId = TEXT("EM_FrostPainterEdMode");

FFrostPainterEdMode::FFrostPainterEdMode()
{

}

FFrostPainterEdMode::~FFrostPainterEdMode()
{

}

void FFrostPainterEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FFrostPainterEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FFrostPainterEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FFrostPainterEdMode::UsesToolkits() const
{
	return true;
}




