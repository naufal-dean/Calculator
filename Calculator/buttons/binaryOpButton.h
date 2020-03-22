#ifndef BINARYOPBUTTON_H
#define BINARYOPBUTTON_H

#include "calcButton.h"

class BinaryOpButton : public CalcButton
{
    Q_OBJECT
private:
    QString type;
public:
    BinaryOpButton(QString type);
    QString getType();
signals:
    void binaryOpClicked(QString type);
private slots:
    void handleClick();
};


#endif // BINARYOPBUTTON_H
