#include "mainwindow.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), mainWidget(new MainWidget)
{
    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

