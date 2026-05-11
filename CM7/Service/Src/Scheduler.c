/*
 * Scheduler.c
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */


#include "Scheduler.h"

#include "McalTime.h"
#include "McalGpio.h"
#include "App.h"

#define SCHEDULER_APP_500MS_PERIOD_MS    (500u)
#define SCHEDULER_APP_1000MS_PERIOD_MS    (1000u)

static uint32 Scheduler_LastApp500msTickMs = 0u;
static uint32 Scheduler_LastApp1000msTickMs = 0u;
//static uint32 Scheduler_LastApp1000msTickMs = 1u;

FUNC(void, AUTOMATIC) Scheduler_Init(void)
{
	uint32 nowTickMs;

	nowTickMs = McalTime_GetTickMs();

	Scheduler_LastApp500msTickMs = nowTickMs;
	Scheduler_LastApp1000msTickMs = nowTickMs;
}

FUNC(void, AUTOMATIC) Scheduler_MainFunction(void)
{
    uint32 nowTickMs;

    nowTickMs = McalTime_GetTickMs();

    if ((nowTickMs - Scheduler_LastApp500msTickMs) >= SCHEDULER_APP_500MS_PERIOD_MS)
    {
    	Scheduler_LastApp500msTickMs = nowTickMs;

    	App_MainFunction_500ms();
    }

    if ((nowTickMs - Scheduler_LastApp1000msTickMs) >= SCHEDULER_APP_1000MS_PERIOD_MS)
    {
    	Scheduler_LastApp1000msTickMs = nowTickMs;

    	App_MainFunction_1000ms();
    }
}
