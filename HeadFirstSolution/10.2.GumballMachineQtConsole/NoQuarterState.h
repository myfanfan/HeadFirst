#pragma once

#include "State.h"

class GumballMachineEx;

class NoQuarterState:public State
{
	GumballMachineEx*	mGumball{ nullptr };
public:
	NoQuarterState(GumballMachineEx* _gumball);
	~NoQuarterState();

	virtual void insertQuarter() override;


	virtual void ejectQuarter() override;


	virtual void turnCrank() override;


	virtual void dispense() override;

};

