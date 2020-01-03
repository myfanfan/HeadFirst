#include <QtCore/QCoreApplication>

#include "MallardDuck.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	Duck* mallard = new MallardDuck();

	mallard->performFly();
	mallard->performQuack();
	mallard->display(); 

	Duck* model = new ModelDuck();
	model->performFly();
	model->setFlyBehavior(new FlyRocketPowered());
	model->performFly();

	return a.exec();
}
