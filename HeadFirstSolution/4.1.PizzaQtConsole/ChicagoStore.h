#pragma once

#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"

struct ChicagoStore :public PizzaStore
{

protected:
	virtual Pizza* createPizza(const QString& type) override
	{
		if (QStringLiteral("cheese") == type)
		{
			return new ChicagoStyleCheesePizza();
		}
		else if (QStringLiteral("veggie") == type)
		{
			return new ChicagoStyleVeggiePizza();
		}
		else if (QStringLiteral("clam") == type)
		{
			return new ChicagoStyleClamPizza();
		}
		else if (QStringLiteral("veggie") == type)
		{
			return new ChicagoStyleVeggiePizza();
		}
		return nullptr;
	}

};