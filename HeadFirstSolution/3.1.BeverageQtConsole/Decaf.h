#pragma once

#include "Beverage.h"

struct Decaf
	:public Beverage
{
public:

	Decaf()
	{
		m_description = QStringLiteral("Decaf");
	}

	virtual double cost() override
	{
		return 1.33;
		//throw std::logic_error("The method or operation is not implemented.");
	}
};