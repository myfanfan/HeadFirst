#pragma  once

#include <iostream>
#include <stdio.h>
using namespace std;

class Light
{
public:
	void	on()
	{
		std::cout << "Light is On" << endl;
	}
	void	off()
	{
		std::cout << "Light is Off" << endl;
	}
};