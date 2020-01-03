#pragma  once

#include <iostream>
#include <stdio.h>
using namespace std;

#include <QString>
//≥µø‚√≈
class GarageDoor
{
private:
	QString  m_name{ "" };
public:
	GarageDoor(const QString& name = "")
		:m_name(name)
	{

	}

	void up()
	{
		std::cout << "Garage Door is Up" << endl;
	}

	void down()
	{
		std::cout << "Garage Door is Down" << endl;
	}

	void	stop()
	{
		std::cout << "Garage Door is Stop" << endl;
	}

	void	lightOn()
	{
		std::cout << "Garage Ligth is On" << endl;
	}

	void	lightOff()
	{
		std::cout << "Garage Ligth is Off" << endl;
	}
};