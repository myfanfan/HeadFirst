#pragma once

#include "Pizza.h"

struct PizzaStore
{
public:
	Pizza*	orderPizza(const QString& type)
	{
		Pizza* pizza;
		pizza = createPizza(type);

		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}

protected:
	virtual Pizza* createPizza(const QString& type)=0;
};

