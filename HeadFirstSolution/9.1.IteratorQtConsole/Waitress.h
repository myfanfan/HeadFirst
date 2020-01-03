#pragma once

#include <iostream>
#include <stdio.h>
using namespace std;

#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "IMenu.h"

#include <QList>

struct Waitress
{
private:
	//IMenu*			m_pancakeMenu;
	//IMenu*					m_dinerMenu;
	//IMenu*					m_cafeMenu;

	QList<IMenu*>		m_menus;

public:
	Waitress(const QList<IMenu*>& lstdata)
	{
		m_menus.clear();
		m_menus.append(lstdata);
	}

	Waitress()
	{

	}

	void		AddMenu(IMenu* menu)
	{
		m_menus.append(menu);
	}

	void	printMenu()
	{
		IIterator*  iterator = nullptr;
		for each (IMenu* item in m_menus)
		{
			iterator = item->createIterator();
			printMenu(iterator);
		}

		//IIterator*	pan = m_pancakeMenu->createIterator();
		//IIterator*	diner = m_dinerMenu->createIterator();
		//IIterator* cafe = m_cafeMenu->createIterator();

		//std::cout << "Menu \n ----------------- \n BREAKFAST" << endl;
		//printMenu(pan);
		//std::cout << "Menu \n ----------------- \n LUNCH" << endl;
		//printMenu(diner);

		//std::cout << "Menu \n ----------------- \n Dinner" << endl;
		//printMenu(cafe);
	}

private:
	void	printMenu(IIterator* iterator)
	{
		while (iterator->hasNext())
		{
			QVariant   data = iterator->next();
			MenuItem tmpdata = data.value<MenuItem>();
			QString strmsg = QStringLiteral("%1, %2 -- %3").arg(tmpdata.getName()).arg(tmpdata.getPrice()).arg(tmpdata.getDescription());
			std::cout << strmsg.toStdString() << endl;
		}
	}
};