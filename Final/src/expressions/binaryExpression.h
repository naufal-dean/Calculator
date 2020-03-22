#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

#include "expression.h"

/*
 * Sebagai dasar konstruktor pada ekspresi biner
 */
template <class T>
class BinaryExpression : public Expression<T> {
    protected:
        Expression<T> *x, *y;
    public:
        //! Konstruktor Kelas
        BinaryExpression(Expression<T> *x, Expression<T> *y) {
            this->x = x;
            this->y = y;
        }
        //! method solve yang akan diimplementasikan dari turunannya
        virtual T solve() = 0;
};

#endif // BINARYEXPRESSION_H
