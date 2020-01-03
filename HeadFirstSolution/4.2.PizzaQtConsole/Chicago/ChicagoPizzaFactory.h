#pragma once

#include "Dough.h"
#include "PizzaIngredientFactory.h"

struct ChicagoPizzaFactory:public PizzaIngredientFactory
{


	virtual Dough* createDough() override
	{
		return new ChicagoDough();
	}


	virtual Sauce* createSauce() override
	{
		return new ChicagoSauce();
	}


	virtual Cheese* createCheese() override
	{
		return new ChicagoCheese();
	}


	virtual QList<Veggies *> createVeggies() override
	{
		QList<Veggies*>  lstdata;//Êß²Ë
		return lstdata;
	}


	virtual Pepperoni* createPepperoni() override
	{
		return new SlicedPepperoni();
	}


	virtual Clams* createClams() override
	{
		return new ChicagoClams();
	}

};