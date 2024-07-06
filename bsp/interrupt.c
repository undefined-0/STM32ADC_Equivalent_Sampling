#include "interrupt.h"

float main_adc_value;
uint8_t adc_array[7];  
extern float getADC(ADC_HandleTypeDef *hadc);

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) // �κ�һ����ʱ���ж϶��������˺���

{
		if(htim->Instance == TIM3) // �ж�����TIM3
		{
			HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
		}
		
		if(htim->Instance == TIM4) // �ж�����TIM4
		{
		main_adc_value = getADC(&hadc1);
		sprintf(adc_array,"%.4f",main_adc_value);
		HAL_UART_Transmit(&huart1,adc_array, 7, 10);
		HAL_UART_Transmit(&huart1,(uint8_t*)"\n", 1, 10);
		}
		//TIM3->PSC=psc;����ζ�̬�ı���������
}
