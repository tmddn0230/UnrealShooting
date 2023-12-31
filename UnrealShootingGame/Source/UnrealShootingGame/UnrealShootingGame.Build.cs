// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealShootingGame : ModuleRules
{
	public UnrealShootingGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "AIModule" , "OculusXRHMD",
			"OculusXRInput", "OculusXRMR", "OculusXROpenXRHMD", "OculusXRAnchors", "OculusXRScene" , "OculusXRMovement", "OculusXREyeTracker", "OculusXREditor", "OculusXRPassthrough" });
	}
}
