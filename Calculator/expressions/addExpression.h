#ifndef ADDEXPRESSION_H
#define ADDEXPRESSION_H

#include "binaryExpression.h"

template <class T>
class AddExpression : public BinaryExpression<T>
{
public:
    AddExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
    T solve() override {
        return this->x->solve() + this->y->solve();
    }
};

#endif // ADDEXPRESSION_H
