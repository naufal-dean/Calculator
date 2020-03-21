#include "divideExpression.h"

DivideExpression::DivideExpression(Expression<double> *x, Expression<double> *y) : BinaryExpression<double> (x, y) {}

double DivideExpression::solve() {
       return this->x->solve() / this->y->solve();
}