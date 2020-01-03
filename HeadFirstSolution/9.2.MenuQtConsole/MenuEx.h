#pragma once

#include <QList>
#include "MenuComponent.h"


struct MenuEx:public MenuComponent
{
	QList<MenuComponent*>		m_lstdata;
	QString mName{ "" };
	QString mDescription{ "" };

	MenuEx(const QString& name, const QString& description)
		:mName(name)
		, mDescription(description)
	{

	}

	virtual void add(MenuComponent* menu) override
	{
		m_lstdata.append(menu);
	}


	virtual void remove(MenuComponent* menu) override
	{
		m_lstdata.removeOne(menu);
	}


	virtual MenuComponent* getChild(int i) override
	{
		MenuComponent* tmpdata=nullptr;
		if (m_lstdata.count() <i)
		{
			tmpdata = m_lstdata.at(i);
		}
		return tmpdata;
	}


	virtual QString getName() override
	{
		return mName;
	}


	virtual QString getDescription() override
	{
		return mDescription;
	}


	virtual void print() override
	{
		QString strmsg = QStringLiteral("  %1").arg(getName());
		strmsg.append(QStringLiteral(", %1 ----------------").arg(getDescription()));
		std::cout << strmsg.toStdString() << endl;

		for each (MenuComponent* var in m_lstdata)
		{
			var->print();
		}
	}


	virtual IIterator* createIterator() override
	{
		return new CompositeIterator(m_lstdata);
	}

};