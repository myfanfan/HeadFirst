#pragma once

#include <QList>
#include "MenuItem.h"
#include "IIterator.h"
#include "DinerMenuIterator.h"
#include "IMenu.h"

struct CafeMenu:public IMenu
{

	static const int MAX_ITEMS = 6;
	int numberOfItems = 0;

	QList<MenuItem>			m_lstdata;
public:
	CafeMenu()
	{
		m_lstdata << MenuItem("Soup of the day", "A cup of the soup of the day,with a side salad", false, 3.99);

		m_lstdata << MenuItem("Burrito", "A large burrito,with whole pinto beans,salsa,guacamole", false, 2.88);
	}

	virtual IIterator*	createIterator() override
	{
		return new DinerMenuIterator(m_lstdata);
	}

};