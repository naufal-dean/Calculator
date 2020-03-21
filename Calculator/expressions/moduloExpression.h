#ifndef MODULOEXPRESSION_H
#define MODULOEXPRESSION_H

#include <cmath>
#include "binaryExpression.h"

template <class T>
class ModuloExpression : public BinaryExpression<T> {
    public:
        ModuloExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
        T solve() override {
            return x->solve() % y->solve();
        }
};

#endif