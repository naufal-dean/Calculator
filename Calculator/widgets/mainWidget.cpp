#include "mainWidget.h"

MainWidget::MainWidget(QWidget *parent) : QWidget(parent), screenWidget(new ScreenWidget), buttonWidget(new ButtonWidget)
{
    // Connect button and screen
    connect(buttonWidget, SIGNAL(numClicked(int)), screenWidget, SLOT(handleNumClick(int)));

    // Setting layout
    mainLayout = new QGridLayout;

    mainLayout->addWidget(screenWidget, 0, 0);
    mainLayout->addWidget(buttonWidget, 1, 0);

    setLayout(mainLayout);
}