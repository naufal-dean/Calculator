#ifndef TERMINALEXPRESSION_H
#define TERMINALEXPRESSION_H

#include "expression.h"

/*
 * Sebagai dasar konstruktor dalam sebuah elemen ekspresi
 */
template<class T>
class TerminalExpression : public Expression<T> {
    private:
        T x;
    public:
        //! Konstruktor Kelas
        TerminalExpression(T x) {
            this->x = x;
        }
        //! Implementasi dari method solve abstract base class
        T solve() override {
            return this->x;
        }
};

#endif // TERMINALEXPRESSION_H
