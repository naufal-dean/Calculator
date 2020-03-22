#ifndef CALCBUTTON_H
#define CALCBUTTON_H

#include <QPushButton>

class CalcButton : public QPushButton
{    
// Class ini merupakan representasi backend dari tombol pada kalkulator (sebagai parent)
    Q_OBJECT
public:
    // Konstruktor kelas
    CalcButton(const QString &text, QWidget *parent = nullptr);
};

#endif // CALCBUTTON_H
