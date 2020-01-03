#pragma  once

#include "Command.h"
#include "Stereo.h"

class StereoOffCommand:public Command
{
private:
	Stereo*			m_pstereo{ nullptr };
public:
	StereoOffCommand(Stereo* stereo)
	{
		m_pstereo = stereo;
	}

	virtual void execute() override
	{
		if (nullptr != m_pstereo)
		{
			m_pstereo->off();
		}
	}


	virtual QString name() override
	{
		return QStringLiteral("Stereo off command");
	}

	virtual void undo() override
	{
		if (nullptr != m_pstereo)
		{
			m_pstereo->on();
		}
	}

};