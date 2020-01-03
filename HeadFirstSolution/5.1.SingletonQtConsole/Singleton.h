#pragma  once

#include <QMutex>
#include <QMutexLocker>
#include <math.h>


#include <iostream>
#include <stdio.h>
using namespace std;
/*!
 * \class ������
 *
 * \brief 
 *
 * \author Fanyg
 * \date  2019-12-11 15:04:20
 */
class Singleton
{
private:
	//����  ��Ҫ����
	static Singleton* uniqueInstance;

	Singleton()
	{

	}
	//����  ��Ҫ����
	static QMutex		m_mutex;
public:
	static  Singleton*	Ins()
	{
		if (nullptr == uniqueInstance)
		{
			QMutexLocker locker(&m_mutex);
			if (nullptr == uniqueInstance)
			{
				uniqueInstance = new Singleton();
			}
		}
		return uniqueInstance;
	}
public:
	quint64			addData(int x, int y)
	{
		return x * y;
	}

	quint64			fac(quint64 x)
	{
		quint64  ival = 0;

		if (0 == x || 1 == x)
		{
			ival = 1;
			std::cout << QString::number(x).toStdString() << endl;
		}
		else
		{
			std::cout << QString::number(x).toStdString()+" * ";
			ival = fac(x - 1) * x;
		}

		return ival;
	}

	quint64			add(quint64 x)
	{
		quint64 ival = 0;

		if (0 == x || 1==x)
		{
			ival = 1;
			std::cout << QString::number(x).toStdString() << endl;
		}
		else
		{
			std::cout << QString::number(x).toStdString() + " + ";
			ival = add(x - 1) + x;
		}

		return ival;
	}
};
//������
Singleton* Singleton::uniqueInstance;
//������
QMutex Singleton::m_mutex;
