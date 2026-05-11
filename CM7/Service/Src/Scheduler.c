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


/*static uint32 Scheduler_LastApp500msTickMs = 0u;
static uint32 Scheduler_LastApp1000msTickMs = 0u;*/

static uint32 Scheduler_TickCounterMs = 0u;

static volatile boolean Scheduler_App500msFlag = FALSE;
static volatile boolean Scheduler_App1000msFlag = FALSE;

FUNC(void, AUTOMATIC) Scheduler_Init(void)
{
	/*uint32 nowTickMs;
	nowTickMs = McalTime_GetTickMs();*/

	/*Scheduler_LastApp500msTickMs = nowTickMs;
	Scheduler_LastApp1000msTickMs = nowTickMs;*/

	Scheduler_TickCounterMs = 0u;

	Scheduler_App500msFlag = FALSE;
	Scheduler_App1000msFlag = FALSE;
}

/*
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
*/

FUNC(void, AUTOMATIC) Scheduler_Tick1ms(void)
{
    Scheduler_TickCounterMs++;

    if ((Scheduler_TickCounterMs % SCHEDULER_APP_500MS_PERIOD_MS) == 0u)
    {
        Scheduler_App500msFlag = TRUE;
    }
}

FUNC(void, AUTOMATIC) Scheduler_Tick1000ms(void)
{
    Scheduler_App1000msFlag = TRUE;
}

FUNC(void, AUTOMATIC) Scheduler_MainFunction(void)
{
    if (Scheduler_App500msFlag == TRUE)
    {
        Scheduler_App500msFlag = FALSE;

        App_MainFunction_500ms();
    }

    if (Scheduler_App1000msFlag == TRUE)
    {
        Scheduler_App1000msFlag = FALSE;

        App_MainFunction_1000ms();
    }
}
