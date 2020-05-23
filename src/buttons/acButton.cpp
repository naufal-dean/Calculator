#include "acButton.h"

ACButton::ACButton() : CalcButton("AC")
{
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void ACButton::handleClick() {
    emit acClicked();
}
