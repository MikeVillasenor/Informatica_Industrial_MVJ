// RGB.h

#ifndef _RGB_h
#define _RGB_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include <BluetoothSerial.h>
#include <Useful_Methods.h>
#include <PWM_ESP32.h>
#include <LED_Handler.h>
#include <ADC_Read.h>
#include "RGB.h"

class RGB
{
public:
	RGB(uint8_t pines[3], uint8_t channels[3], bool on_state);
	~RGB();
	void setColor(uint8_t red, uint8_t green, uint8_t blue);
	PWM redP;
	PWM blueP;
	PWM greenP;
	
};

#endif

