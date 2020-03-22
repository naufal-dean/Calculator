#ifndef UNDEFINEDNUMBEREXCEPTION_H
#define UNDEFINEDNUMBEREXCEPTION_H
#include <iostream>
#include "baseException.h"
using namespace std;

class UndefinedNumberException : public BaseException {
public:
    UndefinedNumberException();
    void printMessage();
};
#endif // UNDEFINEDNUMBEREXCEPTION_H
