#pragma  once 

#include "IIterator.h"

struct NullIterator:public IIterator
{



	virtual bool hasNext() override
	{
		return false;
	}


	virtual MenuComponent* next() override
	{
		return nullptr;
	}


	virtual void remove() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

};