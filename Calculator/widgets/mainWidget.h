#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "screenWidget.h"
#include "buttonWidget.h"

class MainWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    ScreenWidget *screenWidget;
    ButtonWidget *buttonWidget;

public:
    MainWidget(QWidget *parent = nullptr);
};

#endif // MAINWIDGET_H