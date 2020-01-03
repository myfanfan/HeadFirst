#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"


/*!
 * \class ∏ÚÚ€±»»¯
 *
 * \brief 
 *
 * \author Fanyg
 * \date  2019-12-11 09:46:49
 */
struct NYStyleClamPizza :public Pizza
{

	PizzaIngredientFactory*		ingredientFactory{ nullptr };
public:

	NYStyleClamPizza(PizzaIngredientFactory* factory)
	{
		ingredientFactory = factory;
	}

	virtual void prepare() override
	{
		QString strtmp = QStringLiteral("NYStyleClamPizza %1").arg(m_name);
		std::cout << strtmp.toStdString() << endl;
		m_pdough = ingredientFactory->createDough();
		m_psauce = ingredientFactory->createSauce();
		m_pcheese = ingredientFactory->createCheese();
		m_pclams = ingredientFactory->createClams();
	}

};