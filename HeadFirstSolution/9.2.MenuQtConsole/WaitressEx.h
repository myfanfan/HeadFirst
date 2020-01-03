#pragma once
 

#include "MenuComponent.h"

struct WaitressEx
{
	MenuComponent*    allMenuns{ nullptr };

public:
	WaitressEx( MenuComponent* data)
	{
		allMenuns = data;
	}

	void	printMenu()
	{
		allMenuns->print();
	}
};