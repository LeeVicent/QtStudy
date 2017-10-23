/********************************************************************************
** Form generated from reading UI file 'qtstudy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSTUDY_H
#define UI_QTSTUDY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtStudyClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtStudyClass)
    {
        if (QtStudyClass->objectName().isEmpty())
            QtStudyClass->setObjectName(QStringLiteral("QtStudyClass"));
        QtStudyClass->resize(600, 400);
        menuBar = new QMenuBar(QtStudyClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtStudyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtStudyClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtStudyClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtStudyClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtStudyClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtStudyClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtStudyClass->setStatusBar(statusBar);

        retranslateUi(QtStudyClass);

        QMetaObject::connectSlotsByName(QtStudyClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtStudyClass)
    {
        QtStudyClass->setWindowTitle(QApplication::translate("QtStudyClass", "QtStudy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtStudyClass: public Ui_QtStudyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSTUDY_H
