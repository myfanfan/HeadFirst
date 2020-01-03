
#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

struct CaliforniaPepperoniPizza :public Pizza
{
private:
	PizzaIngredientFactory*  m_factory{ nullptr };

public:
	CaliforniaPepperoniPizza(PizzaIngredientFactory* factory)
	{
		m_factory = factory;
	}

	virtual void prepare() override
	{
		QString strtmp = QStringLiteral("CaliforniaPepperoniPizza %1").arg(m_name);
		std::cout << strtmp.toStdString() << endl;
		m_pdough = m_factory->createDough();
		m_psauce = m_factory->createSauce();
		m_pcheese = m_factory->createCheese();
	}

};