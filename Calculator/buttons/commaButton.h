#ifndef COMMABUTTON_H
#define COMMABUTTON_H

#include "calcButton.h"

class CommaButton : public CalcButton
{
    Q_OBJECT
public:
    CommaButton();
signals:
    void commaClicked();
private slots:
    void handleClick();
};

#endif // COMMABUTTON_H
