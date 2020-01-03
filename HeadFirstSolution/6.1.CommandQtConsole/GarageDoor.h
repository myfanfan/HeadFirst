#pragma  once

#include <iostream>
#include <stdio.h>
using namespace std;

class GarageDoor
{
public:
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