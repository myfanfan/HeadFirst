#pragma once

#include "Observable.h"

class WeatherData :public Observable
{
private:
	float					m_tempereture;
	float					m_humidity;
	float					m_pressure;
public:
	WeatherData()
	{
		;
	}

	void	measurementChanged()
	{
		setChanged();
		notifyObserver();
	}

	void	setMeasurements(float temperature, float humidity, float pressure)
	{
		m_tempereture = temperature;
		m_humidity = humidity;
		m_pressure = pressure;
		measurementChanged();
	}

	float getTemperature()
	{
		return m_tempereture;
	}

	float getHumidity()
	{
		return m_humidity;
	}

	float getPressure()
	{
		return m_pressure;
	}
};