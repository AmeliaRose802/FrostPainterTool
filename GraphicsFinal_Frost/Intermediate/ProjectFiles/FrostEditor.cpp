#include "FrostEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FFrostEditorModule, FrostEditor);

#define LOCTEXT_NAMESPACE "TutorialEditor"

void FFrostEditorModule::StartupModule()
{
    UE_LOG(TutorialEditor, Warning, TEXT("FrostEditor: Log Started"));
}

void FFrostEditorModule::ShutdownModule()
{
    UE_LOG(TutorialEditor, Warning, TEXT("FrostEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE