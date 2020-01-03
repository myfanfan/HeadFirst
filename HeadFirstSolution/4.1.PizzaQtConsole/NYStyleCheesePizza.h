#pragma once

#include "Pizza.h"


struct NYStyleCheesePizza
	:public Pizza
{
public:
	NYStyleCheesePizza()
	{
		m_name = QStringLiteral("NY Style Sauce and Cheese Pizza.");
		m_dough = QStringLiteral("Thin Crust Dough.");
		m_sauce = QStringLiteral("Marinara Sauce");
		m_toppings.append(QStringLiteral("Grated Reggiano  Cheese"));
	}
};

struct NYStyleVeggiePizza
	:public Pizza
{
public:
	NYStyleVeggiePizza()
	{
		m_name = QStringLiteral("NY Style Sauce and Veggie Pizza.");
		m_dough = QStringLiteral("Thin Crust Dough.");
		m_sauce = QStringLiteral("Marinara Sauce");
		m_toppings.append(QStringLiteral("Grated Reggiano  Veggie"));
	}
};


struct NYStyleClamPizza
	:public Pizza
{
public:
	NYStyleClamPizza()
	{
		m_name = QStringLiteral("NY Style Sauce and Clam Pizza.");
		m_dough = QStringLiteral("Thin Crust Dough.");
		m_sauce = QStringLiteral("Marinara Sauce");
		m_toppings.append(QStringLiteral("Grated Reggiano  Clam"));
	}
};

struct NYStylePepperoniPizza
	:public Pizza
{
public:
	NYStylePepperoniPizza()
	{
		m_name = QStringLiteral("NY Style Sauce and Pepperoni Pizza.");
		m_dough = QStringLiteral("Thin Crust Dough.");
		m_sauce = QStringLiteral("Marinara Sauce");
		m_toppings.append(QStringLiteral("Grated Reggiano  Pepperoni"));
	}
};



struct ChicagoStyleCheesePizza
	:public Pizza
{
	ChicagoStyleCheesePizza()
	{
		m_name = QStringLiteral("Chicago Style Deep Dish Cheese Pizza.");
		m_dough = QStringLiteral("Extra Thick Crust Dough.");
		m_sauce = QStringLiteral("Plum Tomato Sauce");
		m_toppings.append(QStringLiteral("Shredded Mozzarella  Cheese"));
	}

	void	cut()
	{
		std::cout << "Cutting the pizza into square slices" << endl;
	}
};

struct ChicagoStyleVeggiePizza
	:public Pizza
{
	ChicagoStyleVeggiePizza()
	{
		m_name = QStringLiteral("Chicago Style Deep Dish Veggie Pizza.");
		m_dough = QStringLiteral("Extra Thick Crust Dough.");
		m_sauce = QStringLiteral("Plum Tomato Sauce");
		m_toppings.append(QStringLiteral("Shredded Mozzarella  Veggie"));
	}

	void	cut()
	{
		std::cout << "Cutting the pizza into square slices" << endl;
	}
};

struct ChicagoStyleClamPizza
	:public Pizza
{
	ChicagoStyleClamPizza()
	{
		m_name = QStringLiteral("Chicago Style Deep Dish Clam Pizza.");
		m_dough = QStringLiteral("Extra Thick Crust Dough.");
		m_sauce = QStringLiteral("Plum Tomato Sauce");
		m_toppings.append(QStringLiteral("Shredded Mozzarella  Clam"));
	}

	void	cut()
	{
		std::cout << "Cutting the pizza into square slices" << endl;
	}
};

struct ChicagoStylePepperoniPizza
	:public Pizza
{
	ChicagoStylePepperoniPizza()
	{
		m_name = QStringLiteral("Chicago Style Deep Dish Pepperoni Pizza.");
		m_dough = QStringLiteral("Extra Thick Crust Dough.");
		m_sauce = QStringLiteral("Plum Tomato Sauce");
		m_toppings.append(QStringLiteral("Shredded Mozzarella  Pepperoni"));
	}

	void	cut()
	{
		std::cout << "Cutting the pizza into square slices" << endl;
	}
};