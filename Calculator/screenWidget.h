#ifndef SCREENWIDGET_H
#define SCREENWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QFont>

class ScreenWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    QLineEdit *screen;
public:
    ScreenWidget(QWidget *parent = nullptr);
};

#endif // SCREENWIDGET_H
