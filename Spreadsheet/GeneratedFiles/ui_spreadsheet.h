/********************************************************************************
** Form generated from reading UI file 'spreadsheet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPREADSHEET_H
#define UI_SPREADSHEET_H

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

class Ui_SpreadsheetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SpreadsheetClass)
    {
        if (SpreadsheetClass->objectName().isEmpty())
            SpreadsheetClass->setObjectName(QStringLiteral("SpreadsheetClass"));
        SpreadsheetClass->resize(600, 400);
        menuBar = new QMenuBar(SpreadsheetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SpreadsheetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SpreadsheetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SpreadsheetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SpreadsheetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SpreadsheetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SpreadsheetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SpreadsheetClass->setStatusBar(statusBar);

        retranslateUi(SpreadsheetClass);

        QMetaObject::connectSlotsByName(SpreadsheetClass);
    } // setupUi

    void retranslateUi(QMainWindow *SpreadsheetClass)
    {
        SpreadsheetClass->setWindowTitle(QApplication::translate("SpreadsheetClass", "Spreadsheet", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SpreadsheetClass: public Ui_SpreadsheetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPREADSHEET_H
