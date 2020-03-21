#ifndef ABSOLUTEEXPRESSION_H
#define ABSOLUTEEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class AbsoluteExpression : public UnaryExpression<T> {
    public:
        AbsoluteExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            return abs(x->solve());
        }
};

#endif