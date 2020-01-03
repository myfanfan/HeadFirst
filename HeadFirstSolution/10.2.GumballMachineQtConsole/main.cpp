#include <QtCore/QCoreApplication>

#include "GumballMachineEx.h"



int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	GumballMachineEx*		wGumball = new GumballMachineEx(5);
	wGumball->printState();

	wGumball->insertQuarter();
	wGumball->turnCrank();


	wGumball->printState();

	wGumball->insertQuarter();
	wGumball->turnCrank();
	wGumball->insertQuarter();
	wGumball->turnCrank();

	wGumball->printState();

	return a.exec();
}
