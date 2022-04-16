// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class test_project : ModuleRules
{
	public test_project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
