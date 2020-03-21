#ifndef BACKSPACEBUTTON_H
#define BACKSPACEBUTTON_H

#include "calcButton.h"

class BackspaceButton : public CalcButton
{
    Q_OBJECT
public:
    BackspaceButton();
signals:
    void backspaceClicked();
private slots:
    void handleClick();
};


#endif // BACKSPACEBUTTON_H
