#include "sqrtExpression.h"

SqrtExpression::SqrtExpression(Expression<double> *x) : UnaryExpression<double>(x) {}

double SqrtExpression::solve() {
       return sqrt(this->x->solve());
}