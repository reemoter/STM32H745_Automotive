/*
 * Compiler.h
 *
 *  Created on: 2026. 5. 10.
 *      Author: remoter
 */

#ifndef INC_COMPILER_H_
#define INC_COMPILER_H_

/* Inline keyword abstraction */
#define INLINE      inline

/* Function declaration abstraction */
#define FUNC(rettype, memclass) rettype

/* Pointer abstraction */
#define P2VAR(ptrtype, memclass, ptrclass)        ptrtype *
#define P2CONST(ptrtype, memclass, ptrclass)      const ptrtype *

/* Constant abstraction */
#define CONST(type, memclass)                     const type

/* Variable abstraction */
#define VAR(type, memclass)                       type

#endif /* INC_COMPILER_H_ */
