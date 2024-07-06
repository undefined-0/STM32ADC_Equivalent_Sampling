#include "my_adc.h"

//float ext_vp = 3.3;
uint8_t adc_value;

uint8_t getADC(ADC_HandleTypeDef *hadc)
{
	HAL_ADC_Start(hadc);
	adc_value = HAL_ADC_GetValue(hadc);
	return adc_value /4096 * 3.3; 
	// 待删除：其中ext_vp为External voltage peak,外部电压峰值。可在本文件中修改。
	// 除以4096，因为此ADC为12位
}
