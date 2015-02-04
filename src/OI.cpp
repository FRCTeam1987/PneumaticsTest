#include "OI.h"
#include "Commands/ExampleCommand.h"

OI::OI()
{
	stick = new Joystick(0);
	myButton = new JoystickButton(stick, 11);
	myButton->WhenPressed(new ExampleCommand());
}

Joystick *OI::getStick()
{
	return stick;
}
