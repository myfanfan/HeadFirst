//CaliforniaClamPizza

#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

struct CaliforniaClamPizza :public Pizza
{
private:
	PizzaIngredientFactory*  m_factory{ nullptr };

public:
	CaliforniaClamPizza(PizzaIngredientFactory* factory)
	{
		m_factory = factory;
	}

	virtual void prepare() override
	{
		QString strtmp = QStringLiteral("CaliforniaClamPizza %1").arg(m_name);
		std::cout << strtmp.toStdString() << endl;
		m_pdough = m_factory->createDough();
		m_psauce = m_factory->createSauce();
		m_pcheese = m_factory->createCheese();
	}

};