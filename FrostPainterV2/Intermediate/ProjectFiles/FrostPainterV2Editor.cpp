
#include "FrostPainterV2Editor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FFrostPainterV2EditorModule, FrostPainterV2Editor);

#define LOCTEXT_NAMESPACE "FrostPainterV2Editor"

void FFrostPainterV2EditorModule::StartupModule()
{
    UE_LOG(TutorialEditor, Warning, TEXT("FrostPainterV2Editor: Log Started"));
}

void FFrostPainterV2EditorModule::ShutdownModule()
{
    UE_LOG(TutorialEditor, Warning, TEXT("FrostPainterV2Editor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE