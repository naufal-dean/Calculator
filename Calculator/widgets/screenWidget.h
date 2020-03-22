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

/*
 * Class widget yang mengatur layar kalkulator beserta handler input dari button
 */
class ScreenWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout; //! Layout utama layar
    QLineEdit *screen; //! Member layar
    bool isAns, isErr; //! Flag answer dan error
    QString lastAns; //! Jawaban terakhir, untuk tombol Ans
    static queue <QString> MC; //! Queue MC MR

public:
    //! Konstruktor kelas
    ScreenWidget(QWidget *parent = nullptr);

private slots:
    //! Metode untuk memberikan respon terhadap sinyal dari tombol backspace kalkulator
    void handleBackspaceClick();
    //! Metode untuk memberikan respon terhadap sinyal dari tombol operator binary kalkulator
    void handleBinaryOpClick(QString type);
    //! Metode untuk memberikan respon terhadap sinyal dari tombol comma kalkulator
    void handleCommaClick();
    //! Metode untuk memberikan respon terhadap sinyal dari tombol sama dengan kalkulator
    void handleEqualClick();
    //! Metode untuk memberikan respon terhadap sinyal dari tombol angka kalkulator
    void handleNumClick(int value);
    //! Metode untuk memberikan respon terhadap sinyal dari tombol operator unary kalkulator
    void handleUnaryOpClick(QString type);
    //! Metode untuk memberikan respon terhadap sinyal dari tombol MC kalkulator
    void handleMCClick();
    //! Metode untuk memberikan respon terhadap sinyal dari tombol MR kalkulator
    void handleMRClick();
    //! Metode untuk memberikan respon terhadap sinyal dari tombol AC kalkulator
    void handleACClick();
    //! Metode untuk memberikan respon terhadap sinyal dari tombol Ans kalkulator
    void handleAnsClick();
};

#endif // SCREENWIDGET_H
