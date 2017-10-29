#include "stdafx.h"
#include "finddialog.h"


FindDialog::FindDialog(QWidget *parent) :QDialog(parent)
{

	label = new QLabel(tr("&Find What:"));
	lineEdit = new QLineEdit;
	label->setBuddy(lineEdit);    //Alt��ݼ����������֧��Ӣ�ģ�

	caseCheckBox = new QCheckBox(tr("Match &case"));
	backwardCheckBox = new QCheckBox(tr("Search &backward"));

	findButton = new QPushButton(tr("&Find"));
	findButton->setDefault(true);
	findButton->setEnabled(false);
	closeButton = new QPushButton(tr("Close"));

	//��������->�󲼾���->�ϲ���
	QHBoxLayout *topLeftLayout = new QHBoxLayout;
	topLeftLayout->addWidget(label);
	topLeftLayout->addWidget(lineEdit);

	//��������->�󲼾�
	QVBoxLayout *leftLayout = new QVBoxLayout;
	leftLayout->addLayout(topLeftLayout);
	leftLayout->addWidget(caseCheckBox);
	leftLayout->addWidget(backwardCheckBox);
	leftLayout->addStretch();  //�ײ���չ��

    //��������->�Ҳ���
	QVBoxLayout *rightLayout = new QVBoxLayout;
	rightLayout->addWidget(findButton);
	rightLayout->addWidget(closeButton);
	rightLayout->addStretch();  //�ײ���չ��

	//������
	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->addLayout(leftLayout);
	mainLayout->addLayout(rightLayout);

	setLayout(mainLayout);  //ΪDialogӦ�ò���

}

FindDialog::~FindDialog()
{

}
