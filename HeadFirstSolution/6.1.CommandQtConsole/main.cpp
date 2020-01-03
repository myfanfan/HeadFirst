#include <QtCore/QCoreApplication>

#include "SimpleRemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);


	SimpleRemoteControl* remote = new SimpleRemoteControl();

	Light*	light = new Light();
	LightOnCommand*		lightcommand = new LightOnCommand(light);

	GarageDoor*	garagedoor = new GarageDoor();
	GarageDoorOpenCommand*		garagedoorOpen = new GarageDoorOpenCommand(garagedoor);

	remote->setCommand(lightcommand);
	remote->buttonWasPressed();

	remote->setCommand(garagedoorOpen);
	remote->buttonWasPressed();

	return a.exec();
}
