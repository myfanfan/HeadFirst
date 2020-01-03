#pragma once

#include "IIterator.h"

struct IMenu
{
	virtual IIterator* createIterator() = 0;
};