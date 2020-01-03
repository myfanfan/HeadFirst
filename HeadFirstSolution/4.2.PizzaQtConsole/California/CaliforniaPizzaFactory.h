#pragma once

#include "PizzaIngredientFactory.h"
#include "Dough.h"

struct CaliforniaPizzaFactory:public PizzaIngredientFactory
{


	virtual Dough* createDough() override
	{
		return new CaliforniaDough();
	}


	virtual Sauce* createSauce() override
	{
		return new CaliforniaSauce();
	}


	virtual Cheese* createCheese() override
	{
		return new CaliforniaCheese();
	}


	virtual QList<Veggies *> createVeggies() override
	{
		QList<Veggies*>  lstdata;//Êß²Ë
		return lstdata;
	}


	virtual Clams* createClams() override
	{
		return new CaliforniaClams();
	}


	virtual Pepperoni* createPepperoni() override
	{
		return new SlicedPepperoni();
	}

};