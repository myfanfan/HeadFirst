#pragma  once

#include "CaffeineBeverage.h"

struct Coffee:public CaffeineBeverage
{


	virtual void brew() override
	{
		std::cout << "Dripping Coffee through filter." << endl;
	}


	virtual void addCondiments() override
	{
		std::cout << "Adding Sugar and Milk." << endl;
	}


	virtual bool customerWantsCondiments() override
	{
		QString answer = getUserInput();
		bool flg = false;
		if (QStringLiteral("y")==answer.toLower())
		{
			flg = true;
		}
		return flg;
	}

private:
	QString getUserInput()
	{
		QString answer = "";

		string strval="";
		std::cout << "Would you like milk and sugar with your coffee (y/n)? " << endl;
		std::cin >> strval;

		answer = QString::fromStdString(strval);

		return answer;
	}

};