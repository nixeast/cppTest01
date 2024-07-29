// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cppTest01 : ModuleRules
{
	public cppTest01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
