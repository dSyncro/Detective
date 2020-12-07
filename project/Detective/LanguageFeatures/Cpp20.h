#if !defined(DETECTIVE_CPP20_H)
#define DETECTIVE_CPP20_H

// If C++20 is supported, we can assume C++17 is supported too
#include "Cpp17.h"

#if __has_include(<algorithm>)
#	include <algorithm>
#endif

#if __has_include(<array>)
#	include <array>
#endif

#if __has_include(<atomic>)
#	include <atomic>
#endif

#if __has_include(<barrier>)
#	include <barrier>
#endif

#if __has_include(<bit>)
#	include <bit>
#endif

#if __has_include(<compare>)
#	include <compare>
#endif

#if __has_include(<complex>)
#	include <complex>
#endif

#if __has_include(<concepts>)
#	include <concepts>
#endif

#if __has_include(<execution>)
#	include <execution>
#endif

#if __has_include(<format>)
#	include <format>
#endif

#if __has_include(<functional>)
#	include <functional>
#endif

#if __has_include(<iterator>)
#	include <iterator>
#endif

#if __has_include(<latch>)
#	include <latch>
#endif

#if __has_include(<list>)
#	include <list>
#endif

#if __has_include(<memory>)
#	include <memory>
#endif

#if __has_include(<new>)
#	include <new>
#endif

#if __has_include(<numbers>)
#	include <numbers>
#endif

#if __has_include(<numeric>)
#	include <numeric>
#endif

#if __has_include(<semaphore>)
#	include <semaphore>
#endif

#if __has_include(<source_location>)
#	include <source_location>
#endif

#if __has_include(<span>)
#	include <span>
#endif

#if __has_include(<string>)
#	include <string>
#endif

#if __has_include(<string_view>)
#	include <string_view>
#endif

#if __has_include(<syncstream>)
#	include <syncstream>
#endif

#if __has_include(<tuple>)
#	include <tuple>
#endif

#if __has_include(<type_traits>)
#	include <type_traits>
#endif

#if __has_include(<unordered_map>)
#	include <unordered_map>
#endif

#if __has_include(<utility>)
#	include <utility>
#endif

#if __has_include(<vector>)
#	include <vector>
#endif

#if defined(__cpp_lib_coroutine)
#	define DETECTIVE_CPP_SUPPORT_COROUTINE
#endif

#if defined(__cpp_concepts)
#	define DETECTIVE_CPP_SUPPORT_CONCEPTS
#endif

#if defined(__cpp_constexpr_in_decltype)
#	define DETECTIVE_CPP_SUPPORT_DECLTYPE_CONSTEXPR
#endif

#if defined(__cpp_generic_lambdas) && __cpp_generic_lambdas >= 201707
#	define DETECTIVE_CPP_SUPPORT_GENERIC_LAMBDAS20
#endif

#if defined(__cpp_init_captures) && __cpp_init_captures >= 201803
#	define DETECTIVE_CPP_SUPPORT_LAMBDAS_PACK_EXPANSION
#endif

#if defined(__cpp_lib_destroying_delete)
#	define DETECTIVE_CPP_SUPPORT_DESTROYING_DELETE
#endif

#if defined(__cpp_lib_char8_t)
#	define DETECTIVE_CPP_SUPPORT_CHAR8_TYPE
#endif

#if defined(__cpp_constexpr_dynamic_alloc)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_DYNAMIC_ALLOC
#endif

#if defined(__cpp_lib_three_way_comparison)
#	define DETECTIVE_CPP_SUPPORT_THREE_WAY_COMPARISON
#endif

#if defined(__cpp_consteval)
#	define DETECTIVE_CPP_SUPPORT_CONSTEVAL
#endif

#if defined(__cpp_constexpr) && __cpp_constexpr >= 201907
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR20
#endif

#if defined(__cpp_deduction_guides) && __cpp_deduction_guides >= 201907
#	define DETECTIVE_CPP_SUPPORT_CLASS_TEMPLATE_ARGS_DEDUCTION20
#endif

#if defined(__cpp_conditional_explicit)
#	define DETECTIVE_CPP_SUPPORT_CONDITIONAL_EXPLICIT
#endif

