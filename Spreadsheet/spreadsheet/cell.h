#ifndef CELL_H_
#define CELL_H_

#include <QTableWidgetItem>

class Cell : public QTableWidgetItem
{
	//QTableWidgetItem没有继承自QObject  所以没有Q_OBJECT
	//Q_OBJECT

private:


public:
	Cell();
	void setDirty();

};


#endif // CELL_H_
