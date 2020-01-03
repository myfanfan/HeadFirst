#include <QtCore/QCoreApplication>

#include "Tea.h"
#include "Coffee.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	Tea* tea = new Tea();

	Coffee* coffee = new Coffee();

	std::cout << "\nmaking coffee..." << endl;
	coffee->prepareRecipe();

	std::cout << "\nmaking tea..." << endl;
	tea->prepareRecipe();


	return a.exec();
}
