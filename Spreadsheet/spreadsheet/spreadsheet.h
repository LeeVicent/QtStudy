#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QTableWidget>

class Cell;
class Spreadsheet : public QTableWidget
{
	Q_OBJECT
	
public:
	Spreadsheet(QWidget *parent = 0);
	~Spreadsheet();

private:

};

#endif // SPREADSHEET_H
