#include "screenWidget.h"

ScreenWidget::ScreenWidget(QWidget *parent) : QWidget(parent)
{
    screen = new QLineEdit("0");
    screen->setReadOnly(true);
    screen->setAlignment(Qt::AlignRight);
    screen->setFont(QFont("Consolas", 15));

    mainLayout = new QGridLayout;

    mainLayout->addWidget(screen, 0, 0);

    setLayout(mainLayout);
}
