#pragma once

#include <QVariant>

struct IIterator
{
	virtual bool			hasNext()=0;
	virtual QVariant		next()=0;
};