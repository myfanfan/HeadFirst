#include <QtCore/QCoreApplication>

#include "MallardDuck.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"

void	testDuck(Duck* _duck)
{
	if (nullptr != _duck)
	{
		_duck->quack();
		_duck->fly();
	}
}

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	MallardDuck*		duck = new MallardDuck();
	WildTurkey*			turkey = new WildTurkey();

	Duck*	turkeyAdapter = new TurkeyAdapter(turkey);
	std::cout << "The Turkey says..." << endl;
	turkey->gobble();
	turkey->fly();

	std::cout << "The Duck says..." << endl;
	testDuck(duck);


	std::cout << "The TurkeyAdapter says..." << endl;
	testDuck(turkeyAdapter);


	return a.exec();
}
