#ifndef EQUALBUTTON_H
#define EQUALBUTTON_H

#include "calcButton.h"

/*
 * Class ini merupakan representasi backend dari tombol sama dengan
 */
class EqualButton : public CalcButton
{    
    Q_OBJECT
public:
    //! Konstruktor kelas
    EqualButton();
signals:
    //! Sinyal bahwa tombol sama dengan diklik
    void equalClicked();
private slots:
    //! Metode untuk menyalurkan sinyal clicked QPushButton ke equalClicked
    void handleClick();
};

#endif // EQUALBUTTON_H
