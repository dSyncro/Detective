/**
 * @file OS.h
 * @brief Identify device OS.
*/

#if !defined(DETECTIVE_OS_H)
#define DETECTIVE_OS_H

/**
 * @def DETECTIVE_OS
 * @brief OS of the device.
*/

/**
 * @def DETECTIVE_TARGET_OS
 * @brief The OS we are compiling to.
*/

/**
 * @def DETECTIVE_OS_WINDOWS
 * @brief Defined when using Windows.
*/

/**
 * @def DETECTIVE_OS_APPLE
 * @brief Defined when using an Apple product.
*/

/**
 * @def DETECTIVE_OS_IPHONE_SIMULATOR
 * @brief Defined when using iPhone Simulator.
*/

/**
 * @def DETECTIVE_OS_IOS
 * @brief Defined when using an iOS device.
*/

/**
 * @def DETECTIVE_OS_MAC
 * @brief Defined when using MacOS.
*/

/**
 * @def DETECTIVE_OS_ANDROID
 * @brief Defined when using Android.
*/

/**
 * @def DETECTIVE_OS_LINUX
 * @brief Defined when using Linux.
*/

/**
 * @def DETECTIVE_OS_WINDOWSCE
 * @brief Defined when using WindowsCE.
*/

/**
 * @def DETECTIVE_OS_MSDOS
 * @brief Defined when using MSDOS.
*/

/**
 * @def DETECTIVE_OS_OS2
 * @brief Defined when using OS2.
*/

/**
 * @def DETECTIVE_OS_FREEBSD
 * @brief Defined when using FreeBSD.
*/

/**
 * @def DETECTIVE_OS_NETBSD
 * @brief Defined when using NetBSD.
*/

/**
 * @def DETECTIVE_OS_BSD
 * @brief Defined when using BSD.
*/

/**
 * @def DETECTIVE_OS_QNX
 * @brief Defined when using QNX.
*/

/**
 * @def DETECTIVE_OS_VXWORKS
 * @brief Defined when using VxWorks.
*/

/**
 * @def DETECTIVE_OS_MINIX
 * @brief Defined when using Minix.
*/

/**
 * @def DETECTIVE_OS_UNIX
 * @brief Defined when using Unix.
*/

/**
 * @def DETECTIVE_OS_UNKNOWN
 * @brief Defined when OS cannot be deduced.
*/

// OS Detection
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#	define DETECTIVE_OS Detective::OS::Windows
#	define DETECTIVE_OS_WINDOWS
#	if defined(WIN64) || defined(_WIN64) || defined(__WIN64__)
#		define DETECTIVE_OS_WINDOWS64
#	endif
#elif defined(__APPLE__) || defined(__MACH__)
#	define DETECTIVE_OS Detective::OS::Apple
#	define DETECTIVE_OS_APPLE
#	include <TargetConditionals.h>
#	if TARGET_IPHONE_SIMULATOR == 1
#		define DETECTIVE_OS Detective::OS::IPhoneSimulator
#		define DETECTIVE_OS_IPHONE_SIMULATOR
#	elif TARGET_OS_IPHONE == 1
#		define DETECTIVE_OS Detective::OS::IOS
#		define DETECTIVE_OS_IOS
#	elif TARGET_OS_MAC == 1
#		define DETECTIVE_OS Detective::OS::MacOS
#		define DETECTIVE_OS_MAC
#	endif
#elif defined(__ANDROID__)
#	define DETECTIVE_OS Detective::OS::Android
#	define DETECTIVE_OS_ANDROID
#elif defined(__linux__) || defined(linux) || defined(__linux)
#	define DETECTIVE_OS Detective::OS::Linux
#	define DETECTIVE_OS_LINUX
#elif defined(_WIN32_WCE)
#	define DETECTIVE_OS Detective::OS::WindowsCE
#	define DETECTIVE_OS_WINDOWSCE
#elif defined(MSDOS) || defined(__MSDOS__)
#	define DETECTIVE_OS Detective::OS::MSDOS
#	define DETECTIVE_OS_MSDOS
#elif defined(OS2) || defined(_OS2) || defined(__OS2__)
#	define DETECTIVE_OS Detective::OS::OS2
#	define DETECTIVE_OS_OS2
#elif defined(__FreeBSD__)
#	define DETECTIVE_OS Detective::OS::FreeBSD
#	define DETECTIVE_OS_FREEBSD
#elif defined(__NetBSD__)
#	define DETECTIVE_OS Detective::OS::NetBSD
#	define DETECTIVE_OS_NETBSD
#elif defined(__bsd__)
#	define DETECTIVE_OS Detective::OS::BSD
#	define DETECTIVE_OS_BSD
#elif defined(__QNX__)
#	define DETECTIVE_OS Detective::OS::QNX
#	define DETECTIVE_OS_QNX
#elif defined(__VXWORKS__) || defined(__vxworks)
#	define DETECTIVE_OS Detective::OS::VxWorks
#	define DETECTIVE_OS_VXWORKS
#elif defined(__minix)
#	define DETECTIVE_OS Detective::OS::Minix
#	define DETECTIVE_OS_MINIX
#elif defined(unix) || defined(__unix) || defined(__unix__)
#	define DETECTIVE_OS Detective::OS::Unix
#	define DETECTIVE_OS_UNIX
#else
#	define DETECTIVE_OS Detective::OS::Unknown
#	define DETECTIVE_OS_UNKNOWN
#endif

// Target OS
#if !defined(DETECTIVE_TARGET_OS)
#	define DETECTIVE_TARGET_OS DETECTIVE_OS
#endif

namespace Detective {

	/**
	 * @brief Supported OS.
	*/
	enum class OS {
		Unknown, /** @brief Unknown OS. */
		Android, /** @brief Android OS. */
		Apple, /** @brief Generic Apple OS. */
		BSD, /** @brief BSD OS. */
		FreeBSD, /** @brief FreeBSD OS. */
		IOS, /** @brief Apple iOS. */
		IPhoneSimulator, /** @brief Apple iPhone Simulator. */
		Linux, /** @brief Linux distribution. */
		MacOS, /** @brief Apple MacOS. */
		Minix, /** @brief Minix OS. */
		MSDOS, /** @brief MSDOS. */
		NetBSD, /** @brief NetBSD OS. */
		QNX, /** @brief QNX OS. */
		OS2, /** @brief OS2 OS. */
		Windows, /** @brief Microsoft Windows OS. */
		WindowsCE, /** @brief Microsoft Windows CE Kernel. */
		Unix, /** @brief Unix OS. */
		VxWorks /** @brief VxWorks OS. */
	};

	/**
	 * @brief Get device OS.
	 * @return The device OS.
	*/
	static inline OS getOS()
	{
		return DETECTIVE_OS;
	}

	/**
	 * @brief Get the OS we are compiling to.
	 * @return The target OS.
	*/
	static inline OS getTargetOS()
	{
		return DETECTIVE_TARGET_OS;
	}

	/**
	 * @brief Check if the device has a 32 bit architecture.
	*/
	static inline bool is32Bit()
	{
		return sizeof(void*) == 4;
	}

	/**
	 * @brief Check if the device has a 64 bit architecture.
	*/
	static inline bool is64Bit()
	{
		return sizeof(void*) == 8;
	}
}

#endif
