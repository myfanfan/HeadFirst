#pragma  once

#include "FlyBehavior.h"
#include "QuackBehavior.h"


struct Duck
{
protected:
	FlyBehavior*			m_pFly{ nullptr };
	QuackBehavior*			m_pQuack{ nullptr };

public:
	Duck()
	{
		;
	}

	~Duck()
	{
		if (nullptr != m_pFly)
		{
			delete m_pFly;
			m_pFly = nullptr;
		}
		if (nullptr != m_pQuack)
		{
			delete m_pQuack;
			m_pQuack = nullptr;
		}
	}

	void	setFlyBehavior(FlyBehavior* fb)
	{
		if (nullptr != m_pFly)
		{
			delete m_pFly;
			m_pFly = nullptr;
		}
		m_pFly = fb;
	}

	void	setQuackBehavior(QuackBehavior* qb)
	{
		if (nullptr != m_pQuack)
		{
			delete m_pQuack;
			m_pQuack = nullptr;
		}
		m_pQuack = qb;
	}

	virtual void	display() = 0;

	void	performFly()
	{
		if (nullptr != m_pFly)
		{
			m_pFly->fly();
		}
	}

	void	performQuack()
	{
		if (nullptr != m_pQuack)
		{
			m_pQuack->quack();
		}
	}

	void	swim()
	{
		std::cout << "All ducks float, even decoys!";
	}
};
