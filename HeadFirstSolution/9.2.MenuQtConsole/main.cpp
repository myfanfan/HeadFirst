#include <QtCore/QCoreApplication>

#include "MenuComponent.h"
#include "MenuEx.h"
#include "MenuItemEx.h"
#include "WaitressEx.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	MenuComponent* pancake = new MenuEx("Pancake house menu", "breakfase");

	MenuComponent* dinermenu = new MenuEx("Diner menu", "lunch");

	MenuComponent*	cafemenu = new MenuEx("cafe menu", "dinner");

	MenuComponent* dessertmenu = new MenuEx("dessert menu", "dessert of course");

	MenuComponent*	allmenus = new MenuEx("All menus", "all menus combined");

	allmenus->add(pancake);
	allmenus->add(dinermenu);
	allmenus->add(cafemenu);

	dinermenu->add(new MenuItemEx("Pasta", "Spaghetti with Marinara Sauce,and a slice of sourdough bread", true, 3.89));

	dinermenu->add(dessertmenu);

	dessertmenu->add(new MenuItemEx("Apple pie", "Apple pie with a flakey crust,topped with vanilla ice cream", true, 1.59));

	WaitressEx* waitress = new WaitressEx(allmenus);

	waitress->printMenu();

	return a.exec();
}
