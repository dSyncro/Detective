include "./third-party/premake/customization/solution_items.lua"

workspace "Detective"

	architecture "x86_64"
	startproject "Detective"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items 
	{
		".gitmodules",
		".gitignore",
		".editorconfig",
	}
	
	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.architecture}/%{cfg.system}/%{cfg.buildcfg}"

group "Dependencies"

	include "third-party/premake"

group ""

	include "project"
