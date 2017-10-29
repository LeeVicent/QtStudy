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

//全局宏函数，用于解决中文乱码问题
//#define S(string) QString::fromLocal8Bit(string)   //使用下面的处理方式

// Coding: UTF-8(BOM)
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif
//解决方案参见：http://blog.csdn.net/u011519892/article/details/17026581


//QMessage宏函数测试输出
#define QMB(string) \
{\
	QMessageBox *m = new QMessageBox(QMessageBox::NoIcon, "测试",  (string));\
	m->setIconPixmap(QPixmap(":/Resources/experiment.png"));\
   m->show();\
}



#endif // ! STDAFX_H_

