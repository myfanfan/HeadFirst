#pragma once

#include <QString>
#include <QList>
#include <stdio.h>
#include <iostream>
using namespace std;
#include "Dough.h"

struct Pizza
{
	QString					m_name;
	Dough*					m_pdough{ nullptr };
	Sauce*					m_psauce{ nullptr };
	QList<Veggies*>			m_plstdata;
	Cheese*					m_pcheese{ nullptr };
	Pepperoni*				m_pepperoni{ nullptr };
	Clams*					m_pclams{ nullptr };

	//************************************
	// Method:    ±ÈÈø ×é³É
	// FullName:  Pizza::prepare
	// Access:    virtual public 
	// Returns:   void
	// Qualifier:
	// author:    Fanyg
	// date:  	  2019-12-11 10:48:05
	//************************************
	virtual	void	prepare() = 0;

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

	void	setName(const QString& name)
	{
		m_name = name;
	}

	QString getName()
	{
		return m_name;
	}

	QString toString()
	{
		return "";
	}
};