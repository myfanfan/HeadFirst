#pragma  once

#include <QString>
#include <QMetaType>

struct MenuItem
{
	QString			m_name;
	QString			m_description;
	bool			m_vegetarian;
	double			m_price;

public:
	MenuItem()
	{

	}

	MenuItem(const QString& name, const QString& description, bool vegetarian, double price)
		:m_name(name)
		, m_description(description)
		, m_vegetarian(vegetarian)
		, m_price(price)
	{
	
	}

	QString getName()
	{
		return m_name;
	}

	QString getDescription()
	{
		return m_description;
	}

	double getPrice()
	{
		return m_price;
	}

	bool getVegetarian()
	{
		return m_vegetarian;
	}
};

Q_DECLARE_METATYPE(MenuItem)