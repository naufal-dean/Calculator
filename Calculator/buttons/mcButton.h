#ifndef MCBUTTON_H
#define MCBUTTON_H


#include "calcButton.h"

class MCButton : public CalcButton
{
    Q_OBJECT
public:
    MCButton();
signals:
    void mcClicked();
private slots:
    void handleClick();
};

#endif // MCBUTTON_H
