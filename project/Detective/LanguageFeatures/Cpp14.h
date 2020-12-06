#if !defined(DETECTIVE_CPP14_H)
#define DETECTIVE_CPP14_H

// If C++14 is supported, we can assume C++11 is supported too
#include "Cpp11.h"

#include <algorithm>
#include <chrono>
#include <complex>
#include <functional>
#include <iomanip>
#include <iterator>
#include <map>
#include <memory>
#include <string>
#include <tuple>
#include <type_traits>
#include <utility>

#if defined(__cpp_binary_literals)
#	define DETECTIVE_CPP_SUPPORT_BINLITERALS
#endif

#if defined(__cpp_init_captures)
#	define DETECTIVE_CPP_SUPPORT_GENERALIZED_LAMBDA_CAPTURES
#endif

#if defined(__cpp_generic_lambdas)
#	define DETECTIVE_CPP_SUPPORT_GENERIC_LAMBDAS
#endif

#if defined(__cpp_sized_deallocation)
#	define DETECTIVE_CPP_SUPPORT_SIZEDDEALLOC
#endif

#if defined(__cpp_constexpr) && __cpp_constexpr >= 201304L
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR14
#endif

#if defined(__cpp_decltype_auto) || defined(__cpp_return_type_deduction)
#	define DETECTIVE_CPP_SUPPORT_RETURNTYPE_DEDUCTION
#endif

#if __has_cpp_attribute(deprecated)
#	define DETECTIVE_CPP_SUPPORT_DEPRECATED
#endif

#if defined(__cpp_aggregate_nsdmi)
#	define DETECTIVE_CPP_SUPPORT_AGGREGATE_NSDMI
#endif

#if defined(__cpp_variable_templates)
#	define DETECTIVE_CPP_SUPPORT_VARIABLE_TEMPLATES
#endif

#if defined(__cpp_lib_integer_sequence)
#	define DETECTIVE_CPP_SUPPORT_CT_INTSEQUENCE
#endif

#if defined(__cpp_lib_exchange_function)
#	define DETECTIVE_CPP_SUPPORT_EXCHANGE
#endif

#if defined(__cpp_lib_tuples_by_type)
#	define DETECTIVE_CPP_SUPPORT_TUPLESBYTYPE
#endif

#if defined(__cpp_lib_tuple_element_t)
#	define DETECTIVE_CPP_SUPPORT_TUPLESELEMENTTYPE
#endif

#if defined(__cpp_lib_make_unique)
#	define DETECTIVE_CPP_SUPPORT_MAKEUNIQUE
#endif

#if defined(__cpp_lib_transparent_operators)
#	define DETECTIVE_CPP_SUPPORT_TRANSPARENT_OPERATORS
#endif

#if defined(__cpp_lib_integral_constant_callable)
#	define DETECTIVE_CPP_SUPPORT_INTEGRAL_CONSTANT_CALLABLE
#endif

#if defined(__cpp_lib_transformation_trait_aliases)
#	define DETECTIVE_CPP_SUPPORT_TRANSFORMATION_TRAIT_ALIASES
#endif

#if defined(__cpp_lib_result_of_sfinae)
#	define DETECTIVE_CPP_SUPPORT_RESULTOF_SFINAE
#endif

#if defined(__cpp_lib_is_final)
#	define DETECTIVE_CPP_SUPPORT_ISFINAL
#endif

#if defined(__cpp_lib_is_null_pointer)
#	define DETECTIVE_CPP_SUPPORT_ISNULLPTR
#endif

#if defined(__cpp_lib_chrono_udls)
#	define DETECTIVE_CPP_SUPPORT_CHRONO_USERLITERALS
#endif

#if defined(__cpp_lib_string_udls)
#	define DETECTIVE_CPP_SUPPORT_STRING_USERLITERALS
#endif

