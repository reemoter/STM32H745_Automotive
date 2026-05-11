/*
 * McalGpio_Cfg.h
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */

#ifndef MCALGPIO_CFG_H_
#define MCALGPIO_CFG_H_

#include "Std_Types.h"
#include "main.h"

/* GPIO Channel ID */
typedef uint8 McalGpio_ChannelType;

#define MCALGPIO_CHANNEL_COUNT    (2u)

#define MCALGPIO_CHANNEL_LED1    ((McalGpio_ChannelType)0u)
#define MCALGPIO_CHANNEL_LED2    ((McalGpio_ChannelType)1u)

typedef struct
{
    GPIO_TypeDef *port;
    uint16 pin;
} McalGpio_ChannelConfigType;

extern CONST(McalGpio_ChannelConfigType, MCALGPIO_CONFIG_DATA) McalGpio_ChannelConfig[];

#endif /* MCALGPIO_CFG_H_ */
