#pragma  once

#include <iostream>
#include <stdio.h>

using namespace std;

class Observable;

struct Observer
{
public:
	virtual void	update(Observable* o,QVariant arg) = 0;
};