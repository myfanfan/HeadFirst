#pragma  once

#include "CaffeineBeverage.h"

struct Tea:public CaffeineBeverage
{


	virtual void brew() override
	{
		std::cout << "Steeping the tea." << endl;
	}


	virtual void addCondiments() override
	{
		std::cout << "Adding Lemon." << endl;
	}

};