#if defined(__cpp_constinit)
#	define DETECTIVE_CPP_SUPPORT_CONSTINIT
#endif

#if defined(__cpp_using_enum)
#	define DETECTIVE_CPP_SUPPORT_USING_ENUM
#endif

#if defined(__cpp_designated_initializers)
#	define DETECTIVE_CPP_SUPPORT_DESIGNED_INITIALIZERS
#endif

#if defined(__cpp_aggregate_paren_init)
#	define DETECTIVE_CPP_SUPPORT_AGGREGATE_PAREN_INIT
#endif

#if __has_cpp_attribute(likely)
#	define DETECTIVE_CPP_SUPPORT_LIKELY
#endif

#if __has_cpp_attribute(unlikely)
#	define DETECTIVE_CPP_SUPPORT_UNLIKELY
#endif

#if __has_cpp_attribute(nodiscard) >= 201907
#	define DETECTIVE_CPP_SUPPORT_NODISCARD20
#endif

#if __has_cpp_attribute(no_unique_address)
#	define DETECTIVE_CPP_SUPPORT_NOUNIQUEADDRESS
#endif

#if defined(__cpp_modules)
#	define DETECTIVE_CPP_SUPPORT_MODULES
#endif

#if defined(__cpp_nontype_template_args) && __cpp_nontype_template_args >= 201911
#	define DETECTIVE_CPP_SUPPORT_NTTA20
#endif

#if defined(__cpp_lib_source_location)
#	define DETECTIVE_CPP_SUPPORT_SOURCE_LOCATION
#endif

#if defined(__cpp_lib_char8_t)
#	define DETECTIVE_CPP_SUPPORT_LIBRARY_CHAR8_TYPE
#endif

#if defined(__cpp_lib_concepts)
#	define DETECTIVE_CPP_SUPPORT_LIBRARY_CONCEPTS
#endif

#if defined(__cpp_lib_constexpr_algorithms)
#	define DETECTIVE_CPP_SUPPORT_ALGORITHMS_CONSTEXPR
#endif

#if defined(__cpp_lib_integer_comparison_functions)
#	define DETECTIVE_CPP_SUPPORT_INT_COMPARISON_FUNCTIONS
#endif

#if defined(__cpp_lib_constexpr_utility)
#	define DETECTIVE_CPP_SUPPORT_UTILITY_CONSTEXPR
#endif

#if defined(__cpp_lib_constexpr_tuple)
#	define DETECTIVE_CPP_SUPPORT_TUPLE_CONSTEXPR
#endif

#if defined(__cpp_lib_to_address)
#	define DETECTIVE_CPP_SUPPORT_TOADDRESS
#endif

#if defined(__cpp_lib_constexpr_memory)
#	define DETECTIVE_CPP_SUPPORT_MEMORY_CONSTEXPR
#endif

#if defined(__cpp_lib_assume_aligned)
#	define DETECTIVE_CPP_SUPPORT_ASSUME_ALIGNED
#endif

#if defined(__cpp_lib_smart_ptr_for_overwrite)
#	define DETECTIVE_CPP_SUPPORT_OVERWRITE_SMARTPTR
#endif

#if defined(__cpp_lib_constexpr_dynamic_alloc)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_DYNAMIC_ALLOC
#endif

#if defined(__cpp_lib_polymorphic_allocator)
#	define DETECTIVE_CPP_SUPPORT_POLYMORPHIC_ALLOCATOR
#endif

#if defined(__cpp_lib_unwrap_ref)
#	define DETECTIVE_CPP_SUPPORT_UNWRAP_REFERENCE
#endif

#if defined(__cpp_lib_constexpr_functional)
#	define DETECTIVE_CPP_SUPPORT_FUNCTIONAL_CONSTEXPR
#endif

#if defined(__cpp_lib_bind_front)
#	define DETECTIVE_CPP_SUPPORT_BINDFRONT
#endif

#if defined(__cpp_lib_bounded_array_traits)
#	define DETECTIVE_CPP_SUPPORT_BOUNDED_ARRAY_TRAITS
#endif

