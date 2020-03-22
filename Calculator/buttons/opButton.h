#ifndef OPBUTTON_H
#define OPBUTTON_H

#include "calcButton.h"

class OpButton : public CalcButton
{
    Q_OBJECT
protected:
    QString type;
public:
    OpButton(QString type);
    QString getType();
private slots:
    virtual void handleClick() = 0;
};

#endif // OPBUTTON_H
