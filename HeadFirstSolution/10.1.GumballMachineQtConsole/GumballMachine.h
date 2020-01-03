#pragma once

#include <QString>
#include <qglobal.h>
#include <iostream>
#include <stdio.h>
using namespace std;

struct GumballMachine
{
public:
	enum MyEnum
	{
		SOLD_OUT = 0,//售出糖果
		NO_QUARTER = 1,//没有25分
		HAS_QUARTER=2,//有25分
		SOLD=3,//售罄糖果
	};

private:
	quint64				m_state{ SOLD };
	quint64				m_count{ 0 };

public:
	GumballMachine(quint64 _count)
		:m_count(_count)
	{
		if (m_count>0)
		{
			m_state = NO_QUARTER;
		}
	}

	//************************************
	// Method:    投入25分钱
	// FullName:  GumballMachine::insertQuarter
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// author:    Fanyg
	// date:  	  2019-12-19 14:53:18
	//************************************
	void	insertQuarter()
	{
		if (HAS_QUARTER == m_state)
		{
			std::cout << "You can't insert another quarter." << endl;
		}
		else if (NO_QUARTER==m_state)
		{
			m_state = HAS_QUARTER;
			std::cout << "You inserted a quarter." << endl;
		}
		else if (SOLD_OUT==m_state)
		{
			std::cout << "You can't insert a quarter,the machine is sold out." << endl;
		}
		else if (SOLD==m_state)
		{
			std::cout << "Please wait,we're already giving you a gumball." << endl;
		}
	}

	//************************************
	// Method:    顾客试着退回25分钱
	// FullName:  GumballMachine::ejectQuarter
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// author:    Fanyg
	// date:  	  2019-12-19 14:53:49
	//************************************
	void ejectQuarter()
	{
		if (HAS_QUARTER == m_state)
		{
			std::cout << "Quarter returned." << endl;
			m_state = NO_QUARTER;
		}
		else if (NO_QUARTER == m_state)
		{
			std::cout << "You haven't inserted a quarter." << endl;
		}
		else if (SOLD_OUT == m_state)
		{
			std::cout << "You can't eject,you haven't inserted a quarter yet." << endl;
		}
		else if (SOLD == m_state)
		{
			std::cout << "Sorry,you already turned the crank." << endl;
		}
	}

	//************************************
	// Method:    顾客试着转动曲柄
	// FullName:  GumballMachine::turnCrank
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// author:    Fanyg
	// date:  	  2019-12-19 14:54:47
	//************************************
	void	turnCrank()
	{
		if (SOLD==m_state)
		{
			std::cout << "Turning twice doesn't get you another gumball!" << endl;
		}
		else if (NO_QUARTER==m_state)
		{
			std::cout << "You turned but there's no quarter" << endl;
		}
		else if (SOLD_OUT==m_state)
		{
			std::cout << "You turned,but there are no gumballs" << endl;
		}
		else if (HAS_QUARTER==m_state)
		{
			std::cout << "You turned..." << endl;
			m_state = SOLD;
			dispense();
		}
	}

	void dispense()
	{
		if (SOLD==m_state)
		{
			std::cout << "A gumball comes rolling out the slot." << endl;
			m_count = m_count - 1;
			if (0==m_count)
			{
				std::cout << "Oops,out of gumballs!" << endl;
				m_state = SOLD_OUT;
			}
			else
			{
				m_state = NO_QUARTER;
			}
		}
		else if (NO_QUARTER==m_state)
		{
			std::cout << "You need to pay first" << endl;
		}
		else if (SOLD_OUT==m_state)
		{
			std::cout << "No gumball dispensed." << endl;
		}
		else if (HAS_QUARTER==m_state)
		{
			std::cout << "No gumball dispensed." << endl;
		}
	}

	QString toString()
	{
		QString strmsg = QStringLiteral("<<-----------------------------\nMighty Gumball,Inc. \nInventory: %1 gumballs. \nMachine is waiting for quarter.\n----------------------------->>\n").arg(m_count);
		//std::cout << strmsg.toStdString() << endl;
		return strmsg;
	}

	void	printMathineState()
	{
		std::cout << toString().toStdString() << endl;
	}
};