#pragma  once

#include <QList>
#include "MenuItem.h"
#include "IIterator.h"
#include "DinerMenuIterator.h"
#include "IMenu.h"

struct DinerMenu:public IMenu
{
	static const int MAX_ITEMS = 6;
	int numberOfItems = 0;

	QList<MenuItem>			m_lstdata;
public:
	DinerMenu()
	{
		m_lstdata << MenuItem("Vegetarian BLT", "(Fakin) Bacon with lettuce & tomato on whole wheat", true, 2.99);

		m_lstdata << MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.88);
	}

	virtual IIterator*	createIterator() override
	{
		return new DinerMenuIterator(m_lstdata);
	}
};