/*
 * Scheduler.c
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */


#include "Scheduler.h"
#include "Scheduler_Cfg.h"
static volatile uint32 Scheduler_TickCounterMs = 0u;

FUNC(void, AUTOMATIC) Scheduler_Init(void)
{
    uint8 taskIndex;

    Scheduler_TickCounterMs = 0u;

    for (taskIndex = 0u; taskIndex < SCHEDULER_TASK_COUNT; taskIndex++)
    {
        Scheduler_TaskConfig[taskIndex].lastRunTickMs = 0u;
        Scheduler_TaskConfig[taskIndex].pendingFlag = FALSE;
    }
}

FUNC(void, AUTOMATIC) Scheduler_Tick1ms(void)
{
    uint8 taskIndex;

    Scheduler_TickCounterMs++;

    for (taskIndex = 0u; taskIndex < SCHEDULER_TASK_COUNT; taskIndex++)
    {
        if ((Scheduler_TickCounterMs - Scheduler_TaskConfig[taskIndex].lastRunTickMs)
            >= Scheduler_TaskConfig[taskIndex].periodMs)
        {
            Scheduler_TaskConfig[taskIndex].lastRunTickMs = Scheduler_TickCounterMs;
            Scheduler_TaskConfig[taskIndex].pendingFlag = TRUE;
        }
    }
}

FUNC(void, AUTOMATIC) Scheduler_MainFunction(void)
{
    uint8 taskIndex;

    for (taskIndex = 0u; taskIndex < SCHEDULER_TASK_COUNT; taskIndex++)
    {
        if (Scheduler_TaskConfig[taskIndex].pendingFlag == TRUE)
        {
            Scheduler_TaskConfig[taskIndex].pendingFlag = FALSE;

            if (Scheduler_TaskConfig[taskIndex].taskFunction != 0)
            {
                Scheduler_TaskConfig[taskIndex].taskFunction();
            }
        }
    }
}
