#if !defined(DETECTIVE_CPP11_H)
#define DETECTIVE_CPP11_H

// If C++11 is supported, we can assume C++03 is supported too
#include "Cpp03.h"

#if defined(__cpp_unicode_characters)
#	define DETECTIVE_CPP_SUPPORT_CHARTYPES
#endif

#if defined(__cpp_raw_strings) || defined(__cpp_unicode_literals)
#	define DETECTIVE_CPP_SUPPORT_STRINGLITERALS
#endif

#if defined(__cpp_user_defined_literals)
#	define DETECTIVE_CPP_SUPPORT_USERLITERALS
#endif

#if defined(__cpp_threadsafe_static_init)
#	define DETECTIVE_CPP_SUPPORT_THREADSAFE_STATIC_INIT
#endif

#if defined(__cpp_lambdas)
#	define DETECTIVE_CPP_SUPPORT_LAMBDAS
#endif

#if defined(__cpp_constexpr)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR
#endif

#if defined(__cpp_range_based_for)
#	define DETECTIVE_CPP_SUPPORT_RANGEBASEDFOR
#endif

#if defined(__cpp_static_assert)
#	define DETECTIVE_CPP_SUPPORT_STATICASSERT
#endif

#if defined(__cpp_decltype)
#	define DETECTIVE_CPP_SUPPORT_DECLTYPE
#endif

#if defined(__cpp_attributes)
#	define DETECTIVE_CPP_SUPPORT_ATTRIBUTES
#endif

#if __has_cpp_attribute(noreturn)
#	define DETECTIVE_CPP_SUPPORT_NORETURN
#endif

#if __has_cpp_attribute(carries_dependency)
#	define DETECTIVE_CPP_SUPPORT_CARRIESDEPENDENCY
#endif

#if defined(__cpp_rvalue_references)
#	define DETECTIVE_CPP_SUPPORT_RVALREF
#endif

#if defined(__cpp_variadic_templates)
#	define DETECTIVE_CPP_SUPPORT_VARIADIC_TEMPLATES
#endif

#if defined(__cpp_initializer_lists)
#	define DETECTIVE_CPP_SUPPORT_INITLISTS
#endif

#if defined(__cpp_delegating_constructors)
#	define DETECTIVE_CPP_SUPPORT_DELEGATING_CONSTRUCTORS
#endif

#if defined(__cpp_nsdmi)
#	define DETECTIVE_CPP_SUPPORT_NSDMI
#endif

#if defined(__cpp_inheriting_constructors)
#	define DETECTIVE_CPP_SUPPORT_INHERITING_CONSTRUCTORS
#endif

#if defined(__cpp_ref_qualifiers)
#	define DETECTIVE_CPP_SUPPORT_REFQUALIFIERS
#endif

#if defined(__cpp_alias_templates)
#	define DETECTIVE_CPP_SUPPORT_TEMPLATE_ALIASES
#endif

#if defined(DETECTIVE_CPP_SUPPORT_CHARTYPES) \
	&& defined(DETECTIVE_CPP_SUPPORT_STRINGLITERALS) \
	&& defined(DETECTIVE_CPP_SUPPORT_USERLITERALS) \
	&& defined(DETECTIVE_CPP_SUPPORT_THREADSAFE_STATIC_INIT) \
	&& defined(DETECTIVE_CPP_SUPPORT_LAMBDAS) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_RANGEBASEDFOR) \
	&& defined(DETECTIVE_CPP_SUPPORT_STATICASSERT) \
	&& defined(DETECTIVE_CPP_SUPPORT_DECLTYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_ATTRIBUTES) \
	&& defined(DETECTIVE_CPP_SUPPORT_NORETURN) \
	&& defined(DETECTIVE_CPP_SUPPORT_CARRIESDEPENDENCY) \
	&& defined(DETECTIVE_CPP_SUPPORT_RVALREF) \
	&& defined(DETECTIVE_CPP_SUPPORT_VARIADIC_TEMPLATES) \
	&& defined(DETECTIVE_CPP_SUPPORT_INITLISTS) \
	&& defined(DETECTIVE_CPP_SUPPORT_DELEGATING_CONSTRUCTORS) \
	&& defined(DETECTIVE_CPP_SUPPORT_NSDMI) \
	&& defined(DETECTIVE_CPP_SUPPORT_INHERITING_CONSTRUCTORS) \
	&& defined(DETECTIVE_CPP_SUPPORT_REFQUALIFIERS) \
	&& defined(DETECTIVE_CPP_SUPPORT_TEMPLATE_ALIASES)
#	define DETECTIVE_CPP_STANDARD11_FULL_FEATURED
#endif

namespace Detective {

	/**
	 * @brief Check if new char types are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasUnicodeCharsSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_CHARTYPES)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if raw and unicode strings are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasStringLiteralsSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_STRINGLITERALS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if user defined literals are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasUserDefinedLiteralsSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_USERLITERALS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if thread safe static initialization is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasThreadSafeStaticInitSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_THREADSAFE_STATIC_INIT)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if lambdas are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasLambdasSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_LAMBDAS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if constexpr is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasConstexprSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if range based for loops are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasRangeBasedForSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_RANGEBASEDFOR)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if range based for loops are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasRangeBasedForSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_RANGEBASEDFOR)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if static assert is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasStaticAssertSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_STATICASSERT)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if decltype is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasDecltypeSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_DECLTYPE)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if attributes are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasAttributesSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_ATTRIBUTES)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if noreturn attibute is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasNoReturnSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_NORETURN)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if carries_dependency attibute is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasCarriesDependencySupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_CARRIESDEPENDENCY)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if rvalue references are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasRvalueReferencesSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_CARRIESDEPENDENCY)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if variadic templates are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasVariadicTemplatesSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_CARRIESDEPENDENCY)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if variadic templates are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasInitializersListsSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_INITLISTS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if delegating constructors are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasDelegatingConstructorsSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_DELEGATING_CONSTRUCTORS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if NSDMI is supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasNSDMISupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_NSDMI)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if inheriting constructors are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasInheritingConstructorsSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_INHERITING_CONSTRUCTORS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if ref-qualifiers are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasRefQualifiersSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_REFQUALIFIERS)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if template aliases are supported.
	 * @return Returns true if feature is supported. False otherwise.
	*/
	static inline bool hasTemplateAliasesSupport()
	{
	#if defined(DETECTIVE_CPP_SUPPORT_TEMPLATE_ALIASES)
		return true;
	#else
		return false;
	#endif
	}

	/**
	 * @brief Check if C++11 standard is fully supported.
	 * @return Returns true if standard is fully supported. False otherwise.
	*/
	static inline bool hasFullCpp11Support()
	{
	#if defined(DETECTIVE_CPP_STANDARD11_FULL_FEATURED)
		return true;
	#else
		return false;
	#endif
	}
}

#endif
