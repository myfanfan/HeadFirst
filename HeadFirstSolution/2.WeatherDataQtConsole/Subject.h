#pragma once

#include "Observer.h"

struct Subject
{
public: 
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObserver() = 0;
};