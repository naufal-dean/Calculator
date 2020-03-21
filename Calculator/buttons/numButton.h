#ifndef NUMBUTTON_H
#define NUMBUTTON_H

#include "calcButton.h"

class NumButton : public CalcButton
{
    Q_OBJECT
private:
    int value;
public:
    NumButton(int value);
    int getValue();
signals:
    void numClicked(int value);
private slots:
    void handleClick();
};

#endif // NUMBUTTON_H
