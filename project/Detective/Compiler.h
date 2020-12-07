/**
 * @file Compiler.h
 * @brief Information about the compiler used.
*/

#if !defined(DETECTIVE_COMPILER_H)
#define DETECTIVE_COMPILER_H

#include "Types.h"

/**
 * @def DETECTIVE_COMPILER
 * @brief Describes the compiler used.
 * @see Detective::Compiler
*/

/**
 * @def DETECTIVE_COMPILER_VERSION
 * @brief Describes the version of the compiler used.
*/

/**
 * @def DETECTIVE_COMPILER_ASMJS
 * @brief Defined when using AsmJS compiler.
*/

/**
 * @def DETECTIVE_COMPILER_BORLAND
 * @brief Defined when using Borland C++ compiler.
*/

/**
 * @def DETECTIVE_COMPILER_CLING
 * @brief Defined when using Cling compiler.
*/

/**
 * @def DETECTIVE_COMPILER_CLANG
 * @brief Defined when using CLANG compiler.
*/

/**
 * @def DETECTIVE_COMPILER_CLR
 * @brief Defined when using the Common Language Runtime.
*/

/**
 * @def DETECTIVE_COMPILER_CRAY
 * @brief Defined when using the Cray compiler.
*/

/**
 * @def DETECTIVE_COMPILER_DIGITALMARS
 * @brief Defined when using the Digital Mars compiler.
*/

/**
 * @def DETECTIVE_COMPILER_EMSCRIPTEN
 * @brief Defined when using the Emscripten compiler.
*/

/**
 * @def DETECTIVE_COMPILER_FORTRAN
 * @brief Defined when using Fortran compiler.
*/

/**
 * @def DETECTIVE_COMPILER_GCC
 * @brief Defined when using GCC compiler.
*/

/**
 * @def DETECTIVE_COMPILER_IBM
 * @brief Defined when using IBM compiler.
*/

/**
 * @def DETECTIVE_COMPILER_INTEL
 * @brief Defined when using INTEL compiler.
*/

/**
 * @def DETECTIVE_COMPILER_MINGW
 * @brief Defined when using MINGW compiler.
*/

/**
 * @def DETECTIVE_COMPILER_MSC
 * @brief Defined when using Microsoft compiler (MSC).
*/

/**
 * @def DETECTIVE_COMPILER_SUN
 * @brief Defined when using Oracle/Sun compiler.
*/

/**
 * @def DETECTIVE_COMPILER_NVIDIA
 * @brief Defined when using Nvidia compiler (nvcc).
*/

/**
 * @def DETECTIVE_COMPILER_PORTLAND
 * @brief Defined when using Portland compiler.
*/

/**
 * @def DETECTIVE_COMPILER_WEBASSEMBLY
 * @brief Defined when using Web Assembly compiler.
*/

/**
 * @def DETECTIVE_COMPILER_UNKNOWN
 * @brief Defined when using an unknown compiler.
*/

