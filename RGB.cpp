// 
// 
// 

#include "RGB.h"

RGB::RGB(uint8_t pines[3], uint8_t channels[3], bool on_state)
{
	redP.setup(pines[0], channels[0], 1000, 8, on_state);
	greenP.setup(pines[1], channels[1], 1000, 8, on_state);
	blueP.setup(pines[2], channels[2], 1000, 8, on_state);
}

RGB::~RGB()
{
}

void RGB::setColor(uint8_t red, uint8_t green, uint8_t blue)
{
	redP.setBits(red);
	greenP.setBits(green);
	blueP.setBits(blue);
}
