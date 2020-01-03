#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

struct NYStyleCheesePizza :public Pizza
{

	PizzaIngredientFactory*		ingredientFactory{ nullptr };
public:

	NYStyleCheesePizza(PizzaIngredientFactory* factory)
	{
		ingredientFactory = factory;
	}

	virtual void prepare() override
	{
		QString strtmp = QStringLiteral("NYStyleCheesePizza %1").arg(m_name);
		std::cout << strtmp.toStdString() << endl;
		m_pdough = ingredientFactory->createDough();
		m_psauce = ingredientFactory->createSauce();
		m_pcheese = ingredientFactory->createCheese();
	}

};