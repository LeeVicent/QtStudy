#ifndef MAIN_WINDOW_H_
#define MAIN_WINDOW_H_
#include <QMainWindow>

//���ٴ���QAction
#define A(actionName) QAction *##actionName##Action

class QAction;
class QLabel;
class FindDialog;
class Spreadsheet;

class MainWindow : public QMainWindow
{
	Q_OBJECT

private:
	enum { MaxRecentFile = 5 };   //������ļ���󱣴�����Ϊ5
	QAction *recentFileAction[MaxRecentFile];  //ָ������
	QAction *separatorAction;

	QMenu *fileMenu;
	QMenu *editMenu;
	QMenu *toolMenu;
	QMenu *optionMenu;
	QMenu *helpMenu;

	//�ļ�(F)
	QAction *newAction;
	QAction *openAction;
	QAction *saveAction;
	QAction *saveAsAction;
	QAction *exitAction;
	//�༭(E)
	A(cut); A(copy); A(paste); A(delete); A(select); A(find);


	Spreadsheet *spreadsheet;
	FindDialog *findDialog;

private:
	void createActions();  //�����˵��µ�ѡ�ע����������Ⱥ�˳��
	void createMenus();   //�����˵�
	
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

