// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Testbrides : ModuleRules
{
	public Testbrides(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
