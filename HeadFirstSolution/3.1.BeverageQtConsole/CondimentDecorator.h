#pragma once

#include "Beverage.h"

struct CondimentDecorator
	:public Beverage
{

public:

	virtual QString getDescription() = 0;

	virtual double cost() override
	{
		return 0;
	}

};