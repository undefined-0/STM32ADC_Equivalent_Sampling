#include "my_adc.h"

double getADC(ADC_HandleTypeDef *pin)
{
	uint8_t adc_value;
	HAL_ADC_Start(pin);
	return adc_value / 4096 * ext_vp; 
	// ����ext_vpΪExternal voltage peak,�ⲿ��ѹ��ֵ
	// ����4096����Ϊ��ADCΪ12λ
}
