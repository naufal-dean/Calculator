#ifndef BACKSPACEBUTTON_H
#define BACKSPACEBUTTON_H

#include "calcButton.h"

class BackspaceButton : public CalcButton
{    
// Class ini merupakan representasi backend dari tombol backspace
    Q_OBJECT
public:
    // Konstruktor kelas
    BackspaceButton();
signals:    
    // Sinyal bahwa tombol backspace diklik
    void backspaceClicked();
private slots:
    // Metode untuk menyalurkan sinyal clicked QPushButton ke backspaceClicked
    void handleClick();
};


#endif // BACKSPACEBUTTON_H
