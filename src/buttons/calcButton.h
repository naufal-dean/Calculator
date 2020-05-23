#ifndef CALCBUTTON_H
#define CALCBUTTON_H

#include <QPushButton>

/*
 * Class ini merupakan representasi backend dari tombol pada kalkulator (sebagai parent)
 */
class CalcButton : public QPushButton
{    
    Q_OBJECT
public:
    //! Konstruktor kelas
    CalcButton(const QString &text, QWidget *parent = nullptr);
};

#endif // CALCBUTTON_H
