/*
 * McalGpio_Cfg.c
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */


#include "McalGpio_Cfg.h"


CONST(McalGpio_ChannelConfigType, MCALGPIO_CONFIG_DATA) McalGpio_ChannelConfig[] =
{
		[MCALGPIO_CHANNEL_LED1] =
		{
				.port = LD1_GPIO_Port,
				.pin  = LD1_Pin
		},

		[MCALGPIO_CHANNEL_LED2] =
		{
				.port = LD2_GPIO_Port,
				.pin  = LD2_Pin
		}
};
