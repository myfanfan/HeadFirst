#pragma  once

#include "Command.h"

//�ն��� ���
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