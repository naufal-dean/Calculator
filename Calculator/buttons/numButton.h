#ifndef NUMBUTTON_H
#define NUMBUTTON_H

#include "calcButton.h"

class NumButton : public CalcButton
{    
// Class ini merupakan representasi backend dari tombol angka
    Q_OBJECT
private:
    int value;
public:
    // Konstruktor kelas
    NumButton(int value);
    // Getter value
    int getValue();
signals:
    // Sinyal bahwa tombol angka diklik
    void numClicked(int value);
private slots:
    // Metode untuk menyalurkan sinyal clicked QPushButton ke numClicked sekaligus menyalurkan value
    void handleClick();
};

#endif // NUMBUTTON_H
