#include "qtstudy.h"
#include <QApplication>
#include "widgets\buttons.h"
#include "widgets\main_window.h"
#include "widgets\frames.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow m;
	m.show();
	return a.exec();
}
