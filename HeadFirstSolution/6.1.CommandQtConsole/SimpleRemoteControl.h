#pragma  once

#include "Command.h"


class SimpleRemoteControl
{
private:
	Command*				m_pcommand{ nullptr };
public:
	SimpleRemoteControl(){ ; }

	void	setCommand(Command* command)
	{
		m_pcommand = command;
	}

	void	buttonWasPressed()
	{
		if (nullptr != m_pcommand)
		{
			m_pcommand->execute();
		}
	}
};