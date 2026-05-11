/*
 * MiniEcu.h
 *
 *  Created on: 2026. 5. 10.
 *      Author: remoter
 */

#ifndef INC_MINIECU_H_
#define INC_MINIECU_H_

#include "Std_Types.h"

/* MiniECU Platform Version */
#define MINIECU_SW_MAJOR_VERSION    (0u)
#define MINIECU_SW_MINOR_VERSION    (1u)
#define MINIECU_SW_PATCH_VERSION    (0u)


FUNC(void, AUTOMATIC) MiniEcu_Init(void);
FUNC(void, AUTOMATIC) MiniEcu_MainFunction(void);


#endif /* INC_MINIECU_H_ */
