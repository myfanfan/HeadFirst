#pragma once

#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "CaliforniaPizzaFactory.h"
#include "CaliforniaCheesePizza.h"
#include "CaliforniaClamPizza.h"
#include "CaliforniaPepperoniPizza.h"
#include "CaliforniaVeggiePizza.h"

struct CaliforniaPizzaStore:public PizzaStore
{

protected:
	virtual Pizza* createPizza(const QString& type) override
	{
		Pizza*  pizza{ nullptr };
		PizzaIngredientFactory* pizzaFactory = new CaliforniaPizzaFactory();

		if (QStringLiteral("cheese") == type)
		{
			pizza = new CaliforniaCheesePizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Cheese Pizza."));
		}
		else if (QStringLiteral("veggie") == type)
		{
			pizza = new CaliforniaVeggiePizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Veggie Pizza."));
		}
		else if (QStringLiteral("clam") == type)
		{
			pizza = new CaliforniaClamPizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Clam Pizza."));
		}
		else if (QStringLiteral("pepperoni") == type)
		{
			pizza = new CaliforniaPepperoniPizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Pepperoni Pizza."));
		}
		return pizza;
	}

};