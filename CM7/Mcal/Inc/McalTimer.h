/*
 * McalTimer.h
 *
 *  Created on: 2026. 5. 12.
 *      Author: remoter
 */

#ifndef INC_MCALTIMER_H_
#define INC_MCALTIMER_H_

#include "Std_Types.h"
#include "main.h"

FUNC(Std_ReturnType, AUTOMATIC) McalTimer_StartSchedulerTick(void);
FUNC(void, AUTOMATIC) McalTimer_PeriodElapsedCallback(TIM_HandleTypeDef *htim);


#endif /* INC_MCALTIMER_H_ */
