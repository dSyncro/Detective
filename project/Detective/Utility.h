/**
 * @file Utility.h
 * @brief Utility functions.
*/

#if !defined(DETECTIVE_UTILITY_H)
#define DETECTIVE_UTILITY_H

/**
 * @def DETECTIVE_PURE_STATIC(type)
 * @brief Generate constructors for pure static classes.
 * @param Static class name.
*/
#define DETECTIVE_PURE_STATIC(type) type() = delete; \
	type(const type&) = delete;                      \
	type(type&&) = delete;                           \
	type& operator =(const type&) = delete;          \
	type& operator =(type&&) = delete

/**
 * @def DETECTIVE_GET_DATE()
 * @brief Get the date of when this line of code was compiled (C-style string).
*/
#define DETECTIVE_GET_DATE() __DATE__

/**
 * @def DETECTIVE_GET_TIME()
 * @brief Get the time of when this line of code was compiled (C-style string).
*/
#define DETECTIVE_GET_TIME() __TIME__

/**
 * @def DETECTIVE_GET_SOURCE_LINE()
 * @brief Get the line of code of this instruction in its source.
*/
#define DETECTIVE_GET_SOURCE_LINE() __LINE__

/**
 * @def DETECTIVE_GET_SOURCE_FILENAME()
 * @brief Get the filename of the source file of this instruction (C-style string).
*/
#define DETECTIVE_GET_SOURCE_FILENAME() __FILE__

#endif
