#include "stdafx.h"
#include "finddialog.h"


FindDialog::FindDialog(QWidget *parent) :QDialog(parent)
{

	label = new QLabel(tr("&Find What:"));
	lineEdit = new QLineEdit;
	label->setBuddy(lineEdit);    //Alt快捷键绑定组件（仅支持英文）

	caseCheckBox = new QCheckBox(tr("Match &case"));
	backwardCheckBox = new QCheckBox(tr("Search &backward"));

	findButton = new QPushButton(tr("&Find"));
	findButton->setDefault(true);
	findButton->setEnabled(false);
	closeButton = new QPushButton(tr("Close"));

	//主布局内->左布局内->上布局
	QHBoxLayout *topLeftLayout = new QHBoxLayout;
	topLeftLayout->addWidget(label);
	topLeftLayout->addWidget(lineEdit);

	//主布局内->左布局
	QVBoxLayout *leftLayout = new QVBoxLayout;
	leftLayout->addLayout(topLeftLayout);
	leftLayout->addWidget(caseCheckBox);
	leftLayout->addWidget(backwardCheckBox);
	leftLayout->addStretch();  //底部伸展器

    //主布局内->右布局
	QVBoxLayout *rightLayout = new QVBoxLayout;
	rightLayout->addWidget(findButton);
	rightLayout->addWidget(closeButton);
	rightLayout->addStretch();  //底部伸展器

	//主布局
	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->addLayout(leftLayout);
	mainLayout->addLayout(rightLayout);

	setLayout(mainLayout);  //为Dialog应用布局

}

FindDialog::~FindDialog()
{

}
