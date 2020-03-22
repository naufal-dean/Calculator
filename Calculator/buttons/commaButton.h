#ifndef COMMABUTTON_H
#define COMMABUTTON_H

#include "calcButton.h"

class CommaButton : public CalcButton
{    
// Class ini merupakan representasi backend dari tombol comma
    Q_OBJECT
public:
    // Konstruktor kelas
    CommaButton();
signals:
    // Sinyal bahwa tombol comma diklik
    void commaClicked();
private slots:
    // Metode untuk menyalurkan sinyal clicked QPushButton ke commaClicked
    void handleClick();
};

#endif // COMMABUTTON_H
