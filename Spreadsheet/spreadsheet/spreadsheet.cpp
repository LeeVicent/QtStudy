#include "spreadsheet.h"
#include "cell.h"

Spreadsheet::Spreadsheet(QWidget *parent) : QTableWidget(parent)
{
	//Sets the item prototype for the table to the specified item.
	setItemPrototype(new Cell);
}

Spreadsheet::~Spreadsheet()
{

}
