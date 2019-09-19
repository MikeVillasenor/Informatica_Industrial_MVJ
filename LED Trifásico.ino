// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       LED Trifásico.ino
    Created:	19/09/2019 03:27:55 p. m.
    Author:     HP-OMEN-MIGUEL\Miguel VJ
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
#include <BluetoothSerial.h>
#include <Useful_Methods.h>
#include <PWM_ESP32.h>
#include <LED_Handler.h>
#include <ADC_Read.h>
#include "RGB.h"

uint8_t pines_led[] = { 18,5,19 };
uint8_t canales_led[] = { 0,1,2 };
float LED[3];
RGB LEDt(pines_led, canales_led, LOW);
BluetoothSerial Serialbt;
String string_in;


void setup()
{

	Serial.begin(115200);
	Serialbt.begin("LED RGB");

}

// Add the main program code into the continuous loop() function
void loop()
{
	if (Serialbt.available())
	{
		string_in = Serialbt.readStringUntil('\n');
		parseString(string_in, " ", LED);
		LEDt.setColor(LED[0], LED[1], LED[2]);
	}

}
