#pragma once

#include "Observable.h"
#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class CurrentConditionDisplay
	:public Observer
	,public DisplayElement
{
private: 
	Observable*		m_observer;
	float					m_tempereture;
	float					m_humidity;
public:
	CurrentConditionDisplay(Observable* observable)
		:m_observer(observable)
	{
		m_observer->addObserver(this);
	}



	virtual void update(Observable* o, QVariant arg) override
	{
		WeatherData* weatherdata = static_cast<WeatherData*>(o);
		if (nullptr != weatherdata)
		{
			this->m_tempereture = weatherdata->getTemperature();
			this->m_humidity = weatherdata->getHumidity();
			display();
		}
	}

	virtual void display()override
	{
		std::cout << "Current conditions:";
		std::cout << m_tempereture;
		std::cout << "F degress and ";
		std::cout << m_humidity;
		std::cout << "% humidity" << endl;
	}

};