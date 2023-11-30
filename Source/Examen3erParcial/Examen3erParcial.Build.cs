// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Examen3erParcial : ModuleRules
{
	public Examen3erParcial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
