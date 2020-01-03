#include "SoldOutState.h"

#include <iostream>
#include <stdio.h>
using namespace std;
#include "GumballMachineEx.h"

SoldOutState::SoldOutState(GumballMachineEx* _gumball)
:mGumball(_gumball)
{

}

void SoldOutState::insertQuarter()
{
	std::cout << "You can't insert a quarter, the machine is sold out." << endl;
}

void SoldOutState::ejectQuarter()
{
	std::cout << "You can't eject,you haven't insered a quarter yet." << endl;
}

void SoldOutState::turnCrank()
{
	std::cout << "You turned,but there are no gumballs" << endl;
}

void SoldOutState::dispense()
{
	std::cout << "No gumball dispensed." << endl;
}
