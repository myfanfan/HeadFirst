#include <QtCore/QCoreApplication>

#include "LightOnCommand.h"
#include "GarageDoorOpenCommand.h"
#include "CeilingFanCommand.h"
#include "StereoOnWithCDCommand.h"
#include "StereoOffCommand.h"

#include "RemoteControl.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	/*
	RemoteControl*		remoteControl = new RemoteControl();
	Light*	livingRoomLight = new Light("Living Room");
	Light*	kitchenLight = new Light("Kitchen");

	CeilingFan*		ceilingfan = new CeilingFan("Living Room");
	GarageDoor*		garageDoor = new GarageDoor("");

	Stereo*			stereo = new Stereo("Living Room");

	LightOnCommand*		livingRoomOn = new LightOnCommand(livingRoomLight);
	LightOffCommand*	livingRoomOff = new LightOffCommand(livingRoomLight);

	LightOnCommand*		kitchenLightOn = new LightOnCommand(kitchenLight);
	LightOffCommand*	kitchenLightOff = new LightOffCommand(kitchenLight);

	CeilingFanOnCommand*	ceilingOn = new CeilingFanOnCommand(ceilingfan);
	CeilingFanOffCommand*	ceilingOff = new CeilingFanOffCommand(ceilingfan);

	GarageDoorOpenCommand*	garageDoorOpen = new GarageDoorOpenCommand(garageDoor);
	GarageDoorCloseCommand*	garageDoorClose = new GarageDoorCloseCommand(garageDoor);

	StereoOnWithCDCommand*	stereoOn = new StereoOnWithCDCommand(stereo);
	StereoOffCommand*			stereoOff = new StereoOffCommand(stereo);

	remoteControl->setCommand(0, livingRoomOn, livingRoomOff);
	remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);

	remoteControl->setCommand(2, ceilingOn, ceilingOff);
	remoteControl->setCommand(3, garageDoorOpen, garageDoorClose);
	remoteControl->setCommand(4, stereoOn, stereoOff);

	QString strmsg = remoteControl->toString();
	std::cout << strmsg.toStdString() << endl;

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->undoButtonWasPushed();//³·ÏúÃüÁî

	remoteControl->onButtonWasPushed(1);
	remoteControl->offButtonWasPushed(1);

	remoteControl->onButtonWasPushed(2);
	remoteControl->offButtonWasPushed(2);

	remoteControl->onButtonWasPushed(3);
	remoteControl->offButtonWasPushed(3);
	remoteControl->undoButtonWasPushed();//³·ÏúÃüÁî
	*/


	RemoteControl*	remoteControl = new RemoteControl;

	CeilingFan*		ceilingFan = new CeilingFan("Living Room");

	CeilingFanLowCommand*		ceilingFanLow = new CeilingFanLowCommand(ceilingFan);
	CeilingFanMediumCommand*	ceilingFanMedium = new CeilingFanMediumCommand(ceilingFan);
	CeilingFanHighCommand*		ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
	CeilingFanOffCommand*		ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

	remoteControl->setCommand(0, ceilingFanLow, ceilingFanOff);
	remoteControl->setCommand(1, ceilingFanMedium, ceilingFanOff);
	remoteControl->setCommand(2, ceilingFanHigh, ceilingFanOff);

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);

	remoteControl->undoButtonWasPushed();
		
	remoteControl->onButtonWasPushed(1);
	remoteControl->undoButtonWasPushed();

	return a.exec();
}
