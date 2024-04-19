// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class homework_cplusplus : ModuleRules
{
	public homework_cplusplus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
