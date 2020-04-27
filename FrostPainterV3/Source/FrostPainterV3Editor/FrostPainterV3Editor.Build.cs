using UnrealBuildTool;

public class FrostPainterV3Editor : ModuleRules
{
    public FrostPainterV3Editor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PublicDependencyModuleNames.AddRange(new string[] { "FrostPainterV3Editor" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        PublicIncludePaths.AddRange(
            new string[]
            {
                "FrostPainterV3Editor/Public"
            });

        PrivateIncludePaths.AddRange(
            new string[]
            {
            "FrostPainterV3Editor/Private"
            });
    }
}