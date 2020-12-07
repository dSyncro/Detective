#if !defined(DETECTIVE_ARCHITECTURE_H)
#define DETECTIVE_ARCHITECTURE_H

/**
 * @def DETECTIVE_ARCHITECTURE
 * @brief Describes architecture in use.
 * @see Detective::Architecture
*/

/**
 * @def DETECTIVE_ARCHITECTURE_X86_64
 * @brief Defined when using x86_64 architecture.
*/

/**
 * @def DETECTIVE_ARCHITECTURE_X86
 * @brief Defined when using x86 architecture.
*/

/**
 * @def DETECTIVE_ARCHITECTURE_ARM64
 * @brief Defined when using ARM64 architecture.
*/

/**
 * @def DETECTIVE_ARCHITECTURE_ARM
 * @brief Defined when using ARM architecture.
*/

/**
 * @def DETECTIVE_ARCHITECTURE_UNKNOWN
 * @brief Defined when architecture cannot be deduced.
*/

#if defined(__x86_64__) || defined(_M_AMD64) || defined(_M_X64)
#	define DETECTIVE_ARCHITECTURE Detective::Architecture::X86_64
#	define DETECTIVE_ARCHITECTURE_X86_64
#elif defined(__i686__) || defined(__i586__) || defined(__i486__) || defined(__i386__) || defined(__i386) || defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__)
#	define DETECTIVE_ARCHITECTURE Detective::Architecture::X86
#	define DETECTIVE_ARCHITECTURE_X86
#elif defined(__aarch64__)
#	define DETECTIVE_ARCHITECTURE Detective::Architecture::ARM64
#	define DETECTIVE_ARCHITECTURE_ARM64
#elif defined(__arm__) || defined(_M_ARM)
#	define DETECTIVE_ARCHITECTURE Detective::Architecture::ARM
#	define DETECTIVE_ARCHITECTURE_ARM
#else
#	define DETECTIVE_ARCHITECTURE Detective::Architecture::Unknown
#	define DETECTIVE_ARCHITECTURE_UNKNOWN
#endif

namespace Detective {

	/**
	 * @brief Supported Architectures.
	*/
	enum class Architecture {
		X86, /** @brief x86 architecture. */
		X86_64, /** @brief x86_64 architecture. */
		ARM, /** @brief arm architecture. */
		ARM64, /** @brief arm64 architecture. */
		Unknown /** @brief Unknown architecture. */
	};

	/**
	 * @brief Get architecture in use.
	 * @return Device architecture.
	*/
	static inline Architecture getArchitecture()
	{
		return DETECTIVE_ARCHITECTURE;
	}

}

#endif
