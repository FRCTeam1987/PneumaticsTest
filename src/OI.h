#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick *stick;
	Button *myButton;

public:
	OI();
	Joystick *getStick();
};

#endif
