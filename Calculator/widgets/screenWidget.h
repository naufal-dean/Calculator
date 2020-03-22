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
// Class widget yang mengatur layar kalkulator beserta handler input dari button
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    QLineEdit *screen;
    bool isAns, isErr;
    QString lastAns;
    static queue <QString> MC;
public:
    // Konstruktor kelas
    ScreenWidget(QWidget *parent = nullptr);
private slots:
    // Metode untuk memberikan respon terhadap sinyal dari berbagai jenis button kalkulator
    void handleBackspaceClick();
    void handleBinaryOpClick(QString type);
    void handleCommaClick();
    void handleEqualClick();
    void handleNumClick(int value);
    void handleUnaryOpClick(QString type);
    void handleMCClick();
    void handleMRClick();
    void handleACClick();
    void handleAnsClick();
};

#endif // SCREENWIDGET_H
