#ifndef UNDEFINEDNUMBEREXCEPTION_H
#define UNDEFINEDNUMBEREXCEPTION_H
#include <iostream>
#include "baseException.h"
using namespace std;

template <class T>
class UndefinedNumberException : public BaseException<T> {
private:
    double number;
public:
    UndefinedNumberException(double number) {
        this->number = number;
    }
    void printMessage() {
        cout << "Bilangan " << number << " menghasilkan bilangan tidak terdefinisi" << endl;
    }
};
#endif // UNDEFINEDNUMBEREXCEPTION_H
