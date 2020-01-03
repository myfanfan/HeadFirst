#pragma  once

#include <iostream>
#include <stdio.h>
using namespace std;

/*!
 * \class 咖啡因饮料基类
 *
 * \brief 
 *
 * \author Fanyg
 * \date  2019-12-17 15:28:22
 */
struct CaffeineBeverage
{
public:
	virtual void	prepareRecipe() final
	{
		boilWater();
		brew();
		pourInCup();
		if (customerWantsCondiments())
		{
			addCondiments();
		}
	}

	virtual void boilWater()
	{
		std::cout << "Boiling water." << endl;
	}

	virtual void brew() = 0;

	virtual void pourInCup()
	{
		std::cout << "Pouring into cup." << endl;
	}

	virtual void addCondiments() = 0;

	//勾子
	virtual bool customerWantsCondiments()
	{
		return true;
	}
};