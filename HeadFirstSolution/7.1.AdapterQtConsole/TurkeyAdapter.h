#pragma  once

#include "Duck.h"
#include "Turkey.h"
//
class TurkeyAdapter:public Duck
{
	Turkey*			m_turkeyAdapter{ nullptr };
public:
	TurkeyAdapter(Turkey* turkey)
	{
		m_turkeyAdapter = turkey;
	}

	virtual void quack() override
	{
		if (nullptr != m_turkeyAdapter)
		{
			m_turkeyAdapter->gobble();
		}
	}


	virtual void fly() override
	{
		if (nullptr != m_turkeyAdapter)
		{
			for (int i = 0; i < 5; ++i)
			{
				m_turkeyAdapter->fly();
			}
		}
	}
};