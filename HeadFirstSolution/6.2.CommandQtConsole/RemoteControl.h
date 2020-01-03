#pragma once
  
#include <QMap>
#include <tuple>
#include <iostream>
#include <stdio.h>
using namespace std;

#include "Command.h"
#include "NoCommand.h"

class RemoteControl
{
private:
	QMap<quint64, std::tuple<quint64, Command*, Command*>>		 m_map_command;
	Command*				m_undoCommand{ nullptr };
public:
	RemoteControl()
	{
		Command* nocommand = new NoCommand();
		m_map_command.clear();
		m_undoCommand = nocommand;
	}

	void	setCommand(quint64 iSolt, Command* onCommand, Command* offCommand)
	{
		m_map_command.insert(iSolt, std::make_tuple(iSolt, onCommand, offCommand));
	}

	void	onButtonWasPushed(int islot)
	{
		if (m_map_command.contains(islot))
		{
			Command*	tmpcommand{ nullptr };
			std::tie(std::ignore, tmpcommand, std::ignore) = m_map_command.value(islot);
			tmpcommand->execute();
			m_undoCommand = tmpcommand;
		}
	}
	
	void	offButtonWasPushed(int islot)
	{
		if (m_map_command.contains(islot))
		{
			Command*	tmpcommand{ nullptr };
			std::tie(std::ignore, std::ignore, tmpcommand) = m_map_command.value(islot);
			tmpcommand->execute();
			m_undoCommand = tmpcommand;
		}
	}

	void	undoButtonWasPushed()
	{
		m_undoCommand->undo();
	}

	QString toString()
	{
		QStringList strlist;

		QList<std::tuple<quint64, Command*, Command*>>			tmplst = m_map_command.values();

		quint64  isolt = 0;
		Command*	oncommand = nullptr;
		Command*	offcommand = nullptr;
		for each (auto item in tmplst)
		{
			std::tie(isolt, oncommand, offcommand) = item;
			strlist.append(QStringLiteral("[slot:%1] %2 %3").arg(isolt).arg(oncommand->name()).arg(offcommand->name()));
		}

		return strlist.join("\n");
	}
};