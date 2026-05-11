/*
 * McalGpio.h
 *
 *  Created on: 2026. 5. 11.
 *      Author: remoter
 */

#ifndef INC_MCALGPIO_H_
#define INC_MCALGPIO_H_

#include "Std_Types.h"
#include "McalGpio_Cfg.h"

typedef enum
{
    MCALGPIO_LEVEL_LOW = 0u,
    MCALGPIO_LEVEL_HIGH
} McalGpio_LevelType;

FUNC(void, AUTOMATIC) McalGpio_ToggleLed(void);

FUNC(void, AUTOMATIC) McalGpio_ToggleChannel(McalGpio_ChannelType channel);

FUNC(void, AUTOMATIC) McalGpio_WriteChannel(
    McalGpio_ChannelType channel,
    McalGpio_LevelType level
);

FUNC(McalGpio_LevelType, AUTOMATIC) McalGpio_ReadChannel(
    McalGpio_ChannelType channel
);


#endif /* INC_MCALGPIO_H_ */
