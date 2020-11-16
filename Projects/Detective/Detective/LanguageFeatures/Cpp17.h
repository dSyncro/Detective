#if !defined(DETECTIVE_CPP17_H)
#define DETECTIVE_CPP17_H

// If C++17 is supported, we can assume C++14 is supported too
#include "Cpp14.h"

#include <atomic>
#include <algorithm>
#include <any>
#include <array>
#include <charconv>
#include <chrono>
#include <cmath>
#include <cstddef>
#include <filesystem>
#include <functional>
#include <map>
#include <memory>
#include <memory_resource>
#include <mutex>
#include <new>
#include <numeric>
#include <optional>
#include <shared_mutex>
#include <string>
#include <type_traits>
#include <tuple>
#include <unordered_map>
#include <utility>
#include <variant>
#include <vector>

#if defined(__cpp_hex_float)
#	define DETECTIVE_CPP_SUPPORT_HEXFLOAT
#endif

#if defined(__cpp_inline_variables)
#	define DETECTIVE_CPP_SUPPORT_INLINEVAR
#endif

#if defined(__cpp_aligned_new)
#	define DETECTIVE_CPP_SUPPORT_ALIGNEDNEW
#endif

#if defined(__cpp_guaranteed_copy_elision)
#	define DETECTIVE_CPP_SUPPORT_GUARANTEED_COPY_ELISION
#endif

#if defined(__cpp_noexcept_function_type)
#	define DETECTIVE_CPP_SUPPORT_NOEXCEPT_FUNCTION
#endif

#if defined(__cpp_fold_expressions)
#	define DETECTIVE_CPP_SUPPORT_FOLD_EXPRESSION
#endif

#if defined(__cpp_capture_star_this)
#	define DETECTIVE_CPP_SUPPORT_CAPTURE_VALUEOF_THIS
#endif

#if defined(__cpp_constexpr) && __cpp_constexpr >= 201603
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR17
#endif

#if defined(__cpp_if_constexpr)
#	define DETECTIVE_CPP_SUPPORT_IFCONSTEXPR
#endif

#if defined(__cpp_range_based_for) && __cpp_range_based_for >= 201603
#	define DETECTIVE_CPP_SUPPORT_RANGEBASEDFOR17
#endif

#if defined(__cpp_static_assert) && __cpp_static_assert >= 201411
#	define DETECTIVE_CPP_SUPPORT_STATICASSERT17
#endif

#if defined(__cpp_deduction_guides)
#	define DETECTIVE_CPP_SUPPORT_CLASS_TEMPLATE_ARGS_DEDUCTION
#endif

#if defined(__cpp_nontype_template_parameter_auto)
#	define DETECTIVE_CPP_SUPPORT_NTTP_AUTO
#endif

#if defined(__cpp_namespace_attributes)
#	define DETECTIVE_CPP_SUPPORT_NAMESPACE_ATTRIBUTES
#endif

#if defined(__cpp_enumerator_attributes)
#	define DETECTIVE_CPP_SUPPORT_ENUM_ATTRIBUTES
#endif

#if defined(__cpp_inheriting_constructors) && __cpp_inheriting_constructors >= 201511
#	define DETECTIVE_CPP_SUPPORT_INHERITING_CONSTRUCTORS17
#endif

#if defined(__cpp_variadic_using)
#	define DETECTIVE_CPP_SUPPORT_VARIADIC_USING
#endif

#if __has_cpp_attribute(fallthrough)
#	define DETECTIVE_CPP_SUPPORT_FALLTHROUGH
#endif

#if __has_cpp_attribute(nodiscard)
#	define DETECTIVE_CPP_SUPPORT_NODISCARD
#endif

#if __has_cpp_attribute(maybe_unused)
#	define DETECTIVE_CPP_SUPPORT_MAYBEUNUSED
#endif

#if defined(__cpp_structured_bindings)
#	define DETECTIVE_CPP_SUPPORT_STRUCTURED_BINDINGS
#endif

#if defined(__cpp_aggregate_bases)
#	define DETECTIVE_CPP_SUPPORT_AGGREGATE_BASES
#endif

#if defined(__cpp_nontype_template_args)
#	define DETECTIVE_CPP_SUPPORT_NTTA_CONSTANT_EVAL
#endif

#if defined(__cpp_template_template_args)
#	define DETECTIVE_CPP_SUPPORT_TEMPLATE_TEMPLATEARGS
#endif

#if defined(__cpp_lib_hardware_interference_size)
#	define DETECTIVE_CPP_SUPPORT_HW_INTERFERENCE_SIZE
#endif

