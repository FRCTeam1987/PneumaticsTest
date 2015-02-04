#include "ExampleSubsystem.h"
#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"

ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
{
	m_shifter = new DoubleSolenoid(0, 1);
}

void ExampleSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new ExampleCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

