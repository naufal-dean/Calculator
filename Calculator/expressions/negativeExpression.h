#ifndef NEGATIVEEXPRESSION_H
#define NEGATIVEEXPRESSION_H

#include "unaryExpression.h"
#include <cmath>

template <class T>
class NegativeExpression : public UnaryExpression<T> {
    public:
        NegativeExpression(Expression<T> *x) : UnaryExpression<T> (x){}
        T solve() override {
            return (-1)*this->x->solve();
        }
};

#endif // NEGATIVEEXPRESSION_H