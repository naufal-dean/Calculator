#ifndef EXPRESSION_H
#define EXPRESSION_H

/*
 * Abstract Base Class Expression
 */
template <class T>
class Expression {
    public:
        Expression() {}
        virtual T solve() = 0;
};

#endif // EXPRESSION_H
