#ifndef MULTIPLYEXPRESSION_H
#define MULTIPLYEXPRESSION_H

#include "binaryExpression.h"

template <class T>
class MultiplyExpression : public BinaryExpression<T>
{
public:
    MultiplyExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
    T solve() override {
        return this->x->solve() * this->y->solve();
    }
};

#endif // MULTIPLYEXPRESSION_H
