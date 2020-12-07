include "./third-party/Premaker/customization/solution_items.lua"

workspace "Detective"

	startproject "Detective"

	include "./third-party/Premaker/configurations.lua"

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

include "third-party/Premaker"
include "project"
