#ifndef LOGARITHMEXPRESSION_H
#define LOGARITHMEXPRESSION_H

#include <cmath>
#include "unaryExpression.h"

template <class T>
class LogarithmExpression : public UnaryExpression<T> {
    public:
        LogarithmExpression(Expression<T> *x) : UnaryExpression<T> (x) {}
        T solve() override {
            if(x->solve <= 0) {
                throw UndefinedNumberException<double>(x->solve());
            }
            else {
                return log10(x->solve());   
            }
        }
};

#endif
