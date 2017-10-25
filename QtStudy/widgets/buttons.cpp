#include "widgets/buttons.h"
#include "..\stdafx.h"

Buttons::Buttons(QWidget *parent):QDialog(parent)//父窗口，基类指针，默认值
{

    pushButton = new QPushButton(tr("QPushButton"));   //指定本类对象为父窗口
    radioButton = new QRadioButton(tr("QRadioButton"));
    toolButton = new QToolButton();
    checkBox = new QCheckBox();
	toolButtonLabel = new QLabel(tr("QToolButton"));
	checkBoxLabel = new QLabel(tr("QCheckBox"));

	QHBoxLayout *layout1 = new QHBoxLayout;
	layout1->addWidget(toolButton);
	layout1->addWidget(toolButtonLabel);

	QHBoxLayout *layout2 = new QHBoxLayout;
	layout2->addWidget(checkBox);
	layout2->addWidget(checkBoxLabel);

    QVBoxLayout *VLayout = new QVBoxLayout;
	VLayout->addWidget(pushButton);
	VLayout->addWidget(radioButton);
	VLayout->addLayout(layout1);
	VLayout->addLayout(layout2);
    this->setLayout(VLayout);
}

Buttons::~Buttons()
{

}

