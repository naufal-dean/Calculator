#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QPlainTextEdit>

#include "widgets/mainWidget.h"

class MainWindow : public QMainWindow
{
// Kelas main window GUI
    Q_OBJECT

public:
    // Konstruktor kelas
    MainWindow(QWidget *parent = nullptr);
    // Destruktor kelas
    ~MainWindow();

private:
    MainWidget *mainWidget;
};
#endif // MAINWINDOW_H
