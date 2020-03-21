#ifndef SUBSTRACTEXPRESSION_H
#define SUBSTRACTEXPRESSION_H

#include "binaryExpression.h"

template <class T>
class SubstractExpression : public BinaryExpression<T>
{
public:
    SubstractExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
    T solve() override {
        return this->x->solve() - this->y->solve();
    }
};

#endif // SUBSTRACTEXPRESSION_H
