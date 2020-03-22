#ifndef NATURALLOGARITHMEXPRESSION_H
#define NATURALLOGARITHMEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class NaturalLogarithmExpression : public UnaryExpression<T> {
    public:
        NaturalLogarithmExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            return log(x->solve());
        }
};

#endif