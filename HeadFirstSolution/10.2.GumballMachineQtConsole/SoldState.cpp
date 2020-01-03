#include "SoldState.h"

#include <iostream>
#include <stdio.h>
using namespace std;
#include "GumballMachineEx.h"

SoldState::SoldState(GumballMachineEx* _gumball)
:mGumball(_gumball)
{

}

void SoldState::insertQuarter()
{
	std::cout << "Please wait, we're already giving you a gumball." << endl;
}

void SoldState::ejectQuarter()
{
	std::cout << "Sorry,you already turned the crank." << endl;
}

void SoldState::turnCrank()
{
	std::cout << "Turning twice doesn't get you another gumball!" << endl;
}

void SoldState::dispense()
{
	mGumball->releaseBall();
	if (mGumball->getCount()>0)
	{
		mGumball->setState(mGumball->getNoQuarterState());
	}
	else
	{
		std::cout << "Oops, out of gumballs!" << endl;
		mGumball->setState(mGumball->getSoldOutState());
	}

}
