#pragma once

#include "Duck.h"

class MallardDuck:public Duck
{
public:
	MallardDuck()
	{
		m_pQuack = new Quack();
		m_pFly = new FlyWithWings();
	}

	~MallardDuck()
	{

	}

	virtual void display() override
	{
		std::cout << "I'm a real Mallard duck!" << endl;
	}

};

class ModelDuck :public Duck
{
public:
	ModelDuck()
	{
		m_pQuack = new Quack();
		m_pFly = new FlyNoWay();
	}

	~ModelDuck()
	{

	}

	virtual void display() override
	{
		std::cout << "I'm a model duck!" << endl;
	}

};