#include "mrButton.h"

MRButton::MRButton() : CalcButton("MR")
{
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void MRButton::handleClick() {
    emit mrClicked();
}
