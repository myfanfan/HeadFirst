#pragma once

#include <QString>
#include <QStringList>

#include <iostream>
#include <stdio.h>
using namespace std;

struct Pizza
{
	QString					m_name;//����
	QString					m_dough;//��������
	QString					m_sauce;//��������
	QStringList				m_toppings;//һ������

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