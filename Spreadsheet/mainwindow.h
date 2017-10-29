#ifndef MAIN_WINDOW_H_
#define MAIN_WINDOW_H_
#include <QMainWindow>

//快速创建QAction
#define A(actionName) QAction *##actionName##Action

class QAction;
class QLabel;
class FindDialog;
class Spreadsheet;

class MainWindow : public QMainWindow
{
	Q_OBJECT

private:
	enum { MaxRecentFile = 5 };   //最近打开文件最大保存数量为5
	QAction *recentFileAction[MaxRecentFile];  //指针数组
	QAction *separatorAction;

	QMenu *fileMenu;
	QMenu *editMenu;
	QMenu *toolMenu;
	QMenu *optionMenu;
	QMenu *helpMenu;

	//文件(F)
	QAction *newAction;
	QAction *openAction;
	QAction *saveAction;
	QAction *saveAsAction;
	QAction *exitAction;
	//编辑(E)
	A(cut); A(copy); A(paste); A(delete); A(select); A(find);

	Spreadsheet *spreadsheet;
	FindDialog *findDialog;

private:
	void createActions();  //创建菜单下的选项（注意与下面的先后顺序）
	void createMenus();   //创建菜单
	
	bool okToContinue();
	bool loadFile(const QString &fileName);

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void newFile();
	void openFile();
	void saveFile();
};


#endif // !MAIN_WINDOW_H_

