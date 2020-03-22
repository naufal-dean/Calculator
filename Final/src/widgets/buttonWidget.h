#ifndef BUTTONWIDGET_H
#define BUTTONWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "../buttons/backspaceButton.h"
#include "../buttons/binaryOpButton.h"
#include "../buttons/commaButton.h"
#include "../buttons/equalButton.h"
#include "../buttons/numButton.h"
#include "../buttons/unaryOpButton.h"
#include "../buttons/mcButton.h"
#include "../buttons/acButton.h"
#include "../buttons/mrButton.h"
#include "../buttons/ansButton.h"
#include "../constants/constants.h"

/*
 * Class widget yang berisi susunan tombol pada kalkulator
 */
class ButtonWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout; //! Layout utama untuk button
    BackspaceButton *btnBs; //! Member button backspace
    BinaryOpButton *btnAdd, *btnSub, *btnMul, *btnDiv; //! Member button operator binary
    CommaButton *btnComma; //! Member button comma
    EqualButton *btnEq; //! Member button sama dengan
    NumButton *btn0, *btn1, *btn2, *btn3, *btn4, *btn5, *btn6, *btn7, *btn8, *btn9; //! Member button angka
    UnaryOpButton *btnSqrt; //! Member button operator unary
    MCButton *btnMC; //! Member button MC
    MRButton *btnMR; //! Member button MR
    ACButton *btnAC; //! Member button AC
    AnsButton *btnAns; //! Member button Ans

public:
    //! Konstruktor kelas
    ButtonWidget(QWidget *parent = nullptr);

signals:
    //! Sinyal untuk tombol backspace
    void backspaceClicked();
    //! Sinyal untuk tombol operator binary
    void binaryOpClicked(QString type);
    //! Sinyal untuk tombol comma
    void commaClicked();
    //! Sinyal untuk tombol sama dengan
    void equalClicked();
    //! Sinyal untuk tombol angka
    void numClicked(int value);
    //! Sinyal untuk tombol operator unary
    void unaryOpClicked(QString type);
    //! Sinyal untuk tombol MC
    void mcClicked();
    //! Sinyal untuk tombol MR
    void mrClicked();
    //! Sinyal untuk tombol AC
    void acClicked();
    //! Sinyal untuk tombol Ans
    void ansClicked();

private slots:
    //! Metode untuk menyalurkan sinyal dari tombol backspace ke luar ButtonWidget
    void handleBackspaceClick();
    //! Metode untuk menyalurkan sinyal dari tombol operator binary ke luar ButtonWidget
    void handleBinaryOpClick(QString type);
    //! Metode untuk menyalurkan sinyal dari tombol comma ke luar ButtonWidget
    void handleCommaClick();
    //! Metode untuk menyalurkan sinyal dari tombol sama dengan ke luar ButtonWidget
    void handleEqualClick();
    //! Metode untuk menyalurkan sinyal dari tombol angka ke luar ButtonWidget
    void handleNumClick(int value);
    //! Metode untuk menyalurkan sinyal dari tombol operator unary ke luar ButtonWidget
    void handleUnaryOpClick(QString type);
    //! Metode untuk menyalurkan sinyal dari tombol MC ke luar ButtonWidget
    void handleMCClick();
    //! Metode untuk menyalurkan sinyal dari tombol MR ke luar ButtonWidget
    void handleMRClick();
    //! Metode untuk menyalurkan sinyal dari tombol AC ke luar ButtonWidget
    void handleACClick();
    //! Metode untuk menyalurkan sinyal dari tombol Ans ke luar ButtonWidget
    void handleAnsClick();
};

#endif // BUTTONWIDGET_H
