#ifndef UNARYOPBUTTON_H
#define UNARYOPBUTTON_H

#include "opButton.h"

class UnaryOpButton : public OpButton
{
    Q_OBJECT
public:
    UnaryOpButton(QString type);
signals:
    void unaryOpClicked(QString type);
private slots:
    void handleClick();
};

#endif // UNARYOPBUTTON_H
