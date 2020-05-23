#include "equalButton.h"

EqualButton::EqualButton() : CalcButton("=")
{
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void EqualButton::handleClick() {
    emit equalClicked();
}
