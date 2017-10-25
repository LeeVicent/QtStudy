#ifndef MAIN_WINDOW_H_
#define MAIN_WINDOW_H_
#include <QDialog>

class QPushButton;

class Frames;
class Buttons;

class MainWindow : public QDialog
{
	Q_OBJECT

private:
	QPushButton *framesPushButton;
	QPushButton *buttonsPushButton;

	Frames *framesDialog;
	Buttons *buttonDialog;

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

signals:
	void framesButtonClick();

private slots:
	void framesButtonClicked();
	void buttonsButtonClicked();
};




#endif // !MAIN_WINDOW_H_
