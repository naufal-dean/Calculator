#include "backspaceButton.h"

BackspaceButton::BackspaceButton() : CalcButton(QChar(0x2190))
{
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void BackspaceButton::handleClick() {
    emit backspaceClicked();
}
