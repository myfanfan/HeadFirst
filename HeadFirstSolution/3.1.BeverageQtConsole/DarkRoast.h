#pragma once

#include "Beverage.h"

struct DarkRoast
	:public Beverage
{
public:

	DarkRoast()
	{
		m_description = QStringLiteral("DarkRoast");
	}

	virtual double cost() override
	{
		return 1.55;
		//throw std::logic_error("The method or operation is not implemented.");
	}
};