#if defined(__cpp_lib_is_nothrow_convertible)
#	define DETECTIVE_CPP_SUPPORT_ISNOTHROWCONVERTIBLE
#endif

#if defined(__cpp_lib_is_layout_compatible)
#	define DETECTIVE_CPP_SUPPORT_ISLAYOUTCOMPATIBLE
#endif

#if defined(__cpp_lib_is_pointer_interconvertible)
#	define DETECTIVE_CPP_SUPPORT_ISPOINTERINTERCONVERTIBLE
#endif

#if defined(__cpp_lib_type_identity)
#	define DETECTIVE_CPP_SUPPORT_TYPE_IDENTITY
#endif

#if defined(__cpp_lib_remove_cvref)
#	define DETECTIVE_CPP_SUPPORT_REMOVECVREF
#endif

#if defined(__cpp_lib_is_constant_evaluated)
#	define DETECTIVE_CPP_SUPPORT_ISCONSTANTEVALUATED
#endif

#if defined(__cpp_lib_execution) && __cpp_lib_execution >= 201902
#	define DETECTIVE_CPP_SUPPORT_VECTORIZATIONEXECPOLICY
#endif

#if defined(__cpp_lib_format)
#	define DETECTIVE_CPP_SUPPORT_ISCONSTANTEVALUATED
#endif

#if defined(__cpp_lib_starts_ends_with)
#	define DETECTIVE_CPP_SUPPORT_STARTS_ENDS_WITH
#endif

#if defined(__cpp_lib_constexpr_string)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_STRING
#endif

#if defined(__cpp_lib_string_view) && __cpp_lib_string_view >= 201803
#	define DETECTIVE_CPP_SUPPORT_STRINGVIEW_CONSTEXPR_ITERATOR
#endif

#if defined(__cpp_lib_constexpr_string_view)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_STRINGVIEW
#endif

#if defined(__cpp_lib_constexpr_vector)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_VECTOR
#endif

#if defined(__cpp_lib_array_constexpr) && __cpp_lib_array_constexpr >= 201811
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_ARRAY20
#endif

#if defined(__cpp_lib_to_array)
#	define DETECTIVE_CPP_SUPPORT_TOARRAY
#endif

#if defined(__cpp_lib_erase_if)
#	define DETECTIVE_CPP_SUPPORT_ERASEIF
#endif

#if defined(__cpp_lib_list_remove_return_type)
#	define DETECTIVE_CPP_SUPPORT_LIST_REMOVE_RETURN_TYPE
#endif

#if defined(__cpp_lib_generic_unordered_lookup)
#	define DETECTIVE_CPP_SUPPORT_UNORDERED_LOOKUP
#endif

#if defined(__cpp_lib_span)
#	define DETECTIVE_CPP_SUPPORT_SPAN
#endif

#if defined(__cpp_lib_constexpr_iterator)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_ITERATOR
#endif

#if defined(__cpp_lib_ssize)
#	define DETECTIVE_CPP_SUPPORT_SSIZE
#endif

#if defined(__cpp_lib_ranges)
#	define DETECTIVE_CPP_SUPPORT_RANGES
#endif

#if defined(__cpp_lib_shift)
#	define DETECTIVE_CPP_SUPPORT_SHIFT
#endif

#if defined(__cpp_lib_constexpr_numeric)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_NUMERIC
#endif

#if defined(__cpp_lib_interpolate)
#	define DETECTIVE_CPP_SUPPORT_INTERPOLATE
#endif

#if defined(__cpp_lib_constexpr_complex)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_COMPLEX
#endif

#if defined(__cpp_lib_bit_cast)
#	define DETECTIVE_CPP_SUPPORT_BITCAST
#endif

#if defined(__cpp_lib_int_pow2)
#	define DETECTIVE_CPP_SUPPORT_INTPOW2
#endif

#if defined(__cpp_lib_bitops)
#	define DETECTIVE_CPP_SUPPORT_BITOPS
#endif

#if defined(__cpp_lib_endian)
#	define DETECTIVE_CPP_SUPPORT_ENDIAN
#endif

