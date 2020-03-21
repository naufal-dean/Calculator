#ifndef POWERBYTHREEXPRESSION_H
#define POWERBYTHREEEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class PowerByThreeExpression : public UnaryExpression<T> {
    public:
        PowerByThreeExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            return pow(x->solve(), 3);
        }
};

#endif