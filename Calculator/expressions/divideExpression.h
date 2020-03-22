#ifndef DIVIDEEXPRESSION_H
#define DIVIDEEXPRESSION_H

#include "binaryExpression.h"
#include "exceptions/undefinedNumberException.h"

class DivideExpression : public BinaryExpression<double> {
    public:
        DivideExpression(Expression<double> *x, Expression<double> *y);
        double solve() override;
};

#endif // DIVIDEEXPRESSION_H
