#ifndef UNARYOPBUTTON_H
#define UNARYOPBUTTON_H

#include "opButton.h"

/*
 * Class ini merupakan representasi backend dari tombol operasi unary
 */
class UnaryOpButton : public OpButton
{    
    Q_OBJECT
public:
    //! Konstruktor kelas
    UnaryOpButton(QString type);
signals:
    //! Sinyal bahwa tombol operasi binary diklik
    void unaryOpClicked(QString type);
private slots:
    //! Metode untuk menyalurkan sinyal clicked QPushButton ke unaryOpClicked
    void handleClick();
};

#endif // UNARYOPBUTTON_H
