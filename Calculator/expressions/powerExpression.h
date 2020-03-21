#ifndef POWEREXPRESSION_H
#define POWEREXPRESSION_H

#include <cmath>
#include "binaryExpression.h"

template <class T>
class PowerExpression : public BinaryExpression<T> {
    public:
        PowerExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
        T solve() override {
            return pow(x->solve(), y->solve());
        }
};

#endif