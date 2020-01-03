#pragma once

#include "State.h"

class GumballMachineEx;

class HasQuarterState:public State
{
	GumballMachineEx*	mGumball{ nullptr };
public:
	HasQuarterState(GumballMachineEx* _gumball);

	virtual void insertQuarter() override;


	virtual void ejectQuarter() override;


	virtual void turnCrank() override;


	virtual void dispense() override;

};

