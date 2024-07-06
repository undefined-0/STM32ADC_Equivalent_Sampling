#include "interrupt.h"

float main_adc_value;
uint8_t adc_array[7];  
extern float getADC(ADC_HandleTypeDef *hadc);

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) // 任何一个定时器中断都会来到此函数

{
		if(htim->Instance == TIM3) // 中断来自TIM3
		{
			HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
		}
		
		if(htim->Instance == TIM4) // 中断来自TIM4
		{
		main_adc_value = getADC(&hadc1);
		sprintf(adc_array,"%.4f",main_adc_value);
		HAL_UART_Transmit(&huart1,adc_array, 7, 10);
		HAL_UART_Transmit(&huart1,(uint8_t*)"\n", 1, 10);
		}
		//TIM3->PSC=psc;（如何动态改变采样间隔）
}
