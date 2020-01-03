#pragma  once

#include <iostream>
#include <stdio.h>

using namespace std;



struct Observer
{
public:
	virtual void	update(float temp, float humidity, float pressure) = 0;
};