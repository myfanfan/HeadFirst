#pragma once

#include "PizzaIngredientFactory.h"
#include "Dough.h"

struct NYPizzaIngredientFactory:public PizzaIngredientFactory
{

	virtual Dough* createDough() override
	{
		return new NewYorkDough();
	}


	virtual Sauce* createSauce() override
	{
		return new NewYorkSauce();
	}


	virtual Cheese* createCheese() override
	{
		return new NewYorkCheese();
	}


	virtual QList<Veggies *> createVeggies() override
	{
		QList<Veggies*>  lstdata;//Êß²Ë
		return lstdata;
	}


	virtual Clams* createClams() override
	{
		return new NewYorkClams();
	}


	virtual Pepperoni* createPepperoni() override
	{
		return new SlicedPepperoni();
	}

};