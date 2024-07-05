#include "my_adc.h"

double getADC(ADC_HandleTypeDef *pin)
{
	uint8_t adc_value;
	HAL_ADC_Start(pin);
	return adc_value / 4096 * ext_vp; 
	// 其中ext_vp为External voltage peak,外部电压峰值
	// 除以4096，因为此ADC为12位
}
