// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FrostPainter_Alt.h"
#include "FrostPainter_AltStyle.h"
#include "FrostPainter_AltCommands.h"
#include "Misc/MessageDialog.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#include "LevelEditor.h"

static const FName FrostPainter_AltTabName("FrostPainter_Alt");

#define LOCTEXT_NAMESPACE "FFrostPainter_AltModule"

void FFrostPainter_AltModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FFrostPainter_AltStyle::Initialize();
	FFrostPainter_AltStyle::ReloadTextures();

	FFrostPainter_AltCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FFrostPainter_AltCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FFrostPainter_AltModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FFrostPainter_AltModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FFrostPainter_AltModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FFrostPainter_AltModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FFrostPainter_AltStyle::Shutdown();

	FFrostPainter_AltCommands::Unregister();
}

void FFrostPainter_AltModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FFrostPainter_AltModule::PluginButtonClicked()")),
							FText::FromString(TEXT("FrostPainter_Alt.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FFrostPainter_AltModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FFrostPainter_AltCommands::Get().PluginAction);
}

void FFrostPainter_AltModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FFrostPainter_AltCommands::Get().PluginAction);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFrostPainter_AltModule, FrostPainter_Alt)