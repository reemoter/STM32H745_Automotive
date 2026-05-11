/*
 * Platform_Types.h
 *
 *  Created on: 2026. 5. 10.
 *      Author: remoter
 */

#ifndef INC_PLATFORM_TYPES_H_
#define INC_PLATFORM_TYPES_H_

#include <stdint.h>

typedef uint8_t boolean;

#ifndef TRUE
#define TRUE    ((boolean)1u)
#endif

#ifndef FALSE
#define FALSE   ((boolean)0u)
#endif

/* Unsigned integer types */
typedef uint8_t     uint8;
typedef uint16_t    uint16;
typedef uint32_t    uint32;
typedef uint64_t    uint64;

/* Signed integer types */
typedef int8_t      sint8;
typedef int16_t     sint16;
typedef int32_t     sint32;
typedef int64_t     sint64;

/* Floating point types */
typedef float       float32;
typedef double      float64;


#endif /* INC_PLATFORM_TYPES_H_ */
