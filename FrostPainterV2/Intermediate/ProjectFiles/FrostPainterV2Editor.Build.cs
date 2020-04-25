

using UnrealBuildTool;

public class FrostPainterV2Editor : ModuleRules
{
	public FrostPainterV2Edtior(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PublicDependencyModuleNames.AddRange(new string[] { "FrostPainterV2" });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(
			new string[]
			{
				"FrostPainterV2Editor/Public"
			});

		PrivateIncludePaths.AddRange(
			new string[]
			{
			"FrostPainterV2Editor/Private"
			});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}