#pragma once

#include "Command.h"
#include "Stereo.h"

class StereoOnWithCDCommand:public Command
{
private:
	Stereo*			m_pstereo{ nullptr };
public:
	StereoOnWithCDCommand(Stereo* stereo)
	{
		m_pstereo = stereo;
	}

	virtual void execute() override
	{
		if (nullptr != m_pstereo)
		{
			m_pstereo->on();
			m_pstereo->setCd();
			m_pstereo->setVolume(11);
		}
	}

	virtual void undo() override
	{
		if (nullptr != m_pstereo)
		{
			m_pstereo->off();
		}
	}

	virtual QString name() override
	{
		return QStringLiteral("Stereo OnWithCD command");
	}

};