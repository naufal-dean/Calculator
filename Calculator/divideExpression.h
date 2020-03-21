#ifndef DIVIDEEXPRESSION_H
#define DIVIDEEXPRESSION_H

#include "binaryExpression.h"

template <class T>
class DivideExpression : public BinaryExpression<T>
{
public:
    DivideExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
    T solve() override {
        return this->x->solve() / this->y->solve();
    }
};

template<>
class DivideExpression<long> : public BinaryExpression<long>
{
public:
    DivideExpression(Expression<long> *x, Expression<long> *y) : BinaryExpression<long> (x, y) {}
    long solve() override {
        return this->x->solve() / this->y->solve();
    }
    double divisionSolve() {
        return (double) this->x->solve() / (double) this->y->solve();
    }
};

#endif // DIVIDEEXPRESSION_H
