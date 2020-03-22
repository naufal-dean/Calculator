#ifndef MRBUTTON_H
#define MRBUTTON_H

#include "calcButton.h"

class MRButton : public CalcButton
{
// Class ini merupakan representasi backend dari tombol MR
    Q_OBJECT
public:
    // Konstruktor kelas
    MRButton();
signals:
    // Sinyal bahwa tombol MR diklik
    void mrClicked();
private slots:
    // Metode untuk menyalurkan sinyal clicked QPushButton ke mrClicked
    void handleClick();
};


#endif // MRBUTTON_H
