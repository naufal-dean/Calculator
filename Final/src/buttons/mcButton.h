#ifndef MCBUTTON_H
#define MCBUTTON_H

#include "calcButton.h"

/*
 * Class ini merupakan representasi backend dari tombol MC
 */
class MCButton : public CalcButton
{    
    Q_OBJECT
public:
    //! Konstruktor kelas
    MCButton();
signals:
    //! Sinyal bahwa tombol MC diklik
    void mcClicked();
private slots:
    //! Metode untuk menyalurkan sinyal clicked QPushButton ke mcClicked
    void handleClick();
};

#endif // MCBUTTON_H
