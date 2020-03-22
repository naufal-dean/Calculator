#ifndef BACKSPACEBUTTON_H
#define BACKSPACEBUTTON_H

#include "calcButton.h"

/*
 * Class ini merupakan representasi backend dari tombol backspace
 */
class BackspaceButton : public CalcButton
{    
    Q_OBJECT
public:
    //! Konstruktor kelas
    BackspaceButton();
signals:    
    //! Sinyal bahwa tombol backspace diklik
    void backspaceClicked();
private slots:
    //! Metode untuk menyalurkan sinyal clicked QPushButton ke backspaceClicked
    void handleClick();
};


#endif // BACKSPACEBUTTON_H
