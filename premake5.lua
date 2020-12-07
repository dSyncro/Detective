include "./third-party/Premaker/customization/solution_items.lua"

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

group "Build"

	include "third-party/Premaker"

group ""

	include "project"
