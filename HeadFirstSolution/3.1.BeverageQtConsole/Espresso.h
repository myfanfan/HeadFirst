#pragma once

#include "Beverage.h"

struct Espresso
	:public Beverage
{
public:

	Espresso()
	{
		m_description = QStringLiteral("Espresso");
	}

	virtual double cost() override
	{
		return 1.99;
		//throw std::logic_error("The method or operation is not implemented.");
	}

};