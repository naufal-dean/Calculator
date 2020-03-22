#ifndef SCREENWIDGET_H
#define SCREENWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QFont>
#include "../constants/constants.h"
#include "../parser.h"

class ScreenWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    QLineEdit *screen;
    bool isAns;
    double lastAns;
public:
    ScreenWidget(QWidget *parent = nullptr);
private slots:
    void handleBackspaceClick();
    void handleBinaryOpClick(QString type);
    void handleCommaClick();
    void handleEqualClick();
    void handleNumClick(int value);
    void handleUnaryOpClick(QString type);
    void handleMCClick();
};

#endif // SCREENWIDGET_H
