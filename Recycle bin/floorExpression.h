#ifndef FLOOREXPRESSION_H
#define FLOOREXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class FloorExpression : public UnaryExpression<T> {
    public:
        FloorExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            return floor(x->solve());
        }
};

#endif