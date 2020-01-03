#include "GumballMachineEx.h"

#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "WinnerState.h"

#include <iostream>
#include <stdio.h>
using namespace std;


GumballMachineEx::GumballMachineEx(int numberGumballs)
{
	soldOutState = new SoldOutState(this);
	noQuarterState = new NoQuarterState(this);
	hasQuarterState = new HasQuarterState(this);
	soldState = new SoldState(this);
	winnerState = new WinnerState(this);

	m_count = numberGumballs;

	state = soldOutState;

	if (numberGumballs>0)
	{
		state = noQuarterState;
	}

}


GumballMachineEx::~GumballMachineEx()
{
}

void GumballMachineEx::insertQuarter()
{
	state->insertQuarter();
}

void GumballMachineEx::ejectQuarter()
{
	state->ejectQuarter();
}

void GumballMachineEx::turnCrank()
{
	state->turnCrank();
	state->dispense();
}

void GumballMachineEx::setState(State* _state)
{
	this->state = _state;
}

void GumballMachineEx::releaseBall()
{
	std::cout << "A gumball comes rolling out the slot..." << endl;
	if (0 != m_count)
	{
		m_count = m_count - 1;
	}
}

State* GumballMachineEx::getSoldOutState() const
{
	return soldOutState;
}

State* GumballMachineEx::getNoQuarterState() const
{
	return noQuarterState;
}

State* GumballMachineEx::getHasQuarterState() const
{
	return hasQuarterState;
}

State* GumballMachineEx::getSoldState() const
{
	return soldState;
}

State* GumballMachineEx::getWinnerState() const
{
	return winnerState;
}

int GumballMachineEx::getCount() const
{
	return m_count;
}

QString GumballMachineEx::toString() const
{
	QString strmsg = QStringLiteral("<<-----------------------------\nMighty Gumball,Inc. \nInventory: %1 gumballs. \nMachine is waiting for quarter.\n----------------------------->>\n").arg(m_count);
	//std::cout << strmsg.toStdString() << endl;
	return strmsg;
}

void GumballMachineEx::printState() const
{
	std::cout << toString().toStdString() << endl;
}
