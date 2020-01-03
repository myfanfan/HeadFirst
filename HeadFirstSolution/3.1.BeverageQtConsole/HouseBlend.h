#pragma  once

#include "Beverage.h"

struct HouseBlend
	:public Beverage
{
public:
	HouseBlend()
	{
		m_description = QStringLiteral("HouseBlend");
	}

	~HouseBlend()
	{
		std::cout << "~HouseBlend" << endl;
	}

	virtual double cost() override
	{
		return 0.89;
	}

};