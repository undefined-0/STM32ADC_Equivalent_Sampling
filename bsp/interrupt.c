#include "interrupt.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) // �κ�һ����ʱ���ж϶��������˺���

{
		if(htim->Instance == TIM3) // �ж�����TIM3
		{
			HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
		}
		//TIM3->PSC=psc;����ζ�̬�ı���������
		
}