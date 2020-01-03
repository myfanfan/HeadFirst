#pragma once

#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"

struct NYPizzaStore:public PizzaStore
{

protected:
	virtual Pizza* createPizza(const QString& type) override
	{
		if (QStringLiteral("cheese") == type)
		{
			return new NYStyleCheesePizza();
		}
		else if (QStringLiteral("veggie") == type)
		{
			return new NYStyleVeggiePizza();
		}
		else if (QStringLiteral("clam") == type)
		{
			return new NYStyleClamPizza();
		}
		else if (QStringLiteral("veggie") == type)
		{
			return new NYStyleVeggiePizza();
		}
		return nullptr;
	}

};