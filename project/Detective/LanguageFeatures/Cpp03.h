#if !defined(DETECTIVE_CPP03_H)
#define DETECTIVE_CPP03_H

#if defined(__cpp_rtti)
#	define DETECTIVE_CPP_SUPPORT_RTTI
#endif

#if defined(__cpp_exceptions)
#	define DETECTIVE_CPP_SUPPORT_EXCEPTIONS
#endif

#if defined(DETECTIVE_CPP_SUPPORT_RTTI) && defined(DETECTIVE_CPP_SUPPORT_EXCEPTIONS)
#	define DETECTIVE_CPP_STANDARD03_FULL_FEATURED
#endif

namespace Detective {

	/**
	 * @brief Check if exception handling is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	constexpr bool hasExceptionsSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_EXCEPTIONS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if RTTI is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	constexpr bool hasRuntimeTypeInformationSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_EXCEPTIONS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if C++03 standard is fully supported.
	 * @return Returns true if standard is fully supported. False otherwise.
	*/
	constexpr bool hasFullCpp03Support()
	{
	#if defined(DETECTIVE_CPP_STANDARD03_FULL_FEATURED)
		return true;
	#else
		return false;
	#endif
	}
}

#endif
