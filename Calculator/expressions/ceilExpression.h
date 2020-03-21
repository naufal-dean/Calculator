#ifndef CEILEXPRESSION_H
#define CEILEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class CeilExpression : public UnaryExpression<T> {
    public:
        CeilExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            return ceil(x->solve());
        }
};

#endif