#ifndef SQRTEXPRESSION_H
#define SQRTEXPRESSION_H
#include "unaryExpression.h"
#include <cmath>

template <class T>
class SqrtExpression : public UnaryExpression<T>
{
public:
    SqrtExpression(Expression<T> *x) : UnaryExpression<T> (x){}
    T solve() override {
        return sqrt(this->x->solve());
    }
};
#endif // SQRTEXPRESSION_H
