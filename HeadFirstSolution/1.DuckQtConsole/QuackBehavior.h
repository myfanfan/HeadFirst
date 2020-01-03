#pragma  once

#include <iostream>
#include <stdio.h>

using namespace std;

struct QuackBehavior
{
	virtual void quack() = 0;
};

class Quack :public QuackBehavior
{

public:
	virtual void quack() override
	{
		std::cout << "Quack"<<endl;
	}
};

class MuteQuack :public QuackBehavior
{

public:
	virtual void quack() override
	{
		std::cout << "<< Silence >>" << endl;
	}

};

class Squack :public QuackBehavior
{

public:
	virtual void quack() override
	{
		std::cout << "Squack" << endl;
	}

};