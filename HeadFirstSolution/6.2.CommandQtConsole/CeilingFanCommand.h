#pragma once

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanOnCommand:public Command
{
private:
	CeilingFan*			m_ceilingfan{ nullptr };

public:
	CeilingFanOnCommand(CeilingFan* ceiling)
	{
		m_ceilingfan = ceiling;
	}

	virtual void execute() override
	{
		if (nullptr != m_ceilingfan)
		{
			m_ceilingfan->on();
		}
	}


	virtual QString name() override
	{
		return QStringLiteral("ceilingFan On Command");
	}

	virtual void undo() override
	{
		if (nullptr != m_ceilingfan)
		{
			m_ceilingfan->off();
		}
	}

};

class CeilingFanOffCommand :public Command
{
private:
	CeilingFan*			m_ceilingfan{ nullptr };

public:
	CeilingFanOffCommand(CeilingFan* ceiling)
	{
		m_ceilingfan = ceiling;
	}

	virtual void execute() override
	{
		if (nullptr != m_ceilingfan)
		{
			m_ceilingfan->off();
		}
	}


	virtual QString name() override
	{
		return QStringLiteral("ceilingFan Off Command");
	}


	virtual void undo() override
	{
		if (nullptr != m_ceilingfan)
		{
			m_ceilingfan->on();
		}
	}

};

class CeilingFanHighCommand :public Command
{
	CeilingFan*			m_ceilingfan{ nullptr };
	int					m_prevSpeed{ 0 };

public:
	CeilingFanHighCommand(CeilingFan* ceiling)
	{
		m_ceilingfan = ceiling;
	}

	virtual void execute() override
	{
		if (nullptr != m_ceilingfan)
		{
			m_prevSpeed = m_ceilingfan->getSpeed();
			m_ceilingfan->high();
		}
	}


	virtual QString name() override
	{
		return QStringLiteral("ceilingFan high Command");
	}


	virtual void undo() override
	{
		if (CeilingFan::HIGH ==  m_prevSpeed)
		{
			m_ceilingfan->high();
		}
		else if (CeilingFan::MEDIUM==m_prevSpeed)
		{
			m_ceilingfan->medium();
		}
		else if (CeilingFan::LOW==m_prevSpeed)
		{
			m_ceilingfan->low();
		}
		else if (CeilingFan::OFF==m_prevSpeed)
		{
			m_ceilingfan->off();
		}
	}
};

class CeilingFanMediumCommand :public Command
{
	CeilingFan*			m_ceilingfan{ nullptr };
	int					m_prevSpeed{ 0 };

public:
	CeilingFanMediumCommand(CeilingFan* ceiling)
	{
		m_ceilingfan = ceiling;
	}

	virtual void execute() override
	{
		if (nullptr != m_ceilingfan)
		{
			m_prevSpeed = m_ceilingfan->getSpeed();
			m_ceilingfan->medium();
		}
	}


	virtual QString name() override
	{
		return QStringLiteral("ceilingFan Medium Command");
	}


	virtual void undo() override
	{
		if (CeilingFan::HIGH == m_prevSpeed)
		{
			m_ceilingfan->high();
		}
		else if (CeilingFan::MEDIUM == m_prevSpeed)
		{
			m_ceilingfan->medium();
		}
		else if (CeilingFan::LOW == m_prevSpeed)
		{
			m_ceilingfan->low();
		}
		else if (CeilingFan::OFF == m_prevSpeed)
		{
			m_ceilingfan->off();
		}
	}
};

class CeilingFanLowCommand :public Command
{
	CeilingFan*			m_ceilingfan{ nullptr };
	int					m_prevSpeed{ 0 };

public:
	CeilingFanLowCommand(CeilingFan* ceiling)
	{
		m_ceilingfan = ceiling;
	}

	virtual void execute() override
	{
		if (nullptr != m_ceilingfan)
		{
			m_prevSpeed = m_ceilingfan->getSpeed();
			m_ceilingfan->low();
		}
	}


	virtual QString name() override
	{
		return QStringLiteral("ceilingFan Low Command");
	}


	virtual void undo() override
	{
		if (CeilingFan::HIGH == m_prevSpeed)
		{
			m_ceilingfan->high();
		}
		else if (CeilingFan::MEDIUM == m_prevSpeed)
		{
			m_ceilingfan->medium();
		}
		else if (CeilingFan::LOW == m_prevSpeed)
		{
			m_ceilingfan->low();
		}
		else if (CeilingFan::OFF == m_prevSpeed)
		{
			m_ceilingfan->off();
		}
	}
};