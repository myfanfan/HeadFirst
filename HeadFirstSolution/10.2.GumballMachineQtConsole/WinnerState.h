#pragma once

#include "State.h"

class GumballMachineEx;

class WinnerState:public State
{
	GumballMachineEx*	mGumball{ nullptr };
public:
	WinnerState(GumballMachineEx* _gumball);

	virtual void insertQuarter() override;


	virtual void ejectQuarter() override;


	virtual void turnCrank() override;


	virtual void dispense() override;

};

