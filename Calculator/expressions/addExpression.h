#ifndef ADDEXPRESSION_H
#define ADDEXPRESSION_H

#include "binaryExpression.h"

/*
 * Menghandle Ekspresi penjumlahan dalam parsing
 */
template <class T>
class AddExpression : public BinaryExpression<T> {
    public:
        //! Konstruktor Kelas
        AddExpression(Expression<T> *x, Expression<T> *y) : BinaryExpression<T> (x, y) {}
        //! Implementasi dari method solve abstract base class
        T solve() override {
            return this->x->solve() + this->y->solve();
        }
};

#endif // ADDEXPRESSION_H
