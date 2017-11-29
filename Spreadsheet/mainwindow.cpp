#include "mainwindow.h"
#include "spreadsheet\spreadsheet.h"
#include "stdafx.h"
#include <QColorDialog>


//�˵�ѡ�����
#define CREATE_ACTION(objectName, diaplayName, icon, shortcut, slot)\
{\
    objectName = new QAction(tr(diaplayName), this);\
    objectName->setIcon(QIcon(icon));\
    objectName->setShortcut(QKeySequence::shortcut);\
    connect(objectName, SIGNAL(triggered()), this, SLOT(slot));\
\
}


//private:
void MainWindow::createActions()
{
	newAction = new QAction(tr("�½�(&N)"), this);
	newAction->setIcon(QIcon(":/Resources/newfile.png"));
	newAction->setShortcut(QKeySequence::New);
	connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));

    //#define CREATE_ACTION(objectName, diaplayName, icon, shortcut, slot)
	CREATE_ACTION(openAction, "��(&O)", ":/Resources/openfile.png", Open, openFile());
	CREATE_ACTION(saveAction, "����(&S)", ":/Resources/savefile.png", Save, saveFile());
}

void MainWindow::createMenus()
{
	fileMenu = menuBar()->addMenu(tr("�ļ�(&F)"));
	fileMenu->addAction(newAction);
	fileMenu->addAction(openAction);
	fileMenu->addAction(saveAction);

	editMenu = menuBar()->addMenu(tr("�༭(&E)"));
	toolMenu = menuBar()->addMenu(tr("����(&T)"));
	optionMenu = menuBar()->addMenu(tr("����(&E)"));
	helpMenu = menuBar()->addMenu(tr("����(&H)"));

}

bool MainWindow::loadFile(const QString & fileName)
{
	return true;
}


//public:
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	/*spreadsheet = new Spreadsheet;
	setCentralWidget(spreadsheet);*/
	QColorDialog *q = new QColorDialog;
	setCentralWidget(q);

	createActions();
	createMenus();

	findDialog = NULL;   //��ֹ��ָ�룬��find()������ʼ��

	//setWindowIcon(QIcon(":/Resources/mainicon.png"));
	setWindowTitle(tr("�����Ʊ�"));

	//setBaseSize()��Ч������ԭ���д���֤
	resize(QSize(800, 600));
}

MainWindow::~MainWindow()
{

}


//private slots:
void MainWindow::newFile()
{
	QMB("heh");
}

void MainWindow::openFile()
{
	QFileDialog fileDialog;
	fileDialog.exec();   //ģ̬�Ի���
}

void MainWindow::saveFile()
{
}
