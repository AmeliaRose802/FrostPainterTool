#include "FrostPainterV3Editor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

//IMPLEMENT_GAME_MODULE(FFrostPainterV3EditorModule, FrostPainterV3Editor);
IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, FrostPainterV3Editor, "FrostPainterV3Editor");

//#define LOCTEXT_NAMESPACE "FrostPainterV3Editor"

void FFrostPainterV3EditorModule::StartupModule()
{
    //UE_LOG(FrostPainterV3Editor, Warning, TEXT("FrostPainterV3Editor: Log Started"));
}

void FFrostPainterV3EditorModule::ShutdownModule()
{
    //UE_LOG(FrostPainterV3Editor, Warning, TEXT("FrostPainterV3Editor: Log Ended"));
}

//#undef LOCTEXT_NAMESPACE