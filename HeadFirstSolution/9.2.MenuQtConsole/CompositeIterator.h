#pragma  once

#include "IIterator.h"
#include <QList>

struct CompositeIterator:public IIterator
{
private:
	QList<MenuComponent*>			m_lstdata;
	int							m_position{ 0 };
public:
	CompositeIterator(const QList<MenuComponent*>& lstdata)
	{
		m_lstdata.clear();
		m_lstdata.append(lstdata);
	}

	virtual bool hasNext() override
	{
		bool flg = false;
		do
		{
			if (m_lstdata.length() <= 0)
			{
				break;
			}

			if (m_position >= m_lstdata.length())
			{
				flg = false;
			}
			else
			{
				flg = true;
			}
		} while (false);
		return flg;
	}


	virtual MenuComponent* next() override
	{
		MenuComponent* tmpdata = nullptr;
		if (hasNext())
		{
			tmpdata = m_lstdata.at(m_position);
			m_position += 1;
		}
		return tmpdata;
	}


	virtual void remove() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

};