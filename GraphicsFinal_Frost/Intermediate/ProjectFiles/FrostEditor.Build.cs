using UnrealBuildTool;


public class FrostEditor : ModuleRules
{
    public FrostEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore"

                // ... add public dependencies that you statically link with here ...   
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "GraphicsFinal_Frost"
                // ... add private dependencies that you statically link with here ...    
            }
        );

        PublicIncludePaths.AddRange(
            new string[]
            {
                "FrostEditor/Public"
            }
        );

        PrivateIncludePaths.AddRange(
            new string[]
            {
                "FrostEditor/Private"
            }
        );
    }
}
