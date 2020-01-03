#include <QtCore/QCoreApplication>

#include "GumballMachine.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	GumballMachine* gumbal = new GumballMachine(5);

	gumbal->printMathineState();

	gumbal->insertQuarter();
	gumbal->turnCrank();

	gumbal->printMathineState();

	gumbal->insertQuarter();
	gumbal->ejectQuarter();
	gumbal->turnCrank();

	gumbal->printMathineState();

	gumbal->insertQuarter();
	gumbal->turnCrank();
	gumbal->insertQuarter();
	gumbal->turnCrank();
	gumbal->ejectQuarter();

	gumbal->printMathineState();

	gumbal->insertQuarter();
	gumbal->insertQuarter();
	gumbal->turnCrank();
	gumbal->insertQuarter();
	gumbal->turnCrank();
	gumbal->insertQuarter();
	gumbal->turnCrank();

	gumbal->printMathineState();

	return a.exec();
}
