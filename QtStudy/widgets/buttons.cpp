#include "widgets/buttons.h"


//类外定义需要获得完整类！！
#include <QPushButton>
#include <QRadioButton>
#include <QGridLayout>
#include <QToolButton>
#include <QCheckBox>


Buttons::Buttons(QWidget *parent):QDialog(parent)//父窗口，基类指针，默认值
{

    pushButton = new QPushButton(tr("QPushButton"));   //指定本类对象为父窗口
    radioButton = new QRadioButton(tr("QRadioButton"));
    toolButton = new QToolButton();
    checkBox = new QCheckBox();

    QGridLayout *gridLayout = new QGridLayout;
    gridLayout->addWidget(pushButton);
    gridLayout->addWidget(radioButton);
    gridLayout->addWidget(toolButton);
    gridLayout->addWidget(checkBox);

    this->setLayout(gridLayout);
}

Buttons::~Buttons()
{

}

