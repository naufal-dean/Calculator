#include "binaryOpButton.h"

BinaryOpButton::BinaryOpButton(QString type) : OpButton(type) {}

void BinaryOpButton::handleClick() {
    emit binaryOpClicked(this->type);
}
