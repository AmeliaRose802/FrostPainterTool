

using UnrealBuildTool;
using System.Collections.Generic;

public class FrostEditorTarget : TargetRules
{
	public FrostEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editro;
		//DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] { "GraphicsFinal_Frost", "FrostEditor" });
	}
}