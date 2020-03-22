#ifndef POWERBYTWOEXPRESSION_H
#define POWERBYTWOEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class PowerByTwoExpression : public UnaryExpression<T> {
    public:
        PowerByTwoExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            return pow(x->solve(), 2);
        }
};

#endif