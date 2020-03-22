#ifndef ANSBUTTON_H
#define ANSBUTTON_H

#include "calcButton.h"

class AnsButton : public CalcButton
{
    Q_OBJECT
public:
    AnsButton();
signals:
    void ansClicked();
private slots:
    void handleClick();
};

#endif // ANSBUTTON_H
