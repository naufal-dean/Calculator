#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

#include "expression.h"

template <class T>
class BinaryExpression : public Expression<T> {
    protected:
        Expression<T> *x, *y;
    public:
        BinaryExpression(Expression<T> *x, Expression<T> *y) {
            this->x = x;
            this->y = y;
        }
        virtual T solve() = 0;
};

#endif // BINARYEXPRESSION_H