#include "ExampleCommand.h"

ExampleCommand::ExampleCommand()
{
	Requires(examplesubsystem);
	toggle = false;
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize()
{
	examplesubsystem->SetSolenoid(toggle);
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ExampleCommand::End()
{
	toggle = !toggle;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted()
{

}
