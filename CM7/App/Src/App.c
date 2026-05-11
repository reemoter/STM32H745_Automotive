/*
 * App.c
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */


#include "App.h"

#include "McalGpio.h"

FUNC(void, AUTOMATIC) App_Init(void)
{
    /* TODO: Initialize application layer */
}

FUNC(void, AUTOMATIC) App_MainFunction_500ms(void)
{
    McalGpio_ToggleChannel(MCALGPIO_CHANNEL_LED1);
}

FUNC(void, AUTOMATIC) App_MainFunction_1000ms(void)
{
    McalGpio_ToggleChannel(MCALGPIO_CHANNEL_LED2);
}
