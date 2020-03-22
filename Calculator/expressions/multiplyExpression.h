#ifndef MULTIPLYEXPRESSION_H
#define MULTIPLYEXPRESSION_H

#include "binaryExpression.h"

/*
 * Menghandle Ekspresi perkalian dalam parsing
 */
template <class T>
class MultiplyExpression : public BinaryExpression<T> {
    public:
        //! Konstruktor Kelas
        MultiplyExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
        //! Implementasi dari method solve abstract base class
        T solve() override {
            return this->x->solve() * this->y->solve();
        }
};

#endif // MULTIPLYEXPRESSION_H
