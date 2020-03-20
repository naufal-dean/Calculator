#include "mainwindow.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), buttonWidget(new ButtonWidget)
{
    setCentralWidget(buttonWidget);
}

MainWindow::~MainWindow()
{
}

