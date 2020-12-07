project "Detective"

	kind "StaticLib"
	language "C++"
	staticruntime "on"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin/intermediates/" .. outputdir .. "/%{prj.name}")

	DetectiveIncludeDirs = {}
	DetectiveIncludeDirs["Detective"] = "%{prj.location}/"

	files
	{
		"*.h",
		"*.cpp",

		"Detective/**.h",
		"Detective/**.cpp",
	}

	includedirs
	{
		DetectiveIncludeDirs,
	}
