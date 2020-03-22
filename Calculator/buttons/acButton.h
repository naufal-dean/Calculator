#ifndef ACBUTTON_H
#define ACBUTTON_H


#include "calcButton.h"

class ACButton : public CalcButton
{
    Q_OBJECT
public:
    ACButton();
signals:
    void acClicked();
private slots:
    void handleClick();
};

#endif // ACBUTTON_H
