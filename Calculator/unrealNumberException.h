#ifndef UNREALNUMBEREXCEPTION_H
#define UNREALNUMBEREXCEPTION_H
#include <iostream>
#include "baseException.h"
using namespace std;

template <class T>
class UnrealNumberException : public BaseException<T> {
private:
    double number;
public:
    UnrealNumberException(double number) {
        this->number = number;
    }
    void printMessage() {
        cout << "Bilangan " << number << " tidak valid" << endl;
    }
};
#endif // UNREALEXCEPTION_H
