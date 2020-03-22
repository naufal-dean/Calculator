#ifndef COMMABUTTON_H
#define COMMABUTTON_H

#include "calcButton.h"

/*
 * Class ini merupakan representasi backend dari tombol comma
 */
class CommaButton : public CalcButton
{    
    Q_OBJECT
public:
    //! Konstruktor kelas
    CommaButton();
signals:
    //! Sinyal bahwa tombol comma diklik
    void commaClicked();
private slots:
    //! Metode untuk menyalurkan sinyal clicked QPushButton ke commaClicked
    void handleClick();
};

#endif // COMMABUTTON_H
