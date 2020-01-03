#pragma once

#include <QList>

#include "Subject.h"
#include "Observer.h"

class WeatherData :public Subject
{
private:
	QList<Observer*>		m_observers;
	float					m_tempereture;
	float					m_humidity;
	float					m_pressure;
public:
	WeatherData()
	{
		m_observers.clear();
	}

	virtual void registerObserver(Observer* o) override
	{
		m_observers.append(o);
	}


	virtual void removeObserver(Observer* o) override
	{
		m_observers.removeOne(o);
	}


	virtual void notifyObserver() override
	{
		for each (Observer* item in m_observers)
		{
			item->update(m_tempereture, m_humidity, m_pressure);
		}
	}

	void	measurementsChanged()
	{
		notifyObserver();
	}

	void	setMeasurements(float temperature, float humidity, float pressure)
	{
		m_tempereture = temperature;
		m_humidity = humidity;
		m_pressure = pressure;
		measurementsChanged();
	}
};