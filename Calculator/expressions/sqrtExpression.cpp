#include "sqrtExpression.h"

SqrtExpression::SqrtExpression(Expression<double> *x) : UnaryExpression<double>(x) {}

double SqrtExpression::solve() {
    if (this->x->solve() > 0)
       return sqrt(this->x->solve());
    else if (this->x->solve() == 0)
        throw UndefinedNumberException<double>(this->x->solve());
    else
        throw UnrealNumberException<double>(this->x->solve());
}
