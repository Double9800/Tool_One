// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tool_One_Prj : ModuleRules
{
	public Tool_One_Prj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
