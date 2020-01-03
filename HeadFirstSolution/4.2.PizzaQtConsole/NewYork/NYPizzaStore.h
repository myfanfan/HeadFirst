#pragma once

#include "PizzaStore.h"
#include "NYPizzaIngredientFactory.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleVeggiePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"

struct NYPizzaStore
	:public PizzaStore
{

protected:
	virtual Pizza* createPizza(const QString& type) override
	{
		Pizza*  pizza{ nullptr };
		PizzaIngredientFactory* pizzaFactory = new NYPizzaIngredientFactory();

		if (QStringLiteral("cheese") == type)
		{
			pizza = new NYStyleCheesePizza(pizzaFactory);
			pizza->setName(QStringLiteral("New York Style Cheese Pizza."));
		}
		else if (QStringLiteral("veggie") == type)
		{
			pizza = new NYStyleVeggiePizza(pizzaFactory);
			pizza->setName(QStringLiteral("New York Style Veggie Pizza."));
		}
		else if (QStringLiteral("clam") == type)
		{
			pizza = new NYStyleClamPizza(pizzaFactory);
			pizza->setName(QStringLiteral("New York Style Clam Pizza."));
		}
		else if (QStringLiteral("pepperoni") == type)
		{
			pizza = new NYStylePepperoniPizza(pizzaFactory);
			pizza->setName(QStringLiteral("New York Style Pepperoni Pizza."));
		}
		return pizza;
	}
};