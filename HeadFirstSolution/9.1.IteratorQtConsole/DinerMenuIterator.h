#pragma  once

#include "IIterator.h"
#include "MenuItem.h"

#include <QList>

struct DinerMenuIterator :public IIterator
{
private:
	QList<MenuItem>				m_lstdata;
	int							m_position{ 0 };

public:
	DinerMenuIterator(const QList<MenuItem>& lstdata)
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


	virtual QVariant next() override
	{
		MenuItem  tmpdata = m_lstdata.at(m_position);
		m_position += 1;
		return QVariant::fromValue(tmpdata);
	}

};