#include "numButton.h"

NumButton::NumButton(int value) : CalcButton(QString::number(value))
{
    this->value = value;
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

int NumButton::getValue() {
    return this->value;
}

void NumButton::handleClick() {
    emit numClicked(this->value);
}
