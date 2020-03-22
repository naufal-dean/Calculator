#ifndef SCREENWIDGET_H
#define SCREENWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QFont>
#include "../constants/constants.h"
#include "../parser.h"
#include <queue>
using namespace std;

class ScreenWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    QLineEdit *screen;
    bool isAns;
    double lastAns;
    static queue <QString> MC;
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
    void handleMRClick();
    void handleACClick();
};

#endif // SCREENWIDGET_H
