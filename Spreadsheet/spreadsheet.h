#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QtWidgets/QMainWindow>
#include "ui_spreadsheet.h"

class Spreadsheet : public QMainWindow
{
	Q_OBJECT

public:
	Spreadsheet(QWidget *parent = 0);
	~Spreadsheet();

private:
	Ui::SpreadsheetClass ui;
};

#endif // SPREADSHEET_H
