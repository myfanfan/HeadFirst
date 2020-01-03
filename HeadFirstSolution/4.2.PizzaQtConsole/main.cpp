#include <QtCore/QCoreApplication>

#include "NewYork/NYPizzaStore.h"
#include "Chicago/ChicagoPizzaStore.h"

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	PizzaStore*		nystore = new NYPizzaStore();
	Pizza*			mypizza = nystore->orderPizza("cheese");

	std::cout << "-------------------------------------------------" << endl;

	PizzaStore*		pizzaStore2 = new ChicagoPizzaStore();
	auto*			pizza2 = pizzaStore2->orderPizza("veggie");

	return a.exec();
}
