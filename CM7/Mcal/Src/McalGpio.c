/*
 * McalGpio.c
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */

#include "main.h"
#include "McalGpio.h"


FUNC(void, AUTOMATIC) McalGpio_ToggleLed(void)
{
	HAL_GPIO_TogglePin(
			LD1_GPIO_Port,
			LD1_Pin
			);
}

FUNC(void, AUTOMATIC) McalGpio_ToggleChannel(McalGpio_ChannelType channel){
	HAL_GPIO_TogglePin(
			McalGpio_ChannelConfig[channel].port,
			McalGpio_ChannelConfig[channel].pin);
	if(channel >= MCALGPIO_CHANNEL_COUNT)
	{
		return;
	}
}

FUNC(void, AUTOMATIC) McalGpio_WriteChannel(
    McalGpio_ChannelType channel,
    McalGpio_LevelType level
)
{
    HAL_GPIO_WritePin(
        McalGpio_ChannelConfig[channel].port,
        McalGpio_ChannelConfig[channel].pin,
        (level == MCALGPIO_LEVEL_HIGH) ? GPIO_PIN_SET : GPIO_PIN_RESET
    );
    if(channel >= MCALGPIO_CHANNEL_COUNT)
    {
    	return;
    }
}

FUNC(McalGpio_LevelType, AUTOMATIC) McalGpio_ReadChannel(
    McalGpio_ChannelType channel
)
{
    GPIO_PinState pinState;

    pinState = HAL_GPIO_ReadPin(
        McalGpio_ChannelConfig[channel].port,
        McalGpio_ChannelConfig[channel].pin
    );

    if (pinState == GPIO_PIN_SET)
    {
        return MCALGPIO_LEVEL_HIGH;
    }
    else
    {
        return MCALGPIO_LEVEL_LOW;
    }

    if(channel >= MCALGPIO_CHANNEL_COUNT)
    {
    	return 3;
    }
}
