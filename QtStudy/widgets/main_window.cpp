#include "widgets\main_window.h"
#include "widgets\frames.h"
#include "widgets\buttons.h"

#include "..\stdafx.h"

MainWindow::MainWindow(QWidget * parent) : QDialog(parent)
{
	framesPushButton = new QPushButton(tr("QFrame"));
	buttonsPushButton = new QPushButton(tr("QAbstractButton"));

	connect(buttonsPushButton, SIGNAL(clicked()), this, SLOT(buttonsButtonClicked()));
	connect(framesPushButton, SIGNAL(clicked()), this, SLOT(framesButtonClicked()));

	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(framesPushButton);
	layout->addWidget(buttonsPushButton);
	setLayout(layout);
}

MainWindow::~MainWindow() {}

void MainWindow::buttonsButtonClicked()
{
	buttonDialog = new Buttons;
	buttonDialog->show();
}

void MainWindow::framesButtonClicked() 
{
	framesDialog = new Frames;
	framesDialog->show();
}

