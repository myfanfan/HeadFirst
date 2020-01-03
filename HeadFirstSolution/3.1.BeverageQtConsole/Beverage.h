#pragma once

#include <QString>

struct Beverage
{
protected:
	QString		m_description{ "" };
public:
	virtual QString		getDescription()
	{
		return m_description;
	}

	virtual double cost() = 0;
};