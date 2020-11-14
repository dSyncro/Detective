/**
 * @file LanguageVersion.h
 * @brief Information about the c++ language implementation.
*/

#pragma once

#include "Types.h"

#define DETECTIVE_CPP_STANDARD_98 199711L
#define DETECTIVE_CPP_STANDARD_03 DETECTIVE_CPP_STANDARD_98
#define DETECTIVE_CPP_STANDARD_11 201103L
#define DETECTIVE_CPP_STANDARD_14 201402L
#define DETECTIVE_CPP_STANDARD_17 201703L
#define DETECTIVE_CPP_STANDARD_20 202002L

#define DETECTIVE_CPP_VERSION __cplusplus
#if DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD_11
#	define DETECTIVE_CPP_STANDARD 03
#elif DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD_14
#	define DETECTIVE_CPP_STANDARD 11
#elif DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD_17
#	define DETECTIVE_CPP_STANDARD 14
#elif DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD_20
#	define DETECTIVE_CPP_STANDARD 17
#else
#	define DETECTIVE_CPP_STANDARD 20
#endif

#if defined(__GLIBCXX__)
#	define DETECTIVE_CPP_STL Detective::StandardLibrary::LibSTDCpp
#elif defined(_LBCPP_VERSION)
#	define DETECTIVE_CPP_STL Detective::StandardLibrary::LibCpp
#elif defined(_MSC_VER)
#	define DETECTIVE_CPP_STL Detective::StandardLibrary::MSVC
#else
#	define DETECTIVE_CPP_STL Detective::StandardLibrary::Unknown
#endif

namespace Detective {

	enum class StandardLibrary {
		Unknown,
		LibCpp,
		LibSTDCpp,
		MSVC
	};

	constexpr StandardLibrary getCppSTL()
	{
		return DETECTIVE_CPP_STL;
	}

	constexpr ULong getCppVersion()
	{
		return DETECTIVE_CPP_VERSION;
	}

	constexpr Byte getCppStandard()
	{
		return DETECTIVE_CPP_STANDARD;
	}

}