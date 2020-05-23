#include "ansButton.h"

AnsButton::AnsButton() : CalcButton("Ans") {
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void AnsButton::handleClick() {
    emit ansClicked();
}
