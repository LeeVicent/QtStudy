#ifndef  STDAFX_H_
#define STDAFX_H_


//QWidget
#include <QLineEdit>
#include <QMenu>
#include <QMenuBar>


//<QAbstractButton>
#include <QPushButton>
#include <QRadioButton>
#include <QToolButton>
#include <QCheckBox>

//<QFrame>
#include <QLabel>

//<QDialog>
#include <QMessageBox>
#include <QFileDialog>

//<QAction>
#include <QAction>

//<QLayout>
#include <QLayout>

//ȫ�ֺ꺯�������ڽ��������������
//#define S(string) QString::fromLocal8Bit(string)   //ʹ������Ĵ���ʽ

// Coding: UTF-8(BOM)
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif
//��������μ���http://blog.csdn.net/u011519892/article/details/17026581


//QMessage�꺯���������
#define QMB(string) \
{\
	QMessageBox *m = new QMessageBox(QMessageBox::NoIcon, "����",  (string));\
	m->setIconPixmap(QPixmap(":/Resources/experiment.png"));\
   m->show();\
}



#endif // ! STDAFX_H_

