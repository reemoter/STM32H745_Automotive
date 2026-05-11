/*
 * McalTime.c
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */

#include "Std_Types.h"
#include "main.h"


FUNC(void, AUTOMATIC) McalTime_DelayMs(uint32 delayMs)
{
	HAL_Delay(delayMs);
}

FUNC(uint32, AUTOMATIC) McalTime_GetTickMs(void)
{
    return HAL_GetTick();
}
