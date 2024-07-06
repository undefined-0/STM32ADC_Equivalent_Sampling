#include "my_adc.h"

//float ext_vp = 3.3;
uint8_t adc_value;

uint8_t getADC(ADC_HandleTypeDef *hadc)
{
	HAL_ADC_Start(hadc);
	adc_value = HAL_ADC_GetValue(hadc);
	return adc_value /4096 * 3.3; 
	// ��ɾ��������ext_vpΪExternal voltage peak,�ⲿ��ѹ��ֵ�����ڱ��ļ����޸ġ�
	// ����4096����Ϊ��ADCΪ12λ
}
