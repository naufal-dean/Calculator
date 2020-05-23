#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H

#include "expression.h"

/*
 * Sebagai dasar konstruktor pada ekspresi tunggal
 */
template<class T>
class UnaryExpression : public Expression<T> {
    protected:
        Expression<T> *x;
    public:
        //! Konstruktor Kelas
        UnaryExpression(Expression<T> *x) {
            this->x = x;
        }
        //! method solve yang akan diimplementasikan dari turunannya
        virtual T solve() = 0;
};

#endif // UNARYEXPRESSION_H
