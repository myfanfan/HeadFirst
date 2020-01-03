#pragma  once

#include <iostream>
#include <stdio.h>
using namespace std;

#include <QString>
//µı…»
class CeilingFan
{
public:
	enum
	{
		HIGH=3,
		MEDIUM=2,
		LOW=1,
		OFF=0,
	};
private:
	//static const int		m_High = 3;
	//static const int		m_Medium = 2;
	//static const int		m_Low = 1;
	//static const int		m_Off = 0;

	QString					m_location{ "" };

	int						m_iSpeed{ 0 };

	QString					m_name{ "" };

public:
	CeilingFan(const QString& name = "")
		:m_name(name)
	{
		m_location = name;
		m_iSpeed = OFF;
	}

	void	high()
	{
		m_iSpeed = HIGH;
		QString strmsg = QStringLiteral("%1 CeilingFan is HIGH").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void	medium()
	{
		m_iSpeed = MEDIUM;
		QString strmsg = QStringLiteral("%1 CeilingFan is MEDIUM").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void low()
	{
		m_iSpeed = LOW;
		QString strmsg = QStringLiteral("%1 CeilingFan is LOW").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void		on()
	{
		QString strmsg = QStringLiteral("%1 CeilingFan is On").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void		off()
	{
		m_iSpeed = OFF;
		QString strmsg = QStringLiteral("%1 CeilingFan is Off").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	quint64		getSpeed()
	{
		return m_iSpeed;
	}
};