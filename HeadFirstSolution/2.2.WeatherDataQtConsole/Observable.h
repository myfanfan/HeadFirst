#pragma once
#include "Observer.h"
#include <QList>
#include <QVariant>

struct Observable
{
private:
	bool					m_changed{ false };
	QList<Observer*>		m_lst;
public:
	void	addObserver(Observer* o)
	{
		if (nullptr != o)
		{
			if (!m_lst.contains(o))
			{
				m_lst.append(o);
			}
		}
	}

	void	deleteObserver(Observer* o)
	{
		m_lst.removeOne(o);
	}

	void	deleteObservers()
	{
		m_lst.clear();
	}

	void notifyObserver()
	{
		notifyObserver(0);
	}

	void	notifyObserver(QVariant arg)
	{
		if (!m_changed)
		{
			return;
		}

		clearChanged();

		for (Observer* item : m_lst)
		{
			item->update(this, arg);
		}
	}

	void	setChanged()
	{
		m_changed = true;
	}

	void	clearChanged()
	{
		m_changed = false;
	}

	bool	hasChanged()
	{
		return m_changed;
	}
};