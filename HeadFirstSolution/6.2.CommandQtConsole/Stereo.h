#pragma  once

#include <iostream>
#include <stdio.h>
using namespace std;

#include <QString>

//“Ùœ‰
struct Stereo
{
private:
	QString			m_name{ "" };
public:
	Stereo(const QString& name = "")
		:m_name(name)
	{

	}
	void	on()
	{
		QString strmsg = QStringLiteral("%1 Stereo is On").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}
	void	off()
	{
		QString strmsg = QStringLiteral("%1 Stereo is off").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void	setCd()
	{
		QString strmsg = QStringLiteral("%1 Stereo is setCd").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void	setDvd()
	{
		QString strmsg = QStringLiteral("%1 Stereo is setDvd").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void	setRadio()
	{
		QString strmsg = QStringLiteral("%1 Stereo is setRadio").arg(m_name);
		std::cout << strmsg.toStdString() << endl;
	}

	void	setVolume(quint64 iVolume)
	{
		QString strmsg = QStringLiteral("%1 Stereo is setVolume:%2").arg(m_name).arg(iVolume);
		std::cout << strmsg.toStdString() << endl;
	}

};