#if defined(__cpp_lib_generic_associative_lookup)
#	define DETECTIVE_CPP_SUPPORT_GENERIC_ASSOCIATIVE_LOOKUP
#endif

#if defined(__cpp_lib_null_iterators)
#	define DETECTIVE_CPP_SUPPORT_NULLITERATORS
#endif

#if defined(__cpp_lib_make_reverse_iterator)
#	define DETECTIVE_CPP_SUPPORT_MAKEREVERSEITERATOR
#endif

#if defined(__cpp_lib_robust_nonmodifying_seq_ops)
#	define DETECTIVE_CPP_SUPPORT_ROBUST_NONMODIFY_SEQOPS
#endif

#if defined(__cpp_lib_complex_udls)
#	define DETECTIVE_CPP_SUPPORT_COMPLEX_USERLITERALS
#endif

#if defined(__cpp_lib_quoted_string_io)
#	define DETECTIVE_CPP_SUPPORT_QUOTED
#endif

#if __has_include(<shared_mutex>)
#	include <shared_mutex>
#	define DETECTIVE_CPP_SUPPORT_SHAREDMUTEX
#endif

#if defined(__cpp_lib_shared_timed_mutex)
#	define DETECTIVE_CPP_SUPPORT_SHAREDMUTEX_TIMED
#endif

#if defined(DETECTIVE_CPP_SUPPORT_BINLITERALS) \
	&& defined(DETECTIVE_CPP_SUPPORT_GENERALIZED_LAMBDA_CAPTURES) \
	&& defined(DETECTIVE_CPP_SUPPORT_SIZEDDEALLOC) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR14) \
	&& defined(DETECTIVE_CPP_SUPPORT_RETURNTYPE_DEDUCTION) \
	&& defined(DETECTIVE_CPP_SUPPORT_DEPRECATED) \
	&& defined(DETECTIVE_CPP_SUPPORT_AGGREGATE_NSDMI) \
	&& defined(DETECTIVE_CPP_SUPPORT_VARIABLE_TEMPLATES) \
	&& defined(DETECTIVE_CPP_SUPPORT_CT_INTSEQUENCE) \
	&& defined(DETECTIVE_CPP_SUPPORT_EXCHANGE) \
	&& defined(DETECTIVE_CPP_SUPPORT_TUPLESBYTYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_TUPLESELEMENTTYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_MAKEUNIQUE) \
	&& defined(DETECTIVE_CPP_SUPPORT_TRANSPARENT_OPERATORS) \
	&& defined(DETECTIVE_CPP_SUPPORT_INTEGRAL_CONSTANT_CALLABLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_TRANSFORMATION_TRAIT_ALIASES) \
	&& defined(DETECTIVE_CPP_SUPPORT_RESULTOF_SFINAE) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISFINAL) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISNULLPTR) \
	&& defined(DETECTIVE_CPP_SUPPORT_CHRONO_USERLITERALS) \
	&& defined(DETECTIVE_CPP_SUPPORT_STRING_USERLITERALS) \
	&& defined(DETECTIVE_CPP_SUPPORT_GENERIC_ASSOCIATIVE_LOOKUP) \
	&& defined(DETECTIVE_CPP_SUPPORT_NULLITERATORS) \
	&& defined(DETECTIVE_CPP_SUPPORT_MAKEREVERSEITERATOR) \
	&& defined(DETECTIVE_CPP_SUPPORT_ROBUST_NONMODIFY_SEQOPS) \
	&& defined(DETECTIVE_CPP_SUPPORT_COMPLEX_USERLITERALS) \
	&& defined(DETECTIVE_CPP_SUPPORT_QUOTED) \
	&& defined(DETECTIVE_CPP_SUPPORT_SHAREDMUTEX) \
	&& defined(DETECTIVE_CPP_SUPPORT_SHAREDMUTEX_TIMED)
#	define DETECTIVE_CPP_STANDARD14_FULL_FEATURED
#endif

#endif
