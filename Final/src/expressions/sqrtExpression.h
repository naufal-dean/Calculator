#ifndef SQRTEXPRESSION_H
#define SQRTEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"
#include "exceptions/negativeSqrtException.h"

/*
 * Menghandle Ekspresi Akar dalam parsing
 */
class SqrtExpression : public UnaryExpression<double> {
    public:
        //! Konstruktor Kelas
        SqrtExpression(Expression<double> *x);
        //! Implementasi dari method solve abstract base class
        double solve() override;
};

#endif // SQRTEXPRESSION_H
