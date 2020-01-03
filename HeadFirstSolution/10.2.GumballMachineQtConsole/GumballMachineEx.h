#pragma once

#include <QString>
#include "State.h"

class GumballMachineEx
{
	State*		soldOutState{ nullptr };
	State*		noQuarterState{ nullptr };
	State*		hasQuarterState{ nullptr };
	State*		soldState{ nullptr };
	State*		winnerState{ nullptr };

	State*		state{ nullptr };

	int m_count{ 0 };

public:
	GumballMachineEx(int numberGumballs);
	~GumballMachineEx();

	void	insertQuarter();

	void	ejectQuarter();

	void	turnCrank();

	void	setState(State* state);

	void	releaseBall();

	State*  getSoldOutState()const;

	State*	getNoQuarterState()const;

	State*	getHasQuarterState()const;

	State*	getSoldState()const;

	State*	getWinnerState()const;

	int		getCount()const;

	QString toString()const;

	void	printState()const;
};

