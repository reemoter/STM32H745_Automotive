/*
 * Scheduler_Cfg.c
 *
 *  Created on: 2026. 5. 12.
 *      Author: remoter
 */

#include "Scheduler_Cfg.h"

#include "App.h"

Scheduler_TaskConfigType Scheduler_TaskConfig[SCHEDULER_TASK_COUNT] =
{
    {
        .periodMs = 500u,
        .taskFunction = App_MainFunction_500ms,
        .lastRunTickMs = 0u,
        .pendingFlag = FALSE
    },
    {
        .periodMs = 1000u,
        .taskFunction = App_MainFunction_1000ms,
        .lastRunTickMs = 0u,
        .pendingFlag = FALSE
    }
};
