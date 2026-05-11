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

/*
void MiniEcu_Init(void)
{

}

void MiniEcu_MainFunction(void)
{

}
*/

FUNC(void, AUTOMATIC) MiniEcu_Init(void)
{
	App_Init();
	Scheduler_Init();
}

FUNC(void, AUTOMATIC) MiniEcu_MainFunction(void)
{
	Scheduler_MainFunction();
}
