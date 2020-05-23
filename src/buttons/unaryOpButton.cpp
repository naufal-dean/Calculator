#include "unaryOpButton.h"

UnaryOpButton::UnaryOpButton(QString type) : OpButton(type) {}

void UnaryOpButton::handleClick() {
    emit unaryOpClicked(this->type);
}
