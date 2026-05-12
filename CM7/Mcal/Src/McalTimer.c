/*
 * McalTimer.c
 *
 *  Created on: 2026. 5. 12.
 *      Author: remoter
 */


#include "McalTimer.h"
#include "Scheduler.h"

#include "main.h"

extern TIM_HandleTypeDef htim3;

FUNC(Std_ReturnType, AUTOMATIC) McalTimer_StartSchedulerTick(void)
{
    Std_ReturnType retVal;

    if (HAL_TIM_Base_Start_IT(&htim3) == HAL_OK)
    {
        retVal = E_OK;
    }
    else
    {
        retVal = E_NOT_OK;
    }

    return retVal;
}

FUNC(void, AUTOMATIC) McalTimer_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM3)
    {
        Scheduler_Tick1ms();
    }
}
