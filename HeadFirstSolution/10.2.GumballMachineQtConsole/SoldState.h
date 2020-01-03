#pragma once

#include "State.h"

class GumballMachineEx;

struct SoldState:public State
{

	GumballMachineEx*	mGumball{ nullptr };
public:
	SoldState(GumballMachineEx* _gumball);

	virtual void insertQuarter() override;

	virtual void ejectQuarter() override;

	virtual void turnCrank() override;

	virtual void dispense() override;

};