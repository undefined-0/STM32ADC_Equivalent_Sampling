#include "my_adc.h"

float adc_value;

float getADC(ADC_HandleTypeDef *hadc)
{
	HAL_ADC_Start(hadc);
	adc_value = HAL_ADC_GetValue(hadc);
	return adc_value /4096 * 3.3; 
	// 除以4096，因为此ADC为12位
}
