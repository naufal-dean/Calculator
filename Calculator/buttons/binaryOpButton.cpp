#include "binaryOpButton.h"

BinaryOpButton::BinaryOpButton(QString type) : CalcButton(type)
{
    this->type = type;
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

QString BinaryOpButton::getType() {
    return this->type;
}

void BinaryOpButton::handleClick() {
    emit binaryOpClicked(this->type);
}
