#include "mainwindow.h"
#include "spreadsheet.h"
#include "stdafx.h"

//菜单选项添加
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
	newAction = new QAction(tr("新建(&N)"), this);
	newAction->setIcon(QIcon(":/Resources/newfile.png"));
	newAction->setShortcut(QKeySequence::New);
	connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));

    //#define CREATE_ACTION(objectName, diaplayName, icon, shortcut, slot)
	CREATE_ACTION(openAction, "打开(&O)", ":/Resources/openfile.png", Open, openFile());
	CREATE_ACTION(saveAction, "保存(&S)", ":/Resources/savefile.png", Save, saveFile());
}

void MainWindow::createMenus()
{
	fileMenu = menuBar()->addMenu(tr("文件(&F)"));
	fileMenu->addAction(newAction);
	fileMenu->addAction(openAction);
	fileMenu->addAction(saveAction);

	editMenu = menuBar()->addMenu(tr("编辑(&E)"));
	toolMenu = menuBar()->addMenu(tr("工具(&T)"));
	optionMenu = menuBar()->addMenu(tr("设置(&E)"));
	helpMenu = menuBar()->addMenu(tr("帮助(&H)"));

}

bool MainWindow::loadFile(const QString & fileName)
{
	return true;
}


//public:
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	spreadsheet = new Spreadsheet;
	setCentralWidget(spreadsheet);

	createActions();
	createMenus();

	findDialog = NULL;   //防止空指针，由find()函数初始化

	//setWindowIcon(QIcon(":/Resources/mainicon.png"));
	setWindowTitle(tr("电子制表"));

	//setBaseSize()无效，具体原因有待查证
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
	fileDialog.exec();   //模态对话框
}

void MainWindow::saveFile()
{
}
