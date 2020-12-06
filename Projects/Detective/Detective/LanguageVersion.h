/**
 * @file LanguageVersion.h
 * @brief Information about the c++ language implementation.
*/

#if !defined(DETECTIVE_LANGUAGE_VERSION_H)
#define DETECTIVE_LANGUAGE_VERSION_H

#include "Types.h"

#if !defined(DETECTIVE_ENSURES_CPP_STANDARD)
#	define DETECTIVE_ENSURES_CPP_STANDARD 11
#endif

#define DETECTIVE_CPP_STANDARD98 199711L
#define DETECTIVE_CPP_STANDARD03 DETECTIVE_CPP_STANDARD98
#define DETECTIVE_CPP_STANDARD11 201103L
#define DETECTIVE_CPP_STANDARD14 201402L
#define DETECTIVE_CPP_STANDARD17 201703L
#define DETECTIVE_CPP_STANDARD20 202002L

#define DETECTIVE_CPP_VERSION __cplusplus

#include "LanguageFeatures/Cpp03.h"

// Some compiler may fail to detect c++ version
// In this case we fallback detection to ensured feature support
#if DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD11
#	if DETECTIVE_ENSURES_CPP_STANDARD >= 20
#		include "LanguageFeatures/Cpp20.h"
#		define DETECTIVE_CPP_STANDARD 20
#		define DETECTIVE_CPP_VERSION DETECTIVE_CPP_STANDARD20
#	elif DETECTIVE_ENSURES_CPP_STANDARD >= 17
#		include "LanguageFeatures/Cpp17.h"
#		define DETECTIVE_CPP_STANDARD 17
#		define DETECTIVE_CPP_VERSION DETECTIVE_CPP_STANDARD17
#	elif DETECTIVE_ENSURES_CPP_STANDARD >= 14
#		include "LanguageFeatures/Cpp14.h"
#		define DETECTIVE_CPP_STANDARD 14
#		define DETECTIVE_CPP_VERSION DETECTIVE_CPP_STANDARD14
#	elif DETECTIVE_ENSURES_CPP_STANDARD >= 11
#		include "LanguageFeatures/Cpp11.h"
#		define DETECTIVE_CPP_STANDARD 11
#		define DETECTIVE_CPP_VERSION DETECTIVE_CPP_STANDARD11
#	else 
#		define DETECTIVE_CPP_STANDARD 03
#		define DETECTIVE_CPP_VERSION DETECTIVE_CPP_STANDARD03
#	endif
#elif DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD14
#	include "LanguageFeatures/Cpp11.h"
#	define DETECTIVE_CPP_STANDARD 11
#elif DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD17
#	include "LanguageFeatures/Cpp14.h"
#	define DETECTIVE_CPP_STANDARD 14
#elif DETECTIVE_CPP_VERSION < DETECTIVE_CPP_STANDARD20
#	include "LanguageFeatures/Cpp17.h"
#	define DETECTIVE_CPP_STANDARD 17
#else
#	include "LanguageFeatures/Cpp20.h"
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
		Unknown, /** @brief Using an unknown standard library. */
		LibCpp, /** @brief LibC++ standard library. */
		LibSTDCpp, /** @brief LibStdC++ standard library. */
		MSVC /** @brief Microsoft Visual C++ standard library. */
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

#endif
