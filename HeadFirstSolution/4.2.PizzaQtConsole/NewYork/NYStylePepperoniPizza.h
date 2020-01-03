#pragma  once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

struct NYStylePepperoniPizza :public Pizza
{

	PizzaIngredientFactory*		ingredientFactory{ nullptr };
public:

	NYStylePepperoniPizza(PizzaIngredientFactory* factory)
	{
		ingredientFactory = factory;
	}

	virtual void prepare() override
	{
		QString strtmp = QStringLiteral("NYStylePepperoniPizza %1").arg(m_name);
		std::cout << strtmp.toStdString() << endl;
		m_pdough = ingredientFactory->createDough();
		m_psauce = ingredientFactory->createSauce();
		m_pcheese = ingredientFactory->createCheese();
		m_pclams = ingredientFactory->createClams();
	}
};