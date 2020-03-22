#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QPlainTextEdit>

#include "widgets/mainWidget.h"

/*
 * Kelas main window GUI
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! Konstruktor kelas
    MainWindow(QWidget *parent = nullptr);
    //! Destruktor kelas
    ~MainWindow();

private:
    MainWidget *mainWidget; //! Member widget utama kalkulator
};

#endif // MAINWINDOW_H
