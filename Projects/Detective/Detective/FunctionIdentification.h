/**
 * @file FunctionIdentification.h
 * @brief Identify functions name and signature.
*/

#pragma once

#include "Compiler.h"

/**
 * @def DETECTIVE_FUNCTION_NAME
 * @brief Get the name of the function which contains this line.
*/

// Function Name
#if defined(DETECTIVE_COMPILER_MSC) // WINDOWS
#	define DETECTIVE_FUNCTION_NAME __FUNCTION__
#else // UNIX
#	define DETECTIVE_FUNCTION_NAME __func__ 
#endif

/**
 * @def DETECTIVE_FUNCTION_SIGNATURE
 * @brief Get the signature of the function which contains this line.
*/

// Function Signature
#if defined(DETECTIVE_COMPILER_MSC) // Windows
#	define DETECTIVE_FUNCTION_SIGNATURE __FUNCSIG__
#elif defined(DETECTIVE_COMPILER_DIGITAL_MARS) && (DETECTIVE_COMPILER_VERSION >= 0x810) // DigitalMars
#	define DETECTIVE_FUNCTION_SIGNATURE __PRETTY_FUNCTION__
#elif defined(DETECTIVE_COMPILER_GCC) // GCC
#	define DETECTIVE_FUNCTION_SIGNATURE __PRETTY_FUNCTION__
#elif (defined(DETECTIVE_COMPILER_INTEL) && (DETECTIVE_COMPILER_VERSION >= 600)) // Intel
#	define DETECTIVE_FUNCTION_SIGNATURE __PRETTY_FUNCTION__
#elif (defined(DETECTIVE_COMPILER_IBM) && (DETECTIVE_COMPILER_VERSION >= 500)) // IBM
#	define DETECTIVE_FUNCTION_SIGNATURE __FUNCTION__
#elif defined(DETECTIVE_COMPILER_BORLAND) && (DETECTIVE_COMPILER_VERSION >= 0x550) // Borland
#	define DETECTIVE_FUNCTION_SIGNATURE __FUNC__
#else
#	define DETECTIVE_FUNCTION_SIGNATURE DETECTIVE_FUNCTION_NAME
#endif