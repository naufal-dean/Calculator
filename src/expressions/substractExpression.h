#ifndef SUBSTRACTEXPRESSION_H
#define SUBSTRACTEXPRESSION_H

#include "binaryExpression.h"

/*
 * Menghandle Ekspresi Pengurangan dalam parsing
 */
template <class T>
class SubstractExpression : public BinaryExpression<T> {
    public:
        //! Konstruktor Kelas
        SubstractExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
        //! Implementasi dari method solve abstract base class
        T solve() override {
            return this->x->solve() - this->y->solve();
        }
};

#endif // SUBSTRACTEXPRESSION_H
