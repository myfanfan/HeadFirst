#pragma  once

#include "Command.h"

//ø’∂‘œÛ ≤Â≤€
class NoCommand:public Command
{

public:
	virtual void execute() override
	{
	}


	virtual QString name() override
	{
		return "";
	}


	virtual void undo() override
	{
	}

};