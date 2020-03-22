#ifndef BINARYOPBUTTON_H
#define BINARYOPBUTTON_H

#include "opButton.h"

class BinaryOpButton : public OpButton
{
    Q_OBJECT
public:
    BinaryOpButton(QString type);
signals:
    void binaryOpClicked(QString type);
private slots:
    void handleClick();
};


#endif // BINARYOPBUTTON_H
