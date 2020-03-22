#include "screenWidget.h"
#include <QtDebug>
#include <queue>
using namespace std;
queue<QString> ScreenWidget::MC;

ScreenWidget::ScreenWidget(QWidget *parent) : QWidget(parent)
{
    this->isAns = true;
    this->isErr = false;
    this->lastAns = "0";

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
    if (textLen == 1 || isErr) {
        screen->setText("0");
        this->isAns = true;
        this->isErr = false;
    } else {
        screen->setText(screen->text().mid(0, textLen - 1));
    }
}

void ScreenWidget::handleBinaryOpClick(QString type) {
    int textLen = screen->text().length();
    this->isAns = false;
    QChar lastChar = screen->text().data()[textLen - 1];
    QChar secondLastChar = screen->text().data()[textLen - 2];

    if (type == BIN_OP_SUB) {
        if (lastChar == BIN_OP_ADD || lastChar == BIN_OP_SUB) {
            screen->setText(screen->text().mid(0, textLen - 1));
        }
        screen->setText(screen->text().append(type));
    } else {
        if (lastChar == BIN_OP_ADD || lastChar == BIN_OP_SUB || lastChar == BIN_OP_MUL || lastChar == BIN_OP_DIV) {
            screen->setText(screen->text().mid(0, textLen - 1));
            if (!secondLastChar.isDigit()) {
                screen->setText(screen->text().mid(0, textLen - 2));
            }
        }
        screen->setText(screen->text().append(type));
    }
}

void ScreenWidget::handleCommaClick() {
    screen->setText(screen->text().append(COMMA));
    this->isAns = false;
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
            this->lastAns = screen->text();
        } else { // long
            long result = -1;
            Parser::parser(screen->text(), result);
            screen->setText(QString::number(result));
            this->lastAns = screen->text();
        }
    } catch (BaseException * err) {
        screen->setText(err->getMessage());
        this->isErr = true;
    } catch (...) {
        screen->setText("Some error encountered");
        this->isErr = true;
    }
}

void ScreenWidget::handleNumClick(int value) {
    if (isAns || isErr) {
        screen->setText(QString::number(value));
        isAns = isErr = false;
    } else {
        screen->setText(screen->text().append(QString::number(value)));
    }
}

void ScreenWidget::handleUnaryOpClick(QString type) {
    if (isAns || isErr) {
        screen->setText(type);
        isAns = isErr = false;
    } else {
        screen->setText(screen->text().append(type));
    }
}

void ScreenWidget::handleMCClick() {
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
            ScreenWidget::MC.push(QString::number(result));
            screen->setText(QString::number(result));
            this->lastAns = screen->text();
        } else { // long
            long result = -1;
            Parser::parser(screen->text(), result);
            ScreenWidget::MC.push(QString::number(result));
            screen->setText(QString::number(result));
            this->lastAns = screen->text();
        }
        this->isErr = false;
    } catch (BaseException * err) {
        this->isErr = true;
        screen->setText(err->getMessage());
    } catch (...) {
        this->isErr = true;
        screen->setText("Some error encountered");
    }
}

void ScreenWidget::handleMRClick() {
    if (ScreenWidget::MC.size() == 0) {
        screen->setText("MR empty");
        this->isErr = true;
    } else {
        if (screen->text() == "0") {
            screen->setText(ScreenWidget::MC.front());
        } else {
            screen->setText(screen->text().append(ScreenWidget::MC.front()));
        }
        ScreenWidget::MC.pop();
        this->isErr = false;
    }
}

void ScreenWidget::handleACClick() {
    while(!ScreenWidget::MC.empty())
    {
        ScreenWidget::MC.pop();
    }
    screen->setText("0");
    this->lastAns = "0";
    this->isAns = true;
    this->isErr = false;
}

void ScreenWidget::handleAnsClick() {
    if (isErr) {
        screen->setText(this->lastAns);
        this->isErr = false;
    } else {
        if (screen->text() == "0") {
            screen->setText(this->lastAns);
        } else {
            screen->setText(screen->text().append(this->lastAns));
        }
    }
}


