#include "calcButton.h"

CalcButton::CalcButton(const QString &text, QWidget *parent) : QPushButton(parent)
{
    this->setText(text);
}
