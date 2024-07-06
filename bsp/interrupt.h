#ifndef __INTERRUPT_H__
#define __INTERRUPT_H__

#include "main.h"
#include "stdio.h"
#include "usart.h"
#include "adc.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif /*__INTERRUPT_H__*/