#if defined(__cpp_lib_launder)
#	define DETECTIVE_CPP_SUPPORT_LAUNDER
#endif

#if defined(__cpp_lib_uncaught_exceptions)
#	define DETECTIVE_CPP_SUPPORT_UNCAUGHT_EXCEPTION
#endif

#if defined(__cpp_lib_as_const)
#	define DETECTIVE_CPP_SUPPORT_ASCONST
#endif

#if defined(__cpp_lib_make_from_tuple)
#	define DETECTIVE_CPP_SUPPORT_MAKEFROMTUPLE
#endif

#if defined(__cpp_lib_apply)
#	define DETECTIVE_CPP_SUPPORT_APPLY
#endif

#if defined(__cpp_lib_optional)
#	define DETECTIVE_CPP_SUPPORT_OPTIONAL
#endif

#if defined(__cpp_lib_variant)
#	define DETECTIVE_CPP_SUPPORT_VARIANT
#endif

#if defined(__cpp_lib_any)
#	define DETECTIVE_CPP_SUPPORT_ANY
#endif

#if defined(__cpp_lib_addressof_constexpr)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_ADDRESSOF
#endif

#if defined(__cpp_lib_raw_memory_algorithms)
#	define DETECTIVE_CPP_SUPPORT_EXTENDED_MEMORY_MANAGEMENT
#endif

#if defined(__cpp_lib_transparent_operators) && __cpp_lib_transparent_operators >= 201510
#	define DETECTIVE_CPP_SUPPORT_TRANSPARENT_OPERATORS17
#endif

#if defined(__cpp_lib_enable_shared_from_this)
#	define DETECTIVE_CPP_SUPPORT_SHAREDFROMTHIS
#endif

#if defined(__cpp_lib_shared_ptr_weak_type)
#	define DETECTIVE_CPP_SUPPORT_SHAREDPTR_WEAKTYPE
#endif

#if defined(__cpp_lib_shared_ptr_arrays)
#	define DETECTIVE_CPP_SUPPORT_SHAREDPTR_ARRAY
#endif

#if defined(__cpp_lib_memory_resource)
#	define DETECTIVE_CPP_SUPPORT_MEMORY_RESOURCES
#endif

#if defined(__cpp_lib_boyer_moore_searcher)
#	define DETECTIVE_CPP_SUPPORT_SEARCHERS
#endif

#if defined(__cpp_lib_invoke)
#	define DETECTIVE_CPP_SUPPORT_INVOKE
#endif

#if defined(__cpp_lib_not_fn)
#	define DETECTIVE_CPP_SUPPORT_NOTFN
#endif

#if defined(__cpp_lib_void_t)
#	define DETECTIVE_CPP_SUPPORT_VOID_TYPE
#endif

#if defined(__cpp_lib_bool_constant)
#	define DETECTIVE_CPP_SUPPORT_BOOLCONSTANT
#endif

#if defined(__cpp_lib_type_trait_variable_templates)
#	define DETECTIVE_CPP_SUPPORT_TYPETRAIT_VARIABLE_TEMPLATES
#endif

#if defined(__cpp_lib_logical_traits)
#	define DETECTIVE_CPP_SUPPORT_LOGICAL_TYPETRAITS
#endif

#if defined(__cpp_lib_is_swappable)
#	define DETECTIVE_CPP_SUPPORT_ISSWAPPABLE
#endif

#if defined(__cpp_lib_is_invocable)
#	define DETECTIVE_CPP_SUPPORT_ISINVOCABLE
#endif

#if defined(__cpp_lib_has_unique_object_representations)
#	define DETECTIVE_CPP_SUPPORT_HAS_UNIQUE_OBJ_REPRESENTATIONS
#endif

#if defined(__cpp_lib_is_aggregate)
#	define DETECTIVE_CPP_SUPPORT_ISAGGREGATE
#endif

#if defined(__cpp_lib_chrono)
#	define DETECTIVE_CPP_SUPPORT_CHRONO17
#endif

#if defined(__cpp_lib_execution)
#	define DETECTIVE_CPP_SUPPORT_EXECUTION
#endif

#if defined(__cpp_lib_parallel_algorithm)
#	define DETECTIVE_CPP_SUPPORT_PARALLEL_ALGORITHM
#endif

#if defined(__cpp_lib_to_chars)
#	define DETECTIVE_CPP_SUPPORT_TOCHARS
#endif

#if defined(__cpp_lib_string_view)
#	define DETECTIVE_CPP_SUPPORT_STRINGVIEW
#endif