#if defined(__cpp_lib_math_constants)
#	define DETECTIVE_CPP_SUPPORT_MATH_CONSTANTS
#endif

#if defined(__cpp_lib_chrono) && __cpp_lib_chrono >= 201907
#	define DETECTIVE_CPP_SUPPORT_CHRONO20
#endif

#if defined(__cpp_lib_syncbuf)
#	define DETECTIVE_CPP_SUPPORT_SYNCBUFFERS
#endif

#if defined(__cpp_lib_atomic_ref)
#	define DETECTIVE_CPP_SUPPORT_ATOMICREF
#endif

#if defined(__cpp_lib_atomic_float)
#	define DETECTIVE_CPP_SUPPORT_ATOMICFLOAT
#endif

#if defined(__cpp_lib_atomic_wait)
#	define DETECTIVE_CPP_SUPPORT_ATOMICWAIT
#endif

#if defined(__cpp_lib_semaphore)
#	define DETECTIVE_CPP_SUPPORT_SEMAPHORE
#endif

#if defined(__cpp_lib_latch)
#	define DETECTIVE_CPP_SUPPORT_LATCH
#endif

#if defined(__cpp_lib_barrier)
#	define DETECTIVE_CPP_SUPPORT_BARRIER
#endif

#if defined(__cpp_lib_atomic_flag_test)
#	define DETECTIVE_CPP_SUPPORT_ATOMICFLAG_TEST
#endif

#if defined(__cpp_lib_atomic_lock_free_type_aliases)
#	define DETECTIVE_CPP_SUPPORT_LOCKFREE_INT
#endif

#if defined(__cpp_lib_atomic_value_initialization)
#	define DETECTIVE_CPP_SUPPORT_ATOMIC_VALUE_INIT
#endif

#if defined(__cpp_lib_atomic_shared_ptr)
#	define DETECTIVE_CPP_SUPPORT_ATOMIC_SHAREDPTR
#endif

#if defined(__cpp_lib_jthread)
#	define DETECTIVE_CPP_SUPPORT_JTHREAD
#endif

