#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "screenWidget.h"
#include "buttonWidget.h"

class MainWidget : public QWidget
{
// Class widget utama yang menyalurkan input dari ButtonWidget ke output pada ScreenWidget
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    ScreenWidget *screenWidget;
    ButtonWidget *buttonWidget;

public:
    // Konstruktor kelas
    MainWidget(QWidget *parent = nullptr);
};

#endif // MAINWIDGET_H
