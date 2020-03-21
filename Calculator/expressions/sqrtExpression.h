#ifndef SQRTEXPRESSION_H
#define SQRTEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

class SqrtExpression : public UnaryExpression<double> {
    public:
        SqrtExpression(Expression<double> *x);
        double solve() override;
};

#endif // SQRTEXPRESSION_H