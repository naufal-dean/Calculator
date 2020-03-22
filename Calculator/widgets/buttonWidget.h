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

class ButtonWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    BackspaceButton *btnBs;
    BinaryOpButton *btnAdd, *btnSub, *btnMul, *btnDiv;
    CommaButton *btnComma;
    EqualButton *btnEq;
    NumButton *btn0, *btn1, *btn2, *btn3, *btn4, *btn5, *btn6, *btn7, *btn8, *btn9;
    UnaryOpButton *btnSqrt;
    MCButton *btnMC;
    MRButton *btnMR;
    ACButton *btnAC;
    AnsButton *btnAns;

public:
    ButtonWidget(QWidget *parent = nullptr);
signals:
    void backspaceClicked();
    void binaryOpClicked(QString type);
    void commaClicked();
    void equalClicked();
    void numClicked(int value);
    void unaryOpClicked(QString type);
    void mcClicked();
    void mrClicked();
    void acClicked();
    void ansClicked();
private slots:
    void handleBackspaceClick();
    void handleBinaryOpClick(QString type);
    void handleCommaClick();
    void handleEqualClick();
    void handleNumClick(int value);
    void handleUnaryOpClick(QString type);
    void handleMCClick();
    void handleMRClick();
    void handleACClick();
    void handleAnsClick();
};

#endif // BUTTONWIDGET_H
