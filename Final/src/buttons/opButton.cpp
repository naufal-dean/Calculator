#include "opButton.h"

OpButton::OpButton(QString type) : CalcButton(type)
{
    this->type = type;
    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

QString OpButton::getType() {
    return this->type;
}
