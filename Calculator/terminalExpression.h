#ifndef TERMINALEXPRESSION_H
#define TERMINALEXPRESSION_H

#include "expression.h"

template<class T>
class TerminalExpression : public Expression<T>
{
private:
    T x;
public:
    TerminalExpression(T x) {
        this->x = x;
    }
    T solve() override {
        return this->x;
    }
};

#endif // TERMINALEXPRESSION_H
