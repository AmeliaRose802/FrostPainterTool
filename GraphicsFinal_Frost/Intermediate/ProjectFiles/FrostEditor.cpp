#include "FrostEditor.h"


IMPLEMENT_GAME_MODULE(FFrostEditorModule, FrostEditor);

#define LOCTEXT_NAMESPACE "FrostEditor"

void FFrostEditorModule::StartupModule()
{
    UE_LOG(FrostEditor, Warning, TEXT("FrostEditor: Log Started"));
}

void FFrostEditorModule::ShutdownModule()
{
    UE_LOG(FrostEditor, Warning, TEXT("FrostEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE