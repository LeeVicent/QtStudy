#ifndef CELL_H_
#define CELL_H_

#include <QTableWidgetItem>

class Cell : public QTableWidgetItem
{
	//QTableWidgetItemû�м̳���QObject  ����û��Q_OBJECT
	//Q_OBJECT

private:


public:
	Cell();
	void setDirty();

};


#endif // CELL_H_
