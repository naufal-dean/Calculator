#ifndef BUTTONWIDGET_H
#define BUTTONWIDGET_H

#include <QWidget>
#include <QGridLayout>
//#include <QPushButton>
#include "../buttons/numButton.h"

class ButtonWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    NumButton *btn0, *btn1, *btn2, *btn3, *btn4, *btn5, *btn6, *btn7, *btn8, *btn9;
public:
    ButtonWidget(QWidget *parent = nullptr);
signals:
    void numClicked(int value);
private slots:
    void handleNumClick(int value);
};

#endif // BUTTONWIDGET_H
