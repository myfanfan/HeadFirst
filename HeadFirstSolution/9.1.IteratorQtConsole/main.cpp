#include <QtCore/QCoreApplication>


#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"
#include "CafeMenu.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	IMenu*			pan = new PancakeHouseMenu();
	IMenu*			diner = new DinerMenu();
	IMenu*			cafe = new CafeMenu();

	Waitress*		waitress = new Waitress();
	waitress->AddMenu(pan);
	waitress->AddMenu(diner);
	waitress->AddMenu(cafe);

	waitress->printMenu();
	return a.exec();
}
