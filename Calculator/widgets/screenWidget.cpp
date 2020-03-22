#include "screenWidget.h"
#include <QtDebug>
#include <queue>
using namespace std;
ScreenWidget::ScreenWidget(QWidget *parent) : QWidget(parent)
{
    this->isAns = true;
    this->lastAns = 0;

    // Setting layout
    screen = new QLineEdit("0");
    screen->setReadOnly(true);
    screen->setAlignment(Qt::AlignRight);
    screen->setFont(QFont("Consolas", 15));

    mainLayout = new QGridLayout;

    mainLayout->addWidget(screen, 0, 0);

    setLayout(mainLayout);
}

void ScreenWidget::handleBackspaceClick() {
    int textLen = screen->text().length();
    if (textLen == 1) {
        screen->setText("0");
        this->isAns = true;
    } else {
        screen->setText(screen->text().mid(0, textLen - 1));
    }
}

void ScreenWidget::handleBinaryOpClick(QString type) {
    int textLen = screen->text().length();
    this->isAns = false;
    QChar lastChar = screen->text().data()[textLen - 1];
    if (lastChar == BIN_OP_ADD || lastChar == BIN_OP_SUB || lastChar == BIN_OP_MUL || lastChar == BIN_OP_DIV) {
        screen->setText(screen->text().mid(0, textLen - 1));
    }
    screen->setText(screen->text().append(type));
}

void ScreenWidget::handleCommaClick() {
    screen->setText(screen->text().append(COMMA));
}

void ScreenWidget::handleEqualClick() {
//    qDebug() << "test";
    bool needDouble = false; int idx = 0;
    this->isAns = true;
    try {
        while (idx < screen->text().length() && !needDouble) {
            if (screen->text()[idx] == BIN_OP_DIV || screen->text()[idx] == UN_OP_SQRT || screen->text()[idx] == COMMA)
                needDouble = true;
            idx++;
        }

        if (needDouble) {
            double result = -1;
            Parser::parser(screen->text(), result, 3);
            screen->setText(QString::number(result));
            this->lastAns = result;
        } else { // long
            long result = -1;
            Parser::parser(screen->text(), result);
            screen->setText(QString::number(result));
            this->lastAns = (double) result;
        }
    } catch (BaseException * err) {
        screen->setText(err->getMessage());
    } catch (...) {
        screen->setText("Some error encountered");
    }
}

void ScreenWidget::handleNumClick(int value) {
    if (isAns) {
        screen->setText(QString::number(value));
        isAns = false;
    } else {
        screen->setText(screen->text().append(QString::number(value)));
    }
}

void ScreenWidget::handleUnaryOpClick(QString type) {
    if (isAns) {
        screen->setText(type);
        isAns = false;
    } else {
        screen->setText(screen->text().append(type));
    }
}

void ScreenWidget::handleMCClick() {
//    qDebug() << "tests";
    static queue <QString> MC;
    bool needDouble = false; int idx = 0;
    this->isAns = true;
    try {
        while (idx < screen->text().length() && !needDouble) {
            if (screen->text()[idx] == BIN_OP_DIV || screen->text()[idx] == UN_OP_SQRT || screen->text()[idx] == COMMA)
                needDouble = true;
            idx++;
        }

        if (needDouble) {
            double result = -1;
            Parser::parser(screen->text(), result, 3);
            MC.push(QString::number(result));
            this->lastAns = result;
        } else { // long
            long result = -1;
            Parser::parser(screen->text(), result);
            MC.push(QString::number(result));
            auto a = MC.front();
            screen->setText(a);
            MC.pop();
            this->lastAns = (double) result;
        }
    } catch (BaseException * err) {
        screen->setText(err->getMessage());
    } catch (...) {
        screen->setText("Some error encountered");
    }
}
