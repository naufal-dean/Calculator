#include "commaButton.h"

CommaButton::CommaButton() : CalcButton(".")
{
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void CommaButton::handleClick() {
    emit commaClicked();
}
