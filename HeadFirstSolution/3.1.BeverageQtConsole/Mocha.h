#pragma  once

#include "CondimentDecorator.h"

struct Mocha:public CondimentDecorator
{
private:
	Beverage*			m_beverage{ nullptr };
public:
	Mocha(Beverage* beverage)
		:m_beverage(beverage)
	{
		
	}

	~Mocha()
	{
		std::cout << "~Mocha" << endl;
		if (nullptr != m_beverage)
		{
			delete m_beverage;
			m_beverage = nullptr;
		}
	}

	virtual QString getDescription() override
	{
		return m_beverage->getDescription() + " Mocha";
	}


	virtual double cost() override
	{
		return 0.2 + m_beverage->cost();
	}

};

struct Milk :public CondimentDecorator
{
private:
	Beverage*			m_beverage{ nullptr };
public:
	Milk(Beverage* beverage)
		:m_beverage(beverage)
	{

	}

	~Milk()
	{
		std::cout << "~Milk"<<endl;
		if (nullptr != m_beverage)
		{
			delete m_beverage;
			m_beverage = nullptr;
		}
	}

	virtual QString getDescription() override
	{
		return m_beverage->getDescription() + " Milk";
	}


	virtual double cost() override
	{
		return 0.1 + m_beverage->cost();
	}

};

struct Soy :public CondimentDecorator
{
private:
	Beverage*			m_beverage{ nullptr };
public:
	Soy(Beverage* beverage)
		:m_beverage(beverage)
	{

	}

	~Soy()
	{
		std::cout << "~Soy" << endl;
		if (nullptr != m_beverage)
		{
			delete m_beverage;
			m_beverage = nullptr;
		}
	}

	virtual QString getDescription() override
	{
		return m_beverage->getDescription() + " Soy";
	}


	virtual double cost() override
	{
		return 0.3 + m_beverage->cost();
	}

};

struct Whip :public CondimentDecorator
{
private:
	Beverage*			m_beverage{ nullptr };
public:
	Whip(Beverage* beverage)
		:m_beverage(beverage)
	{

	}

	~Whip()
	{
		std::cout << "~Whip" << endl;
		if (nullptr != m_beverage)
		{
			delete m_beverage;
			m_beverage = nullptr;
		}
	}

	virtual QString getDescription() override
	{
		return m_beverage->getDescription() + " Whip";
	}


	virtual double cost() override
	{
		return 0.5 + m_beverage->cost();
	}

};