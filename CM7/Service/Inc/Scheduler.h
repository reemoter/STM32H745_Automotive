/*
 * Scheduler.h
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "Std_Types.h"

FUNC(void, AUTOMATIC) Scheduler_Init(void);
FUNC(void, AUTOMATIC) Scheduler_Tick1ms(void);
FUNC(void, AUTOMATIC) Scheduler_Tick1000ms(void);
FUNC(void, AUTOMATIC) Scheduler_MainFunction(void);

#endif /* INC_SCHEDULER_H_ */
