#pragma once

#include "targets.h"
#include "device.h"

enum adc_reading {
    ADC_ROLL,
    ADC_PITCH,
    ADC_THROTTLE,
    ADC_YAW,
    ADC_PA_PDET,
    ADC_MAX_DEVICES
};

extern int getADCReading(adc_reading reading);
extern device_t ADC_device;
