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

#define SCHEDULER_APP_500MS_PERIOD_MS      (500u)
#define SCHEDULER_APP_1000MS_PERIOD_MS     (1000u)

static uint32 Scheduler_TickCounterMs = 0u;

static volatile boolean Scheduler_App500msFlag = FALSE;
static volatile boolean Scheduler_App1000msFlag = FALSE;

FUNC(void, AUTOMATIC) Scheduler_Init(void)
{


	Scheduler_TickCounterMs = 0u;

	Scheduler_App500msFlag = FALSE;
	Scheduler_App1000msFlag = FALSE;
}


FUNC(void, AUTOMATIC) Scheduler_Tick1ms(void)
{
    Scheduler_TickCounterMs++;

    if ((Scheduler_TickCounterMs % SCHEDULER_APP_500MS_PERIOD_MS) == 0u)
    {
        Scheduler_App500msFlag = TRUE;
    }

    if ((Scheduler_TickCounterMs % SCHEDULER_APP_1000MS_PERIOD_MS) == 0u)
    {
    	Scheduler_App1000msFlag = TRUE;
    }
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
