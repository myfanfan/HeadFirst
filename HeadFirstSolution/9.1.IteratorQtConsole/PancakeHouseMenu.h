#pragma  once

#include <QList>
#include "MenuItem.h"
#include "IIterator.h"
#include "DinerMenuIterator.h"
#include "IMenu.h"

struct PancakeHouseMenu:public IMenu
{
	static const int MAX_ITEMS = 6;
	int numberOfItems = 0;

	QList<MenuItem>			m_lstdata;
public:
	PancakeHouseMenu()
	{
		m_lstdata << MenuItem("K&B's Pancake Breadfast", "Pancakes whith scrambled eggs,and toast", true, 2.99);
	}

	virtual IIterator*	createIterator() override
	{
		return new DinerMenuIterator(m_lstdata);
	}
};