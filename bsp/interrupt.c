#include "interrupt.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) // 任何一个定时器中断都会来到此函数

{
		if(htim->Instance == TIM3) // 中断来自TIM3
		{
			HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
		}
		//TIM3->PSC=psc;（如何动态改变采样间隔）
		
}