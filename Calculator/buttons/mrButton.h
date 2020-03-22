#ifndef MRBUTTON_H
#define MRBUTTON_H

#include "calcButton.h"

class MRButton : public CalcButton
{
    Q_OBJECT
public:
    MRButton();
signals:
    void mrClicked();
private slots:
    void handleClick();
};


#endif // MRBUTTON_H
