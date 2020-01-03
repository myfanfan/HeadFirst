#pragma once

#include <QString>
#include <QStringList>

#include <iostream>
#include <stdio.h>
using namespace std;

struct Pizza
{
	QString					m_name;//名称
	QString					m_dough;//面团类型
	QString					m_sauce;//酱料类型
	QStringList				m_toppings;//一套佐料

	void prepare()
	{
		//QString	strmsg = QStringLiteral("Preparing %1 Tossing dough... Adding sauce.. ");
		std::cout << "Preparing ";
		std::cout << m_name.toStdString() << endl;

		std::cout << "Tossing dough..."<<endl;
		std::cout << m_dough.toStdString() << endl;

		std::cout << "Adding sauce..." << endl;
		std::cout << m_sauce.toStdString() << endl;

		std::cout << "Adding toppings:" << endl;

		for each (const QString& var in m_toppings)
		{
			std::cout << var.toStdString() << endl;
		}
	}

	void	bake()
	{
		std::cout << "Bake for 25 minutes at 350 " << endl;
	}

	void cut()
	{
		std::cout << "Cutting the pizza into diagonal slices " << endl;
	}

	void	box()
	{
		std::cout << "Place pizza in official pizzaStore box " << endl;
	}

	QString getName()
	{
		return m_name;
	}
};