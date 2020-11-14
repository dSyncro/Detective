/**
 * @file Types.h
 * @brief Use consistent types throughout your entire project.
*/

#pragma once

#include <cstdint>
#include <cmath>

/**
 * @def DETECTIVE_BYTE_TYPE
 * @brief Byte type. Usually 8-bit.
*/
#if !defined(DETECTIVE_BYTE_TYPE)
#	define DETECTIVE_BYTE_TYPE uint8_t
#endif

/**
 * @def DETECTIVE_SHORT_TYPE
 * @brief Short type. Usually 16-bit.
*/
#if !defined(DETECTIVE_SHORT_TYPE)
#	define DETECTIVE_SHORT_TYPE int16_t
#endif

/**
 * @def DETECTIVE_INT_TYPE
 * @brief Int type. Usually 32-bit.
*/
#if !defined(DETECTIVE_INT_TYPE)
#	define DETECTIVE_INT_TYPE int32_t
#endif

/**
 * @def DETECTIVE_LONG_TYPE
 * @brief Long type. Usually 64-bit.
*/
#if !defined(DETECTIVE_LONG_TYPE)
#	define DETECTIVE_LONG_TYPE int64_t
#endif

/**
 * @def DETECTIVE_USHORT_TYPE
 * @brief Unsigned short type. Usually 16-bit.
*/
#if !defined(DETECTIVE_USHORT_TYPE)
#	define DETECTIVE_USHORT_TYPE uint16_t
#endif

/**
 * @def DETECTIVE_UINT_TYPE
 * @brief Unsigned int type. Usually 32-bit.
*/
#if !defined(DETECTIVE_UINT_TYPE)
#	define DETECTIVE_UINT_TYPE uint32_t
#endif

/**
 * @def DETECTIVE_ULONG_TYPE
 * @brief Unsigned long type. Usually 64-bit.
*/
#if !defined(DETECTIVE_ULONG_TYPE)
#	define DETECTIVE_ULONG_TYPE uint64_t
#endif

/**
 * @def DETECTIVE_FLOAT_TYPE
 * @brief Float type. Usually 32-bit.
*/
#if !defined(DETECTIVE_FLOAT_TYPE)
#	define DETECTIVE_FLOAT_TYPE float_t
#endif

/**
 * @def DETECTIVE_DOUBLE_TYPE
 * @brief Double type. Usually 64-bit.
*/
#if !defined(DETECTIVE_DOUBLE_TYPE)
#	define DETECTIVE_DOUBLE_TYPE double_t
#endif

/**
 * @def DETECTIVE_POINTER_TYPE
 * @brief Generic pointer type. Either 32 or 64 bits dependinding on target architecture.
*/
#if !defined(DETECTIVE_POINTER_TYPE)
#	define DETECTIVE_POINTER_TYPE void*
#endif

namespace Detective {

	/** @brief Byte type. Usually 8-bit. */
	using Byte = DETECTIVE_BYTE_TYPE;
	using BytePtr = DETECTIVE_BYTE_TYPE*;

	/** @brief Short type. Usually 16-bit. */
	using Short = DETECTIVE_SHORT_TYPE;
	using ShortPtr = DETECTIVE_SHORT_TYPE*;

	/** @brief Int type. Usually 32-bit. */
	using Int = DETECTIVE_INT_TYPE;
	using IntPtr = DETECTIVE_INT_TYPE*;

	/** @brief Long type. Usually 64-bit. */
	using Long = DETECTIVE_LONG_TYPE;
	using LongPtr = DETECTIVE_LONG_TYPE*;

	/** @brief Unsigned short type. Usually 16-bit. */
	using UShort = DETECTIVE_USHORT_TYPE;
	using UShortPtr = DETECTIVE_USHORT_TYPE*;

	/** @brief Unsigned int type. Usually 32-bit. */
	using UInt = DETECTIVE_UINT_TYPE;
	using UIntPtr = DETECTIVE_UINT_TYPE*;

	/** @brief Unsigned long type. Usually 64-bit. */
	using ULong = DETECTIVE_ULONG_TYPE;
	using ULongPtr = DETECTIVE_ULONG_TYPE*;

	/** @brief Float type. Usually 32-bit. */
	using Float = DETECTIVE_FLOAT_TYPE;
	using FloatPtr = DETECTIVE_FLOAT_TYPE*;

	/** @brief Double type. Usually 64-bit. */
	using Double = DETECTIVE_DOUBLE_TYPE;
	using DoublePtr = DETECTIVE_DOUBLE_TYPE*;

	/** @brief Generic pointer type.Either 32 or 64 bits dependinding on target architecture. */
	using Ptr = DETECTIVE_POINTER_TYPE;
}
