#ifndef LOGARITHMEXPRESSION_H
#define LOGARITHMEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class LogarithmExpression : public UnaryExpression<T> {
    public:
        LogarithmExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            return log10(x->solve());
        }
};

#endif