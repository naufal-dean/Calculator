#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "screenWidget.h"
#include "buttonWidget.h"

/*
 * Class widget utama yang menyalurkan input dari ButtonWidget ke output pada ScreenWidget
 */
class MainWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout; //! Layout utama main widget
    ScreenWidget *screenWidget; //! Member layar kalkulator
    ButtonWidget *buttonWidget; //! Member button kalkulator

public:
    //! Konstruktor kelas
    MainWidget(QWidget *parent = nullptr);
};

#endif // MAINWIDGET_H
