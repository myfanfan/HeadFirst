#include "NoQuarterState.h"

#include <iostream>
#include <stdio.h>
using namespace std;
#include "GumballMachineEx.h"

NoQuarterState::NoQuarterState(GumballMachineEx* _gumball)
:mGumball(_gumball)
{
}


NoQuarterState::~NoQuarterState()
{
}

void NoQuarterState::insertQuarter()
{
	std::cout << "You inserted a quarter." << endl;
	mGumball->setState(mGumball->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	std::cout << "You haven't inserted a quarter." << endl;
}

void NoQuarterState::turnCrank()
{
	std::cout << "You turned,but there's no quarter." << endl;
}

void NoQuarterState::dispense()
{
	std::cout << "You need to pay first." << endl;
}
