#pragma  once

#include "Command.h"
#include "Light.h"

struct LightOnCommand :public Command
{
private:
	Light*			m_plight{ nullptr };
public:

	LightOnCommand(Light*  light)
	{
		m_plight = light;
	}

	virtual void execute() override
	{
		if (nullptr != m_plight)
		{
			m_plight->on();
		}
	}

};