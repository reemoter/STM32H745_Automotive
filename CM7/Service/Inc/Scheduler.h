/*
 * Scheduler.h
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "Std_Types.h"

typedef void (*Scheduler_TaskFunctionType)(void);

typedef struct
{
    uint32 periodMs;
    Scheduler_TaskFunctionType taskFunction;
    uint32 lastRunTickMs;
    boolean pendingFlag;
} Scheduler_TaskConfigType;


FUNC(void, AUTOMATIC) Scheduler_Init(void);
FUNC(void, AUTOMATIC) Scheduler_Tick1ms(void);
FUNC(void, AUTOMATIC) Scheduler_MainFunction(void);

#endif /* INC_SCHEDULER_H_ */
