#pragma once

#include <QtCore/QString>

#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class StatisticsDisplay
	:public Observer
	, public DisplayElement
{
private:
	float					m_tempereture;
	float					m_humidity;
	//float					m_pressure;
	Subject*				m_subject{ nullptr };

public:
	StatisticsDisplay(Subject* weatherdata)
		:m_subject(weatherdata)
	{
		if (nullptr != m_subject)
		{
			m_subject->registerObserver(this);
		}
	}

	virtual void update(float temp, float humidity, float pressure) override
	{
		this->m_tempereture = temp;
		this->m_humidity = humidity;
		this->display();
		//throw std::logic_error("The method or operation is not implemented.");
	}


	virtual void display() override
	{
		std::cout << "Statistics conditions:";
		std::cout << m_tempereture;
		std::cout << "F degress and ";
		std::cout << m_humidity;
		std::cout << "% humidity" << endl;
	}

};