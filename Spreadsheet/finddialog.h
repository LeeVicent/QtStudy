#ifndef FIND_DIALOG_H_
#define FIND_DIALOG_H_

#include <QDialog>

class QLabel;
class QLineEdit;
class QPushButton;
class QCheckBox;


class FindDialog : public QDialog
{
	Q_OBJECT

private:
	QLabel *label;
	QLineEdit *lineEdit;
	QPushButton *findButton;
	QPushButton *closeButton;
	QCheckBox *caseCheckBox;
	QCheckBox *backwardCheckBox;

public:
	FindDialog(QWidget *parent = 0);
	~FindDialog();
};

#endif
