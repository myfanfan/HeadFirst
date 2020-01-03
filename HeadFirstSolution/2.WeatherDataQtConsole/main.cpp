#include <QtCore/QCoreApplication>

#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	WeatherData* weatherdata = new WeatherData;
	CurrentConditionDisplay* currentDisplay = new CurrentConditionDisplay(weatherdata);
	StatisticsDisplay*			staticsDisplay = new StatisticsDisplay(weatherdata);
	ForecastDisplay*			foreacastDisplay = new ForecastDisplay(weatherdata);


	weatherdata->setMeasurements(80, 65, 30.4f);
	weatherdata->setMeasurements(82, 70, 29.4f);
	weatherdata->setMeasurements(78, 90, 25.3f);

	return a.exec();
}
