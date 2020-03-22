#include "sqrtExpression.h"

SqrtExpression::SqrtExpression(Expression<double> *x) : UnaryExpression<double>(x) {}

double SqrtExpression::solve() {
    if (this->x->solve() > 0)
       return sqrt(this->x->solve());
    else if (this->x->solve() == 0)
        throw new UndefinedNumberException();
    else
        throw new UnrealNumberException();
}
