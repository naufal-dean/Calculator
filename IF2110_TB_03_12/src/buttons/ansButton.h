#ifndef ANSBUTTON_H
#define ANSBUTTON_H

#include "calcButton.h"

/*
 * Class ini merupakan representasi backend dari tombol Ans
 */
class AnsButton : public CalcButton
{
    Q_OBJECT
public:
    //! Konstruktor kelas
    AnsButton();
signals:
    //! Sinyal bahwa tombol Ans diklik
    void ansClicked();
private slots:
    //! Metode untuk menyalurkan sinyal clicked QPushButton ke ansClicked
    void handleClick();
};

#endif // ANSBUTTON_H
