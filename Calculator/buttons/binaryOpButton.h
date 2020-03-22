#ifndef BINARYOPBUTTON_H
#define BINARYOPBUTTON_H

#include "opButton.h"

class BinaryOpButton : public OpButton
{    
// Class ini merupakan representasi backend dari tombol operasi binary
    Q_OBJECT
public:
    // Konstruktor kelas
    BinaryOpButton(QString type);
signals:
    // Sinyal bahwa tombol operasi binary diklik
    void binaryOpClicked(QString type);
private slots:
    // Metode untuk menyalurkan sinyal clicked QPushButton ke binaryOpClicked sekaligus menyalurkan type
    void handleClick();
};


#endif // BINARYOPBUTTON_H
