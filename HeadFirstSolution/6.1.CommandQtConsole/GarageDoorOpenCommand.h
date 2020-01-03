#pragma  once

#include "Command.h"
#include "GarageDoor.h"

class GarageDoorOpenCommand:public Command
{
private:
	GarageDoor*			m_pgarageDoor{ nullptr };
public:
	GarageDoorOpenCommand(GarageDoor* garagedoor)
	{
		m_pgarageDoor = garagedoor;
	}

	virtual void execute() override
	{
		if (nullptr!= m_pgarageDoor)
		{
			m_pgarageDoor->up();
			m_pgarageDoor->lightOn();
			m_pgarageDoor->stop();
		}
		//throw std::logic_error("The method or operation is not implemented.");
	}

};