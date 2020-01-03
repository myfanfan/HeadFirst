#pragma  once

#include "Duck.h"
//ÂÌÍ·Ñ¼
class MallardDuck:public Duck
{

public:
	virtual void quack() override
	{
		std::cout << "Quack" << endl;
	}


	virtual void fly() override
	{
		std::cout << "I'm flying." << endl;
	}

};