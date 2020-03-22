#include "mainWidget.h"

MainWidget::MainWidget(QWidget *parent) : QWidget(parent), screenWidget(new ScreenWidget), buttonWidget(new ButtonWidget)
{
    // Connect button and screen
    connect(buttonWidget, SIGNAL(backspaceClicked()), screenWidget, SLOT(handleBackspaceClick()));
    connect(buttonWidget, SIGNAL(binaryOpClicked(QString)), screenWidget, SLOT(handleBinaryOpClick(QString)));
    connect(buttonWidget, SIGNAL(commaClicked()), screenWidget, SLOT(handleCommaClick()));
    connect(buttonWidget, SIGNAL(equalClicked()), screenWidget, SLOT(handleEqualClick()));
    connect(buttonWidget, SIGNAL(numClicked(int)), screenWidget, SLOT(handleNumClick(int)));
    connect(buttonWidget, SIGNAL(unaryOpClicked(QString)), screenWidget, SLOT(handleUnaryOpClick(QString)));
    connect(buttonWidget, SIGNAL(mcClicked()), screenWidget, SLOT(handleMCClick()));
    connect(buttonWidget, SIGNAL(mrClicked()), screenWidget, SLOT(handleMRClick()));
    connect(buttonWidget, SIGNAL(acClicked()), screenWidget, SLOT(handleACClick()));

    // Setting layout
    mainLayout = new QGridLayout;

    mainLayout->addWidget(screenWidget, 0, 0);
    mainLayout->addWidget(buttonWidget, 1, 0);

    setLayout(mainLayout);
}
