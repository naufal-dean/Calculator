#ifndef ACBUTTON_H
#define ACBUTTON_H


#include "calcButton.h"

/*
 * Class ini merupakan representasi backend dari tombol AC
 */
class ACButton : public CalcButton
{
    Q_OBJECT
public:
    //! Konstruktor kelas
    ACButton();
signals:
    //! Sinyal bahwa tombol ac diklik
    void acClicked();
private slots:
    //! Metode untuk menyalurkan sinyal clicked QPushButton ke acClicked
    void handleClick();
};

#endif // ACBUTTON_H
