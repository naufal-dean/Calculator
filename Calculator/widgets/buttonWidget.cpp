#include "buttonWidget.h"

ButtonWidget::ButtonWidget(QWidget *parent) : QWidget(parent)
{
    // Create & Connect backspace button
    btnBs = new BackspaceButton();
    connect(btnBs, SIGNAL(backspaceClicked()), this, SLOT(handleBackspaceClick()));

    // Create binary op button
    btnAdd = new BinaryOpButton(BIN_OP_ADD);
    btnSub = new BinaryOpButton(BIN_OP_SUB);
    btnMul = new BinaryOpButton(BIN_OP_MUL);
    btnDiv = new BinaryOpButton(BIN_OP_DIV);

    // Connect binary op button
    connect(btnAdd, SIGNAL(binaryOpClicked(QString)), this, SLOT(handleBinaryOpClick(QString)));
    connect(btnSub, SIGNAL(binaryOpClicked(QString)), this, SLOT(handleBinaryOpClick(QString)));
    connect(btnMul, SIGNAL(binaryOpClicked(QString)), this, SLOT(handleBinaryOpClick(QString)));
    connect(btnDiv, SIGNAL(binaryOpClicked(QString)), this, SLOT(handleBinaryOpClick(QString)));

    // Create & Connect equal button
    btnEq = new EqualButton();
    connect(btnEq, SIGNAL(equalClicked()), this, SLOT(handleEqualClick()));

    // Create num button
    btn1 = new NumButton(1);
    btn2 = new NumButton(2);
    btn3 = new NumButton(3);
    btn4 = new NumButton(4);
    btn5 = new NumButton(5);
    btn6 = new NumButton(6);
    btn7 = new NumButton(7);
    btn8 = new NumButton(8);
    btn9 = new NumButton(9);
    btn0 = new NumButton(0);

    // Connect num button
    connect(btn1, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn2, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn3, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn4, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn5, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn6, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn7, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn8, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn9, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn0, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));

    // Create unary op button
    btnSqrt = new UnaryOpButton(UN_OP_SQRT);

    // Connect unary op button
    connect(btnSqrt, SIGNAL(unaryOpClicked(QString)), this, SLOT(handleUnaryOpClick(QString)));

    // Setting layout
    mainLayout = new QGridLayout;

    mainLayout->addWidget(btnBs, 0, 3);

    mainLayout->addWidget(btnDiv, 1, 3);
    mainLayout->addWidget(btnMul, 2, 3);
    mainLayout->addWidget(btnSub, 3, 3);
    mainLayout->addWidget(btnAdd, 4, 3);

    mainLayout->addWidget(btnEq, 5, 3);

    mainLayout->addWidget(btn1, 2, 0);
    mainLayout->addWidget(btn2, 2, 1);
    mainLayout->addWidget(btn3, 2, 2);
    mainLayout->addWidget(btn4, 3, 0);
    mainLayout->addWidget(btn5, 3, 1);
    mainLayout->addWidget(btn6, 3, 2);
    mainLayout->addWidget(btn7, 4, 0);
    mainLayout->addWidget(btn8, 4, 1);
    mainLayout->addWidget(btn9, 4, 2);
    mainLayout->addWidget(btn0, 5, 1);

    mainLayout->addWidget(btnSqrt, 1, 2);

    setLayout(mainLayout);
}

void ButtonWidget::handleBackspaceClick() {
    emit backspaceClicked();
}

void ButtonWidget::handleBinaryOpClick(QString type) {
    emit binaryOpClicked(type);
}

void ButtonWidget::handleEqualClick() {
    emit equalClicked();
}

void ButtonWidget::handleNumClick(int value) {
    emit numClicked(value);
}

void ButtonWidget::handleUnaryOpClick(QString type) {
    emit unaryOpClicked(type);
}
