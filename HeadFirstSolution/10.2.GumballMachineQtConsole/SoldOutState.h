#pragma once

#include "State.h"

class GumballMachineEx;

class SoldOutState:public State
{
	GumballMachineEx*	mGumball{ nullptr };
public:
	SoldOutState(GumballMachineEx* _gumball);

	virtual void insertQuarter() override;


	virtual void ejectQuarter() override;


	virtual void turnCrank() override;


	virtual void dispense() override;

};

