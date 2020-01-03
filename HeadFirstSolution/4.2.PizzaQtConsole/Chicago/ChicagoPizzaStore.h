//ChicagoPizzaStore
#pragma once

#include "PizzaStore.h"
#include "ChicagoPizzaFactory.h"
#include "ChicagoVeggiePizza.h"
#include "ChicagoPepperoniPizza.h"
#include "ChicagoClamPizza.h"
#include "ChicagoCheesePizza.h"
//#include "NYPizzaIngredientFactory.h"
//#include "NYStyleCheesePizza.h"
//#include "NYStyleVeggiePizza.h"
//#include "NYStyleClamPizza.h"
//#include "NYStylePepperoniPizza.h"

struct ChicagoPizzaStore
	:public PizzaStore
{

protected:
	virtual Pizza* createPizza(const QString& type) override
	{
		Pizza*  pizza{ nullptr };
		PizzaIngredientFactory* pizzaFactory = new ChicagoPizzaFactory();

		if (QStringLiteral("cheese") == type)
		{
			pizza = new ChicagoCheesePizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Cheese Pizza."));
		}
		else if (QStringLiteral("veggie") == type)
		{
			pizza = new ChicagoVeggiePizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Veggie Pizza."));
		}
		else if (QStringLiteral("clam") == type)
		{
			pizza = new ChicagoClamPizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Clam Pizza."));
		}
		else if (QStringLiteral("pepperoni") == type)
		{
			pizza = new ChicagoPepperoniPizza(pizzaFactory);
			pizza->setName(QStringLiteral("Chicago Style Pepperoni Pizza."));
		}
		return pizza;
	}
};