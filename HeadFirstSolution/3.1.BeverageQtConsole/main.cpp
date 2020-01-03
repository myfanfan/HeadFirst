#include <QtCore/QCoreApplication>

#include <iostream>
#include <stdio.h>
using namespace std;

#include "Espresso.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "HouseBlend.h"
#include "Mocha.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	Beverage* beverage = new Espresso();
	//std::cout << beverage->getDescription();
	std::cout << beverage->getDescription().toStdString();
	std::cout << " $";
	std::cout<<beverage->cost()<<endl;

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);

	std::cout << beverage2->getDescription().toStdString();
	std::cout << " $";
	std::cout << beverage2->cost() << endl;

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);

	std::cout << beverage3->getDescription().toStdString();
	std::cout << " $";
	std::cout << beverage3->cost() << endl;

	delete beverage3;
	beverage3 = nullptr;


	return a.exec();
}
