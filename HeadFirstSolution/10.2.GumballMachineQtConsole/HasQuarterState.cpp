#include "HasQuarterState.h"


#include <iostream>
#include <stdio.h>
using namespace std;

#include <time.h>

#include "GumballMachineEx.h"

HasQuarterState::HasQuarterState(GumballMachineEx* _gumball)
:mGumball(_gumball)
{
	srand((int)time(0));//���������������
}

void HasQuarterState::insertQuarter()
{
	std::cout << "You can't insert another quarter." << endl;
}

void HasQuarterState::ejectQuarter()
{
	std::cout << "Quarter returned." << endl;
	mGumball->setState(mGumball->getNoQuarterState());
} 

void HasQuarterState::turnCrank()
{
	std::cout << "You turned..." << endl;
	int  ival =  (rand() % 10);
	if (0 == ival && mGumball->getCount() > 1)//���˿ͻ����߻�������1�����ϵ��ǹ�
	{
		mGumball->setState(mGumball->getWinnerState());
	}
	else
	{
		mGumball->setState(mGumball->getSoldState());
	}
}

void HasQuarterState::dispense()
{
	std::cout << "No gumball dispensed." << endl;
}
