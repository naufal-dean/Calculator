#include "mcButton.h"

MCButton::MCButton() : CalcButton("MC")
{
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void MCButton::handleClick() {
    emit mcClicked();
}
