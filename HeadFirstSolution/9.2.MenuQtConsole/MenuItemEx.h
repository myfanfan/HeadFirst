#pragma  once

#include "MenuComponent.h"
#include "NullIterator.h"

struct MenuItemEx:public MenuComponent
{
	QString mName{ "" };
	QString mDescription{""};
	bool	mIsVegetarian{ false };
	double	mPrice{ 0 };
public:
	MenuItemEx(const QString& name, const QString& description, bool vegetarian, double price)
		: mName(name)
		, mDescription(description)
		, mIsVegetarian(vegetarian)
		, mPrice(price)
	{

	}

	virtual QString getName() override
	{
		return mName;
	}


	virtual QString getDescription() override
	{
		return mDescription;
	}


	virtual double getPrice() override
	{
		return mPrice;
	}


	virtual bool isVegetarian() override
	{
		return mIsVegetarian;
	}


	virtual void print() override
	{
		QString strmsg = QStringLiteral("  %1").arg(getName());

		if (mIsVegetarian)
		{
			strmsg.append("(v)");
		}

		strmsg.append(QStringLiteral(", %1 ----%2").arg(getPrice()).arg(getDescription()));
		std::cout << strmsg.toStdString() << endl;
	}


	virtual IIterator* createIterator() override
	{
		return new NullIterator();
	}

};