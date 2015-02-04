#include "ExampleCommand.h"

ExampleCommand::ExampleCommand()
{
	Requires(examplesubsystem);
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize()
{
	static int count = 0;
	printf("ExampleCommand Initialize %d\r\n",count++);
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute()
{
	static int count = 0;
	printf("ExampleCommand Execute%d\r\n",count++);
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished()
{
	static int count = 0;
	printf("ExampleCommand Finish %d\r\n",count++);
	return true;
}

// Called once after isFinished returns true
void ExampleCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted()
{

}
