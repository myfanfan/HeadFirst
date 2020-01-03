#pragma once

#include <QVariant>

class MenuComponent;

struct IIterator
{
	virtual bool				hasNext()=0;
	virtual MenuComponent*		next() = 0;
	virtual void				remove() = 0;
};