#if defined(DETECTIVE_CPP_SUPPORT_COROUTINE) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONCEPTS) \
	&& defined(DETECTIVE_CPP_SUPPORT_DECLTYPE_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_GENERIC_LAMBDAS20) \
	&& defined(DETECTIVE_CPP_SUPPORT_LAMBDAS_PACK_EXPANSION) \
	&& defined(DETECTIVE_CPP_SUPPORT_DESTROYING_DELETE) \
	&& defined(DETECTIVE_CPP_SUPPORT_CHAR8_TYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_DYNAMIC_ALLOC) \
	&& defined(DETECTIVE_CPP_SUPPORT_THREE_WAY_COMPARISON) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR20) \
	&& defined(DETECTIVE_CPP_SUPPORT_CLASS_TEMPLATE_ARGS_DEDUCTION20) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONDITIONAL_EXPLICIT) \
	&& defined(DETECTIVE_CPP_SUPPORT_USING_ENUM) \
	&& defined(DETECTIVE_CPP_SUPPORT_DESIGNED_INITIALIZERS) \
	&& defined(DETECTIVE_CPP_SUPPORT_AGGREGATE_PAREN_INIT) \
	&& defined(DETECTIVE_CPP_SUPPORT_LIKELY) \
	&& defined(DETECTIVE_CPP_SUPPORT_UNLIKELY) \
	&& defined(DETECTIVE_CPP_SUPPORT_NODISCARD20) \
	&& defined(DETECTIVE_CPP_SUPPORT_NOUNIQUEADDRESS) \
	&& defined(DETECTIVE_CPP_SUPPORT_MODULES) \
	&& defined(DETECTIVE_CPP_SUPPORT_NTTA20) \
	&& defined(DETECTIVE_CPP_SUPPORT_SOURCE_LOCATION) \
	&& defined(DETECTIVE_CPP_SUPPORT_LIBRARY_CHAR8_TYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_LIBRARY_CONCEPTS) \
	&& defined(DETECTIVE_CPP_SUPPORT_ALGORITHMS_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_INT_COMPARISON_FUNCTIONS) \
	&& defined(DETECTIVE_CPP_SUPPORT_UTILITY_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_TUPLE_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_TOADDRESS) \
	&& defined(DETECTIVE_CPP_SUPPORT_MEMORY_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_ASSUME_ALIGNED) \
	&& defined(DETECTIVE_CPP_SUPPORT_OVERWRITE_SMARTPTR) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_DYNAMIC_ALLOC) \
	&& defined(DETECTIVE_CPP_SUPPORT_POLYMORPHIC_ALLOCATOR) \
	&& defined(DETECTIVE_CPP_SUPPORT_UNWRAP_REFERENCE) \
	&& defined(DETECTIVE_CPP_SUPPORT_FUNCTIONAL_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_UTILITY_CONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_BINDFRONT) \
	&& defined(DETECTIVE_CPP_SUPPORT_BOUNDED_ARRAY_TRAITS) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISNOTHROWCONVERTIBLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISLAYOUTCOMPATIBLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISPOINTERINTERCONVERTIBLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_TYPE_IDENTITY) \
	&& defined(DETECTIVE_CPP_SUPPORT_REMOVECVREF) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISCONSTANTEVALUATED) \
	&& defined(DETECTIVE_CPP_SUPPORT_STARTS_ENDS_WITH) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_STRING) \
	&& defined(DETECTIVE_CPP_SUPPORT_STRINGVIEW_CONSTEXPR_ITERATOR) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_STRINGVIEW) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_VECTOR) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_ARRAY20) \
	&& defined(DETECTIVE_CPP_SUPPORT_TOARRAY) \
	&& defined(DETECTIVE_CPP_SUPPORT_ERASEIF) \
	&& defined(DETECTIVE_CPP_SUPPORT_LIST_REMOVE_RETURN_TYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_UNORDERED_LOOKUP) \
	&& defined(DETECTIVE_CPP_SUPPORT_SPAN) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_ITERATOR) \
	&& defined(DETECTIVE_CPP_SUPPORT_SSIZE) \
	&& defined(DETECTIVE_CPP_SUPPORT_RANGES) \
	&& defined(DETECTIVE_CPP_SUPPORT_SHIFT) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_NUMERIC) \
	&& defined(DETECTIVE_CPP_SUPPORT_INTERPOLATE) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_COMPLEX) \
	&& defined(DETECTIVE_CPP_SUPPORT_BITCAST) \
	&& defined(DETECTIVE_CPP_SUPPORT_INTPOW2) \
	&& defined(DETECTIVE_CPP_SUPPORT_BITOPS) \
	&& defined(DETECTIVE_CPP_SUPPORT_ENDIAN) \
	&& defined(DETECTIVE_CPP_SUPPORT_MATH_CONSTANTS) \
	&& defined(DETECTIVE_CPP_SUPPORT_CHRONO20) \
	&& defined(DETECTIVE_CPP_SUPPORT_SYNCBUFFERS) \
	&& defined(DETECTIVE_CPP_SUPPORT_ATOMICREF) \
	&& defined(DETECTIVE_CPP_SUPPORT_ATOMICFLOAT) \
	&& defined(DETECTIVE_CPP_SUPPORT_ATOMICWAIT) \
	&& defined(DETECTIVE_CPP_SUPPORT_SEMAPHORE) \
	&& defined(DETECTIVE_CPP_SUPPORT_LATCH) \
	&& defined(DETECTIVE_CPP_SUPPORT_BARRIER) \
	&& defined(DETECTIVE_CPP_SUPPORT_ATOMICFLAG_TEST) \
	&& defined(DETECTIVE_CPP_SUPPORT_LOCKFREE_INT) \
	&& defined(DETECTIVE_CPP_SUPPORT_ATOMIC_VALUE_INIT) \
	&& defined(DETECTIVE_CPP_SUPPORT_ATOMIC_SHAREDPTR) \
	&& defined(DETECTIVE_CPP_SUPPORT_JTHREAD)
#	define DETECTIVE_CPP_STANDARD20_FULL_FEATURED
#endif
