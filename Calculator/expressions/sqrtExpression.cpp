#include "sqrtExpression.h"
#include <QtDebug>

SqrtExpression::SqrtExpression(Expression<double> *x) : UnaryExpression<double>(x) {}

double SqrtExpression::solve() {
    qDebug() << "sqrtExpr " << this->x->solve();
    if (this->x->solve() >= 0)
       return sqrt(this->x->solve());
    else
        throw new UnrealNumberException();
}
