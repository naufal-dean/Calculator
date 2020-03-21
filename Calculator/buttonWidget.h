#ifndef BUTTONWIDGET_H
#define BUTTONWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

class ButtonWidget : public QWidget
{
    Q_OBJECT
public:
    ButtonWidget(QWidget *parent = nullptr);
private:
    QGridLayout *mainLayout;
    QPushButton *btn0, *btn1, *btn2, *btn3, *btn4, *btn5, *btn6, *btn7, *btn8, *btn9;
};

#endif // BUTTONWIDGET_H
