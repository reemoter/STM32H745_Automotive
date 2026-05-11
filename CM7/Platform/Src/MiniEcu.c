/*
 * MiniEcu.c
 *
 *  Created on: 2026. 5. 10.
 *      Author: remoter
 */

#include "MiniEcu.h"
#include "McalGpio.h"
#include "McalTime.h"
#include "Scheduler.h"
#include "App.h"

#include "main.h"

static uint32 MiniEcu_LastTickMs = 0u;

FUNC(void, AUTOMATIC) MiniEcu_Init(void)
{
	App_Init();
	Scheduler_Init();

	MiniEcu_LastTickMs = McalTime_GetTickMs();
}

FUNC(void, AUTOMATIC) MiniEcu_MainFunction(void)
{
    uint32 nowTickMs;

    nowTickMs = McalTime_GetTickMs();

    if ((nowTickMs - MiniEcu_LastTickMs) >= 1u)
    {
        MiniEcu_LastTickMs = nowTickMs;

        Scheduler_Tick1ms();
    }

    Scheduler_MainFunction();
}
