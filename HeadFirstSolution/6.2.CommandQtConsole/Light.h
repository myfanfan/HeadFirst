#pragma  once

#include <iostream>
#include <stdio.h>
using namespace std;

#include <QString>

class Light
{
private:
	QString		m_name{ "" };
public:
	Light(const QString& name = "")
		:m_name(name)
	{
		
	}

	void	on()
	{
		QString strmsg = QStringLiteral("%1 Light is On").arg(m_name);
		std::cout << strmsg.toStdString()<< endl;
	}
	void	off()
	{
		QString strmsg = QStringLiteral("%1 Light is Off").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}
};