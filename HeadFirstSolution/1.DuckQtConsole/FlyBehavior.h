#pragma once

#include <iostream>
#include <stdio.h>

using namespace std;

struct FlyBehavior
{
	virtual void fly() = 0;
};

class FlyWithWings :public FlyBehavior
{

public:
	virtual void fly() override
	{
		std::cout << "I'm flying !!"<<endl;
	}

};

class FlyNoWay :public FlyBehavior
{

public:
	virtual void fly() override
	{
		std::cout << "I can't fly !" << endl;
	}

};

class FlyRocketPowered :public FlyBehavior
{

public:
	virtual void fly() override
	{
		std::cout << "I'm flying with a rocket !" << endl;
	}

};