#if defined(__cpp_lib_allocator_traits_is_always_equal)
#	define DETECTIVE_CPP_SUPPORT_ALWAYS_EQUAL_ALLOCATOR_TRAITS
#endif

#if defined(__cpp_lib_incomplete_container_elements)
#	define DETECTIVE_CPP_SUPPORT_INCOMPLETE_CONTAINER_ELEMENTS
#endif

#if defined(__cpp_lib_map_try_emplace)
#	define DETECTIVE_CPP_SUPPORT_MAP_TRYEMPLACE
#endif

#if defined(__cpp_lib_unordered_map_try_emplace)
#	define DETECTIVE_CPP_SUPPORT_UNORDEREDMAP_TRYEMPLACE
#endif

#if defined(__cpp_lib_node_extract)
#	define DETECTIVE_CPP_SUPPORT_NODE_EXTRACT
#endif

#if defined(__cpp_lib_array_constexpr)
#	define DETECTIVE_CPP_SUPPORT_CONSTEXPR_ARRAY
#endif

#if defined(__cpp_lib_nonmember_container_access)
#	define DETECTIVE_CPP_SUPPORT_NONMEMBER_CONTAINER_ACCESS
#endif

#if defined(__cpp_lib_sample)
#	define DETECTIVE_CPP_SUPPORT_SAMPLE
#endif

#if defined(__cpp_lib_clamp)
#	define DETECTIVE_CPP_SUPPORT_CLAMP
#endif

#if defined(__cpp_lib_gcd_lcm)
#	define DETECTIVE_CPP_SUPPORT_GCD_LCM
#endif

#if defined(__cpp_lib_hypot)
#	define DETECTIVE_CPP_SUPPORT_HYPOT
#endif

#if defined(__cpp_lib_math_special_functions)
#	define DETECTIVE_CPP_MATH_SPECIAL_FUNCTIONS
#endif

#if defined(__cpp_lib_filesystem)
#	define DETECTIVE_CPP_SUPPORT_FILESYSTEM
#endif

#if defined(__cpp_lib_atomic_is_always_lock_free)
#	define DETECTIVE_CPP_SUPPORT_ISALWAYSLOCKFREE
#endif

#if defined(__cpp_lib_shared_mutex)
#	define DETECTIVE_CPP_SUPPORT_SHAREDMUTEX
#endif

#if defined(__cpp_lib_scoped_lock)
#	define DETECTIVE_CPP_SUPPORT_SCOPEDLOCK
#endif

