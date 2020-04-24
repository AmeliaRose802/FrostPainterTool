
#include "FrostEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FFrostEditorModule, FrostEditor);

#define LOCTEXT_NAMESPACE "FrostEditor"

void FTutorialEditorModule::StartupModule()
{
    UE_LOG(FrostEditor, Warning, TEXT("FrostEditor: Log Started"));
}

void FTutorialEditorModule::ShutdownModule()
{
    UE_LOG(FrostEditor, Warning, TEXT("FrostEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE