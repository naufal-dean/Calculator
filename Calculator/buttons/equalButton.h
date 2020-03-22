#ifndef EQUALBUTTON_H
#define EQUALBUTTON_H

#include "calcButton.h"

class EqualButton : public CalcButton
{
    Q_OBJECT
public:
    EqualButton();
signals:
    void equalClicked();
private slots:
    void handleClick();
};

#endif // EQUALBUTTON_H
