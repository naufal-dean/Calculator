#include "buttonWidget.h"

ButtonWidget::ButtonWidget(QWidget *parent)
    : QWidget(parent)
{
    btn1 = new QPushButton("1");
    btn2 = new QPushButton("2");
    btn3 = new QPushButton("3");
    btn4 = new QPushButton("4");
    btn5 = new QPushButton("5");
    btn6 = new QPushButton("6");
    btn7 = new QPushButton("7");
    btn8 = new QPushButton("8");
    btn9 = new QPushButton("9");
    btn0 = new QPushButton("0");

    mainLayout = new QGridLayout;

    mainLayout->addWidget(btn1, 0, 0);
    mainLayout->addWidget(btn2, 0, 1);
    mainLayout->addWidget(btn3, 0, 2);
    mainLayout->addWidget(btn4, 1, 0);
    mainLayout->addWidget(btn5, 1, 1);
    mainLayout->addWidget(btn6, 1, 2);
    mainLayout->addWidget(btn7, 2, 0);
    mainLayout->addWidget(btn8, 2, 1);
    mainLayout->addWidget(btn9, 2, 2);
    mainLayout->addWidget(btn0, 3, 1);

    setLayout(mainLayout);
}
