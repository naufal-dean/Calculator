#ifndef OPBUTTON_H
#define OPBUTTON_H

#include "calcButton.h"

class OpButton : public CalcButton
{    
// Class ini merupakan representasi backend dari tombol operasi
    Q_OBJECT
protected:
    QString type;
public:
    // Konstruktor kelas
    OpButton(QString type);
    // Getter type
    QString getType();
private slots:
    // Metode abstract untuk menyalurkan sinyal clicked dari QPushButton
    virtual void handleClick() = 0;
};

#endif // OPBUTTON_H
