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

	virtual QString name() override
	{
		return QStringLiteral("Light on command");
	}

	virtual void undo() override
	{
		if (nullptr != m_plight)
		{
			m_plight->off();
		}
	}

};

struct LightOffCommand :public Command
{
private:
	Light*			m_plight{ nullptr };
public:

	LightOffCommand(Light*  light)
	{
		m_plight = light;
	}

	virtual void execute() override
	{
		if (nullptr != m_plight)
		{
			m_plight->off();
		}
	}

	virtual void undo() override
	{
		if (nullptr != m_plight)
		{
			m_plight->on();
		}
	}

	virtual QString name() override
	{
		return QStringLiteral("Light off command");
	}
};