#if defined(__asmjs__)
#	define DETECTIVE_COMPILER Detective::Compiler::AsmJS
#	define DETECTIVE_COMPILER_VERSION __asmjs__
#	define DETECTIVE_COMPILER_ASMJS
#elif defined(__BORLANDC__)
#	define DETECTIVE_COMPILER Detective::Compiler::Borland
#	define DETECTIVE_COMPILER_VERSION __BORLANDC__
#	define DETECTIVE_COMPILER_BORLAND
#elif defined(__CLING__)
#	define DETECTIVE_COMPILER Detective::Compiler::Cling
#	define DETECTIVE_COMPILER_VERSION __CLING__
#	define DETECTIVE_COMPILER_CLING
#elif defined(__clang__)
#	define DETECTIVE_COMPILER Detective::Compiler::Clang
#	define DETECTIVE_COMPILER_VERSION __clang__
#	define DETECTIVE_COMPILER_CLANG
#elif defined(__cplusplus_cli) || defined(_MANAGED)
#	define DETECTIVE_COMPILER Detective::Compiler::CLR
#	define DETECTIVE_COMPILER_VERSION __cplusplus_cli
#	define DETECTIVE_COMPILER_CLR
#elif defined(_CRAY) || defined(__crayx1)
#	define DETECTIVE_COMPILER Detective::Compiler::Cray
#	define DETECTIVE_COMPILER_VERSION _CRAY
#	define DETECTIVE_COMPILER_CRAY
#elif defined(__DMC__)
#	define DETECTIVE_COMPILER Detective::Compiler::DigitalMars
#	define DETECTIVE_COMPILER_VERSION __DMC__
#	define DETECTIVE_COMPILER_DIGITALMARS
#elif defined(__EMSCRIPTEN__)
#	define DETECTIVE_COMPILER Detective::Compiler::Emscripten
#	define DETECTIVE_COMPILER_VERSION __EMSCRIPTEN__
#	define DETECTIVE_COMPILER_EMSCRIPTEN
#elif defined(__GNUC__) || defined(__GNUG__)
#	define DETECTIVE_COMPILER Detective::Compiler::GCC
#	define DETECTIVE_COMPILER_VERSION __GNUC__
#	define DETECTIVE_COMPILER_GCC
#elif defined(__GFORTRAN__)
#	define DETECTIVE_COMPILER Detective::Compiler::Fortran
#	define DETECTIVE_COMPILER_VERSION __GFORTRAN__
#	define DETECTIVE_COMPILER_FORTRAN
#elif defined(__IBMCPP__)
#	define DETECTIVE_COMPILER Detective::Compiler::IBM
#	define DETECTIVE_COMPILER_VERSION __IBMCPP__
#	define DETECTIVE_COMPILER_IBM
#elif defined(__ICC) || defined(__INTEL_COMPILER)
#	define DETECTIVE_COMPILER Detective::Compiler::Intel
#	if defined(__ICC)
#		define DETECTIVE_COMPILER_VERSION __ICC
#	elif defined(__INTEL_COMPILER)
#		define DETECTIVE_COMPILER_VERSION __INTEL_COMPILER
#	else
#		define DETECTIVE_COMPILER_VERSION 0
#	endif
#	define DETECTIVE_COMPILER_INTEL
#elif defined(__MINGW32__) || defined(__MINGW64__)
#	define DETECTIVE_COMPILER Detective::Compiler::MinGW
#	define DETECTIVE_COMPILER_VERSION __MINGW32__
#	define DETECTIVE_COMPILER_MINGW
#elif defined(_MSC_VER)
#	define DETECTIVE_COMPILER Detective::Compiler::MSC
#	define DETECTIVE_COMPILER_VERSION _MSC_VER
#	define DETECTIVE_COMPILER_MSC
#elif defined(sun) || defined(__sun)
#	define DETECTIVE_COMPILER Detective::Compiler::Sun
#	define DETECTIVE_COMPILER_VERSION __sun
#	define DETECTIVE_COMPILER_SUN
#elif defined(__NVCC__)
#	define DETECTIVE_COMPILER Detective::Compiler::Nvidia
#	define DETECTIVE_COMPILER_VERSION __NVCC__
#	define DETECTIVE_COMPILER_NVIDIA
#elif defined(__PGI) || defined(__PGIC__)
#	define DETECTIVE_COMPILER Detective::Compiler::Portland
#	define DETECTIVE_COMPILER_VERSION __PGI
#	define DETECTIVE_COMPILER_PORTLAND
#elif defined(__wasm__)
#	define DETECTIVE_COMPILER Detective::Compiler::WebAssembly
#	define DETECTIVE_COMPILER_VERSION __wasm__
#	define DETECTIVE_COMPILER_WEBASSEMBLY
#else
#	define DETECTIVE_COMPILER Detective::Compiler::Unknown
#	define DETECTIVE_COMPILER_VERSION 0
#	define DETECTIVE_COMPILER_UNKNOWN
#endif

namespace Detective {

	/**
	 * @brief Supported compilers.
	*/
	enum class Compiler {
		Unknown, /** @brief Compiler cannot be deduced. */
		AsmJS, /** @brief AsmJS compiler. */
		Borland, /** @brief Borland C++ compiler. */
		Cling, /** @brief Cling compiler. */
		Clang, /** @brief Clang compiler. */
		CLR, /** @brief Common Language Runtime. */
		Cray, /** @brief Cray compiler. */
		DigitalMars, /** @brief DMS compiler. */
		Emscripten, /** @brief Emscripten compiler. */
		Fortran, /** @brief Fortran compiler. */
		GCC, /** @brief GCC compiler. */
		IBM, /** @brief IBM compiler. */
		Intel, /** @brief Intel compiler. */
		MinGW, /** @brief MinGW compiler. */
		MSC, /** @brief Microsoft compiler. */
		Nvidia, /** @brief Nvcc compiler. */
		Portland, /** @brief Portland C++ compiler. */
		Sun, /** @brief Oracle/Sun compiler. */
		WebAssembly /** @brief Web Assembly compiler. */
	};

	/**
	 * @brief Get compiler in use.
	 * @return The compiler used.
	*/
	static inline Compiler getCompiler()
	{
		return DETECTIVE_COMPILER;
	}

	/**
	 * @brief Get the version of the compiler in use.
	 * @return The compiler version.
	*/
	static inline ULong getCompilerVersion()
	{
		return DETECTIVE_COMPILER_VERSION;
	}
}

#endif
