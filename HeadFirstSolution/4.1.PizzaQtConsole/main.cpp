#include <QtCore/QCoreApplication>

#include "ChicagoStore.h"
#include "NYPizzaStore.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	PizzaStore*	nyStore = new NYPizzaStore();
	PizzaStore* chicagoStore = new ChicagoStore();

	Pizza* pizza = nyStore->orderPizza("cheese");
	std::cout << "Ethan ordered a ";
	std::cout << pizza->getName().toStdString() << endl;

	std::cout << "-----------------------------------------------" << endl;

	Pizza* pizza2 = chicagoStore->orderPizza("cheese");
	std::cout << "Joel ordered a ";
	std::cout << pizza2->getName().toStdString() << endl;

	return a.exec();
}
