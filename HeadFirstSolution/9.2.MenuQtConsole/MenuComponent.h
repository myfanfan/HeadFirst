#pragma once

#include <QString>
#include <iostream>
#include <stdio.h>
using namespace std;
#include "CompositeIterator.h"
#include "IIterator.h"

struct MenuComponent
{
public:

	virtual void add(MenuComponent* menu)
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void  remove(MenuComponent* menu)
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual MenuComponent* getChild(int i)
	{
		throw std::logic_error("The method or operation is not implemented.");
		return nullptr;
	}

	virtual QString  getName()
	{
		throw std::logic_error("The method or operation is not implemented.");
		return "";
	}

	virtual QString getDescription()
	{
		throw std::logic_error("The method or operation is not implemented.");
		return "";
	}

	virtual double getPrice()
	{
		throw std::logic_error("The method or operation is not implemented.");
		return 0;
	}

	virtual bool isVegetarian()
	{
		throw std::logic_error("The method or operation is not implemented.");
		return false;
	}

	virtual void print()
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual IIterator* createIterator() = 0;
};