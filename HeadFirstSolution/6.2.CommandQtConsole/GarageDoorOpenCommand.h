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


	virtual QString name() override
	{
		return QStringLiteral("GarageDoor open command");
	}

	virtual void undo() override
	{
		if (nullptr != m_pgarageDoor)
		{
			m_pgarageDoor->down();
			m_pgarageDoor->lightOff();
			m_pgarageDoor->stop();
		}
	}

};

class GarageDoorCloseCommand :public Command
{
private:
	GarageDoor*			m_pgarageDoor{ nullptr };
public:
	GarageDoorCloseCommand(GarageDoor* garagedoor)
	{
		m_pgarageDoor = garagedoor;
	}

	virtual void execute() override
	{
		if (nullptr != m_pgarageDoor)
		{
			m_pgarageDoor->down();
			m_pgarageDoor->lightOff();
			m_pgarageDoor->stop();
		}
		//throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void undo() override
	{
		if (nullptr != m_pgarageDoor)
		{
			m_pgarageDoor->up();
			m_pgarageDoor->lightOn();
			m_pgarageDoor->stop();
		}
	}

	virtual QString name() override
	{
		return QStringLiteral("GarageDoor close command");
	}

};