#if !defined(DETECTIVE_CPP20_H)
#define DETECTIVE_CPP20_H

#if __has_include(<algorithm>)
#	include <algorithm>
#endif

#if __has_include(<compare>)
#	include <compare>
#endif

#if __has_include(<concepts>)
#	include <concepts>
#endif

#if __has_include(<functional>)
#	include <functional>
#endif

#if __has_include(<memory>)
#	include <memory>
#endif

#if __has_include(<new>)
#	include <new>
#endif

#if __has_include(<source_location>)
#	include <source_location>
#endif

#if __has_include(<tuple>)
#	include <tuple>
#endif

#if __has_include(<type_traits>)
#	include <type_traits>
#endif

#if __has_include(<utility>)
#	include <utility>
#endif

// If C++20 is supported, we can assume C++17 is supported too
#include "Cpp17.h"

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

#endif
