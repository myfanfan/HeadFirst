#include <QtCore/QCoreApplication>

#include "Singleton.h"

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);


	auto val= Singleton::Ins()->add(10);

	std::cout << QString::number(val).toStdString() << endl;

	auto val2 = Singleton::Ins()->fac(10);

	std::cout << QString::number(val2).toStdString() << endl;

	return a.exec();
}
