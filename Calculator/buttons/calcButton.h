#ifndef CALCBUTTON_H
#define CALCBUTTON_H

#include <QPushButton>

class CalcButton : public QPushButton
{
    Q_OBJECT
public:
    CalcButton(const QString &text, QWidget *parent = nullptr);
};

#endif // CALCBUTTON_H
