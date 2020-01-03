#pragma once

#include "Turkey.h"
#include "Duck.h"

class DuckAdapter:Turkey
{
	Duck*			m_pduck{ nullptr };
public:

	DuckAdapter(Duck* _duck)
	{
		m_pduck = _duck;
	}

	virtual void gobble() override
	{
		if (nullptr != m_pduck)
		{
			m_pduck->quack();
		}
	}


	virtual void fly() override
	{
		if (nullptr != m_pduck)
		{
			m_pduck->fly();
		}
	}

};