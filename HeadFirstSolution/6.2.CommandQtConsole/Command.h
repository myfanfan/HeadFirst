#pragma  once

#include <QString>

/*!
 * \class ÃüÁî½Ó¿Ú
 *
 * \brief 
 *
 * \author Fanyg
 * \date  2019-12-16 09:26:53
 */
struct Command
{
	virtual void execute() = 0;

	virtual QString name() = 0;

	//************************************
	// Method:    ³·Ïú
	// FullName:  Command::undo
	// Access:    virtual public 
	// Returns:   void
	// Qualifier:
	// author:    Fanyg
	// date:  	  2019-12-16 11:03:23
	//************************************
	virtual	void undo() = 0;
};