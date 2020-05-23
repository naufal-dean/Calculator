#ifndef OPBUTTON_H
#define OPBUTTON_H

#include "calcButton.h"

/*
 * Class ini merupakan representasi backend dari tombol operasi
 */
class OpButton : public CalcButton
{    
    Q_OBJECT
protected:
    QString type; //! Member untuk menyimpan jenis operator
public:
    //! Konstruktor kelas
    OpButton(QString type);
    //! Getter type
    QString getType();
private slots:
    //! Metode abstract untuk menyalurkan sinyal clicked dari QPushButton
    virtual void handleClick() = 0;
};

#endif // OPBUTTON_H
