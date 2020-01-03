#pragma  once

struct prepareRecipe
{
	virtual void boilWater() = 0;

	virtual void brew() = 0;

	virtual void pourInCup() = 0;

	virtual void addCondiments() = 0;
};