#include "mainwindow.h"
#include "spreadsheet/spreadsheet.h"
#include <QApplication>
#include <QTableWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow m;
	m.show();
	
	Spreadsheet s;
	s.show();
	//QTableWidget q;
	//q.show();

	return a.exec();
}
