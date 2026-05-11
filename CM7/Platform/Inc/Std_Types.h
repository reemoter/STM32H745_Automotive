/*
 * Std_Types.h
 *
 *  Created on: 2026. 5. 10.
 *      Author: remoter
 */

#ifndef INC_STD_TYPES_H_
#define INC_STD_TYPES_H_

#include "Platform_Types.h"
#include "Compiler.h"

/* Standard return type */
typedef uint8 Std_ReturnType;

/* Return values */
#ifndef E_OK
#define E_OK        ((Std_ReturnType)0u)
#endif

#ifndef E_NOT_OK
#define E_NOT_OK    ((Std_ReturnType)1u)
#endif

#endif /* INC_STD_TYPES_H_ */
