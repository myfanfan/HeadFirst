#include "WinnerState.h"

#include <iostream>
#include <stdio.h>
using namespace std;
#include "GumballMachineEx.h"

WinnerState::WinnerState(GumballMachineEx* _gumball)
	:mGumball(_gumball)
{

}

void WinnerState::insertQuarter()
{
	//throw std::logic_error("The method or operation is not implemented.");
	std::cout << "Error State." << endl;
}

void WinnerState::ejectQuarter()
{
	//throw std::logic_error("The method or operation is not implemented.");
	std::cout << "Error State." << endl;
}

void WinnerState::turnCrank()
{
	//throw std::logic_error("The method or operation is not implemented.");
	std::cout << "Error State." << endl;
}

void WinnerState::dispense()
{
	std::cout << "You're a winner! You get two gumballs for your quarter." << endl;
	mGumball->releaseBall();
	if (0==mGumball->getCount())
	{
		mGumball->setState(mGumball->getSoldOutState());
	}
	else
	{
		mGumball->releaseBall();
		if (mGumball->getCount()>0)
		{
			mGumball->setState(mGumball->getNoQuarterState());
		}
		else
		{
			std::cout << "Oops,out of gumballs." << endl;
			mGumball->setState(mGumball->getSoldOutState());
		}
	}
}