#if defined(DETECTIVE_CPP_SUPPORT_HEXFLOAT) \
	&& defined(DETECTIVE_CPP_SUPPORT_INLINEVAR) \
	&& defined(DETECTIVE_CPP_SUPPORT_ALIGNEDNEW) \
	&& defined(DETECTIVE_CPP_SUPPORT_GUARANTEED_COPY_ELISION) \
	&& defined(DETECTIVE_CPP_SUPPORT_NOEXCEPT_FUNCTION) \
	&& defined(DETECTIVE_CPP_SUPPORT_FOLD_EXPRESSION) \
	&& defined(DETECTIVE_CPP_SUPPORT_CAPTURE_VALUEOF_THIS) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR17) \
	&& defined(DETECTIVE_CPP_SUPPORT_IFCONSTEXPR) \
	&& defined(DETECTIVE_CPP_SUPPORT_RANGEBASEDFOR17) \
	&& defined(DETECTIVE_CPP_SUPPORT_STATICASSERT17) \
	&& defined(DETECTIVE_CPP_SUPPORT_CLASS_TEMPLATE_ARGS_DEDUCTION) \
	&& defined(DETECTIVE_CPP_SUPPORT_NTTP_AUTO) \
	&& defined(DETECTIVE_CPP_SUPPORT_NAMESPACE_ATTRIBUTES) \
	&& defined(DETECTIVE_CPP_SUPPORT_ENUM_ATTRIBUTES) \
	&& defined(DETECTIVE_CPP_SUPPORT_INHERITING_CONSTRUCTORS17) \
	&& defined(DETECTIVE_CPP_SUPPORT_VARIADIC_USING) \
	&& defined(DETECTIVE_CPP_SUPPORT_FALLTHROUGH) \
	&& defined(DETECTIVE_CPP_SUPPORT_NODISCARD) \
	&& defined(DETECTIVE_CPP_SUPPORT_MAYBEUNUSED) \
	&& defined(DETECTIVE_CPP_SUPPORT_STRUCTURED_BINDINGS) \
	&& defined(DETECTIVE_CPP_SUPPORT_AGGREGATE_BASES) \
	&& defined(DETECTIVE_CPP_SUPPORT_NTTA_CONSTANT_EVAL) \
	&& defined(DETECTIVE_CPP_SUPPORT_TEMPLATE_TEMPLATEARGS) \
	&& defined(DETECTIVE_CPP_SUPPORT_HW_INTERFERENCE_SIZE) \
	&& defined(DETECTIVE_CPP_SUPPORT_LAUNDER) \
	&& defined(DETECTIVE_CPP_SUPPORT_UNCAUGHT_EXCEPTION) \
	&& defined(DETECTIVE_CPP_SUPPORT_ASCONST) \
	&& defined(DETECTIVE_CPP_SUPPORT_MAKEFROMTUPLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_APPLY) \
	&& defined(DETECTIVE_CPP_SUPPORT_OPTIONAL) \
	&& defined(DETECTIVE_CPP_SUPPORT_VARIANT) \
	&& defined(DETECTIVE_CPP_SUPPORT_ANY) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_ADDRESSOF) \
	&& defined(DETECTIVE_CPP_SUPPORT_EXTENDED_MEMORY_MANAGEMENT) \
	&& defined(DETECTIVE_CPP_SUPPORT_TRANSPARENT_OPERATORS17) \
	&& defined(DETECTIVE_CPP_SUPPORT_SHAREDFROMTHIS) \
	&& defined(DETECTIVE_CPP_SUPPORT_SHAREDPTR_WEAKTYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_SHAREDPTR_ARRAY) \
	&& defined(DETECTIVE_CPP_SUPPORT_MEMORY_RESOURCES) \
	&& defined(DETECTIVE_CPP_SUPPORT_SEARCHERS) \
	&& defined(DETECTIVE_CPP_SUPPORT_INVOKE) \
	&& defined(DETECTIVE_CPP_SUPPORT_NOTFN) \
	&& defined(DETECTIVE_CPP_SUPPORT_VOID_TYPE) \
	&& defined(DETECTIVE_CPP_SUPPORT_BOOLCONSTANT) \
	&& defined(DETECTIVE_CPP_SUPPORT_TYPETRAIT_VARIABLE_TEMPLATES) \
	&& defined(DETECTIVE_CPP_SUPPORT_LOGICAL_TYPETRAITS) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISSWAPPABLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISINVOCABLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_HAS_UNIQUE_OBJ_REPRESENTATIONS) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISAGGREGATE) \
	&& defined(DETECTIVE_CPP_SUPPORT_CHRONO17) \
	&& defined(DETECTIVE_CPP_SUPPORT_EXECUTION) \
	&& defined(DETECTIVE_CPP_SUPPORT_PARALLEL_ALGORITHM) \
	&& defined(DETECTIVE_CPP_SUPPORT_STRINGVIEW) \
	&& defined(DETECTIVE_CPP_SUPPORT_ALWAYS_EQUAL_ALLOCATOR_TRAITS) \
	&& defined(DETECTIVE_CPP_SUPPORT_INCOMPLETE_CONTAINER_ELEMENTS) \
	&& defined(DETECTIVE_CPP_SUPPORT_MAP_TRYEMPLACE) \
	&& defined(DETECTIVE_CPP_SUPPORT_UNORDEREDMAP_TRYEMPLACE) \
	&& defined(DETECTIVE_CPP_SUPPORT_NODE_EXTRACT) \
	&& defined(DETECTIVE_CPP_SUPPORT_CONSTEXPR_ARRAY) \
	&& defined(DETECTIVE_CPP_SUPPORT_NONMEMBER_CONTAINER_ACCESS) \
	&& defined(DETECTIVE_CPP_SUPPORT_SAMPLE) \
	&& defined(DETECTIVE_CPP_SUPPORT_CLAMP) \
	&& defined(DETECTIVE_CPP_SUPPORT_GCD_LCM) \
	&& defined(DETECTIVE_CPP_SUPPORT_HYPOT) \
	&& defined(DETECTIVE_CPP_MATH_SPECIAL_FUNCTIONS) \
	&& defined(DETECTIVE_CPP_SUPPORT_FILESYSTEM) \
	&& defined(DETECTIVE_CPP_SUPPORT_ISALWAYSLOCKFREE) \
	&& defined(DETECTIVE_CPP_SUPPORT_SHAREDMUTEX) \
	&& defined(DETECTIVE_CPP_SUPPORT_SCOPEDLOCK)
#	define DETECTIVE_CPP_STANDARD17_FULL_FEATURED
#endif

#endif
