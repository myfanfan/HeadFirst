#pragma  once

#include "Turkey.h"

class WildTurkey:public Turkey
{

public:
	virtual void gobble() override
	{
		std::cout << "Gobble gobble" << endl;
	}


	virtual void fly() override
	{
		std::cout << "I'm flying a short distance." << endl;
	}

};