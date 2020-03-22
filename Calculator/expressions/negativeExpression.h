#ifndef NEGATIVEEXPRESSION_H
#define NEGATIVEEXPRESSION_H

#include "unaryExpression.h"
#include <cmath>

/*
 * Menghandle Ekspresi Negatif dalam parsing
 */
template <class T>
class NegativeExpression : public UnaryExpression<T> {
    public:
        //! Konstruktor Kelas
        NegativeExpression(Expression<T> *x) : UnaryExpression<T> (x){}
        //! Implementasi dari method solve abstract base class
        T solve() override {
            return (-1)*this->x->solve();
        }
};

#endif // NEGATIVEEXPRESSION_H
